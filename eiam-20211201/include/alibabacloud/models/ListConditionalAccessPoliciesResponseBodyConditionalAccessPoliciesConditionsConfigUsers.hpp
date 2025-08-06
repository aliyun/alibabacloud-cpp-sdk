// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESRESPONSEBODYCONDITIONALACCESSPOLICIESCONDITIONSCONFIGUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESRESPONSEBODYCONDITIONALACCESSPOLICIESCONDITIONSCONFIGUSERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeGroups, excludeGroups_);
      DARABONBA_PTR_TO_JSON(ExcludeOrganizationalUnits, excludeOrganizationalUnits_);
      DARABONBA_PTR_TO_JSON(ExcludeUsers, excludeUsers_);
      DARABONBA_PTR_TO_JSON(IncludeGroups, includeGroups_);
      DARABONBA_PTR_TO_JSON(IncludeOrganizationalUnits, includeOrganizationalUnits_);
      DARABONBA_PTR_TO_JSON(IncludeUsers, includeUsers_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeGroups, excludeGroups_);
      DARABONBA_PTR_FROM_JSON(ExcludeOrganizationalUnits, excludeOrganizationalUnits_);
      DARABONBA_PTR_FROM_JSON(ExcludeUsers, excludeUsers_);
      DARABONBA_PTR_FROM_JSON(IncludeGroups, includeGroups_);
      DARABONBA_PTR_FROM_JSON(IncludeOrganizationalUnits, includeOrganizationalUnits_);
      DARABONBA_PTR_FROM_JSON(IncludeUsers, includeUsers_);
    };
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers() = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers(const ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers &) = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers(ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers &&) = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers() = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& operator=(const ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers &) = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& operator=(ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->excludeGroups_ != nullptr
        && this->excludeOrganizationalUnits_ != nullptr && this->excludeUsers_ != nullptr && this->includeGroups_ != nullptr && this->includeOrganizationalUnits_ != nullptr && this->includeUsers_ != nullptr; };
    // excludeGroups Field Functions 
    bool hasExcludeGroups() const { return this->excludeGroups_ != nullptr;};
    void deleteExcludeGroups() { this->excludeGroups_ = nullptr;};
    inline const vector<string> & excludeGroups() const { DARABONBA_PTR_GET_CONST(excludeGroups_, vector<string>) };
    inline vector<string> excludeGroups() { DARABONBA_PTR_GET(excludeGroups_, vector<string>) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& setExcludeGroups(const vector<string> & excludeGroups) { DARABONBA_PTR_SET_VALUE(excludeGroups_, excludeGroups) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& setExcludeGroups(vector<string> && excludeGroups) { DARABONBA_PTR_SET_RVALUE(excludeGroups_, excludeGroups) };


    // excludeOrganizationalUnits Field Functions 
    bool hasExcludeOrganizationalUnits() const { return this->excludeOrganizationalUnits_ != nullptr;};
    void deleteExcludeOrganizationalUnits() { this->excludeOrganizationalUnits_ = nullptr;};
    inline const vector<string> & excludeOrganizationalUnits() const { DARABONBA_PTR_GET_CONST(excludeOrganizationalUnits_, vector<string>) };
    inline vector<string> excludeOrganizationalUnits() { DARABONBA_PTR_GET(excludeOrganizationalUnits_, vector<string>) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& setExcludeOrganizationalUnits(const vector<string> & excludeOrganizationalUnits) { DARABONBA_PTR_SET_VALUE(excludeOrganizationalUnits_, excludeOrganizationalUnits) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& setExcludeOrganizationalUnits(vector<string> && excludeOrganizationalUnits) { DARABONBA_PTR_SET_RVALUE(excludeOrganizationalUnits_, excludeOrganizationalUnits) };


    // excludeUsers Field Functions 
    bool hasExcludeUsers() const { return this->excludeUsers_ != nullptr;};
    void deleteExcludeUsers() { this->excludeUsers_ = nullptr;};
    inline const vector<string> & excludeUsers() const { DARABONBA_PTR_GET_CONST(excludeUsers_, vector<string>) };
    inline vector<string> excludeUsers() { DARABONBA_PTR_GET(excludeUsers_, vector<string>) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& setExcludeUsers(const vector<string> & excludeUsers) { DARABONBA_PTR_SET_VALUE(excludeUsers_, excludeUsers) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& setExcludeUsers(vector<string> && excludeUsers) { DARABONBA_PTR_SET_RVALUE(excludeUsers_, excludeUsers) };


    // includeGroups Field Functions 
    bool hasIncludeGroups() const { return this->includeGroups_ != nullptr;};
    void deleteIncludeGroups() { this->includeGroups_ = nullptr;};
    inline const vector<string> & includeGroups() const { DARABONBA_PTR_GET_CONST(includeGroups_, vector<string>) };
    inline vector<string> includeGroups() { DARABONBA_PTR_GET(includeGroups_, vector<string>) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& setIncludeGroups(const vector<string> & includeGroups) { DARABONBA_PTR_SET_VALUE(includeGroups_, includeGroups) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& setIncludeGroups(vector<string> && includeGroups) { DARABONBA_PTR_SET_RVALUE(includeGroups_, includeGroups) };


    // includeOrganizationalUnits Field Functions 
    bool hasIncludeOrganizationalUnits() const { return this->includeOrganizationalUnits_ != nullptr;};
    void deleteIncludeOrganizationalUnits() { this->includeOrganizationalUnits_ = nullptr;};
    inline const vector<string> & includeOrganizationalUnits() const { DARABONBA_PTR_GET_CONST(includeOrganizationalUnits_, vector<string>) };
    inline vector<string> includeOrganizationalUnits() { DARABONBA_PTR_GET(includeOrganizationalUnits_, vector<string>) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& setIncludeOrganizationalUnits(const vector<string> & includeOrganizationalUnits) { DARABONBA_PTR_SET_VALUE(includeOrganizationalUnits_, includeOrganizationalUnits) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& setIncludeOrganizationalUnits(vector<string> && includeOrganizationalUnits) { DARABONBA_PTR_SET_RVALUE(includeOrganizationalUnits_, includeOrganizationalUnits) };


    // includeUsers Field Functions 
    bool hasIncludeUsers() const { return this->includeUsers_ != nullptr;};
    void deleteIncludeUsers() { this->includeUsers_ = nullptr;};
    inline const vector<string> & includeUsers() const { DARABONBA_PTR_GET_CONST(includeUsers_, vector<string>) };
    inline vector<string> includeUsers() { DARABONBA_PTR_GET(includeUsers_, vector<string>) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& setIncludeUsers(const vector<string> & includeUsers) { DARABONBA_PTR_SET_VALUE(includeUsers_, includeUsers) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers& setIncludeUsers(vector<string> && includeUsers) { DARABONBA_PTR_SET_RVALUE(includeUsers_, includeUsers) };


  protected:
    // Excluded user groups
    std::shared_ptr<vector<string>> excludeGroups_ = nullptr;
    // Excluded organizations
    std::shared_ptr<vector<string>> excludeOrganizationalUnits_ = nullptr;
    // Excluded users
    std::shared_ptr<vector<string>> excludeUsers_ = nullptr;
    // Included user groups
    std::shared_ptr<vector<string>> includeGroups_ = nullptr;
    // Included organizations
    std::shared_ptr<vector<string>> includeOrganizationalUnits_ = nullptr;
    // Selected users
    std::shared_ptr<vector<string>> includeUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
