// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitDynamicImageJobResponseBodyDynamicImageJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitDynamicImageJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDynamicImageJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicImageJob, dynamicImageJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDynamicImageJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicImageJob, dynamicImageJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitDynamicImageJobResponseBody() = default ;
    SubmitDynamicImageJobResponseBody(const SubmitDynamicImageJobResponseBody &) = default ;
    SubmitDynamicImageJobResponseBody(SubmitDynamicImageJobResponseBody &&) = default ;
    SubmitDynamicImageJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDynamicImageJobResponseBody() = default ;
    SubmitDynamicImageJobResponseBody& operator=(const SubmitDynamicImageJobResponseBody &) = default ;
    SubmitDynamicImageJobResponseBody& operator=(SubmitDynamicImageJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dynamicImageJob_ != nullptr
        && this->requestId_ != nullptr; };
    // dynamicImageJob Field Functions 
    bool hasDynamicImageJob() const { return this->dynamicImageJob_ != nullptr;};
    void deleteDynamicImageJob() { this->dynamicImageJob_ = nullptr;};
    inline const SubmitDynamicImageJobResponseBodyDynamicImageJob & dynamicImageJob() const { DARABONBA_PTR_GET_CONST(dynamicImageJob_, SubmitDynamicImageJobResponseBodyDynamicImageJob) };
    inline SubmitDynamicImageJobResponseBodyDynamicImageJob dynamicImageJob() { DARABONBA_PTR_GET(dynamicImageJob_, SubmitDynamicImageJobResponseBodyDynamicImageJob) };
    inline SubmitDynamicImageJobResponseBody& setDynamicImageJob(const SubmitDynamicImageJobResponseBodyDynamicImageJob & dynamicImageJob) { DARABONBA_PTR_SET_VALUE(dynamicImageJob_, dynamicImageJob) };
    inline SubmitDynamicImageJobResponseBody& setDynamicImageJob(SubmitDynamicImageJobResponseBodyDynamicImageJob && dynamicImageJob) { DARABONBA_PTR_SET_RVALUE(dynamicImageJob_, dynamicImageJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitDynamicImageJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the animated image job.
    std::shared_ptr<SubmitDynamicImageJobResponseBodyDynamicImageJob> dynamicImageJob_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
