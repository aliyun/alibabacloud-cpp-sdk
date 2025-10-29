// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATANODECONFIGURATIONOUTPUTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATANODECONFIGURATIONOUTPUTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFileResponseBodyDataNodeConfigurationOutputParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileResponseBodyDataNodeConfigurationOutputParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileResponseBodyDataNodeConfigurationOutputParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetFileResponseBodyDataNodeConfigurationOutputParameters() = default ;
    GetFileResponseBodyDataNodeConfigurationOutputParameters(const GetFileResponseBodyDataNodeConfigurationOutputParameters &) = default ;
    GetFileResponseBodyDataNodeConfigurationOutputParameters(GetFileResponseBodyDataNodeConfigurationOutputParameters &&) = default ;
    GetFileResponseBodyDataNodeConfigurationOutputParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileResponseBodyDataNodeConfigurationOutputParameters() = default ;
    GetFileResponseBodyDataNodeConfigurationOutputParameters& operator=(const GetFileResponseBodyDataNodeConfigurationOutputParameters &) = default ;
    GetFileResponseBodyDataNodeConfigurationOutputParameters& operator=(GetFileResponseBodyDataNodeConfigurationOutputParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->parameterName_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetFileResponseBodyDataNodeConfigurationOutputParameters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline GetFileResponseBodyDataNodeConfigurationOutputParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetFileResponseBodyDataNodeConfigurationOutputParameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetFileResponseBodyDataNodeConfigurationOutputParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The description of the output parameter of the node.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the output parameter of the node.
    // 
    // This parameter corresponds to the Parameter Name parameter in the Output Parameters table in the Input and Output Parameters section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> parameterName_ = nullptr;
    // The type of the output parameter of the node. Valid values:
    // 
    // *   1: indicates a constant.
    // *   2: indicates a variable.
    // *   3: indicates a pass-through variable.
    // 
    // This parameter corresponds to the Type parameter in the Output Parameters table in the Input and Output Parameters section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> type_ = nullptr;
    // The value of the output parameter of the node.
    // 
    // This parameter corresponds to the Value parameter in the Output Parameters table in the Input and Output Parameters section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
