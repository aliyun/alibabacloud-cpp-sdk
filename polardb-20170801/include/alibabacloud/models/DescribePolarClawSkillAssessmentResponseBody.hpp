// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLASSESSMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLASSESSMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawSkillAssessmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawSkillAssessmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssessmentResult, assessmentResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawSkillAssessmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssessmentResult, assessmentResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePolarClawSkillAssessmentResponseBody() = default ;
    DescribePolarClawSkillAssessmentResponseBody(const DescribePolarClawSkillAssessmentResponseBody &) = default ;
    DescribePolarClawSkillAssessmentResponseBody(DescribePolarClawSkillAssessmentResponseBody &&) = default ;
    DescribePolarClawSkillAssessmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawSkillAssessmentResponseBody() = default ;
    DescribePolarClawSkillAssessmentResponseBody& operator=(const DescribePolarClawSkillAssessmentResponseBody &) = default ;
    DescribePolarClawSkillAssessmentResponseBody& operator=(DescribePolarClawSkillAssessmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assessmentResult_ == nullptr
        && this->requestId_ == nullptr; };
    // assessmentResult Field Functions 
    bool hasAssessmentResult() const { return this->assessmentResult_ != nullptr;};
    void deleteAssessmentResult() { this->assessmentResult_ = nullptr;};
    inline string getAssessmentResult() const { DARABONBA_PTR_GET_DEFAULT(assessmentResult_, "") };
    inline DescribePolarClawSkillAssessmentResponseBody& setAssessmentResult(string assessmentResult) { DARABONBA_PTR_SET_VALUE(assessmentResult_, assessmentResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawSkillAssessmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The assessment result.
    shared_ptr<string> assessmentResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
