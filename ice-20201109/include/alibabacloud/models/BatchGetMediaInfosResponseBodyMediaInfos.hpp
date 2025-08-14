// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOS_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetMediaInfosResponseBodyMediaInfosFileInfoList.hpp>
#include <alibabacloud/models/BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class BatchGetMediaInfosResponseBodyMediaInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediaInfosResponseBodyMediaInfos& obj) { 
      DARABONBA_PTR_TO_JSON(FileInfoList, fileInfoList_);
      DARABONBA_PTR_TO_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosResponseBodyMediaInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(FileInfoList, fileInfoList_);
      DARABONBA_PTR_FROM_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    BatchGetMediaInfosResponseBodyMediaInfos() = default ;
    BatchGetMediaInfosResponseBodyMediaInfos(const BatchGetMediaInfosResponseBodyMediaInfos &) = default ;
    BatchGetMediaInfosResponseBodyMediaInfos(BatchGetMediaInfosResponseBodyMediaInfos &&) = default ;
    BatchGetMediaInfosResponseBodyMediaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetMediaInfosResponseBodyMediaInfos() = default ;
    BatchGetMediaInfosResponseBodyMediaInfos& operator=(const BatchGetMediaInfosResponseBodyMediaInfos &) = default ;
    BatchGetMediaInfosResponseBodyMediaInfos& operator=(BatchGetMediaInfosResponseBodyMediaInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileInfoList_ != nullptr
        && this->mediaBasicInfo_ != nullptr && this->mediaId_ != nullptr; };
    // fileInfoList Field Functions 
    bool hasFileInfoList() const { return this->fileInfoList_ != nullptr;};
    void deleteFileInfoList() { this->fileInfoList_ = nullptr;};
    inline const vector<Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoList> & fileInfoList() const { DARABONBA_PTR_GET_CONST(fileInfoList_, vector<Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoList>) };
    inline vector<Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoList> fileInfoList() { DARABONBA_PTR_GET(fileInfoList_, vector<Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoList>) };
    inline BatchGetMediaInfosResponseBodyMediaInfos& setFileInfoList(const vector<Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoList> & fileInfoList) { DARABONBA_PTR_SET_VALUE(fileInfoList_, fileInfoList) };
    inline BatchGetMediaInfosResponseBodyMediaInfos& setFileInfoList(vector<Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoList> && fileInfoList) { DARABONBA_PTR_SET_RVALUE(fileInfoList_, fileInfoList) };


    // mediaBasicInfo Field Functions 
    bool hasMediaBasicInfo() const { return this->mediaBasicInfo_ != nullptr;};
    void deleteMediaBasicInfo() { this->mediaBasicInfo_ = nullptr;};
    inline const Models::BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo & mediaBasicInfo() const { DARABONBA_PTR_GET_CONST(mediaBasicInfo_, Models::BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo) };
    inline Models::BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo mediaBasicInfo() { DARABONBA_PTR_GET(mediaBasicInfo_, Models::BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo) };
    inline BatchGetMediaInfosResponseBodyMediaInfos& setMediaBasicInfo(const Models::BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo & mediaBasicInfo) { DARABONBA_PTR_SET_VALUE(mediaBasicInfo_, mediaBasicInfo) };
    inline BatchGetMediaInfosResponseBodyMediaInfos& setMediaBasicInfo(Models::BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo && mediaBasicInfo) { DARABONBA_PTR_SET_RVALUE(mediaBasicInfo_, mediaBasicInfo) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfos& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    // FileInfos
    std::shared_ptr<vector<Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoList>> fileInfoList_ = nullptr;
    // The basic information of the media asset.
    std::shared_ptr<Models::BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
