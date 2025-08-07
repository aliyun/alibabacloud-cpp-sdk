// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORSOPERATORBASICINFOPARAMOPERKEYWORDS_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORSOPERATORBASICINFOPARAMOPERKEYWORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords& obj) { 
      DARABONBA_PTR_TO_JSON(OperKeyWord, operKeyWord_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords& obj) { 
      DARABONBA_PTR_FROM_JSON(OperKeyWord, operKeyWord_);
    };
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords &&) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords& operator=(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords& operator=(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operKeyWord_ != nullptr; };
    // operKeyWord Field Functions 
    bool hasOperKeyWord() const { return this->operKeyWord_ != nullptr;};
    void deleteOperKeyWord() { this->operKeyWord_ = nullptr;};
    inline const vector<string> & operKeyWord() const { DARABONBA_PTR_GET_CONST(operKeyWord_, vector<string>) };
    inline vector<string> operKeyWord() { DARABONBA_PTR_GET(operKeyWord_, vector<string>) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords& setOperKeyWord(const vector<string> & operKeyWord) { DARABONBA_PTR_SET_VALUE(operKeyWord_, operKeyWord) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords& setOperKeyWord(vector<string> && operKeyWord) { DARABONBA_PTR_SET_RVALUE(operKeyWord_, operKeyWord) };


  protected:
    std::shared_ptr<vector<string>> operKeyWord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
