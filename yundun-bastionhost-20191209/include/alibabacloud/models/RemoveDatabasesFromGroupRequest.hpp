// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEDATABASESFROMGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEDATABASESFROMGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class RemoveDatabasesFromGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveDatabasesFromGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseIds, databaseIds_);
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveDatabasesFromGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseIds, databaseIds_);
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RemoveDatabasesFromGroupRequest() = default ;
    RemoveDatabasesFromGroupRequest(const RemoveDatabasesFromGroupRequest &) = default ;
    RemoveDatabasesFromGroupRequest(RemoveDatabasesFromGroupRequest &&) = default ;
    RemoveDatabasesFromGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveDatabasesFromGroupRequest() = default ;
    RemoveDatabasesFromGroupRequest& operator=(const RemoveDatabasesFromGroupRequest &) = default ;
    RemoveDatabasesFromGroupRequest& operator=(RemoveDatabasesFromGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseIds_ == nullptr
        && return this->hostGroupId_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr; };
    // databaseIds Field Functions 
    bool hasDatabaseIds() const { return this->databaseIds_ != nullptr;};
    void deleteDatabaseIds() { this->databaseIds_ = nullptr;};
    inline const vector<string> & databaseIds() const { DARABONBA_PTR_GET_CONST(databaseIds_, vector<string>) };
    inline vector<string> databaseIds() { DARABONBA_PTR_GET(databaseIds_, vector<string>) };
    inline RemoveDatabasesFromGroupRequest& setDatabaseIds(const vector<string> & databaseIds) { DARABONBA_PTR_SET_VALUE(databaseIds_, databaseIds) };
    inline RemoveDatabasesFromGroupRequest& setDatabaseIds(vector<string> && databaseIds) { DARABONBA_PTR_SET_RVALUE(databaseIds_, databaseIds) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string hostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline RemoveDatabasesFromGroupRequest& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveDatabasesFromGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveDatabasesFromGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the databases that you want to remove.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> databaseIds_ = nullptr;
    // The ID of the asset group from which you want to remove databases.
    // 
    // > You can call the [ListHostGroups](https://help.aliyun.com/document_detail/201307.html) operation to query the asset group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> hostGroupId_ = nullptr;
    // The ID of the bastion host whose asset group you want to manage.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the bastion host whose asset group you want to manage.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
