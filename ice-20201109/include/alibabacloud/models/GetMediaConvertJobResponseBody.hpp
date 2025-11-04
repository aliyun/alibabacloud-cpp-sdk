// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONVERTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONVERTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaConvertJobResponseBodyJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaConvertJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConvertJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaConvertJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaConvertJobResponseBody() = default ;
    GetMediaConvertJobResponseBody(const GetMediaConvertJobResponseBody &) = default ;
    GetMediaConvertJobResponseBody(GetMediaConvertJobResponseBody &&) = default ;
    GetMediaConvertJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConvertJobResponseBody() = default ;
    GetMediaConvertJobResponseBody& operator=(const GetMediaConvertJobResponseBody &) = default ;
    GetMediaConvertJobResponseBody& operator=(GetMediaConvertJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->job_ == nullptr
        && return this->requestId_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetMediaConvertJobResponseBodyJob & job() const { DARABONBA_PTR_GET_CONST(job_, GetMediaConvertJobResponseBodyJob) };
    inline GetMediaConvertJobResponseBodyJob job() { DARABONBA_PTR_GET(job_, GetMediaConvertJobResponseBodyJob) };
    inline GetMediaConvertJobResponseBody& setJob(const GetMediaConvertJobResponseBodyJob & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetMediaConvertJobResponseBody& setJob(GetMediaConvertJobResponseBodyJob && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaConvertJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The transcoding task.
    std::shared_ptr<GetMediaConvertJobResponseBodyJob> job_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
