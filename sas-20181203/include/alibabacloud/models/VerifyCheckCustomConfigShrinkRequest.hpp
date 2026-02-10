// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckCustomConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckCustomConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CustomCheckConfig, customCheckConfigShrink_);
      DARABONBA_PTR_TO_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_TO_JSON(RepairConfigs, repairConfigs_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckCustomConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CustomCheckConfig, customCheckConfigShrink_);
      DARABONBA_PTR_FROM_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_FROM_JSON(RepairConfigs, repairConfigs_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    VerifyCheckCustomConfigShrinkRequest() = default ;
    VerifyCheckCustomConfigShrinkRequest(const VerifyCheckCustomConfigShrinkRequest &) = default ;
    VerifyCheckCustomConfigShrinkRequest(VerifyCheckCustomConfigShrinkRequest &&) = default ;
    VerifyCheckCustomConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckCustomConfigShrinkRequest() = default ;
    VerifyCheckCustomConfigShrinkRequest& operator=(const VerifyCheckCustomConfigShrinkRequest &) = default ;
    VerifyCheckCustomConfigShrinkRequest& operator=(VerifyCheckCustomConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RepairConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RepairConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(FlowId, flowId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, RepairConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      RepairConfigs() = default ;
      RepairConfigs(const RepairConfigs &) = default ;
      RepairConfigs(RepairConfigs &&) = default ;
      RepairConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RepairConfigs() = default ;
      RepairConfigs& operator=(const RepairConfigs &) = default ;
      RepairConfigs& operator=(RepairConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->flowId_ == nullptr
        && this->name_ == nullptr && this->operation_ == nullptr && this->value_ == nullptr; };
      // flowId Field Functions 
      bool hasFlowId() const { return this->flowId_ != nullptr;};
      void deleteFlowId() { this->flowId_ = nullptr;};
      inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
      inline RepairConfigs& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RepairConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline RepairConfigs& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline RepairConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // ID of the repair process during the repair.
      shared_ptr<string> flowId_ {};
      // Name of the repair parameter for the check item, unique within the same check item.
      shared_ptr<string> name_ {};
      // Operation type for the custom configuration item of the check item. Only pass DELETE when deleting; no need to pass for creation or update.
      shared_ptr<string> operation_ {};
      // User-configured value string for the repair parameter of the check item.
      shared_ptr<string> value_ {};
    };

    class CustomConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, CustomConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      CustomConfigs() = default ;
      CustomConfigs(const CustomConfigs &) = default ;
      CustomConfigs(CustomConfigs &&) = default ;
      CustomConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomConfigs() = default ;
      CustomConfigs& operator=(const CustomConfigs &) = default ;
      CustomConfigs& operator=(CustomConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->operation_ == nullptr && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CustomConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline CustomConfigs& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline CustomConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Name of the custom configuration item for the check item, unique within the same check item.
      shared_ptr<string> name_ {};
      // Operation type for the custom configuration item of the check item. Only pass DELETE when deleting; no need to pass for creation or update.
      shared_ptr<string> operation_ {};
      // User-configured value string for the custom configuration item of the check item.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->checkId_ == nullptr
        && this->customCheckConfigShrink_ == nullptr && this->customConfigs_ == nullptr && this->repairConfigs_ == nullptr && this->type_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline VerifyCheckCustomConfigShrinkRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // customCheckConfigShrink Field Functions 
    bool hasCustomCheckConfigShrink() const { return this->customCheckConfigShrink_ != nullptr;};
    void deleteCustomCheckConfigShrink() { this->customCheckConfigShrink_ = nullptr;};
    inline string getCustomCheckConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(customCheckConfigShrink_, "") };
    inline VerifyCheckCustomConfigShrinkRequest& setCustomCheckConfigShrink(string customCheckConfigShrink) { DARABONBA_PTR_SET_VALUE(customCheckConfigShrink_, customCheckConfigShrink) };


    // customConfigs Field Functions 
    bool hasCustomConfigs() const { return this->customConfigs_ != nullptr;};
    void deleteCustomConfigs() { this->customConfigs_ = nullptr;};
    inline const vector<VerifyCheckCustomConfigShrinkRequest::CustomConfigs> & getCustomConfigs() const { DARABONBA_PTR_GET_CONST(customConfigs_, vector<VerifyCheckCustomConfigShrinkRequest::CustomConfigs>) };
    inline vector<VerifyCheckCustomConfigShrinkRequest::CustomConfigs> getCustomConfigs() { DARABONBA_PTR_GET(customConfigs_, vector<VerifyCheckCustomConfigShrinkRequest::CustomConfigs>) };
    inline VerifyCheckCustomConfigShrinkRequest& setCustomConfigs(const vector<VerifyCheckCustomConfigShrinkRequest::CustomConfigs> & customConfigs) { DARABONBA_PTR_SET_VALUE(customConfigs_, customConfigs) };
    inline VerifyCheckCustomConfigShrinkRequest& setCustomConfigs(vector<VerifyCheckCustomConfigShrinkRequest::CustomConfigs> && customConfigs) { DARABONBA_PTR_SET_RVALUE(customConfigs_, customConfigs) };


    // repairConfigs Field Functions 
    bool hasRepairConfigs() const { return this->repairConfigs_ != nullptr;};
    void deleteRepairConfigs() { this->repairConfigs_ = nullptr;};
    inline const vector<VerifyCheckCustomConfigShrinkRequest::RepairConfigs> & getRepairConfigs() const { DARABONBA_PTR_GET_CONST(repairConfigs_, vector<VerifyCheckCustomConfigShrinkRequest::RepairConfigs>) };
    inline vector<VerifyCheckCustomConfigShrinkRequest::RepairConfigs> getRepairConfigs() { DARABONBA_PTR_GET(repairConfigs_, vector<VerifyCheckCustomConfigShrinkRequest::RepairConfigs>) };
    inline VerifyCheckCustomConfigShrinkRequest& setRepairConfigs(const vector<VerifyCheckCustomConfigShrinkRequest::RepairConfigs> & repairConfigs) { DARABONBA_PTR_SET_VALUE(repairConfigs_, repairConfigs) };
    inline VerifyCheckCustomConfigShrinkRequest& setRepairConfigs(vector<VerifyCheckCustomConfigShrinkRequest::RepairConfigs> && repairConfigs) { DARABONBA_PTR_SET_RVALUE(repairConfigs_, repairConfigs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline VerifyCheckCustomConfigShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Check item ID.
    shared_ptr<int64_t> checkId_ {};
    // Custom check item to validate input parameters.
    shared_ptr<string> customCheckConfigShrink_ {};
    // List of custom configuration items for the check item.
    shared_ptr<vector<VerifyCheckCustomConfigShrinkRequest::CustomConfigs>> customConfigs_ {};
    // Repair parameters supported by the check item\\"s repair function.
    shared_ptr<vector<VerifyCheckCustomConfigShrinkRequest::RepairConfigs>> repairConfigs_ {};
    // Situation Awareness parameter validation types: 
    // - **REPAIR_CONFIG**: Repair and custom parameter validation (default) 
    // - **CHECK_ITEM_CONFIG**: Custom check item validation
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
