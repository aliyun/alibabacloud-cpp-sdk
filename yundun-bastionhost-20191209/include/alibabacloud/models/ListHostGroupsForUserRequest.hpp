// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTGROUPSFORUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTGROUPSFORUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostGroupsForUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostGroupsForUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostGroupName, hostGroupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostGroupsForUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostGroupName, hostGroupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListHostGroupsForUserRequest() = default ;
    ListHostGroupsForUserRequest(const ListHostGroupsForUserRequest &) = default ;
    ListHostGroupsForUserRequest(ListHostGroupsForUserRequest &&) = default ;
    ListHostGroupsForUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostGroupsForUserRequest() = default ;
    ListHostGroupsForUserRequest& operator=(const ListHostGroupsForUserRequest &) = default ;
    ListHostGroupsForUserRequest& operator=(ListHostGroupsForUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostGroupName_ == nullptr
        && this->instanceId_ == nullptr && this->mode_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->userId_ == nullptr; };
    // hostGroupName Field Functions 
    bool hasHostGroupName() const { return this->hostGroupName_ != nullptr;};
    void deleteHostGroupName() { this->hostGroupName_ = nullptr;};
    inline string getHostGroupName() const { DARABONBA_PTR_GET_DEFAULT(hostGroupName_, "") };
    inline ListHostGroupsForUserRequest& setHostGroupName(string hostGroupName) { DARABONBA_PTR_SET_VALUE(hostGroupName_, hostGroupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListHostGroupsForUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListHostGroupsForUserRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListHostGroupsForUserRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListHostGroupsForUserRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListHostGroupsForUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListHostGroupsForUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The name of the host group to query. The name can be up to 128 characters in length. Only exact match is supported.
    shared_ptr<string> hostGroupName_ {};
    // The ID of the bastion host whose user you want to query.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The category of the host groups to query. Valid values:
    // 
    // *   **Authorized** (default): queries the host groups that the user is authorized to manage.
    // *   **Unauthorized**: queries the host groups that the user is not authorized to manage.
    shared_ptr<string> mode_ {};
    // The page number. Default value: **1**.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.\\
    // Valid values: 1 to 100. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<string> pageSize_ {};
    // The region ID of the bastion host whose user you want to query.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The user ID.
    // 
    // >  You can call the [ListUsers](https://help.aliyun.com/document_detail/204522.html) operation to query the user ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
