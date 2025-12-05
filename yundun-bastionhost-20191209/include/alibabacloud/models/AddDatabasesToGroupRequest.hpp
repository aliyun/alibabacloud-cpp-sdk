// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATABASESTOGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATABASESTOGROUPREQUEST_HPP_
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
  class AddDatabasesToGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDatabasesToGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseIds, databaseIds_);
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDatabasesToGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseIds, databaseIds_);
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddDatabasesToGroupRequest() = default ;
    AddDatabasesToGroupRequest(const AddDatabasesToGroupRequest &) = default ;
    AddDatabasesToGroupRequest(AddDatabasesToGroupRequest &&) = default ;
    AddDatabasesToGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDatabasesToGroupRequest() = default ;
    AddDatabasesToGroupRequest& operator=(const AddDatabasesToGroupRequest &) = default ;
    AddDatabasesToGroupRequest& operator=(AddDatabasesToGroupRequest &&) = default ;
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
    inline AddDatabasesToGroupRequest& setDatabaseIds(const vector<string> & databaseIds) { DARABONBA_PTR_SET_VALUE(databaseIds_, databaseIds) };
    inline AddDatabasesToGroupRequest& setDatabaseIds(vector<string> && databaseIds) { DARABONBA_PTR_SET_RVALUE(databaseIds_, databaseIds) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string hostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline AddDatabasesToGroupRequest& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddDatabasesToGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddDatabasesToGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // An array that consists of the database IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> databaseIds_ = nullptr;
    // The ID of the asset group to which you want to add the databases.
    // 
    // >  You can call the [ListHostGroups](https://help.aliyun.com/document_detail/201307.html) operation to query the ID of the asset group.
    // 
    // This parameter is required.
    std::shared_ptr<string> hostGroupId_ = nullptr;
    // The bastion host ID.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the bastion host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
