// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaInfoListAiData.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaInfoListAiRoughData.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaResponseBodyMediaInfoListFileInfoList.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaInfoListIndexStatusList.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaInfoListMediaBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaResponseBodyMediaInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AiData, aiData_);
      DARABONBA_PTR_TO_JSON(AiRoughData, aiRoughData_);
      DARABONBA_PTR_TO_JSON(FileInfoList, fileInfoList_);
      DARABONBA_PTR_TO_JSON(IndexStatusList, indexStatusList_);
      DARABONBA_PTR_TO_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AiData, aiData_);
      DARABONBA_PTR_FROM_JSON(AiRoughData, aiRoughData_);
      DARABONBA_PTR_FROM_JSON(FileInfoList, fileInfoList_);
      DARABONBA_PTR_FROM_JSON(IndexStatusList, indexStatusList_);
      DARABONBA_PTR_FROM_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    SearchMediaResponseBodyMediaInfoList() = default ;
    SearchMediaResponseBodyMediaInfoList(const SearchMediaResponseBodyMediaInfoList &) = default ;
    SearchMediaResponseBodyMediaInfoList(SearchMediaResponseBodyMediaInfoList &&) = default ;
    SearchMediaResponseBodyMediaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaInfoList() = default ;
    SearchMediaResponseBodyMediaInfoList& operator=(const SearchMediaResponseBodyMediaInfoList &) = default ;
    SearchMediaResponseBodyMediaInfoList& operator=(SearchMediaResponseBodyMediaInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiData_ != nullptr
        && this->aiRoughData_ != nullptr && this->fileInfoList_ != nullptr && this->indexStatusList_ != nullptr && this->mediaBasicInfo_ != nullptr && this->mediaId_ != nullptr; };
    // aiData Field Functions 
    bool hasAiData() const { return this->aiData_ != nullptr;};
    void deleteAiData() { this->aiData_ = nullptr;};
    inline const Models::SearchMediaResponseBodyMediaInfoListAiData & aiData() const { DARABONBA_PTR_GET_CONST(aiData_, Models::SearchMediaResponseBodyMediaInfoListAiData) };
    inline Models::SearchMediaResponseBodyMediaInfoListAiData aiData() { DARABONBA_PTR_GET(aiData_, Models::SearchMediaResponseBodyMediaInfoListAiData) };
    inline SearchMediaResponseBodyMediaInfoList& setAiData(const Models::SearchMediaResponseBodyMediaInfoListAiData & aiData) { DARABONBA_PTR_SET_VALUE(aiData_, aiData) };
    inline SearchMediaResponseBodyMediaInfoList& setAiData(Models::SearchMediaResponseBodyMediaInfoListAiData && aiData) { DARABONBA_PTR_SET_RVALUE(aiData_, aiData) };


    // aiRoughData Field Functions 
    bool hasAiRoughData() const { return this->aiRoughData_ != nullptr;};
    void deleteAiRoughData() { this->aiRoughData_ = nullptr;};
    inline const Models::SearchMediaResponseBodyMediaInfoListAiRoughData & aiRoughData() const { DARABONBA_PTR_GET_CONST(aiRoughData_, Models::SearchMediaResponseBodyMediaInfoListAiRoughData) };
    inline Models::SearchMediaResponseBodyMediaInfoListAiRoughData aiRoughData() { DARABONBA_PTR_GET(aiRoughData_, Models::SearchMediaResponseBodyMediaInfoListAiRoughData) };
    inline SearchMediaResponseBodyMediaInfoList& setAiRoughData(const Models::SearchMediaResponseBodyMediaInfoListAiRoughData & aiRoughData) { DARABONBA_PTR_SET_VALUE(aiRoughData_, aiRoughData) };
    inline SearchMediaResponseBodyMediaInfoList& setAiRoughData(Models::SearchMediaResponseBodyMediaInfoListAiRoughData && aiRoughData) { DARABONBA_PTR_SET_RVALUE(aiRoughData_, aiRoughData) };


    // fileInfoList Field Functions 
    bool hasFileInfoList() const { return this->fileInfoList_ != nullptr;};
    void deleteFileInfoList() { this->fileInfoList_ = nullptr;};
    inline const vector<Models::SearchMediaResponseBodyMediaInfoListFileInfoList> & fileInfoList() const { DARABONBA_PTR_GET_CONST(fileInfoList_, vector<Models::SearchMediaResponseBodyMediaInfoListFileInfoList>) };
    inline vector<Models::SearchMediaResponseBodyMediaInfoListFileInfoList> fileInfoList() { DARABONBA_PTR_GET(fileInfoList_, vector<Models::SearchMediaResponseBodyMediaInfoListFileInfoList>) };
    inline SearchMediaResponseBodyMediaInfoList& setFileInfoList(const vector<Models::SearchMediaResponseBodyMediaInfoListFileInfoList> & fileInfoList) { DARABONBA_PTR_SET_VALUE(fileInfoList_, fileInfoList) };
    inline SearchMediaResponseBodyMediaInfoList& setFileInfoList(vector<Models::SearchMediaResponseBodyMediaInfoListFileInfoList> && fileInfoList) { DARABONBA_PTR_SET_RVALUE(fileInfoList_, fileInfoList) };


    // indexStatusList Field Functions 
    bool hasIndexStatusList() const { return this->indexStatusList_ != nullptr;};
    void deleteIndexStatusList() { this->indexStatusList_ = nullptr;};
    inline const vector<Models::SearchMediaResponseBodyMediaInfoListIndexStatusList> & indexStatusList() const { DARABONBA_PTR_GET_CONST(indexStatusList_, vector<Models::SearchMediaResponseBodyMediaInfoListIndexStatusList>) };
    inline vector<Models::SearchMediaResponseBodyMediaInfoListIndexStatusList> indexStatusList() { DARABONBA_PTR_GET(indexStatusList_, vector<Models::SearchMediaResponseBodyMediaInfoListIndexStatusList>) };
    inline SearchMediaResponseBodyMediaInfoList& setIndexStatusList(const vector<Models::SearchMediaResponseBodyMediaInfoListIndexStatusList> & indexStatusList) { DARABONBA_PTR_SET_VALUE(indexStatusList_, indexStatusList) };
    inline SearchMediaResponseBodyMediaInfoList& setIndexStatusList(vector<Models::SearchMediaResponseBodyMediaInfoListIndexStatusList> && indexStatusList) { DARABONBA_PTR_SET_RVALUE(indexStatusList_, indexStatusList) };


    // mediaBasicInfo Field Functions 
    bool hasMediaBasicInfo() const { return this->mediaBasicInfo_ != nullptr;};
    void deleteMediaBasicInfo() { this->mediaBasicInfo_ = nullptr;};
    inline const Models::SearchMediaResponseBodyMediaInfoListMediaBasicInfo & mediaBasicInfo() const { DARABONBA_PTR_GET_CONST(mediaBasicInfo_, Models::SearchMediaResponseBodyMediaInfoListMediaBasicInfo) };
    inline Models::SearchMediaResponseBodyMediaInfoListMediaBasicInfo mediaBasicInfo() { DARABONBA_PTR_GET(mediaBasicInfo_, Models::SearchMediaResponseBodyMediaInfoListMediaBasicInfo) };
    inline SearchMediaResponseBodyMediaInfoList& setMediaBasicInfo(const Models::SearchMediaResponseBodyMediaInfoListMediaBasicInfo & mediaBasicInfo) { DARABONBA_PTR_SET_VALUE(mediaBasicInfo_, mediaBasicInfo) };
    inline SearchMediaResponseBodyMediaInfoList& setMediaBasicInfo(Models::SearchMediaResponseBodyMediaInfoListMediaBasicInfo && mediaBasicInfo) { DARABONBA_PTR_SET_RVALUE(mediaBasicInfo_, mediaBasicInfo) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SearchMediaResponseBodyMediaInfoList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    // The details of the intelligent AI job.
    std::shared_ptr<Models::SearchMediaResponseBodyMediaInfoListAiData> aiData_ = nullptr;
    // The description of the AI job.
    std::shared_ptr<Models::SearchMediaResponseBodyMediaInfoListAiRoughData> aiRoughData_ = nullptr;
    // The information about the files.
    std::shared_ptr<vector<Models::SearchMediaResponseBodyMediaInfoListFileInfoList>> fileInfoList_ = nullptr;
    std::shared_ptr<vector<Models::SearchMediaResponseBodyMediaInfoListIndexStatusList>> indexStatusList_ = nullptr;
    // The basic information about the media asset.
    std::shared_ptr<Models::SearchMediaResponseBodyMediaInfoListMediaBasicInfo> mediaBasicInfo_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
