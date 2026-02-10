// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGREQUEST_HPP_
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
  class ChangeCheckCustomConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckCustomConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepairConfigs, repairConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckCustomConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepairConfigs, repairConfigs_);
    };
    ChangeCheckCustomConfigRequest() = default ;
    ChangeCheckCustomConfigRequest(const ChangeCheckCustomConfigRequest &) = default ;
    ChangeCheckCustomConfigRequest(ChangeCheckCustomConfigRequest &&) = default ;
    ChangeCheckCustomConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckCustomConfigRequest() = default ;
    ChangeCheckCustomConfigRequest& operator=(const ChangeCheckCustomConfigRequest &) = default ;
    ChangeCheckCustomConfigRequest& operator=(ChangeCheckCustomConfigRequest &&) = default ;
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
      // The ID of the fixing process.
      shared_ptr<string> flowId_ {};
      // The name of the parameter required for fixing a risk item, which is unique in a check item.
      shared_ptr<string> name_ {};
      // The operation that you want to perform on the custom configuration item. This parameter is required only if you want to delete the custom configuration item. To delete the custom configuration item, set the value to DELETE.
      shared_ptr<string> operation_ {};
      // The value of the parameter required for fixing a risk item. The value is a string.
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
      // The name of the custom configuration item. The name of a custom configuration item is unique in a check item.
      shared_ptr<string> name_ {};
      // The operation that you want to perform on the custom configuration item. This parameter is required only if you want to delete the custom configuration item. To delete the custom configuration item, set the value to DELETE.
      shared_ptr<string> operation_ {};
      // The value of the custom configuration item. The value is a string.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->checkId_ == nullptr
        && this->customConfigs_ == nullptr && this->regionId_ == nullptr && this->repairConfigs_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ChangeCheckCustomConfigRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // customConfigs Field Functions 
    bool hasCustomConfigs() const { return this->customConfigs_ != nullptr;};
    void deleteCustomConfigs() { this->customConfigs_ = nullptr;};
    inline const vector<ChangeCheckCustomConfigRequest::CustomConfigs> & getCustomConfigs() const { DARABONBA_PTR_GET_CONST(customConfigs_, vector<ChangeCheckCustomConfigRequest::CustomConfigs>) };
    inline vector<ChangeCheckCustomConfigRequest::CustomConfigs> getCustomConfigs() { DARABONBA_PTR_GET(customConfigs_, vector<ChangeCheckCustomConfigRequest::CustomConfigs>) };
    inline ChangeCheckCustomConfigRequest& setCustomConfigs(const vector<ChangeCheckCustomConfigRequest::CustomConfigs> & customConfigs) { DARABONBA_PTR_SET_VALUE(customConfigs_, customConfigs) };
    inline ChangeCheckCustomConfigRequest& setCustomConfigs(vector<ChangeCheckCustomConfigRequest::CustomConfigs> && customConfigs) { DARABONBA_PTR_SET_RVALUE(customConfigs_, customConfigs) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ChangeCheckCustomConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repairConfigs Field Functions 
    bool hasRepairConfigs() const { return this->repairConfigs_ != nullptr;};
    void deleteRepairConfigs() { this->repairConfigs_ = nullptr;};
    inline const vector<ChangeCheckCustomConfigRequest::RepairConfigs> & getRepairConfigs() const { DARABONBA_PTR_GET_CONST(repairConfigs_, vector<ChangeCheckCustomConfigRequest::RepairConfigs>) };
    inline vector<ChangeCheckCustomConfigRequest::RepairConfigs> getRepairConfigs() { DARABONBA_PTR_GET(repairConfigs_, vector<ChangeCheckCustomConfigRequest::RepairConfigs>) };
    inline ChangeCheckCustomConfigRequest& setRepairConfigs(const vector<ChangeCheckCustomConfigRequest::RepairConfigs> & repairConfigs) { DARABONBA_PTR_SET_VALUE(repairConfigs_, repairConfigs) };
    inline ChangeCheckCustomConfigRequest& setRepairConfigs(vector<ChangeCheckCustomConfigRequest::RepairConfigs> && repairConfigs) { DARABONBA_PTR_SET_RVALUE(repairConfigs_, repairConfigs) };


  protected:
    // The ID of the check item.
    // 
    // > You can call the [ListCheckResult](~~ListCheckResult~~) operation to query the IDs of check items.
    shared_ptr<int64_t> checkId_ {};
    // The custom configuration items of the check item.
    shared_ptr<vector<ChangeCheckCustomConfigRequest::CustomConfigs>> customConfigs_ {};
    // The region where the Security Center instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: International
    // *   **ap-southeast-1**: Singapore
    shared_ptr<string> regionId_ {};
    // The parameters required for fixing risk items.
    shared_ptr<vector<ChangeCheckCustomConfigRequest::RepairConfigs>> repairConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
