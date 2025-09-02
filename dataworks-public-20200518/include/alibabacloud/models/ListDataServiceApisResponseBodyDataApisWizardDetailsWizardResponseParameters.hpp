// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPISRESPONSEBODYDATAAPISWIZARDDETAILSWIZARDRESPONSEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPISRESPONSEBODYDATAAPISWIZARDDETAILSWIZARDRESPONSEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
    };
    ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters() = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters(const ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters &) = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters(ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters &&) = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters() = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters& operator=(const ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters &) = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters& operator=(ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->exampleValue_ != nullptr && this->parameterDataType_ != nullptr && this->parameterDescription_ != nullptr && this->parameterName_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // exampleValue Field Functions 
    bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
    void deleteExampleValue() { this->exampleValue_ = nullptr;};
    inline string exampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


    // parameterDataType Field Functions 
    bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
    void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
    inline int32_t parameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, 0) };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters& setParameterDataType(int32_t parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


  protected:
    // The name of the associated field. This parameter is supported only if the API is generated in wizard mode.
    std::shared_ptr<string> columnName_ = nullptr;
    // The sample value.
    std::shared_ptr<string> exampleValue_ = nullptr;
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
