// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCHECKRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCHECKRULEREQUEST_HPP_
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
  class ModifyCheckRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCheckRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddInstanceList, addInstanceList_);
      DARABONBA_PTR_TO_JSON(DeleteInstanceList, deleteInstanceList_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCheckRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddInstanceList, addInstanceList_);
      DARABONBA_PTR_FROM_JSON(DeleteInstanceList, deleteInstanceList_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    ModifyCheckRuleRequest() = default ;
    ModifyCheckRuleRequest(const ModifyCheckRuleRequest &) = default ;
    ModifyCheckRuleRequest(ModifyCheckRuleRequest &&) = default ;
    ModifyCheckRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCheckRuleRequest() = default ;
    ModifyCheckRuleRequest& operator=(const ModifyCheckRuleRequest &) = default ;
    ModifyCheckRuleRequest& operator=(ModifyCheckRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteInstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteInstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      DeleteInstanceList() = default ;
      DeleteInstanceList(const DeleteInstanceList &) = default ;
      DeleteInstanceList(DeleteInstanceList &&) = default ;
      DeleteInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteInstanceList() = default ;
      DeleteInstanceList& operator=(const DeleteInstanceList &) = default ;
      DeleteInstanceList& operator=(DeleteInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DeleteInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DeleteInstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The instance ID of the asset.
      shared_ptr<string> instanceId_ {};
      // The region ID of the asset.
      shared_ptr<string> regionId_ {};
    };

    class AddInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddInstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, AddInstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      AddInstanceList() = default ;
      AddInstanceList(const AddInstanceList &) = default ;
      AddInstanceList(AddInstanceList &&) = default ;
      AddInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddInstanceList() = default ;
      AddInstanceList& operator=(const AddInstanceList &) = default ;
      AddInstanceList& operator=(AddInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AddInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AddInstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The instance ID of the asset.
      shared_ptr<string> instanceId_ {};
      // The region ID of the asset.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->addInstanceList_ == nullptr
        && this->deleteInstanceList_ == nullptr && this->remark_ == nullptr && this->ruleId_ == nullptr && this->ruleType_ == nullptr && this->scopeType_ == nullptr; };
    // addInstanceList Field Functions 
    bool hasAddInstanceList() const { return this->addInstanceList_ != nullptr;};
    void deleteAddInstanceList() { this->addInstanceList_ = nullptr;};
    inline const vector<ModifyCheckRuleRequest::AddInstanceList> & getAddInstanceList() const { DARABONBA_PTR_GET_CONST(addInstanceList_, vector<ModifyCheckRuleRequest::AddInstanceList>) };
    inline vector<ModifyCheckRuleRequest::AddInstanceList> getAddInstanceList() { DARABONBA_PTR_GET(addInstanceList_, vector<ModifyCheckRuleRequest::AddInstanceList>) };
    inline ModifyCheckRuleRequest& setAddInstanceList(const vector<ModifyCheckRuleRequest::AddInstanceList> & addInstanceList) { DARABONBA_PTR_SET_VALUE(addInstanceList_, addInstanceList) };
    inline ModifyCheckRuleRequest& setAddInstanceList(vector<ModifyCheckRuleRequest::AddInstanceList> && addInstanceList) { DARABONBA_PTR_SET_RVALUE(addInstanceList_, addInstanceList) };


    // deleteInstanceList Field Functions 
    bool hasDeleteInstanceList() const { return this->deleteInstanceList_ != nullptr;};
    void deleteDeleteInstanceList() { this->deleteInstanceList_ = nullptr;};
    inline const vector<ModifyCheckRuleRequest::DeleteInstanceList> & getDeleteInstanceList() const { DARABONBA_PTR_GET_CONST(deleteInstanceList_, vector<ModifyCheckRuleRequest::DeleteInstanceList>) };
    inline vector<ModifyCheckRuleRequest::DeleteInstanceList> getDeleteInstanceList() { DARABONBA_PTR_GET(deleteInstanceList_, vector<ModifyCheckRuleRequest::DeleteInstanceList>) };
    inline ModifyCheckRuleRequest& setDeleteInstanceList(const vector<ModifyCheckRuleRequest::DeleteInstanceList> & deleteInstanceList) { DARABONBA_PTR_SET_VALUE(deleteInstanceList_, deleteInstanceList) };
    inline ModifyCheckRuleRequest& setDeleteInstanceList(vector<ModifyCheckRuleRequest::DeleteInstanceList> && deleteInstanceList) { DARABONBA_PTR_SET_RVALUE(deleteInstanceList_, deleteInstanceList) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModifyCheckRuleRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ModifyCheckRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ModifyCheckRuleRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline ModifyCheckRuleRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    // The list of instances to be added in this rule update. This parameter does not need to be passed if there are no instances to add.
    shared_ptr<vector<ModifyCheckRuleRequest::AddInstanceList>> addInstanceList_ {};
    // The list of instances to be removed in this rule update. This parameter does not need to be passed if there are no instances to remove.
    shared_ptr<vector<ModifyCheckRuleRequest::DeleteInstanceList>> deleteInstanceList_ {};
    // Remarks.
    shared_ptr<string> remark_ {};
    // Rule ID.
    // > You can obtain this parameter by calling the [ListCheckRule](https://help.aliyun.com/document_detail/2590599.html) API.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ruleId_ {};
    // Rule type. Default is **WHITE**. Values:
    // - **WHITE**: Add to whitelist
    shared_ptr<string> ruleType_ {};
    // The scope of effect for modifying the rule:
    // - **INSTANCE**: Instance
    // - **ITEM**: Check item
    shared_ptr<string> scopeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
