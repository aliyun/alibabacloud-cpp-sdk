// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLICMEDIAINFORESPONSEBODYMEDIAINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLICMEDIAINFORESPONSEBODYMEDIAINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData.hpp>
#include <vector>
#include <alibabacloud/models/GetPublicMediaInfoResponseBodyMediaInfoFileInfoList.hpp>
#include <alibabacloud/models/GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPublicMediaInfoResponseBodyMediaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublicMediaInfoResponseBodyMediaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicMetaData, dynamicMetaData_);
      DARABONBA_PTR_TO_JSON(FileInfoList, fileInfoList_);
      DARABONBA_PTR_TO_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublicMediaInfoResponseBodyMediaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicMetaData, dynamicMetaData_);
      DARABONBA_PTR_FROM_JSON(FileInfoList, fileInfoList_);
      DARABONBA_PTR_FROM_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    GetPublicMediaInfoResponseBodyMediaInfo() = default ;
    GetPublicMediaInfoResponseBodyMediaInfo(const GetPublicMediaInfoResponseBodyMediaInfo &) = default ;
    GetPublicMediaInfoResponseBodyMediaInfo(GetPublicMediaInfoResponseBodyMediaInfo &&) = default ;
    GetPublicMediaInfoResponseBodyMediaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublicMediaInfoResponseBodyMediaInfo() = default ;
    GetPublicMediaInfoResponseBodyMediaInfo& operator=(const GetPublicMediaInfoResponseBodyMediaInfo &) = default ;
    GetPublicMediaInfoResponseBodyMediaInfo& operator=(GetPublicMediaInfoResponseBodyMediaInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicMetaData_ == nullptr
        && return this->fileInfoList_ == nullptr && return this->mediaBasicInfo_ == nullptr && return this->mediaId_ == nullptr; };
    // dynamicMetaData Field Functions 
    bool hasDynamicMetaData() const { return this->dynamicMetaData_ != nullptr;};
    void deleteDynamicMetaData() { this->dynamicMetaData_ = nullptr;};
    inline const Models::GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData & dynamicMetaData() const { DARABONBA_PTR_GET_CONST(dynamicMetaData_, Models::GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData) };
    inline Models::GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData dynamicMetaData() { DARABONBA_PTR_GET(dynamicMetaData_, Models::GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData) };
    inline GetPublicMediaInfoResponseBodyMediaInfo& setDynamicMetaData(const Models::GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData & dynamicMetaData) { DARABONBA_PTR_SET_VALUE(dynamicMetaData_, dynamicMetaData) };
    inline GetPublicMediaInfoResponseBodyMediaInfo& setDynamicMetaData(Models::GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData && dynamicMetaData) { DARABONBA_PTR_SET_RVALUE(dynamicMetaData_, dynamicMetaData) };


    // fileInfoList Field Functions 
    bool hasFileInfoList() const { return this->fileInfoList_ != nullptr;};
    void deleteFileInfoList() { this->fileInfoList_ = nullptr;};
    inline const vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoList> & fileInfoList() const { DARABONBA_PTR_GET_CONST(fileInfoList_, vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoList>) };
    inline vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoList> fileInfoList() { DARABONBA_PTR_GET(fileInfoList_, vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoList>) };
    inline GetPublicMediaInfoResponseBodyMediaInfo& setFileInfoList(const vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoList> & fileInfoList) { DARABONBA_PTR_SET_VALUE(fileInfoList_, fileInfoList) };
    inline GetPublicMediaInfoResponseBodyMediaInfo& setFileInfoList(vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoList> && fileInfoList) { DARABONBA_PTR_SET_RVALUE(fileInfoList_, fileInfoList) };


    // mediaBasicInfo Field Functions 
    bool hasMediaBasicInfo() const { return this->mediaBasicInfo_ != nullptr;};
    void deleteMediaBasicInfo() { this->mediaBasicInfo_ = nullptr;};
    inline const Models::GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo & mediaBasicInfo() const { DARABONBA_PTR_GET_CONST(mediaBasicInfo_, Models::GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo) };
    inline Models::GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo mediaBasicInfo() { DARABONBA_PTR_GET(mediaBasicInfo_, Models::GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo) };
    inline GetPublicMediaInfoResponseBodyMediaInfo& setMediaBasicInfo(const Models::GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo & mediaBasicInfo) { DARABONBA_PTR_SET_VALUE(mediaBasicInfo_, mediaBasicInfo) };
    inline GetPublicMediaInfoResponseBodyMediaInfo& setMediaBasicInfo(Models::GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo && mediaBasicInfo) { DARABONBA_PTR_SET_RVALUE(mediaBasicInfo_, mediaBasicInfo) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetPublicMediaInfoResponseBodyMediaInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    std::shared_ptr<Models::GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData> dynamicMetaData_ = nullptr;
    // FileInfos
    std::shared_ptr<vector<Models::GetPublicMediaInfoResponseBodyMediaInfoFileInfoList>> fileInfoList_ = nullptr;
    // BasicInfo
    std::shared_ptr<Models::GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo> mediaBasicInfo_ = nullptr;
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
