// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIVIDEOCOVERJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIVIDEOCOVERJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAIVideoCoverJobResponseBodyAIVideoCoverJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIVideoCoverJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIVideoCoverJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoCoverJob, AIVideoCoverJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIVideoCoverJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoCoverJob, AIVideoCoverJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitAIVideoCoverJobResponseBody() = default ;
    SubmitAIVideoCoverJobResponseBody(const SubmitAIVideoCoverJobResponseBody &) = default ;
    SubmitAIVideoCoverJobResponseBody(SubmitAIVideoCoverJobResponseBody &&) = default ;
    SubmitAIVideoCoverJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIVideoCoverJobResponseBody() = default ;
    SubmitAIVideoCoverJobResponseBody& operator=(const SubmitAIVideoCoverJobResponseBody &) = default ;
    SubmitAIVideoCoverJobResponseBody& operator=(SubmitAIVideoCoverJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoCoverJob_ != nullptr
        && this->requestId_ != nullptr; };
    // AIVideoCoverJob Field Functions 
    bool hasAIVideoCoverJob() const { return this->AIVideoCoverJob_ != nullptr;};
    void deleteAIVideoCoverJob() { this->AIVideoCoverJob_ = nullptr;};
    inline const SubmitAIVideoCoverJobResponseBodyAIVideoCoverJob & AIVideoCoverJob() const { DARABONBA_PTR_GET_CONST(AIVideoCoverJob_, SubmitAIVideoCoverJobResponseBodyAIVideoCoverJob) };
    inline SubmitAIVideoCoverJobResponseBodyAIVideoCoverJob AIVideoCoverJob() { DARABONBA_PTR_GET(AIVideoCoverJob_, SubmitAIVideoCoverJobResponseBodyAIVideoCoverJob) };
    inline SubmitAIVideoCoverJobResponseBody& setAIVideoCoverJob(const SubmitAIVideoCoverJobResponseBodyAIVideoCoverJob & AIVideoCoverJob) { DARABONBA_PTR_SET_VALUE(AIVideoCoverJob_, AIVideoCoverJob) };
    inline SubmitAIVideoCoverJobResponseBody& setAIVideoCoverJob(SubmitAIVideoCoverJobResponseBodyAIVideoCoverJob && AIVideoCoverJob) { DARABONBA_PTR_SET_RVALUE(AIVideoCoverJob_, AIVideoCoverJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAIVideoCoverJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SubmitAIVideoCoverJobResponseBodyAIVideoCoverJob> AIVideoCoverJob_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
