// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDIGITALWATERMARKEXTRACTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDIGITALWATERMARKEXTRACTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitDigitalWatermarkExtractJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDigitalWatermarkExtractJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDigitalWatermarkExtractJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitDigitalWatermarkExtractJobResponseBody() = default ;
    SubmitDigitalWatermarkExtractJobResponseBody(const SubmitDigitalWatermarkExtractJobResponseBody &) = default ;
    SubmitDigitalWatermarkExtractJobResponseBody(SubmitDigitalWatermarkExtractJobResponseBody &&) = default ;
    SubmitDigitalWatermarkExtractJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDigitalWatermarkExtractJobResponseBody() = default ;
    SubmitDigitalWatermarkExtractJobResponseBody& operator=(const SubmitDigitalWatermarkExtractJobResponseBody &) = default ;
    SubmitDigitalWatermarkExtractJobResponseBody& operator=(SubmitDigitalWatermarkExtractJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->requestId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitDigitalWatermarkExtractJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitDigitalWatermarkExtractJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the watermark extraction job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
