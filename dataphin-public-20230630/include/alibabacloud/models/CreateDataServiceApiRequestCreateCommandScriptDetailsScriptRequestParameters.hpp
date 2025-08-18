// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUESTCREATECOMMANDSCRIPTDETAILSSCRIPTREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUESTCREATECOMMANDSCRIPTDETAILSSCRIPTREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_TO_JSON(IsRequiredParameter, isRequiredParameter_);
      DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterValueType, parameterValueType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_FROM_JSON(IsRequiredParameter, isRequiredParameter_);
      DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterValueType, parameterValueType_);
    };
    CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters() = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters(const CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters &) = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters(CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters &&) = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters() = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters& operator=(const CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters &) = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters& operator=(CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exampleValue_ != nullptr
        && this->isRequiredParameter_ != nullptr && this->parameterDataType_ != nullptr && this->parameterDescription_ != nullptr && this->parameterName_ != nullptr && this->parameterValueType_ != nullptr; };
    // exampleValue Field Functions 
    bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
    void deleteExampleValue() { this->exampleValue_ = nullptr;};
    inline string exampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
    inline CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


    // isRequiredParameter Field Functions 
    bool hasIsRequiredParameter() const { return this->isRequiredParameter_ != nullptr;};
    void deleteIsRequiredParameter() { this->isRequiredParameter_ = nullptr;};
    inline bool isRequiredParameter() const { DARABONBA_PTR_GET_DEFAULT(isRequiredParameter_, false) };
    inline CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters& setIsRequiredParameter(bool isRequiredParameter) { DARABONBA_PTR_SET_VALUE(isRequiredParameter_, isRequiredParameter) };


    // parameterDataType Field Functions 
    bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
    void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
    inline string parameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, "") };
    inline CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters& setParameterDataType(string parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterValueType Field Functions 
    bool hasParameterValueType() const { return this->parameterValueType_ != nullptr;};
    void deleteParameterValueType() { this->parameterValueType_ = nullptr;};
    inline string parameterValueType() const { DARABONBA_PTR_GET_DEFAULT(parameterValueType_, "") };
    inline CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters& setParameterValueType(string parameterValueType) { DARABONBA_PTR_SET_VALUE(parameterValueType_, parameterValueType) };


  protected:
    std::shared_ptr<string> exampleValue_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isRequiredParameter_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parameterDataType_ = nullptr;
    std::shared_ptr<string> parameterDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parameterName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parameterValueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
