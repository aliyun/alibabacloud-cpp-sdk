// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBSOURCERULE_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBSOURCERULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MigrationJobSourceRuleKeywordFilter.hpp>
#include <vector>
#include <alibabacloud/models/MigrationJobSourceRulePrimaryFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobSourceRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobSourceRule& obj) { 
      DARABONBA_PTR_TO_JSON(KeywordFilter, keywordFilter_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrimaryFilters, primaryFilters_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobSourceRule& obj) { 
      DARABONBA_PTR_FROM_JSON(KeywordFilter, keywordFilter_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrimaryFilters, primaryFilters_);
    };
    MigrationJobSourceRule() = default ;
    MigrationJobSourceRule(const MigrationJobSourceRule &) = default ;
    MigrationJobSourceRule(MigrationJobSourceRule &&) = default ;
    MigrationJobSourceRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobSourceRule() = default ;
    MigrationJobSourceRule& operator=(const MigrationJobSourceRule &) = default ;
    MigrationJobSourceRule& operator=(MigrationJobSourceRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keywordFilter_ != nullptr
        && this->name_ != nullptr && this->primaryFilters_ != nullptr; };
    // keywordFilter Field Functions 
    bool hasKeywordFilter() const { return this->keywordFilter_ != nullptr;};
    void deleteKeywordFilter() { this->keywordFilter_ = nullptr;};
    inline const Models::MigrationJobSourceRuleKeywordFilter & keywordFilter() const { DARABONBA_PTR_GET_CONST(keywordFilter_, Models::MigrationJobSourceRuleKeywordFilter) };
    inline Models::MigrationJobSourceRuleKeywordFilter keywordFilter() { DARABONBA_PTR_GET(keywordFilter_, Models::MigrationJobSourceRuleKeywordFilter) };
    inline MigrationJobSourceRule& setKeywordFilter(const Models::MigrationJobSourceRuleKeywordFilter & keywordFilter) { DARABONBA_PTR_SET_VALUE(keywordFilter_, keywordFilter) };
    inline MigrationJobSourceRule& setKeywordFilter(Models::MigrationJobSourceRuleKeywordFilter && keywordFilter) { DARABONBA_PTR_SET_RVALUE(keywordFilter_, keywordFilter) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MigrationJobSourceRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // primaryFilters Field Functions 
    bool hasPrimaryFilters() const { return this->primaryFilters_ != nullptr;};
    void deletePrimaryFilters() { this->primaryFilters_ = nullptr;};
    inline const vector<Models::MigrationJobSourceRulePrimaryFilters> & primaryFilters() const { DARABONBA_PTR_GET_CONST(primaryFilters_, vector<Models::MigrationJobSourceRulePrimaryFilters>) };
    inline vector<Models::MigrationJobSourceRulePrimaryFilters> primaryFilters() { DARABONBA_PTR_GET(primaryFilters_, vector<Models::MigrationJobSourceRulePrimaryFilters>) };
    inline MigrationJobSourceRule& setPrimaryFilters(const vector<Models::MigrationJobSourceRulePrimaryFilters> & primaryFilters) { DARABONBA_PTR_SET_VALUE(primaryFilters_, primaryFilters) };
    inline MigrationJobSourceRule& setPrimaryFilters(vector<Models::MigrationJobSourceRulePrimaryFilters> && primaryFilters) { DARABONBA_PTR_SET_RVALUE(primaryFilters_, primaryFilters) };


  protected:
    std::shared_ptr<Models::MigrationJobSourceRuleKeywordFilter> keywordFilter_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::MigrationJobSourceRulePrimaryFilters>> primaryFilters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
