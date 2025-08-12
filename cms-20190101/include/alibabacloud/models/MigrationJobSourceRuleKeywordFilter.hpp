// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBSOURCERULEKEYWORDFILTER_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBSOURCERULEKEYWORDFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobSourceRuleKeywordFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobSourceRuleKeywordFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Relation, relation_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobSourceRuleKeywordFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Relation, relation_);
    };
    MigrationJobSourceRuleKeywordFilter() = default ;
    MigrationJobSourceRuleKeywordFilter(const MigrationJobSourceRuleKeywordFilter &) = default ;
    MigrationJobSourceRuleKeywordFilter(MigrationJobSourceRuleKeywordFilter &&) = default ;
    MigrationJobSourceRuleKeywordFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobSourceRuleKeywordFilter() = default ;
    MigrationJobSourceRuleKeywordFilter& operator=(const MigrationJobSourceRuleKeywordFilter &) = default ;
    MigrationJobSourceRuleKeywordFilter& operator=(MigrationJobSourceRuleKeywordFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keywords_ != nullptr
        && this->relation_ != nullptr; };
    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> keywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline MigrationJobSourceRuleKeywordFilter& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline MigrationJobSourceRuleKeywordFilter& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string relation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline MigrationJobSourceRuleKeywordFilter& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


  protected:
    std::shared_ptr<vector<string>> keywords_ = nullptr;
    std::shared_ptr<string> relation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
