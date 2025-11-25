// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODYSCHEDULERRULESCDNLINKAGERULEPARAM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODYSCHEDULERRULESCDNLINKAGERULEPARAM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam& obj) { 
      DARABONBA_PTR_TO_JSON(ParamData, paramData_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamData, paramData_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
    };
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam() = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam(const DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam &) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam(DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam &&) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam() = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam& operator=(const DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam &) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam& operator=(DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramData_ == nullptr
        && return this->paramType_ == nullptr; };
    // paramData Field Functions 
    bool hasParamData() const { return this->paramData_ != nullptr;};
    void deleteParamData() { this->paramData_ = nullptr;};
    inline const Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData & paramData() const { DARABONBA_PTR_GET_CONST(paramData_, Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData) };
    inline Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData paramData() { DARABONBA_PTR_GET(paramData_, Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam& setParamData(const Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData & paramData) { DARABONBA_PTR_SET_VALUE(paramData_, paramData) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam& setParamData(Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData && paramData) { DARABONBA_PTR_SET_RVALUE(paramData_, paramData) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


  protected:
    std::shared_ptr<Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData> paramData_ = nullptr;
    std::shared_ptr<string> paramType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
