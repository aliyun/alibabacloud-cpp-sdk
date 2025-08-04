// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCQARESPONSEBODYPAYLOADOUTPUTMEDIAURLLIST_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCQARESPONSEBODYPAYLOADOUTPUTMEDIAURLLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocQaResponseBodyPayloadOutputMediaUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocQaResponseBodyPayloadOutputMediaUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(ClipInfos, clipInfos_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocQaResponseBodyPayloadOutputMediaUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClipInfos, clipInfos_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
    };
    RunDocQaResponseBodyPayloadOutputMediaUrlList() = default ;
    RunDocQaResponseBodyPayloadOutputMediaUrlList(const RunDocQaResponseBodyPayloadOutputMediaUrlList &) = default ;
    RunDocQaResponseBodyPayloadOutputMediaUrlList(RunDocQaResponseBodyPayloadOutputMediaUrlList &&) = default ;
    RunDocQaResponseBodyPayloadOutputMediaUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocQaResponseBodyPayloadOutputMediaUrlList() = default ;
    RunDocQaResponseBodyPayloadOutputMediaUrlList& operator=(const RunDocQaResponseBodyPayloadOutputMediaUrlList &) = default ;
    RunDocQaResponseBodyPayloadOutputMediaUrlList& operator=(RunDocQaResponseBodyPayloadOutputMediaUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clipInfos_ != nullptr
        && this->fileUrl_ != nullptr && this->mediaType_ != nullptr; };
    // clipInfos Field Functions 
    bool hasClipInfos() const { return this->clipInfos_ != nullptr;};
    void deleteClipInfos() { this->clipInfos_ = nullptr;};
    inline const vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos> & clipInfos() const { DARABONBA_PTR_GET_CONST(clipInfos_, vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos>) };
    inline vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos> clipInfos() { DARABONBA_PTR_GET(clipInfos_, vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos>) };
    inline RunDocQaResponseBodyPayloadOutputMediaUrlList& setClipInfos(const vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos> & clipInfos) { DARABONBA_PTR_SET_VALUE(clipInfos_, clipInfos) };
    inline RunDocQaResponseBodyPayloadOutputMediaUrlList& setClipInfos(vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos> && clipInfos) { DARABONBA_PTR_SET_RVALUE(clipInfos_, clipInfos) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline RunDocQaResponseBodyPayloadOutputMediaUrlList& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline RunDocQaResponseBodyPayloadOutputMediaUrlList& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


  protected:
    std::shared_ptr<vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos>> clipInfos_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
