// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTHANDLEJOBRESPONSEBODYJOBRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTHANDLEJOBRESPONSEBODYJOBRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSmartHandleJobResponseBodyJobResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartHandleJobResponseBodyJobResult& obj) { 
      DARABONBA_PTR_TO_JSON(AiResult, aiResult_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaUrl, mediaUrl_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartHandleJobResponseBodyJobResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AiResult, aiResult_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaUrl, mediaUrl_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    GetSmartHandleJobResponseBodyJobResult() = default ;
    GetSmartHandleJobResponseBodyJobResult(const GetSmartHandleJobResponseBodyJobResult &) = default ;
    GetSmartHandleJobResponseBodyJobResult(GetSmartHandleJobResponseBodyJobResult &&) = default ;
    GetSmartHandleJobResponseBodyJobResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartHandleJobResponseBodyJobResult() = default ;
    GetSmartHandleJobResponseBodyJobResult& operator=(const GetSmartHandleJobResponseBodyJobResult &) = default ;
    GetSmartHandleJobResponseBodyJobResult& operator=(GetSmartHandleJobResponseBodyJobResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiResult_ != nullptr
        && this->mediaId_ != nullptr && this->mediaUrl_ != nullptr && this->usage_ != nullptr; };
    // aiResult Field Functions 
    bool hasAiResult() const { return this->aiResult_ != nullptr;};
    void deleteAiResult() { this->aiResult_ = nullptr;};
    inline string aiResult() const { DARABONBA_PTR_GET_DEFAULT(aiResult_, "") };
    inline GetSmartHandleJobResponseBodyJobResult& setAiResult(string aiResult) { DARABONBA_PTR_SET_VALUE(aiResult_, aiResult) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetSmartHandleJobResponseBodyJobResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaUrl Field Functions 
    bool hasMediaUrl() const { return this->mediaUrl_ != nullptr;};
    void deleteMediaUrl() { this->mediaUrl_ = nullptr;};
    inline string mediaUrl() const { DARABONBA_PTR_GET_DEFAULT(mediaUrl_, "") };
    inline GetSmartHandleJobResponseBodyJobResult& setMediaUrl(string mediaUrl) { DARABONBA_PTR_SET_VALUE(mediaUrl_, mediaUrl) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline GetSmartHandleJobResponseBodyJobResult& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The AI analysis result.
    std::shared_ptr<string> aiResult_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> mediaUrl_ = nullptr;
    // The token usage. This parameter is returned only for keyword-based text generation jobs.
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
