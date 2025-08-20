// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTACKGROUPREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATESTACKGROUPREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateStackGroupRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStackGroupRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStackGroupRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    CreateStackGroupRequestParameters() = default ;
    CreateStackGroupRequestParameters(const CreateStackGroupRequestParameters &) = default ;
    CreateStackGroupRequestParameters(CreateStackGroupRequestParameters &&) = default ;
    CreateStackGroupRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStackGroupRequestParameters() = default ;
    CreateStackGroupRequestParameters& operator=(const CreateStackGroupRequestParameters &) = default ;
    CreateStackGroupRequestParameters& operator=(CreateStackGroupRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameterKey_ != nullptr
        && this->parameterValue_ != nullptr; };
    // parameterKey Field Functions 
    bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
    void deleteParameterKey() { this->parameterKey_ = nullptr;};
    inline string parameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
    inline CreateStackGroupRequestParameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline CreateStackGroupRequestParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The key of parameter N. If you do not specify the key and value of a parameter, ROS uses the default name and value that are defined in the template.
    // 
    // Maximum value of N: 200.
    // 
    // > Parameters is optional. If you specify Parameters, you must also specify Parameters.N.ParameterKey.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterKey_ = nullptr;
    // The value of parameter N.
    // 
    // Maximum value of N: 200.
    // 
    // > Parameters is optional. If you specify Parameters, you must also specify Parameters.N.ParameterValue.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
