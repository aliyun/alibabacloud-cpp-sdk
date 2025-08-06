// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIASRJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIASRJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAIASRJobResponseBodyAIASRJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIASRJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIASRJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIASRJob, AIASRJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIASRJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIASRJob, AIASRJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitAIASRJobResponseBody() = default ;
    SubmitAIASRJobResponseBody(const SubmitAIASRJobResponseBody &) = default ;
    SubmitAIASRJobResponseBody(SubmitAIASRJobResponseBody &&) = default ;
    SubmitAIASRJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIASRJobResponseBody() = default ;
    SubmitAIASRJobResponseBody& operator=(const SubmitAIASRJobResponseBody &) = default ;
    SubmitAIASRJobResponseBody& operator=(SubmitAIASRJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIASRJob_ != nullptr
        && this->requestId_ != nullptr; };
    // AIASRJob Field Functions 
    bool hasAIASRJob() const { return this->AIASRJob_ != nullptr;};
    void deleteAIASRJob() { this->AIASRJob_ = nullptr;};
    inline const SubmitAIASRJobResponseBodyAIASRJob & AIASRJob() const { DARABONBA_PTR_GET_CONST(AIASRJob_, SubmitAIASRJobResponseBodyAIASRJob) };
    inline SubmitAIASRJobResponseBodyAIASRJob AIASRJob() { DARABONBA_PTR_GET(AIASRJob_, SubmitAIASRJobResponseBodyAIASRJob) };
    inline SubmitAIASRJobResponseBody& setAIASRJob(const SubmitAIASRJobResponseBodyAIASRJob & AIASRJob) { DARABONBA_PTR_SET_VALUE(AIASRJob_, AIASRJob) };
    inline SubmitAIASRJobResponseBody& setAIASRJob(SubmitAIASRJobResponseBodyAIASRJob && AIASRJob) { DARABONBA_PTR_SET_RVALUE(AIASRJob_, AIASRJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAIASRJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SubmitAIASRJobResponseBodyAIASRJob> AIASRJob_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
