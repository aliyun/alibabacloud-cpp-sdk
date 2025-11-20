// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYV2REQUESTRULESRETENTIONRULES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYV2REQUESTRULESRETENTIONRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdatePolicyV2RequestRulesRetentionRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyV2RequestRulesRetentionRules& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedRetentionType, advancedRetentionType_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(WhichSnapshot, whichSnapshot_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyV2RequestRulesRetentionRules& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedRetentionType, advancedRetentionType_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(WhichSnapshot, whichSnapshot_);
    };
    UpdatePolicyV2RequestRulesRetentionRules() = default ;
    UpdatePolicyV2RequestRulesRetentionRules(const UpdatePolicyV2RequestRulesRetentionRules &) = default ;
    UpdatePolicyV2RequestRulesRetentionRules(UpdatePolicyV2RequestRulesRetentionRules &&) = default ;
    UpdatePolicyV2RequestRulesRetentionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyV2RequestRulesRetentionRules() = default ;
    UpdatePolicyV2RequestRulesRetentionRules& operator=(const UpdatePolicyV2RequestRulesRetentionRules &) = default ;
    UpdatePolicyV2RequestRulesRetentionRules& operator=(UpdatePolicyV2RequestRulesRetentionRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedRetentionType_ == nullptr
        && return this->retention_ == nullptr && return this->whichSnapshot_ == nullptr; };
    // advancedRetentionType Field Functions 
    bool hasAdvancedRetentionType() const { return this->advancedRetentionType_ != nullptr;};
    void deleteAdvancedRetentionType() { this->advancedRetentionType_ = nullptr;};
    inline string advancedRetentionType() const { DARABONBA_PTR_GET_DEFAULT(advancedRetentionType_, "") };
    inline UpdatePolicyV2RequestRulesRetentionRules& setAdvancedRetentionType(string advancedRetentionType) { DARABONBA_PTR_SET_VALUE(advancedRetentionType_, advancedRetentionType) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline UpdatePolicyV2RequestRulesRetentionRules& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // whichSnapshot Field Functions 
    bool hasWhichSnapshot() const { return this->whichSnapshot_ != nullptr;};
    void deleteWhichSnapshot() { this->whichSnapshot_ = nullptr;};
    inline int64_t whichSnapshot() const { DARABONBA_PTR_GET_DEFAULT(whichSnapshot_, 0L) };
    inline UpdatePolicyV2RequestRulesRetentionRules& setWhichSnapshot(int64_t whichSnapshot) { DARABONBA_PTR_SET_VALUE(whichSnapshot_, whichSnapshot) };


  protected:
    // The type of the special retention rule. Valid values:
    // 
    // *   **WEEKLY**: retains weekly backups
    // *   **MONTHLY**: retains monthly backups
    // *   **YEARLY**: retains yearly backups
    std::shared_ptr<string> advancedRetentionType_ = nullptr;
    // The special retention period of backups. Minimum value: 1. Unit: days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // Specifies which backup is retained based on the special retention rule. Only the first backup can be retained.
    std::shared_ptr<int64_t> whichSnapshot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
