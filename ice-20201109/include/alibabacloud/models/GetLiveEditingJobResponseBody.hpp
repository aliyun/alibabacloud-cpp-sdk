// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEEDITINGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEEDITINGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLiveEditingJobResponseBodyLiveEditingJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveEditingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveEditingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveEditingJob, liveEditingJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveEditingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveEditingJob, liveEditingJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLiveEditingJobResponseBody() = default ;
    GetLiveEditingJobResponseBody(const GetLiveEditingJobResponseBody &) = default ;
    GetLiveEditingJobResponseBody(GetLiveEditingJobResponseBody &&) = default ;
    GetLiveEditingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveEditingJobResponseBody() = default ;
    GetLiveEditingJobResponseBody& operator=(const GetLiveEditingJobResponseBody &) = default ;
    GetLiveEditingJobResponseBody& operator=(GetLiveEditingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveEditingJob_ == nullptr
        && return this->requestId_ == nullptr; };
    // liveEditingJob Field Functions 
    bool hasLiveEditingJob() const { return this->liveEditingJob_ != nullptr;};
    void deleteLiveEditingJob() { this->liveEditingJob_ = nullptr;};
    inline const GetLiveEditingJobResponseBodyLiveEditingJob & liveEditingJob() const { DARABONBA_PTR_GET_CONST(liveEditingJob_, GetLiveEditingJobResponseBodyLiveEditingJob) };
    inline GetLiveEditingJobResponseBodyLiveEditingJob liveEditingJob() { DARABONBA_PTR_GET(liveEditingJob_, GetLiveEditingJobResponseBodyLiveEditingJob) };
    inline GetLiveEditingJobResponseBody& setLiveEditingJob(const GetLiveEditingJobResponseBodyLiveEditingJob & liveEditingJob) { DARABONBA_PTR_SET_VALUE(liveEditingJob_, liveEditingJob) };
    inline GetLiveEditingJobResponseBody& setLiveEditingJob(GetLiveEditingJobResponseBodyLiveEditingJob && liveEditingJob) { DARABONBA_PTR_SET_RVALUE(liveEditingJob_, liveEditingJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveEditingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the live editing job.
    std::shared_ptr<GetLiveEditingJobResponseBodyLiveEditingJob> liveEditingJob_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
