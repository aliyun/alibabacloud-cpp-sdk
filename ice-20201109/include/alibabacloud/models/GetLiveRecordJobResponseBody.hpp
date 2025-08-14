// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVERECORDJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVERECORDJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLiveRecordJobResponseBodyRecordJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveRecordJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveRecordJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordJob, recordJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveRecordJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordJob, recordJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLiveRecordJobResponseBody() = default ;
    GetLiveRecordJobResponseBody(const GetLiveRecordJobResponseBody &) = default ;
    GetLiveRecordJobResponseBody(GetLiveRecordJobResponseBody &&) = default ;
    GetLiveRecordJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveRecordJobResponseBody() = default ;
    GetLiveRecordJobResponseBody& operator=(const GetLiveRecordJobResponseBody &) = default ;
    GetLiveRecordJobResponseBody& operator=(GetLiveRecordJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recordJob_ != nullptr
        && this->requestId_ != nullptr; };
    // recordJob Field Functions 
    bool hasRecordJob() const { return this->recordJob_ != nullptr;};
    void deleteRecordJob() { this->recordJob_ = nullptr;};
    inline const GetLiveRecordJobResponseBodyRecordJob & recordJob() const { DARABONBA_PTR_GET_CONST(recordJob_, GetLiveRecordJobResponseBodyRecordJob) };
    inline GetLiveRecordJobResponseBodyRecordJob recordJob() { DARABONBA_PTR_GET(recordJob_, GetLiveRecordJobResponseBodyRecordJob) };
    inline GetLiveRecordJobResponseBody& setRecordJob(const GetLiveRecordJobResponseBodyRecordJob & recordJob) { DARABONBA_PTR_SET_VALUE(recordJob_, recordJob) };
    inline GetLiveRecordJobResponseBody& setRecordJob(GetLiveRecordJobResponseBodyRecordJob && recordJob) { DARABONBA_PTR_SET_RVALUE(recordJob_, recordJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveRecordJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the recording job.
    std::shared_ptr<GetLiveRecordJobResponseBodyRecordJob> recordJob_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
