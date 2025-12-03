// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMPARAMETERSRESPONSEBODYSYSTEMPARAMSSYSTEMPARAMITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMPARAMETERSRESPONSEBODYSYSTEMPARAMSSYSTEMPARAMITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSystemParametersResponseBodySystemParamsSystemParamItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemParametersResponseBodySystemParamsSystemParamItem& obj) { 
      DARABONBA_PTR_TO_JSON(DemoValue, demoValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ParamName, paramName_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemParametersResponseBodySystemParamsSystemParamItem& obj) { 
      DARABONBA_PTR_FROM_JSON(DemoValue, demoValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
    };
    DescribeSystemParametersResponseBodySystemParamsSystemParamItem() = default ;
    DescribeSystemParametersResponseBodySystemParamsSystemParamItem(const DescribeSystemParametersResponseBodySystemParamsSystemParamItem &) = default ;
    DescribeSystemParametersResponseBodySystemParamsSystemParamItem(DescribeSystemParametersResponseBodySystemParamsSystemParamItem &&) = default ;
    DescribeSystemParametersResponseBodySystemParamsSystemParamItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemParametersResponseBodySystemParamsSystemParamItem() = default ;
    DescribeSystemParametersResponseBodySystemParamsSystemParamItem& operator=(const DescribeSystemParametersResponseBodySystemParamsSystemParamItem &) = default ;
    DescribeSystemParametersResponseBodySystemParamsSystemParamItem& operator=(DescribeSystemParametersResponseBodySystemParamsSystemParamItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->demoValue_ == nullptr
        && return this->description_ == nullptr && return this->paramName_ == nullptr && return this->paramType_ == nullptr; };
    // demoValue Field Functions 
    bool hasDemoValue() const { return this->demoValue_ != nullptr;};
    void deleteDemoValue() { this->demoValue_ = nullptr;};
    inline string demoValue() const { DARABONBA_PTR_GET_DEFAULT(demoValue_, "") };
    inline DescribeSystemParametersResponseBodySystemParamsSystemParamItem& setDemoValue(string demoValue) { DARABONBA_PTR_SET_VALUE(demoValue_, demoValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSystemParametersResponseBodySystemParamsSystemParamItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // paramName Field Functions 
    bool hasParamName() const { return this->paramName_ != nullptr;};
    void deleteParamName() { this->paramName_ = nullptr;};
    inline string paramName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
    inline DescribeSystemParametersResponseBodySystemParamsSystemParamItem& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline DescribeSystemParametersResponseBodySystemParamsSystemParamItem& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


  protected:
    // Examples
    std::shared_ptr<string> demoValue_ = nullptr;
    // The description of a parameter.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> paramName_ = nullptr;
    // The type of the parameter.
    std::shared_ptr<string> paramType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
