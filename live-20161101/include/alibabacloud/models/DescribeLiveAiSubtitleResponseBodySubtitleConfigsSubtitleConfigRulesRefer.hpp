// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLERESPONSEBODYSUBTITLECONFIGSSUBTITLECONFIGRULESREFER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLERESPONSEBODYSUBTITLECONFIGSSUBTITLECONFIGRULESREFER_HPP_
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
  class DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer& obj) { 
      DARABONBA_PTR_TO_JSON(RulesId, rulesId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer& obj) { 
      DARABONBA_PTR_FROM_JSON(RulesId, rulesId_);
    };
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer() = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer(const DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer &) = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer(DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer &&) = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer() = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer& operator=(const DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer &) = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer& operator=(DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rulesId_ == nullptr; };
    // rulesId Field Functions 
    bool hasRulesId() const { return this->rulesId_ != nullptr;};
    void deleteRulesId() { this->rulesId_ = nullptr;};
    inline const vector<string> & rulesId() const { DARABONBA_PTR_GET_CONST(rulesId_, vector<string>) };
    inline vector<string> rulesId() { DARABONBA_PTR_GET(rulesId_, vector<string>) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer& setRulesId(const vector<string> & rulesId) { DARABONBA_PTR_SET_VALUE(rulesId_, rulesId) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer& setRulesId(vector<string> && rulesId) { DARABONBA_PTR_SET_RVALUE(rulesId_, rulesId) };


  protected:
    std::shared_ptr<vector<string>> rulesId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
