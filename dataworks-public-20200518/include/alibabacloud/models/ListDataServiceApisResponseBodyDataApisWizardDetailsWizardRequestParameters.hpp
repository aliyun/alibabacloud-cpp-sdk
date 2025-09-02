// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPISRESPONSEBODYDATAAPISWIZARDDETAILSWIZARDREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPISRESPONSEBODYDATAAPISWIZARDDETAILSWIZARDREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_TO_JSON(IsRequiredParameter, isRequiredParameter_);
      DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterOperator, parameterOperator_);
      DARABONBA_PTR_TO_JSON(ParameterPosition, parameterPosition_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_FROM_JSON(IsRequiredParameter, isRequiredParameter_);
      DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterOperator, parameterOperator_);
      DARABONBA_PTR_FROM_JSON(ParameterPosition, parameterPosition_);
    };
    ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters() = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters(const ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters &) = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters(ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters &&) = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters() = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& operator=(const ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters &) = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& operator=(ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->defaultValue_ != nullptr && this->exampleValue_ != nullptr && this->isRequiredParameter_ != nullptr && this->parameterDataType_ != nullptr && this->parameterDescription_ != nullptr
        && this->parameterName_ != nullptr && this->parameterOperator_ != nullptr && this->parameterPosition_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // exampleValue Field Functions 
    bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
    void deleteExampleValue() { this->exampleValue_ = nullptr;};
    inline string exampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


    // isRequiredParameter Field Functions 
    bool hasIsRequiredParameter() const { return this->isRequiredParameter_ != nullptr;};
    void deleteIsRequiredParameter() { this->isRequiredParameter_ = nullptr;};
    inline bool isRequiredParameter() const { DARABONBA_PTR_GET_DEFAULT(isRequiredParameter_, false) };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& setIsRequiredParameter(bool isRequiredParameter) { DARABONBA_PTR_SET_VALUE(isRequiredParameter_, isRequiredParameter) };


    // parameterDataType Field Functions 
    bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
    void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
    inline int32_t parameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, 0) };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& setParameterDataType(int32_t parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterOperator Field Functions 
    bool hasParameterOperator() const { return this->parameterOperator_ != nullptr;};
    void deleteParameterOperator() { this->parameterOperator_ = nullptr;};
    inline int32_t parameterOperator() const { DARABONBA_PTR_GET_DEFAULT(parameterOperator_, 0) };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& setParameterOperator(int32_t parameterOperator) { DARABONBA_PTR_SET_VALUE(parameterOperator_, parameterOperator) };


    // parameterPosition Field Functions 
    bool hasParameterPosition() const { return this->parameterPosition_ != nullptr;};
    void deleteParameterPosition() { this->parameterPosition_ = nullptr;};
    inline int32_t parameterPosition() const { DARABONBA_PTR_GET_DEFAULT(parameterPosition_, 0) };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters& setParameterPosition(int32_t parameterPosition) { DARABONBA_PTR_SET_VALUE(parameterPosition_, parameterPosition) };


  protected:
    // The name of the associated field. This parameter is supported only if the API is generated in wizard mode.
    std::shared_ptr<string> columnName_ = nullptr;
    // The default value.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // The sample value.
    std::shared_ptr<string> exampleValue_ = nullptr;
    // Indicates whether the parameter is required.
    std::shared_ptr<bool> isRequiredParameter_ = nullptr;
    // The data type of the parameter. Valid values:
    // 
    // *   0: String
    // *   1: Int
    // *   2: Long
    // *   3: Float
    // *   4: Double
    // *   5: Boolean
    // *   6: StringList
    // *   7: IntList
    // *   8: LongList
    // *   9: FloatList
    // *   10: DoubleList
    // *   11: BooleanList
    std::shared_ptr<int32_t> parameterDataType_ = nullptr;
    // The description.
    std::shared_ptr<string> parameterDescription_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> parameterName_ = nullptr;
    // The operator used for the value of the parameter. Valid values: 0, 1, 2, and 3. The value 0 indicates the Equal operator. The value 1 indicates the Like operator. The value 2 indicates the Const operator. The value 3 indicates the In operator. APIs generated in wizard mode support the Equal, Like, and In operators. APIs generated in script mode support the Equal operator. APIs generated by registration support the Equal and Const operators.
    std::shared_ptr<int32_t> parameterOperator_ = nullptr;
    // The position of the parameter. Valid values: 0, 1, 2, and 3. The value 0 indicates that the parameter is in the URL path of the request. The value 1 indicates that the parameter is in the Query parameter of the request URL. The value 2 indicates that the parameter is in the request header. The value 3 indicates that the parameter is in the request body. APIs generated in wizard or script mode support only the Query position. APIs generated by registration whose request method is GET or DELETE support the Query and Head positions. APIs generated by registration whose request method is PUT or POST support the Query, Head, and Body positions.
    std::shared_ptr<int32_t> parameterPosition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
