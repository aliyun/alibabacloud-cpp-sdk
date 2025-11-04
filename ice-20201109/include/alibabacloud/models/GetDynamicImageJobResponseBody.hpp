// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDYNAMICIMAGEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDYNAMICIMAGEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDynamicImageJobResponseBodyDynamicImageJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetDynamicImageJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDynamicImageJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicImageJob, dynamicImageJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDynamicImageJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicImageJob, dynamicImageJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDynamicImageJobResponseBody() = default ;
    GetDynamicImageJobResponseBody(const GetDynamicImageJobResponseBody &) = default ;
    GetDynamicImageJobResponseBody(GetDynamicImageJobResponseBody &&) = default ;
    GetDynamicImageJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDynamicImageJobResponseBody() = default ;
    GetDynamicImageJobResponseBody& operator=(const GetDynamicImageJobResponseBody &) = default ;
    GetDynamicImageJobResponseBody& operator=(GetDynamicImageJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicImageJob_ == nullptr
        && return this->requestId_ == nullptr; };
    // dynamicImageJob Field Functions 
    bool hasDynamicImageJob() const { return this->dynamicImageJob_ != nullptr;};
    void deleteDynamicImageJob() { this->dynamicImageJob_ = nullptr;};
    inline const GetDynamicImageJobResponseBodyDynamicImageJob & dynamicImageJob() const { DARABONBA_PTR_GET_CONST(dynamicImageJob_, GetDynamicImageJobResponseBodyDynamicImageJob) };
    inline GetDynamicImageJobResponseBodyDynamicImageJob dynamicImageJob() { DARABONBA_PTR_GET(dynamicImageJob_, GetDynamicImageJobResponseBodyDynamicImageJob) };
    inline GetDynamicImageJobResponseBody& setDynamicImageJob(const GetDynamicImageJobResponseBodyDynamicImageJob & dynamicImageJob) { DARABONBA_PTR_SET_VALUE(dynamicImageJob_, dynamicImageJob) };
    inline GetDynamicImageJobResponseBody& setDynamicImageJob(GetDynamicImageJobResponseBodyDynamicImageJob && dynamicImageJob) { DARABONBA_PTR_SET_RVALUE(dynamicImageJob_, dynamicImageJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDynamicImageJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the snapshot job.
    std::shared_ptr<GetDynamicImageJobResponseBodyDynamicImageJob> dynamicImageJob_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
