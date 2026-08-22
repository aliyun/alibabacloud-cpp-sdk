// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPENSEARCHWHITELISTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPENSEARCHWHITELISTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateOpenSearchWhitelistGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpenSearchWhitelistGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IPs, IPs_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpenSearchWhitelistGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IPs, IPs_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    CreateOpenSearchWhitelistGroupRequest() = default ;
    CreateOpenSearchWhitelistGroupRequest(const CreateOpenSearchWhitelistGroupRequest &) = default ;
    CreateOpenSearchWhitelistGroupRequest(CreateOpenSearchWhitelistGroupRequest &&) = default ;
    CreateOpenSearchWhitelistGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpenSearchWhitelistGroupRequest() = default ;
    CreateOpenSearchWhitelistGroupRequest& operator=(const CreateOpenSearchWhitelistGroupRequest &) = default ;
    CreateOpenSearchWhitelistGroupRequest& operator=(CreateOpenSearchWhitelistGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->groupName_ == nullptr && this->IPs_ == nullptr && this->regionId_ == nullptr && this->remark_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateOpenSearchWhitelistGroupRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateOpenSearchWhitelistGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // IPs Field Functions 
    bool hasIPs() const { return this->IPs_ != nullptr;};
    void deleteIPs() { this->IPs_ = nullptr;};
    inline string getIPs() const { DARABONBA_PTR_GET_DEFAULT(IPs_, "") };
    inline CreateOpenSearchWhitelistGroupRequest& setIPs(string IPs) { DARABONBA_PTR_SET_VALUE(IPs_, IPs) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOpenSearchWhitelistGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateOpenSearchWhitelistGroupRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The name of the whitelist group.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The list of allowed source IP addresses.
    // 
    // This parameter is required.
    shared_ptr<string> IPs_ {};
    // The ID of the region in which the instance resides. > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196841.html) operation to query the regions supported by PolarDB-X, including region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The description of the group ID.
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
