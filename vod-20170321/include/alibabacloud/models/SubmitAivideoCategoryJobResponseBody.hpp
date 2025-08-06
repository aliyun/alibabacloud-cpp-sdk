// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIVIDEOCATEGORYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIVIDEOCATEGORYJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAIVideoCategoryJobResponseBodyAIVideoCategoryJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIVideoCategoryJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIVideoCategoryJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoCategoryJob, AIVideoCategoryJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIVideoCategoryJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoCategoryJob, AIVideoCategoryJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitAIVideoCategoryJobResponseBody() = default ;
    SubmitAIVideoCategoryJobResponseBody(const SubmitAIVideoCategoryJobResponseBody &) = default ;
    SubmitAIVideoCategoryJobResponseBody(SubmitAIVideoCategoryJobResponseBody &&) = default ;
    SubmitAIVideoCategoryJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIVideoCategoryJobResponseBody() = default ;
    SubmitAIVideoCategoryJobResponseBody& operator=(const SubmitAIVideoCategoryJobResponseBody &) = default ;
    SubmitAIVideoCategoryJobResponseBody& operator=(SubmitAIVideoCategoryJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoCategoryJob_ != nullptr
        && this->requestId_ != nullptr; };
    // AIVideoCategoryJob Field Functions 
    bool hasAIVideoCategoryJob() const { return this->AIVideoCategoryJob_ != nullptr;};
    void deleteAIVideoCategoryJob() { this->AIVideoCategoryJob_ = nullptr;};
    inline const SubmitAIVideoCategoryJobResponseBodyAIVideoCategoryJob & AIVideoCategoryJob() const { DARABONBA_PTR_GET_CONST(AIVideoCategoryJob_, SubmitAIVideoCategoryJobResponseBodyAIVideoCategoryJob) };
    inline SubmitAIVideoCategoryJobResponseBodyAIVideoCategoryJob AIVideoCategoryJob() { DARABONBA_PTR_GET(AIVideoCategoryJob_, SubmitAIVideoCategoryJobResponseBodyAIVideoCategoryJob) };
    inline SubmitAIVideoCategoryJobResponseBody& setAIVideoCategoryJob(const SubmitAIVideoCategoryJobResponseBodyAIVideoCategoryJob & AIVideoCategoryJob) { DARABONBA_PTR_SET_VALUE(AIVideoCategoryJob_, AIVideoCategoryJob) };
    inline SubmitAIVideoCategoryJobResponseBody& setAIVideoCategoryJob(SubmitAIVideoCategoryJobResponseBodyAIVideoCategoryJob && AIVideoCategoryJob) { DARABONBA_PTR_SET_RVALUE(AIVideoCategoryJob_, AIVideoCategoryJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAIVideoCategoryJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SubmitAIVideoCategoryJobResponseBodyAIVideoCategoryJob> AIVideoCategoryJob_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
