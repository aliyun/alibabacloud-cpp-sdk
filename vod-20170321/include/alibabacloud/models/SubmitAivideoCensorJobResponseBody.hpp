// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIVIDEOCENSORJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIVIDEOCENSORJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAIVideoCensorJobResponseBodyAIVideoCensorJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIVideoCensorJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIVideoCensorJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoCensorJob, AIVideoCensorJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIVideoCensorJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoCensorJob, AIVideoCensorJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitAIVideoCensorJobResponseBody() = default ;
    SubmitAIVideoCensorJobResponseBody(const SubmitAIVideoCensorJobResponseBody &) = default ;
    SubmitAIVideoCensorJobResponseBody(SubmitAIVideoCensorJobResponseBody &&) = default ;
    SubmitAIVideoCensorJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIVideoCensorJobResponseBody() = default ;
    SubmitAIVideoCensorJobResponseBody& operator=(const SubmitAIVideoCensorJobResponseBody &) = default ;
    SubmitAIVideoCensorJobResponseBody& operator=(SubmitAIVideoCensorJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoCensorJob_ != nullptr
        && this->requestId_ != nullptr; };
    // AIVideoCensorJob Field Functions 
    bool hasAIVideoCensorJob() const { return this->AIVideoCensorJob_ != nullptr;};
    void deleteAIVideoCensorJob() { this->AIVideoCensorJob_ = nullptr;};
    inline const SubmitAIVideoCensorJobResponseBodyAIVideoCensorJob & AIVideoCensorJob() const { DARABONBA_PTR_GET_CONST(AIVideoCensorJob_, SubmitAIVideoCensorJobResponseBodyAIVideoCensorJob) };
    inline SubmitAIVideoCensorJobResponseBodyAIVideoCensorJob AIVideoCensorJob() { DARABONBA_PTR_GET(AIVideoCensorJob_, SubmitAIVideoCensorJobResponseBodyAIVideoCensorJob) };
    inline SubmitAIVideoCensorJobResponseBody& setAIVideoCensorJob(const SubmitAIVideoCensorJobResponseBodyAIVideoCensorJob & AIVideoCensorJob) { DARABONBA_PTR_SET_VALUE(AIVideoCensorJob_, AIVideoCensorJob) };
    inline SubmitAIVideoCensorJobResponseBody& setAIVideoCensorJob(SubmitAIVideoCensorJobResponseBodyAIVideoCensorJob && AIVideoCensorJob) { DARABONBA_PTR_SET_RVALUE(AIVideoCensorJob_, AIVideoCensorJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAIVideoCensorJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SubmitAIVideoCensorJobResponseBodyAIVideoCensorJob> AIVideoCensorJob_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
