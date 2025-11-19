// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOS_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchGetMediaInfosResponseBodyMediaInfosMediaInfo.hpp>
#include <alibabacloud/models/BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class BatchGetMediaInfosResponseBodyMediaInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediaInfosResponseBodyMediaInfos& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaInfo, mediaInfo_);
      DARABONBA_PTR_TO_JSON(MezzanineInfo, mezzanineInfo_);
      DARABONBA_PTR_TO_JSON(PlayInfoList, playInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosResponseBodyMediaInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaInfo, mediaInfo_);
      DARABONBA_PTR_FROM_JSON(MezzanineInfo, mezzanineInfo_);
      DARABONBA_PTR_FROM_JSON(PlayInfoList, playInfoList_);
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
    virtual bool empty() const override { return this->mediaId_ == nullptr
        && return this->mediaInfo_ == nullptr && return this->mezzanineInfo_ == nullptr && return this->playInfoList_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfos& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaInfo Field Functions 
    bool hasMediaInfo() const { return this->mediaInfo_ != nullptr;};
    void deleteMediaInfo() { this->mediaInfo_ = nullptr;};
    inline const Models::BatchGetMediaInfosResponseBodyMediaInfosMediaInfo & mediaInfo() const { DARABONBA_PTR_GET_CONST(mediaInfo_, Models::BatchGetMediaInfosResponseBodyMediaInfosMediaInfo) };
    inline Models::BatchGetMediaInfosResponseBodyMediaInfosMediaInfo mediaInfo() { DARABONBA_PTR_GET(mediaInfo_, Models::BatchGetMediaInfosResponseBodyMediaInfosMediaInfo) };
    inline BatchGetMediaInfosResponseBodyMediaInfos& setMediaInfo(const Models::BatchGetMediaInfosResponseBodyMediaInfosMediaInfo & mediaInfo) { DARABONBA_PTR_SET_VALUE(mediaInfo_, mediaInfo) };
    inline BatchGetMediaInfosResponseBodyMediaInfos& setMediaInfo(Models::BatchGetMediaInfosResponseBodyMediaInfosMediaInfo && mediaInfo) { DARABONBA_PTR_SET_RVALUE(mediaInfo_, mediaInfo) };


    // mezzanineInfo Field Functions 
    bool hasMezzanineInfo() const { return this->mezzanineInfo_ != nullptr;};
    void deleteMezzanineInfo() { this->mezzanineInfo_ = nullptr;};
    inline const Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo & mezzanineInfo() const { DARABONBA_PTR_GET_CONST(mezzanineInfo_, Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo) };
    inline Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo mezzanineInfo() { DARABONBA_PTR_GET(mezzanineInfo_, Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo) };
    inline BatchGetMediaInfosResponseBodyMediaInfos& setMezzanineInfo(const Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo & mezzanineInfo) { DARABONBA_PTR_SET_VALUE(mezzanineInfo_, mezzanineInfo) };
    inline BatchGetMediaInfosResponseBodyMediaInfos& setMezzanineInfo(Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo && mezzanineInfo) { DARABONBA_PTR_SET_RVALUE(mezzanineInfo_, mezzanineInfo) };


    // playInfoList Field Functions 
    bool hasPlayInfoList() const { return this->playInfoList_ != nullptr;};
    void deletePlayInfoList() { this->playInfoList_ = nullptr;};
    inline const vector<Models::BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList> & playInfoList() const { DARABONBA_PTR_GET_CONST(playInfoList_, vector<Models::BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList>) };
    inline vector<Models::BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList> playInfoList() { DARABONBA_PTR_GET(playInfoList_, vector<Models::BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList>) };
    inline BatchGetMediaInfosResponseBodyMediaInfos& setPlayInfoList(const vector<Models::BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList> & playInfoList) { DARABONBA_PTR_SET_VALUE(playInfoList_, playInfoList) };
    inline BatchGetMediaInfosResponseBodyMediaInfos& setPlayInfoList(vector<Models::BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList> && playInfoList) { DARABONBA_PTR_SET_RVALUE(playInfoList_, playInfoList) };


  protected:
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The basic information of the media asset.
    std::shared_ptr<Models::BatchGetMediaInfosResponseBodyMediaInfosMediaInfo> mediaInfo_ = nullptr;
    // The source file information.
    std::shared_ptr<Models::BatchGetMediaInfosResponseBodyMediaInfosMezzanineInfo> mezzanineInfo_ = nullptr;
    // The information about the audio or video stream.
    std::shared_ptr<vector<Models::BatchGetMediaInfosResponseBodyMediaInfosPlayInfoList>> playInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
