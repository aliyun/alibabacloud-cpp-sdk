// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUESTSPECIALRETAINRULESRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUESTSPECIALRETAINRULESRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules& obj) { 
      DARABONBA_PTR_TO_JSON(SpecialPeriodUnit, specialPeriodUnit_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules& obj) { 
      DARABONBA_PTR_FROM_JSON(SpecialPeriodUnit, specialPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
    };
    CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules() = default ;
    CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules(const CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules &) = default ;
    CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules(CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules &&) = default ;
    CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules() = default ;
    CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules& operator=(const CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules &) = default ;
    CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules& operator=(CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->specialPeriodUnit_ == nullptr
        && return this->timeInterval_ == nullptr && return this->timeUnit_ == nullptr; };
    // specialPeriodUnit Field Functions 
    bool hasSpecialPeriodUnit() const { return this->specialPeriodUnit_ != nullptr;};
    void deleteSpecialPeriodUnit() { this->specialPeriodUnit_ = nullptr;};
    inline string specialPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(specialPeriodUnit_, "") };
    inline CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules& setSpecialPeriodUnit(string specialPeriodUnit) { DARABONBA_PTR_SET_VALUE(specialPeriodUnit_, specialPeriodUnit) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline int32_t timeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
    inline CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


  protected:
    // The periodic unit for specially retained snapshots. If configured to WEEKS, it provides special retention for the first snapshot of each week. The retention period is determined by TimeUnit and TimeInterval. The range of values are:
    // - WEEKS
    // - MONTHS
    // - YEARS
    std::shared_ptr<string> specialPeriodUnit_ = nullptr;
    // Retention Time Value. The range of values is greater than 1.
    std::shared_ptr<int32_t> timeInterval_ = nullptr;
    // Retention time unit for special snapshots. The range of values:
    // 
    // - DAYS
    // 
    // - WEEKS
    std::shared_ptr<string> timeUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
