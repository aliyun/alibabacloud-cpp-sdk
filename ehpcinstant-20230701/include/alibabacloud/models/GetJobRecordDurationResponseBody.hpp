// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRECORDDURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRECORDDURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobRecordDurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobRecordDurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobRecordDuration, jobRecordDuration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobRecordDurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobRecordDuration, jobRecordDuration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetJobRecordDurationResponseBody() = default ;
    GetJobRecordDurationResponseBody(const GetJobRecordDurationResponseBody &) = default ;
    GetJobRecordDurationResponseBody(GetJobRecordDurationResponseBody &&) = default ;
    GetJobRecordDurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobRecordDurationResponseBody() = default ;
    GetJobRecordDurationResponseBody& operator=(const GetJobRecordDurationResponseBody &) = default ;
    GetJobRecordDurationResponseBody& operator=(GetJobRecordDurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobRecordDuration_ == nullptr
        && this->requestId_ == nullptr; };
    // jobRecordDuration Field Functions 
    bool hasJobRecordDuration() const { return this->jobRecordDuration_ != nullptr;};
    void deleteJobRecordDuration() { this->jobRecordDuration_ = nullptr;};
    inline int64_t getJobRecordDuration() const { DARABONBA_PTR_GET_DEFAULT(jobRecordDuration_, 0L) };
    inline GetJobRecordDurationResponseBody& setJobRecordDuration(int64_t jobRecordDuration) { DARABONBA_PTR_SET_VALUE(jobRecordDuration_, jobRecordDuration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobRecordDurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> jobRecordDuration_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
