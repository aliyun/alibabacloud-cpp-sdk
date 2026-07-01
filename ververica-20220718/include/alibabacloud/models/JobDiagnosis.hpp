// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBDIAGNOSIS_HPP_
#define ALIBABACLOUD_MODELS_JOBDIAGNOSIS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/JobDiagnosisSymptoms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class JobDiagnosis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobDiagnosis& obj) { 
      DARABONBA_PTR_TO_JSON(diagnoseId, diagnoseId_);
      DARABONBA_PTR_TO_JSON(diagnoseTime, diagnoseTime_);
      DARABONBA_PTR_TO_JSON(healthScore, healthScore_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(symptoms, symptoms_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, JobDiagnosis& obj) { 
      DARABONBA_PTR_FROM_JSON(diagnoseId, diagnoseId_);
      DARABONBA_PTR_FROM_JSON(diagnoseTime, diagnoseTime_);
      DARABONBA_PTR_FROM_JSON(healthScore, healthScore_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(symptoms, symptoms_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    JobDiagnosis() = default ;
    JobDiagnosis(const JobDiagnosis &) = default ;
    JobDiagnosis(JobDiagnosis &&) = default ;
    JobDiagnosis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobDiagnosis() = default ;
    JobDiagnosis& operator=(const JobDiagnosis &) = default ;
    JobDiagnosis& operator=(JobDiagnosis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diagnoseId_ == nullptr
        && this->diagnoseTime_ == nullptr && this->healthScore_ == nullptr && this->namespace_ == nullptr && this->riskLevel_ == nullptr && this->symptoms_ == nullptr
        && this->workspace_ == nullptr; };
    // diagnoseId Field Functions 
    bool hasDiagnoseId() const { return this->diagnoseId_ != nullptr;};
    void deleteDiagnoseId() { this->diagnoseId_ = nullptr;};
    inline string getDiagnoseId() const { DARABONBA_PTR_GET_DEFAULT(diagnoseId_, "") };
    inline JobDiagnosis& setDiagnoseId(string diagnoseId) { DARABONBA_PTR_SET_VALUE(diagnoseId_, diagnoseId) };


    // diagnoseTime Field Functions 
    bool hasDiagnoseTime() const { return this->diagnoseTime_ != nullptr;};
    void deleteDiagnoseTime() { this->diagnoseTime_ = nullptr;};
    inline int64_t getDiagnoseTime() const { DARABONBA_PTR_GET_DEFAULT(diagnoseTime_, 0L) };
    inline JobDiagnosis& setDiagnoseTime(int64_t diagnoseTime) { DARABONBA_PTR_SET_VALUE(diagnoseTime_, diagnoseTime) };


    // healthScore Field Functions 
    bool hasHealthScore() const { return this->healthScore_ != nullptr;};
    void deleteHealthScore() { this->healthScore_ = nullptr;};
    inline int32_t getHealthScore() const { DARABONBA_PTR_GET_DEFAULT(healthScore_, 0) };
    inline JobDiagnosis& setHealthScore(int32_t healthScore) { DARABONBA_PTR_SET_VALUE(healthScore_, healthScore) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline JobDiagnosis& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline JobDiagnosis& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // symptoms Field Functions 
    bool hasSymptoms() const { return this->symptoms_ != nullptr;};
    void deleteSymptoms() { this->symptoms_ = nullptr;};
    inline const JobDiagnosisSymptoms & getSymptoms() const { DARABONBA_PTR_GET_CONST(symptoms_, JobDiagnosisSymptoms) };
    inline JobDiagnosisSymptoms getSymptoms() { DARABONBA_PTR_GET(symptoms_, JobDiagnosisSymptoms) };
    inline JobDiagnosis& setSymptoms(const JobDiagnosisSymptoms & symptoms) { DARABONBA_PTR_SET_VALUE(symptoms_, symptoms) };
    inline JobDiagnosis& setSymptoms(JobDiagnosisSymptoms && symptoms) { DARABONBA_PTR_SET_RVALUE(symptoms_, symptoms) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline JobDiagnosis& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The diagnostic ID.
    shared_ptr<string> diagnoseId_ {};
    // The diagnostic time.
    shared_ptr<int64_t> diagnoseTime_ {};
    shared_ptr<int32_t> healthScore_ {};
    // The namespace.
    shared_ptr<string> namespace_ {};
    // The risk level.
    shared_ptr<string> riskLevel_ {};
    // The diagnostic details.
    shared_ptr<JobDiagnosisSymptoms> symptoms_ {};
    // The workspace.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
