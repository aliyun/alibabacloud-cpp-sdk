// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATANODECONFIGURATIONINPUTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATANODECONFIGURATIONINPUTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFileResponseBodyDataNodeConfigurationInputParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileResponseBodyDataNodeConfigurationInputParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ValueSource, valueSource_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileResponseBodyDataNodeConfigurationInputParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ValueSource, valueSource_);
    };
    GetFileResponseBodyDataNodeConfigurationInputParameters() = default ;
    GetFileResponseBodyDataNodeConfigurationInputParameters(const GetFileResponseBodyDataNodeConfigurationInputParameters &) = default ;
    GetFileResponseBodyDataNodeConfigurationInputParameters(GetFileResponseBodyDataNodeConfigurationInputParameters &&) = default ;
    GetFileResponseBodyDataNodeConfigurationInputParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileResponseBodyDataNodeConfigurationInputParameters() = default ;
    GetFileResponseBodyDataNodeConfigurationInputParameters& operator=(const GetFileResponseBodyDataNodeConfigurationInputParameters &) = default ;
    GetFileResponseBodyDataNodeConfigurationInputParameters& operator=(GetFileResponseBodyDataNodeConfigurationInputParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameterName_ != nullptr
        && this->valueSource_ != nullptr; };
    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline GetFileResponseBodyDataNodeConfigurationInputParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // valueSource Field Functions 
    bool hasValueSource() const { return this->valueSource_ != nullptr;};
    void deleteValueSource() { this->valueSource_ = nullptr;};
    inline string valueSource() const { DARABONBA_PTR_GET_DEFAULT(valueSource_, "") };
    inline GetFileResponseBodyDataNodeConfigurationInputParameters& setValueSource(string valueSource) { DARABONBA_PTR_SET_VALUE(valueSource_, valueSource) };


  protected:
    // The name of the input parameter of the node. In the code, you can use the ${...} method to reference the input parameter of the node.
    // 
    // This parameter corresponds to the Parameter Name parameter in the Input Parameters table in the Input and Output Parameters section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> parameterName_ = nullptr;
    // The value source of the input parameter of the node.
    // 
    // This parameter corresponds to the Value Source parameter in the Input Parameters table in the Input and Output Parameters section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> valueSource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
