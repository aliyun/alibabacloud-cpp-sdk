// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIVIDEOPORNRECOGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIVIDEOPORNRECOGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAIVideoPornRecogJobResponseBodyAIVideoPornRecogJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIVideoPornRecogJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIVideoPornRecogJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoPornRecogJob, AIVideoPornRecogJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIVideoPornRecogJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoPornRecogJob, AIVideoPornRecogJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitAIVideoPornRecogJobResponseBody() = default ;
    SubmitAIVideoPornRecogJobResponseBody(const SubmitAIVideoPornRecogJobResponseBody &) = default ;
    SubmitAIVideoPornRecogJobResponseBody(SubmitAIVideoPornRecogJobResponseBody &&) = default ;
    SubmitAIVideoPornRecogJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIVideoPornRecogJobResponseBody() = default ;
    SubmitAIVideoPornRecogJobResponseBody& operator=(const SubmitAIVideoPornRecogJobResponseBody &) = default ;
    SubmitAIVideoPornRecogJobResponseBody& operator=(SubmitAIVideoPornRecogJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoPornRecogJob_ != nullptr
        && this->requestId_ != nullptr; };
    // AIVideoPornRecogJob Field Functions 
    bool hasAIVideoPornRecogJob() const { return this->AIVideoPornRecogJob_ != nullptr;};
    void deleteAIVideoPornRecogJob() { this->AIVideoPornRecogJob_ = nullptr;};
    inline const SubmitAIVideoPornRecogJobResponseBodyAIVideoPornRecogJob & AIVideoPornRecogJob() const { DARABONBA_PTR_GET_CONST(AIVideoPornRecogJob_, SubmitAIVideoPornRecogJobResponseBodyAIVideoPornRecogJob) };
    inline SubmitAIVideoPornRecogJobResponseBodyAIVideoPornRecogJob AIVideoPornRecogJob() { DARABONBA_PTR_GET(AIVideoPornRecogJob_, SubmitAIVideoPornRecogJobResponseBodyAIVideoPornRecogJob) };
    inline SubmitAIVideoPornRecogJobResponseBody& setAIVideoPornRecogJob(const SubmitAIVideoPornRecogJobResponseBodyAIVideoPornRecogJob & AIVideoPornRecogJob) { DARABONBA_PTR_SET_VALUE(AIVideoPornRecogJob_, AIVideoPornRecogJob) };
    inline SubmitAIVideoPornRecogJobResponseBody& setAIVideoPornRecogJob(SubmitAIVideoPornRecogJobResponseBodyAIVideoPornRecogJob && AIVideoPornRecogJob) { DARABONBA_PTR_SET_RVALUE(AIVideoPornRecogJob_, AIVideoPornRecogJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAIVideoPornRecogJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SubmitAIVideoPornRecogJobResponseBodyAIVideoPornRecogJob> AIVideoPornRecogJob_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
