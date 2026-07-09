// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDMONITORINGCOMPOSITEESCALATION_HPP_
#define ALIBABACLOUD_MODELS_CLOUDMONITORINGCOMPOSITEESCALATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CloudMonitoringCompositeEscalationEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CloudMonitoringCompositeEscalation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudMonitoringCompositeEscalation& obj) { 
      DARABONBA_PTR_TO_JSON(escalations, escalations_);
      DARABONBA_PTR_TO_JSON(relation, relation_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(times, times_);
    };
    friend void from_json(const Darabonba::Json& j, CloudMonitoringCompositeEscalation& obj) { 
      DARABONBA_PTR_FROM_JSON(escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(relation, relation_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(times, times_);
    };
    CloudMonitoringCompositeEscalation() = default ;
    CloudMonitoringCompositeEscalation(const CloudMonitoringCompositeEscalation &) = default ;
    CloudMonitoringCompositeEscalation(CloudMonitoringCompositeEscalation &&) = default ;
    CloudMonitoringCompositeEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudMonitoringCompositeEscalation() = default ;
    CloudMonitoringCompositeEscalation& operator=(const CloudMonitoringCompositeEscalation &) = default ;
    CloudMonitoringCompositeEscalation& operator=(CloudMonitoringCompositeEscalation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->escalations_ == nullptr
        && this->relation_ == nullptr && this->severity_ == nullptr && this->times_ == nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const vector<CloudMonitoringCompositeEscalationEntry> & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<CloudMonitoringCompositeEscalationEntry>) };
    inline vector<CloudMonitoringCompositeEscalationEntry> getEscalations() { DARABONBA_PTR_GET(escalations_, vector<CloudMonitoringCompositeEscalationEntry>) };
    inline CloudMonitoringCompositeEscalation& setEscalations(const vector<CloudMonitoringCompositeEscalationEntry> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline CloudMonitoringCompositeEscalation& setEscalations(vector<CloudMonitoringCompositeEscalationEntry> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline CloudMonitoringCompositeEscalation& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline CloudMonitoringCompositeEscalation& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline CloudMonitoringCompositeEscalation& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    // A single entry in the escalation policy. See the `CloudMonitoringCompositeEscalationEntry` object for details.
    shared_ptr<vector<CloudMonitoringCompositeEscalationEntry>> escalations_ {};
    // Specifies the logical relationship for evaluating the conditions of the composite alert rule. Valid values: `and` and `or`.
    shared_ptr<string> relation_ {};
    // Specifies the severity level of the alert. For example: `Critical`, `Warning`, and `Info`.
    shared_ptr<string> severity_ {};
    // Specifies the number of times the alert conditions must be met to trigger this escalation policy.
    shared_ptr<int32_t> times_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
