// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOPENSEARCHWHITELISTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOPENSEARCHWHITELISTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyOpenSearchWhitelistGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOpenSearchWhitelistGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IPs, IPs_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOpenSearchWhitelistGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IPs, IPs_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    ModifyOpenSearchWhitelistGroupRequest() = default ;
    ModifyOpenSearchWhitelistGroupRequest(const ModifyOpenSearchWhitelistGroupRequest &) = default ;
    ModifyOpenSearchWhitelistGroupRequest(ModifyOpenSearchWhitelistGroupRequest &&) = default ;
    ModifyOpenSearchWhitelistGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOpenSearchWhitelistGroupRequest() = default ;
    ModifyOpenSearchWhitelistGroupRequest& operator=(const ModifyOpenSearchWhitelistGroupRequest &) = default ;
    ModifyOpenSearchWhitelistGroupRequest& operator=(ModifyOpenSearchWhitelistGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->groupId_ == nullptr && this->IPs_ == nullptr && this->regionId_ == nullptr && this->remark_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyOpenSearchWhitelistGroupRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyOpenSearchWhitelistGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // IPs Field Functions 
    bool hasIPs() const { return this->IPs_ != nullptr;};
    void deleteIPs() { this->IPs_ = nullptr;};
    inline string getIPs() const { DARABONBA_PTR_GET_DEFAULT(IPs_, "") };
    inline ModifyOpenSearchWhitelistGroupRequest& setIPs(string IPs) { DARABONBA_PTR_SET_VALUE(IPs_, IPs) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyOpenSearchWhitelistGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModifyOpenSearchWhitelistGroupRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The list of source IP address restrictions.
    // 
    // This parameter is required.
    shared_ptr<string> IPs_ {};
    // The region in which the instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The remarks.
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
