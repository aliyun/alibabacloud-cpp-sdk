// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULERRULESRESPONSEBODYSCHEDULERRULESPARAM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULERRULESRESPONSEBODYSCHEDULERRULESPARAM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSchedulerRulesResponseBodySchedulerRulesParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSchedulerRulesResponseBodySchedulerRulesParam& obj) { 
      DARABONBA_PTR_TO_JSON(ParamData, paramData_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSchedulerRulesResponseBodySchedulerRulesParam& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamData, paramData_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
    };
    DescribeSchedulerRulesResponseBodySchedulerRulesParam() = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesParam(const DescribeSchedulerRulesResponseBodySchedulerRulesParam &) = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesParam(DescribeSchedulerRulesResponseBodySchedulerRulesParam &&) = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSchedulerRulesResponseBodySchedulerRulesParam() = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesParam& operator=(const DescribeSchedulerRulesResponseBodySchedulerRulesParam &) = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesParam& operator=(DescribeSchedulerRulesResponseBodySchedulerRulesParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paramData_ != nullptr
        && this->paramType_ != nullptr; };
    // paramData Field Functions 
    bool hasParamData() const { return this->paramData_ != nullptr;};
    void deleteParamData() { this->paramData_ = nullptr;};
    inline const Models::DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData & paramData() const { DARABONBA_PTR_GET_CONST(paramData_, Models::DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData) };
    inline Models::DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData paramData() { DARABONBA_PTR_GET(paramData_, Models::DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData) };
    inline DescribeSchedulerRulesResponseBodySchedulerRulesParam& setParamData(const Models::DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData & paramData) { DARABONBA_PTR_SET_VALUE(paramData_, paramData) };
    inline DescribeSchedulerRulesResponseBodySchedulerRulesParam& setParamData(Models::DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData && paramData) { DARABONBA_PTR_SET_RVALUE(paramData_, paramData) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline DescribeSchedulerRulesResponseBodySchedulerRulesParam& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


  protected:
    std::shared_ptr<Models::DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData> paramData_ = nullptr;
    std::shared_ptr<string> paramType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
