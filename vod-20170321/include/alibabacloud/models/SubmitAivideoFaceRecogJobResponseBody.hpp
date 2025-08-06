// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIVIDEOFACERECOGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIVIDEOFACERECOGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIVideoFaceRecogJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIVideoFaceRecogJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoFaceRecogJob, AIVideoFaceRecogJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIVideoFaceRecogJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoFaceRecogJob, AIVideoFaceRecogJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitAIVideoFaceRecogJobResponseBody() = default ;
    SubmitAIVideoFaceRecogJobResponseBody(const SubmitAIVideoFaceRecogJobResponseBody &) = default ;
    SubmitAIVideoFaceRecogJobResponseBody(SubmitAIVideoFaceRecogJobResponseBody &&) = default ;
    SubmitAIVideoFaceRecogJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIVideoFaceRecogJobResponseBody() = default ;
    SubmitAIVideoFaceRecogJobResponseBody& operator=(const SubmitAIVideoFaceRecogJobResponseBody &) = default ;
    SubmitAIVideoFaceRecogJobResponseBody& operator=(SubmitAIVideoFaceRecogJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoFaceRecogJob_ != nullptr
        && this->requestId_ != nullptr; };
    // AIVideoFaceRecogJob Field Functions 
    bool hasAIVideoFaceRecogJob() const { return this->AIVideoFaceRecogJob_ != nullptr;};
    void deleteAIVideoFaceRecogJob() { this->AIVideoFaceRecogJob_ = nullptr;};
    inline const SubmitAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJob & AIVideoFaceRecogJob() const { DARABONBA_PTR_GET_CONST(AIVideoFaceRecogJob_, SubmitAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJob) };
    inline SubmitAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJob AIVideoFaceRecogJob() { DARABONBA_PTR_GET(AIVideoFaceRecogJob_, SubmitAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJob) };
    inline SubmitAIVideoFaceRecogJobResponseBody& setAIVideoFaceRecogJob(const SubmitAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJob & AIVideoFaceRecogJob) { DARABONBA_PTR_SET_VALUE(AIVideoFaceRecogJob_, AIVideoFaceRecogJob) };
    inline SubmitAIVideoFaceRecogJobResponseBody& setAIVideoFaceRecogJob(SubmitAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJob && AIVideoFaceRecogJob) { DARABONBA_PTR_SET_RVALUE(AIVideoFaceRecogJob_, AIVideoFaceRecogJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAIVideoFaceRecogJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SubmitAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJob> AIVideoFaceRecogJob_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
