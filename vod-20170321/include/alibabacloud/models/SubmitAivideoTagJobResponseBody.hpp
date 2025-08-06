// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIVIDEOTAGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIVIDEOTAGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAIVideoTagJobResponseBodyAIVideoTagJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIVideoTagJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIVideoTagJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoTagJob, AIVideoTagJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIVideoTagJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoTagJob, AIVideoTagJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitAIVideoTagJobResponseBody() = default ;
    SubmitAIVideoTagJobResponseBody(const SubmitAIVideoTagJobResponseBody &) = default ;
    SubmitAIVideoTagJobResponseBody(SubmitAIVideoTagJobResponseBody &&) = default ;
    SubmitAIVideoTagJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIVideoTagJobResponseBody() = default ;
    SubmitAIVideoTagJobResponseBody& operator=(const SubmitAIVideoTagJobResponseBody &) = default ;
    SubmitAIVideoTagJobResponseBody& operator=(SubmitAIVideoTagJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoTagJob_ != nullptr
        && this->requestId_ != nullptr; };
    // AIVideoTagJob Field Functions 
    bool hasAIVideoTagJob() const { return this->AIVideoTagJob_ != nullptr;};
    void deleteAIVideoTagJob() { this->AIVideoTagJob_ = nullptr;};
    inline const SubmitAIVideoTagJobResponseBodyAIVideoTagJob & AIVideoTagJob() const { DARABONBA_PTR_GET_CONST(AIVideoTagJob_, SubmitAIVideoTagJobResponseBodyAIVideoTagJob) };
    inline SubmitAIVideoTagJobResponseBodyAIVideoTagJob AIVideoTagJob() { DARABONBA_PTR_GET(AIVideoTagJob_, SubmitAIVideoTagJobResponseBodyAIVideoTagJob) };
    inline SubmitAIVideoTagJobResponseBody& setAIVideoTagJob(const SubmitAIVideoTagJobResponseBodyAIVideoTagJob & AIVideoTagJob) { DARABONBA_PTR_SET_VALUE(AIVideoTagJob_, AIVideoTagJob) };
    inline SubmitAIVideoTagJobResponseBody& setAIVideoTagJob(SubmitAIVideoTagJobResponseBodyAIVideoTagJob && AIVideoTagJob) { DARABONBA_PTR_SET_RVALUE(AIVideoTagJob_, AIVideoTagJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAIVideoTagJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SubmitAIVideoTagJobResponseBodyAIVideoTagJob> AIVideoTagJob_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
