// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFO_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaInfoResponseBodyMediaInfoAiRoughData.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaInfoResponseBodyMediaInfoFileInfoList.hpp>
#include <alibabacloud/models/GetMediaInfoResponseBodyMediaInfoMediaBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoResponseBodyMediaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoResponseBodyMediaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AiRoughData, aiRoughData_);
      DARABONBA_PTR_TO_JSON(FileInfoList, fileInfoList_);
      DARABONBA_PTR_TO_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoResponseBodyMediaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AiRoughData, aiRoughData_);
      DARABONBA_PTR_FROM_JSON(FileInfoList, fileInfoList_);
      DARABONBA_PTR_FROM_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    GetMediaInfoResponseBodyMediaInfo() = default ;
    GetMediaInfoResponseBodyMediaInfo(const GetMediaInfoResponseBodyMediaInfo &) = default ;
    GetMediaInfoResponseBodyMediaInfo(GetMediaInfoResponseBodyMediaInfo &&) = default ;
    GetMediaInfoResponseBodyMediaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoResponseBodyMediaInfo() = default ;
    GetMediaInfoResponseBodyMediaInfo& operator=(const GetMediaInfoResponseBodyMediaInfo &) = default ;
    GetMediaInfoResponseBodyMediaInfo& operator=(GetMediaInfoResponseBodyMediaInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiRoughData_ != nullptr
        && this->fileInfoList_ != nullptr && this->mediaBasicInfo_ != nullptr && this->mediaId_ != nullptr; };
    // aiRoughData Field Functions 
    bool hasAiRoughData() const { return this->aiRoughData_ != nullptr;};
    void deleteAiRoughData() { this->aiRoughData_ = nullptr;};
    inline const Models::GetMediaInfoResponseBodyMediaInfoAiRoughData & aiRoughData() const { DARABONBA_PTR_GET_CONST(aiRoughData_, Models::GetMediaInfoResponseBodyMediaInfoAiRoughData) };
    inline Models::GetMediaInfoResponseBodyMediaInfoAiRoughData aiRoughData() { DARABONBA_PTR_GET(aiRoughData_, Models::GetMediaInfoResponseBodyMediaInfoAiRoughData) };
    inline GetMediaInfoResponseBodyMediaInfo& setAiRoughData(const Models::GetMediaInfoResponseBodyMediaInfoAiRoughData & aiRoughData) { DARABONBA_PTR_SET_VALUE(aiRoughData_, aiRoughData) };
    inline GetMediaInfoResponseBodyMediaInfo& setAiRoughData(Models::GetMediaInfoResponseBodyMediaInfoAiRoughData && aiRoughData) { DARABONBA_PTR_SET_RVALUE(aiRoughData_, aiRoughData) };


    // fileInfoList Field Functions 
    bool hasFileInfoList() const { return this->fileInfoList_ != nullptr;};
    void deleteFileInfoList() { this->fileInfoList_ = nullptr;};
    inline const vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoList> & fileInfoList() const { DARABONBA_PTR_GET_CONST(fileInfoList_, vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoList>) };
    inline vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoList> fileInfoList() { DARABONBA_PTR_GET(fileInfoList_, vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoList>) };
    inline GetMediaInfoResponseBodyMediaInfo& setFileInfoList(const vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoList> & fileInfoList) { DARABONBA_PTR_SET_VALUE(fileInfoList_, fileInfoList) };
    inline GetMediaInfoResponseBodyMediaInfo& setFileInfoList(vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoList> && fileInfoList) { DARABONBA_PTR_SET_RVALUE(fileInfoList_, fileInfoList) };


    // mediaBasicInfo Field Functions 
    bool hasMediaBasicInfo() const { return this->mediaBasicInfo_ != nullptr;};
    void deleteMediaBasicInfo() { this->mediaBasicInfo_ = nullptr;};
    inline const Models::GetMediaInfoResponseBodyMediaInfoMediaBasicInfo & mediaBasicInfo() const { DARABONBA_PTR_GET_CONST(mediaBasicInfo_, Models::GetMediaInfoResponseBodyMediaInfoMediaBasicInfo) };
    inline Models::GetMediaInfoResponseBodyMediaInfoMediaBasicInfo mediaBasicInfo() { DARABONBA_PTR_GET(mediaBasicInfo_, Models::GetMediaInfoResponseBodyMediaInfoMediaBasicInfo) };
    inline GetMediaInfoResponseBodyMediaInfo& setMediaBasicInfo(const Models::GetMediaInfoResponseBodyMediaInfoMediaBasicInfo & mediaBasicInfo) { DARABONBA_PTR_SET_VALUE(mediaBasicInfo_, mediaBasicInfo) };
    inline GetMediaInfoResponseBodyMediaInfo& setMediaBasicInfo(Models::GetMediaInfoResponseBodyMediaInfoMediaBasicInfo && mediaBasicInfo) { DARABONBA_PTR_SET_RVALUE(mediaBasicInfo_, mediaBasicInfo) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaInfoResponseBodyMediaInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    // The original AI analysis data.
    std::shared_ptr<Models::GetMediaInfoResponseBodyMediaInfoAiRoughData> aiRoughData_ = nullptr;
    // The file information.
    std::shared_ptr<vector<Models::GetMediaInfoResponseBodyMediaInfoFileInfoList>> fileInfoList_ = nullptr;
    // The basic information about the media asset.
    std::shared_ptr<Models::GetMediaInfoResponseBodyMediaInfoMediaBasicInfo> mediaBasicInfo_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
