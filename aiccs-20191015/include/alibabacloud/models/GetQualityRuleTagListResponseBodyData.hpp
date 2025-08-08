// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRULETAGLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRULETAGLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityRuleTagListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityRuleTagListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RuleTagId, ruleTagId_);
      DARABONBA_PTR_TO_JSON(RuleTagName, ruleTagName_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityRuleTagListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleTagId, ruleTagId_);
      DARABONBA_PTR_FROM_JSON(RuleTagName, ruleTagName_);
    };
    GetQualityRuleTagListResponseBodyData() = default ;
    GetQualityRuleTagListResponseBodyData(const GetQualityRuleTagListResponseBodyData &) = default ;
    GetQualityRuleTagListResponseBodyData(GetQualityRuleTagListResponseBodyData &&) = default ;
    GetQualityRuleTagListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityRuleTagListResponseBodyData() = default ;
    GetQualityRuleTagListResponseBodyData& operator=(const GetQualityRuleTagListResponseBodyData &) = default ;
    GetQualityRuleTagListResponseBodyData& operator=(GetQualityRuleTagListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleTagId_ != nullptr
        && this->ruleTagName_ != nullptr; };
    // ruleTagId Field Functions 
    bool hasRuleTagId() const { return this->ruleTagId_ != nullptr;};
    void deleteRuleTagId() { this->ruleTagId_ = nullptr;};
    inline int64_t ruleTagId() const { DARABONBA_PTR_GET_DEFAULT(ruleTagId_, 0L) };
    inline GetQualityRuleTagListResponseBodyData& setRuleTagId(int64_t ruleTagId) { DARABONBA_PTR_SET_VALUE(ruleTagId_, ruleTagId) };


    // ruleTagName Field Functions 
    bool hasRuleTagName() const { return this->ruleTagName_ != nullptr;};
    void deleteRuleTagName() { this->ruleTagName_ = nullptr;};
    inline string ruleTagName() const { DARABONBA_PTR_GET_DEFAULT(ruleTagName_, "") };
    inline GetQualityRuleTagListResponseBodyData& setRuleTagName(string ruleTagName) { DARABONBA_PTR_SET_VALUE(ruleTagName_, ruleTagName) };


  protected:
    std::shared_ptr<int64_t> ruleTagId_ = nullptr;
    std::shared_ptr<string> ruleTagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
