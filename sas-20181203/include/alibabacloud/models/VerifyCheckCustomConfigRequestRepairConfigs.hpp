// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGREQUESTREPAIRCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGREQUESTREPAIRCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckCustomConfigRequestRepairConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckCustomConfigRequestRepairConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckCustomConfigRequestRepairConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    VerifyCheckCustomConfigRequestRepairConfigs() = default ;
    VerifyCheckCustomConfigRequestRepairConfigs(const VerifyCheckCustomConfigRequestRepairConfigs &) = default ;
    VerifyCheckCustomConfigRequestRepairConfigs(VerifyCheckCustomConfigRequestRepairConfigs &&) = default ;
    VerifyCheckCustomConfigRequestRepairConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckCustomConfigRequestRepairConfigs() = default ;
    VerifyCheckCustomConfigRequestRepairConfigs& operator=(const VerifyCheckCustomConfigRequestRepairConfigs &) = default ;
    VerifyCheckCustomConfigRequestRepairConfigs& operator=(VerifyCheckCustomConfigRequestRepairConfigs &&) = default ;
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
    inline VerifyCheckCustomConfigRequestRepairConfigs& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline VerifyCheckCustomConfigRequestRepairConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline VerifyCheckCustomConfigRequestRepairConfigs& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline VerifyCheckCustomConfigRequestRepairConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // ID of the repair process during the repair.
    std::shared_ptr<string> flowId_ = nullptr;
    // Name of the repair parameter for the check item, unique within the same check item.
    std::shared_ptr<string> name_ = nullptr;
    // Operation type for the custom configuration item of the check item. Only pass DELETE when deleting; no need to pass for creation or update.
    std::shared_ptr<string> operation_ = nullptr;
    // User-configured value string for the repair parameter of the check item.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
