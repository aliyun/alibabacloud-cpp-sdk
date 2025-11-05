// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUESTSPECIALRETAINRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUESTSPECIALRETAINRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules() = default ;
    CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules(const CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules &) = default ;
    CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules(CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules &&) = default ;
    CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules() = default ;
    CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules& operator=(const CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules &) = default ;
    CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules& operator=(CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->rules_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules>) };
    inline vector<Models::CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules>) };
    inline CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules& setRules(const vector<Models::CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules& setRules(vector<Models::CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // Indicates whether the special retention is enabled.
    // 
    // *   true: enable
    // *   false: disable
    std::shared_ptr<bool> enabled_ = nullptr;
    // The special retention rules.
    std::shared_ptr<vector<Models::CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
