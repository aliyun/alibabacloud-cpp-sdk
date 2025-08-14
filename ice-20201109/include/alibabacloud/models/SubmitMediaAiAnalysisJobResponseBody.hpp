// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAAIANALYSISJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAAIANALYSISJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitMediaAiAnalysisJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaAiAnalysisJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaAiAnalysisJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitMediaAiAnalysisJobResponseBody() = default ;
    SubmitMediaAiAnalysisJobResponseBody(const SubmitMediaAiAnalysisJobResponseBody &) = default ;
    SubmitMediaAiAnalysisJobResponseBody(SubmitMediaAiAnalysisJobResponseBody &&) = default ;
    SubmitMediaAiAnalysisJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaAiAnalysisJobResponseBody() = default ;
    SubmitMediaAiAnalysisJobResponseBody& operator=(const SubmitMediaAiAnalysisJobResponseBody &) = default ;
    SubmitMediaAiAnalysisJobResponseBody& operator=(SubmitMediaAiAnalysisJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaId_ != nullptr
        && this->requestId_ != nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SubmitMediaAiAnalysisJobResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitMediaAiAnalysisJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
