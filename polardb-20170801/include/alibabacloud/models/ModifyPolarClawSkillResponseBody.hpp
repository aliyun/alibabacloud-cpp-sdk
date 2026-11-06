// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLARCLAWSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLARCLAWSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyPolarClawSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolarClawSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(EvaluateStatus, evaluateStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskDetail, riskDetail_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolarClawSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(EvaluateStatus, evaluateStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskDetail, riskDetail_);
    };
    ModifyPolarClawSkillResponseBody() = default ;
    ModifyPolarClawSkillResponseBody(const ModifyPolarClawSkillResponseBody &) = default ;
    ModifyPolarClawSkillResponseBody(ModifyPolarClawSkillResponseBody &&) = default ;
    ModifyPolarClawSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolarClawSkillResponseBody() = default ;
    ModifyPolarClawSkillResponseBody& operator=(const ModifyPolarClawSkillResponseBody &) = default ;
    ModifyPolarClawSkillResponseBody& operator=(ModifyPolarClawSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->evaluateStatus_ == nullptr && this->requestId_ == nullptr && this->riskDetail_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyPolarClawSkillResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // evaluateStatus Field Functions 
    bool hasEvaluateStatus() const { return this->evaluateStatus_ != nullptr;};
    void deleteEvaluateStatus() { this->evaluateStatus_ = nullptr;};
    inline string getEvaluateStatus() const { DARABONBA_PTR_GET_DEFAULT(evaluateStatus_, "") };
    inline ModifyPolarClawSkillResponseBody& setEvaluateStatus(string evaluateStatus) { DARABONBA_PTR_SET_VALUE(evaluateStatus_, evaluateStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyPolarClawSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskDetail Field Functions 
    bool hasRiskDetail() const { return this->riskDetail_ != nullptr;};
    void deleteRiskDetail() { this->riskDetail_ = nullptr;};
    inline string getRiskDetail() const { DARABONBA_PTR_GET_DEFAULT(riskDetail_, "") };
    inline ModifyPolarClawSkillResponseBody& setRiskDetail(string riskDetail) { DARABONBA_PTR_SET_VALUE(riskDetail_, riskDetail) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The evaluation status.
    shared_ptr<string> evaluateStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The baseline risk details.
    shared_ptr<string> riskDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
