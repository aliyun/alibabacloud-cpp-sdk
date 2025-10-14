// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESCALATIONRULEESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_ESCALATIONRULEESCALATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EscalationRuleEscalationsContactGroupsByLevel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class EscalationRuleEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EscalationRuleEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(BackupContactGroups, backupContactGroups_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(ContactGroupsByLevel, contactGroupsByLevel_);
      DARABONBA_PTR_TO_JSON(EscalateMin, escalateMin_);
    };
    friend void from_json(const Darabonba::Json& j, EscalationRuleEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupContactGroups, backupContactGroups_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(ContactGroupsByLevel, contactGroupsByLevel_);
      DARABONBA_PTR_FROM_JSON(EscalateMin, escalateMin_);
    };
    EscalationRuleEscalations() = default ;
    EscalationRuleEscalations(const EscalationRuleEscalations &) = default ;
    EscalationRuleEscalations(EscalationRuleEscalations &&) = default ;
    EscalationRuleEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EscalationRuleEscalations() = default ;
    EscalationRuleEscalations& operator=(const EscalationRuleEscalations &) = default ;
    EscalationRuleEscalations& operator=(EscalationRuleEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupContactGroups_ == nullptr
        && return this->contactGroups_ == nullptr && return this->contactGroupsByLevel_ == nullptr && return this->escalateMin_ == nullptr; };
    // backupContactGroups Field Functions 
    bool hasBackupContactGroups() const { return this->backupContactGroups_ != nullptr;};
    void deleteBackupContactGroups() { this->backupContactGroups_ = nullptr;};
    inline const vector<string> & backupContactGroups() const { DARABONBA_PTR_GET_CONST(backupContactGroups_, vector<string>) };
    inline vector<string> backupContactGroups() { DARABONBA_PTR_GET(backupContactGroups_, vector<string>) };
    inline EscalationRuleEscalations& setBackupContactGroups(const vector<string> & backupContactGroups) { DARABONBA_PTR_SET_VALUE(backupContactGroups_, backupContactGroups) };
    inline EscalationRuleEscalations& setBackupContactGroups(vector<string> && backupContactGroups) { DARABONBA_PTR_SET_RVALUE(backupContactGroups_, backupContactGroups) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const vector<string> & contactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<string>) };
    inline vector<string> contactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<string>) };
    inline EscalationRuleEscalations& setContactGroups(const vector<string> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline EscalationRuleEscalations& setContactGroups(vector<string> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // contactGroupsByLevel Field Functions 
    bool hasContactGroupsByLevel() const { return this->contactGroupsByLevel_ != nullptr;};
    void deleteContactGroupsByLevel() { this->contactGroupsByLevel_ = nullptr;};
    inline const Models::EscalationRuleEscalationsContactGroupsByLevel & contactGroupsByLevel() const { DARABONBA_PTR_GET_CONST(contactGroupsByLevel_, Models::EscalationRuleEscalationsContactGroupsByLevel) };
    inline Models::EscalationRuleEscalationsContactGroupsByLevel contactGroupsByLevel() { DARABONBA_PTR_GET(contactGroupsByLevel_, Models::EscalationRuleEscalationsContactGroupsByLevel) };
    inline EscalationRuleEscalations& setContactGroupsByLevel(const Models::EscalationRuleEscalationsContactGroupsByLevel & contactGroupsByLevel) { DARABONBA_PTR_SET_VALUE(contactGroupsByLevel_, contactGroupsByLevel) };
    inline EscalationRuleEscalations& setContactGroupsByLevel(Models::EscalationRuleEscalationsContactGroupsByLevel && contactGroupsByLevel) { DARABONBA_PTR_SET_RVALUE(contactGroupsByLevel_, contactGroupsByLevel) };


    // escalateMin Field Functions 
    bool hasEscalateMin() const { return this->escalateMin_ != nullptr;};
    void deleteEscalateMin() { this->escalateMin_ = nullptr;};
    inline int64_t escalateMin() const { DARABONBA_PTR_GET_DEFAULT(escalateMin_, 0L) };
    inline EscalationRuleEscalations& setEscalateMin(int64_t escalateMin) { DARABONBA_PTR_SET_VALUE(escalateMin_, escalateMin) };


  protected:
    std::shared_ptr<vector<string>> backupContactGroups_ = nullptr;
    std::shared_ptr<vector<string>> contactGroups_ = nullptr;
    std::shared_ptr<Models::EscalationRuleEscalationsContactGroupsByLevel> contactGroupsByLevel_ = nullptr;
    std::shared_ptr<int64_t> escalateMin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
