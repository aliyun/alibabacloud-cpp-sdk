// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGREQUESTREPAIRCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGREQUESTREPAIRCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeCheckCustomConfigRequestRepairConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckCustomConfigRequestRepairConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckCustomConfigRequestRepairConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ChangeCheckCustomConfigRequestRepairConfigs() = default ;
    ChangeCheckCustomConfigRequestRepairConfigs(const ChangeCheckCustomConfigRequestRepairConfigs &) = default ;
    ChangeCheckCustomConfigRequestRepairConfigs(ChangeCheckCustomConfigRequestRepairConfigs &&) = default ;
    ChangeCheckCustomConfigRequestRepairConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckCustomConfigRequestRepairConfigs() = default ;
    ChangeCheckCustomConfigRequestRepairConfigs& operator=(const ChangeCheckCustomConfigRequestRepairConfigs &) = default ;
    ChangeCheckCustomConfigRequestRepairConfigs& operator=(ChangeCheckCustomConfigRequestRepairConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowId_ != nullptr
        && this->name_ != nullptr && this->operation_ != nullptr && this->value_ != nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline ChangeCheckCustomConfigRequestRepairConfigs& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ChangeCheckCustomConfigRequestRepairConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ChangeCheckCustomConfigRequestRepairConfigs& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ChangeCheckCustomConfigRequestRepairConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The ID of the fixing process.
    std::shared_ptr<string> flowId_ = nullptr;
    // The name of the parameter required for fixing a risk item, which is unique in a check item.
    std::shared_ptr<string> name_ = nullptr;
    // The operation that you want to perform on the custom configuration item. This parameter is required only if you want to delete the custom configuration item. To delete the custom configuration item, set the value to DELETE.
    std::shared_ptr<string> operation_ = nullptr;
    // The value of the parameter required for fixing a risk item. The value is a string.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
