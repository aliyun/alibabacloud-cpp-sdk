// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLANGFUSESECURITYIPLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLANGFUSESECURITYIPLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyLangfuseSecurityIPListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLangfuseSecurityIPListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLangfuseSecurityIPListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
    };
    ModifyLangfuseSecurityIPListRequest() = default ;
    ModifyLangfuseSecurityIPListRequest(const ModifyLangfuseSecurityIPListRequest &) = default ;
    ModifyLangfuseSecurityIPListRequest(ModifyLangfuseSecurityIPListRequest &&) = default ;
    ModifyLangfuseSecurityIPListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLangfuseSecurityIPListRequest() = default ;
    ModifyLangfuseSecurityIPListRequest& operator=(const ModifyLangfuseSecurityIPListRequest &) = default ;
    ModifyLangfuseSecurityIPListRequest& operator=(ModifyLangfuseSecurityIPListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->groupName_ == nullptr && this->modifyMode_ == nullptr && this->regionId_ == nullptr && this->securityIPList_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyLangfuseSecurityIPListRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyLangfuseSecurityIPListRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifyLangfuseSecurityIPListRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLangfuseSecurityIPListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline ModifyLangfuseSecurityIPListRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


  protected:
    // The Langfuse instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the whitelist group.
    shared_ptr<string> groupName_ {};
    // The modification mode. Valid values:
    // 
    // - 0: overwrite
    // - 1: increase
    // - 2: delete
    // 
    // > Specify 0 to use the overwrite mode.
    shared_ptr<string> modifyMode_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IP addresses to add to the instance whitelist. Separate multiple IP addresses with commas (,). For example, 192.168.0.0/24 indicates that all IP addresses in the 192.168.0.XX range are allowed to access the instance.
    shared_ptr<string> securityIPList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
