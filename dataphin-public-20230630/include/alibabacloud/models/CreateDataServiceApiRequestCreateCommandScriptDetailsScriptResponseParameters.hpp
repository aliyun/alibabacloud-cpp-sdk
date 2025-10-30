// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUESTCREATECOMMANDSCRIPTDETAILSSCRIPTRESPONSEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUESTCREATECOMMANDSCRIPTDETAILSSCRIPTRESPONSEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
    };
    CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters() = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters(const CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters &) = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters(CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters &&) = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters() = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters& operator=(const CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters &) = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters& operator=(CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exampleValue_ == nullptr
        && return this->parameterDataType_ == nullptr && return this->parameterDescription_ == nullptr && return this->parameterName_ == nullptr; };
    // exampleValue Field Functions 
    bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
    void deleteExampleValue() { this->exampleValue_ = nullptr;};
    inline string exampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
    inline CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


    // parameterDataType Field Functions 
    bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
    void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
    inline string parameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, "") };
    inline CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters& setParameterDataType(string parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


  protected:
    std::shared_ptr<string> exampleValue_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parameterDataType_ = nullptr;
    std::shared_ptr<string> parameterDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parameterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
