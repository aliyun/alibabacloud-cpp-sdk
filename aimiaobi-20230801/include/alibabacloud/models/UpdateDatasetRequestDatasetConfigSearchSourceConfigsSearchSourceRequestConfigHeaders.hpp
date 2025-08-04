// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETREQUESTDATASETCONFIGSEARCHSOURCECONFIGSSEARCHSOURCEREQUESTCONFIGHEADERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETREQUESTDATASETCONFIGSEARCHSOURCECONFIGSSEARCHSOURCEREQUESTCONFIGHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueFormat, valueFormat_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueFormat, valueFormat_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders() = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders(const UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders &) = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders(UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders &&) = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders() = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& operator=(const UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders &) = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& operator=(UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->value_ != nullptr && this->valueFormat_ != nullptr && this->valueType_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueFormat Field Functions 
    bool hasValueFormat() const { return this->valueFormat_ != nullptr;};
    void deleteValueFormat() { this->valueFormat_ = nullptr;};
    inline string valueFormat() const { DARABONBA_PTR_GET_DEFAULT(valueFormat_, "") };
    inline UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& setValueFormat(string valueFormat) { DARABONBA_PTR_SET_VALUE(valueFormat_, valueFormat) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


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
