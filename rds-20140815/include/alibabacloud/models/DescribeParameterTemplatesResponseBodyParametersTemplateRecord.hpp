// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODYPARAMETERSTEMPLATERECORD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODYPARAMETERSTEMPLATERECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParameterTemplatesResponseBodyParametersTemplateRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterTemplatesResponseBodyParametersTemplateRecord& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingCode, checkingCode_);
      DARABONBA_PTR_TO_JSON(ForceModify, forceModify_);
      DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterTemplatesResponseBodyParametersTemplateRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
      DARABONBA_PTR_FROM_JSON(ForceModify, forceModify_);
      DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    DescribeParameterTemplatesResponseBodyParametersTemplateRecord() = default ;
    DescribeParameterTemplatesResponseBodyParametersTemplateRecord(const DescribeParameterTemplatesResponseBodyParametersTemplateRecord &) = default ;
    DescribeParameterTemplatesResponseBodyParametersTemplateRecord(DescribeParameterTemplatesResponseBodyParametersTemplateRecord &&) = default ;
    DescribeParameterTemplatesResponseBodyParametersTemplateRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterTemplatesResponseBodyParametersTemplateRecord() = default ;
    DescribeParameterTemplatesResponseBodyParametersTemplateRecord& operator=(const DescribeParameterTemplatesResponseBodyParametersTemplateRecord &) = default ;
    DescribeParameterTemplatesResponseBodyParametersTemplateRecord& operator=(DescribeParameterTemplatesResponseBodyParametersTemplateRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkingCode_ == nullptr
        && return this->forceModify_ == nullptr && return this->forceRestart_ == nullptr && return this->parameterDescription_ == nullptr && return this->parameterName_ == nullptr && return this->parameterValue_ == nullptr; };
    // checkingCode Field Functions 
    bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
    void deleteCheckingCode() { this->checkingCode_ = nullptr;};
    inline string checkingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


    // forceModify Field Functions 
    bool hasForceModify() const { return this->forceModify_ != nullptr;};
    void deleteForceModify() { this->forceModify_ = nullptr;};
    inline string forceModify() const { DARABONBA_PTR_GET_DEFAULT(forceModify_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setForceModify(string forceModify) { DARABONBA_PTR_SET_VALUE(forceModify_, forceModify) };


    // forceRestart Field Functions 
    bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
    void deleteForceRestart() { this->forceRestart_ = nullptr;};
    inline string forceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setForceRestart(string forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The valid values of the parameter.
    std::shared_ptr<string> checkingCode_ = nullptr;
    // Indicates whether the parameter can be modified. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> forceModify_ = nullptr;
    // Indicates whether you must restart the instance for the modifications to take effect. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> forceRestart_ = nullptr;
    // The description of the parameter.
    std::shared_ptr<string> parameterDescription_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> parameterName_ = nullptr;
    // The default value of the parameter.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
