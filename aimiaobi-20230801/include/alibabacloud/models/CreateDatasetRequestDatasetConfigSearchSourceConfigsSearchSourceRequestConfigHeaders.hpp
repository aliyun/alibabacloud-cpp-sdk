// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUESTDATASETCONFIGSEARCHSOURCECONFIGSSEARCHSOURCEREQUESTCONFIGHEADERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUESTDATASETCONFIGSEARCHSOURCECONFIGSSEARCHSOURCEREQUESTCONFIGHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueFormat, valueFormat_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueFormat, valueFormat_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders() = default ;
    CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders(const CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders &) = default ;
    CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders(CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders &&) = default ;
    CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders() = default ;
    CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& operator=(const CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders &) = default ;
    CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& operator=(CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr && return this->valueFormat_ == nullptr && return this->valueType_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueFormat Field Functions 
    bool hasValueFormat() const { return this->valueFormat_ != nullptr;};
    void deleteValueFormat() { this->valueFormat_ = nullptr;};
    inline string valueFormat() const { DARABONBA_PTR_GET_DEFAULT(valueFormat_, "") };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& setValueFormat(string valueFormat) { DARABONBA_PTR_SET_VALUE(valueFormat_, valueFormat) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> valueFormat_ = nullptr;
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
