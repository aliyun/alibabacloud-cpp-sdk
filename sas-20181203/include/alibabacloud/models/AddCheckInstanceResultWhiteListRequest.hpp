// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCHECKINSTANCERESULTWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCHECKINSTANCERESULTWHITELISTREQUEST_HPP_
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
  class AddCheckInstanceResultWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCheckInstanceResultWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckGroupId, checkGroupId_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, AddCheckInstanceResultWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckGroupId, checkGroupId_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    AddCheckInstanceResultWhiteListRequest() = default ;
    AddCheckInstanceResultWhiteListRequest(const AddCheckInstanceResultWhiteListRequest &) = default ;
    AddCheckInstanceResultWhiteListRequest(AddCheckInstanceResultWhiteListRequest &&) = default ;
    AddCheckInstanceResultWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCheckInstanceResultWhiteListRequest() = default ;
    AddCheckInstanceResultWhiteListRequest& operator=(const AddCheckInstanceResultWhiteListRequest &) = default ;
    AddCheckInstanceResultWhiteListRequest& operator=(AddCheckInstanceResultWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
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
      inline InstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline InstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The instance ID of the asset.
      // 
      // >  You can call the [ListCheckInstanceResult](~~ListCheckInstanceResult~~) operation to query the instance IDs of assets.
      shared_ptr<string> instanceId_ {};
      // The region ID of the asset.
      // 
      // >  You can call the [ListCheckInstanceResult](~~ListCheckInstanceResult~~) operation to query the region ID of the asset.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->checkGroupId_ == nullptr
        && this->checkId_ == nullptr && this->instanceIds_ == nullptr && this->instanceList_ == nullptr && this->remark_ == nullptr && this->ruleType_ == nullptr; };
    // checkGroupId Field Functions 
    bool hasCheckGroupId() const { return this->checkGroupId_ != nullptr;};
    void deleteCheckGroupId() { this->checkGroupId_ = nullptr;};
    inline string getCheckGroupId() const { DARABONBA_PTR_GET_DEFAULT(checkGroupId_, "") };
    inline AddCheckInstanceResultWhiteListRequest& setCheckGroupId(string checkGroupId) { DARABONBA_PTR_SET_VALUE(checkGroupId_, checkGroupId) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline AddCheckInstanceResultWhiteListRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline AddCheckInstanceResultWhiteListRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline AddCheckInstanceResultWhiteListRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<AddCheckInstanceResultWhiteListRequest::InstanceList> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<AddCheckInstanceResultWhiteListRequest::InstanceList>) };
    inline vector<AddCheckInstanceResultWhiteListRequest::InstanceList> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<AddCheckInstanceResultWhiteListRequest::InstanceList>) };
    inline AddCheckInstanceResultWhiteListRequest& setInstanceList(const vector<AddCheckInstanceResultWhiteListRequest::InstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline AddCheckInstanceResultWhiteListRequest& setInstanceList(vector<AddCheckInstanceResultWhiteListRequest::InstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddCheckInstanceResultWhiteListRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline AddCheckInstanceResultWhiteListRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The ID of the group to which the check item belongs.
    shared_ptr<string> checkGroupId_ {};
    // The ID of the check item.
    // 
    // >  You can call the [ListCheckResult](~~ListCheckResult~~) operation to query the IDs of check items.
    shared_ptr<int64_t> checkId_ {};
    // The instance IDs of the assets.
    shared_ptr<vector<string>> instanceIds_ {};
    // The asset instances.
    shared_ptr<vector<AddCheckInstanceResultWhiteListRequest::InstanceList>> instanceList_ {};
    // The description. The value of this parameter can be up to 65,535 bytes in length.
    shared_ptr<string> remark_ {};
    // The type of the rule. Default value: **WHITE**. Valid value:
    // 
    // *   WHITE: adds check items to the whitelist.
    shared_ptr<string> ruleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
