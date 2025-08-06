// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitPreprocessJobsResponseBodyPreprocessJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitPreprocessJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPreprocessJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PreprocessJobs, preprocessJobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPreprocessJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PreprocessJobs, preprocessJobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitPreprocessJobsResponseBody() = default ;
    SubmitPreprocessJobsResponseBody(const SubmitPreprocessJobsResponseBody &) = default ;
    SubmitPreprocessJobsResponseBody(SubmitPreprocessJobsResponseBody &&) = default ;
    SubmitPreprocessJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPreprocessJobsResponseBody() = default ;
    SubmitPreprocessJobsResponseBody& operator=(const SubmitPreprocessJobsResponseBody &) = default ;
    SubmitPreprocessJobsResponseBody& operator=(SubmitPreprocessJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preprocessJobs_ != nullptr
        && this->requestId_ != nullptr; };
    // preprocessJobs Field Functions 
    bool hasPreprocessJobs() const { return this->preprocessJobs_ != nullptr;};
    void deletePreprocessJobs() { this->preprocessJobs_ = nullptr;};
    inline const SubmitPreprocessJobsResponseBodyPreprocessJobs & preprocessJobs() const { DARABONBA_PTR_GET_CONST(preprocessJobs_, SubmitPreprocessJobsResponseBodyPreprocessJobs) };
    inline SubmitPreprocessJobsResponseBodyPreprocessJobs preprocessJobs() { DARABONBA_PTR_GET(preprocessJobs_, SubmitPreprocessJobsResponseBodyPreprocessJobs) };
    inline SubmitPreprocessJobsResponseBody& setPreprocessJobs(const SubmitPreprocessJobsResponseBodyPreprocessJobs & preprocessJobs) { DARABONBA_PTR_SET_VALUE(preprocessJobs_, preprocessJobs) };
    inline SubmitPreprocessJobsResponseBody& setPreprocessJobs(SubmitPreprocessJobsResponseBodyPreprocessJobs && preprocessJobs) { DARABONBA_PTR_SET_RVALUE(preprocessJobs_, preprocessJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitPreprocessJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the job.
    std::shared_ptr<SubmitPreprocessJobsResponseBodyPreprocessJobs> preprocessJobs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
