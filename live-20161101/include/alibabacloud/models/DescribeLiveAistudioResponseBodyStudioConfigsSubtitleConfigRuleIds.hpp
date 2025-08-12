// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISTUDIORESPONSEBODYSTUDIOCONFIGSSUBTITLECONFIGRULEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISTUDIORESPONSEBODYSTUDIOCONFIGSSUBTITLECONFIGRULEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds& obj) { 
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
    };
    DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds() = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds(const DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds &) = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds(DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds &&) = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds() = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds& operator=(const DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds &) = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds& operator=(DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleId_ != nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline const vector<string> & ruleId() const { DARABONBA_PTR_GET_CONST(ruleId_, vector<string>) };
    inline vector<string> ruleId() { DARABONBA_PTR_GET(ruleId_, vector<string>) };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds& setRuleId(const vector<string> & ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds& setRuleId(vector<string> && ruleId) { DARABONBA_PTR_SET_RVALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<vector<string>> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
