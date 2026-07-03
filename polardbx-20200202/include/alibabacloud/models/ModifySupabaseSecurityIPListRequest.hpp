// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSUPABASESECURITYIPLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSUPABASESECURITYIPLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifySupabaseSecurityIPListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySupabaseSecurityIPListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySupabaseSecurityIPListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
    };
    ModifySupabaseSecurityIPListRequest() = default ;
    ModifySupabaseSecurityIPListRequest(const ModifySupabaseSecurityIPListRequest &) = default ;
    ModifySupabaseSecurityIPListRequest(ModifySupabaseSecurityIPListRequest &&) = default ;
    ModifySupabaseSecurityIPListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySupabaseSecurityIPListRequest() = default ;
    ModifySupabaseSecurityIPListRequest& operator=(const ModifySupabaseSecurityIPListRequest &) = default ;
    ModifySupabaseSecurityIPListRequest& operator=(ModifySupabaseSecurityIPListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->groupName_ == nullptr && this->modifyMode_ == nullptr && this->regionId_ == nullptr && this->securityIPList_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifySupabaseSecurityIPListRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifySupabaseSecurityIPListRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifySupabaseSecurityIPListRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySupabaseSecurityIPListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline ModifySupabaseSecurityIPListRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


  protected:
    // The instance name.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The whitelist group name.
    shared_ptr<string> groupName_ {};
    // The modification mode. Valid values:
    // - Cover: overwrites the existing whitelist.
    // - Append: appends entries to the existing whitelist.
    // - Delete: deletes entries from the existing whitelist.
    shared_ptr<string> modifyMode_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IP whitelist. Separate multiple IP addresses with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> securityIPList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
