// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIVIDEOSUMMARYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIVIDEOSUMMARYJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAIVideoSummaryJobResponseBodyAIVideoSummaryJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIVideoSummaryJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIVideoSummaryJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoSummaryJob, AIVideoSummaryJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIVideoSummaryJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoSummaryJob, AIVideoSummaryJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitAIVideoSummaryJobResponseBody() = default ;
    SubmitAIVideoSummaryJobResponseBody(const SubmitAIVideoSummaryJobResponseBody &) = default ;
    SubmitAIVideoSummaryJobResponseBody(SubmitAIVideoSummaryJobResponseBody &&) = default ;
    SubmitAIVideoSummaryJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIVideoSummaryJobResponseBody() = default ;
    SubmitAIVideoSummaryJobResponseBody& operator=(const SubmitAIVideoSummaryJobResponseBody &) = default ;
    SubmitAIVideoSummaryJobResponseBody& operator=(SubmitAIVideoSummaryJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoSummaryJob_ != nullptr
        && this->requestId_ != nullptr; };
    // AIVideoSummaryJob Field Functions 
    bool hasAIVideoSummaryJob() const { return this->AIVideoSummaryJob_ != nullptr;};
    void deleteAIVideoSummaryJob() { this->AIVideoSummaryJob_ = nullptr;};
    inline const SubmitAIVideoSummaryJobResponseBodyAIVideoSummaryJob & AIVideoSummaryJob() const { DARABONBA_PTR_GET_CONST(AIVideoSummaryJob_, SubmitAIVideoSummaryJobResponseBodyAIVideoSummaryJob) };
    inline SubmitAIVideoSummaryJobResponseBodyAIVideoSummaryJob AIVideoSummaryJob() { DARABONBA_PTR_GET(AIVideoSummaryJob_, SubmitAIVideoSummaryJobResponseBodyAIVideoSummaryJob) };
    inline SubmitAIVideoSummaryJobResponseBody& setAIVideoSummaryJob(const SubmitAIVideoSummaryJobResponseBodyAIVideoSummaryJob & AIVideoSummaryJob) { DARABONBA_PTR_SET_VALUE(AIVideoSummaryJob_, AIVideoSummaryJob) };
    inline SubmitAIVideoSummaryJobResponseBody& setAIVideoSummaryJob(SubmitAIVideoSummaryJobResponseBodyAIVideoSummaryJob && AIVideoSummaryJob) { DARABONBA_PTR_SET_RVALUE(AIVideoSummaryJob_, AIVideoSummaryJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAIVideoSummaryJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SubmitAIVideoSummaryJobResponseBodyAIVideoSummaryJob> AIVideoSummaryJob_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
