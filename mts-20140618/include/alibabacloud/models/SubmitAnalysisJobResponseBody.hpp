// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitAnalysisJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAnalysisJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisJob, analysisJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAnalysisJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisJob, analysisJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitAnalysisJobResponseBody() = default ;
    SubmitAnalysisJobResponseBody(const SubmitAnalysisJobResponseBody &) = default ;
    SubmitAnalysisJobResponseBody(SubmitAnalysisJobResponseBody &&) = default ;
    SubmitAnalysisJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAnalysisJobResponseBody() = default ;
    SubmitAnalysisJobResponseBody& operator=(const SubmitAnalysisJobResponseBody &) = default ;
    SubmitAnalysisJobResponseBody& operator=(SubmitAnalysisJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisJob_ == nullptr
        && return this->requestId_ == nullptr; };
    // analysisJob Field Functions 
    bool hasAnalysisJob() const { return this->analysisJob_ != nullptr;};
    void deleteAnalysisJob() { this->analysisJob_ = nullptr;};
    inline const SubmitAnalysisJobResponseBodyAnalysisJob & analysisJob() const { DARABONBA_PTR_GET_CONST(analysisJob_, SubmitAnalysisJobResponseBodyAnalysisJob) };
    inline SubmitAnalysisJobResponseBodyAnalysisJob analysisJob() { DARABONBA_PTR_GET(analysisJob_, SubmitAnalysisJobResponseBodyAnalysisJob) };
    inline SubmitAnalysisJobResponseBody& setAnalysisJob(const SubmitAnalysisJobResponseBodyAnalysisJob & analysisJob) { DARABONBA_PTR_SET_VALUE(analysisJob_, analysisJob) };
    inline SubmitAnalysisJobResponseBody& setAnalysisJob(SubmitAnalysisJobResponseBodyAnalysisJob && analysisJob) { DARABONBA_PTR_SET_RVALUE(analysisJob_, analysisJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAnalysisJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the preset template analysis job that was submitted.
    std::shared_ptr<SubmitAnalysisJobResponseBodyAnalysisJob> analysisJob_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
