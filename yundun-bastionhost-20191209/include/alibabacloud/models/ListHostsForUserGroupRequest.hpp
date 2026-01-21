// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTSFORUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTSFORUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostsForUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostsForUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostsForUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListHostsForUserGroupRequest() = default ;
    ListHostsForUserGroupRequest(const ListHostsForUserGroupRequest &) = default ;
    ListHostsForUserGroupRequest(ListHostsForUserGroupRequest &&) = default ;
    ListHostsForUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostsForUserGroupRequest() = default ;
    ListHostsForUserGroupRequest& operator=(const ListHostsForUserGroupRequest &) = default ;
    ListHostsForUserGroupRequest& operator=(ListHostsForUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAddress_ == nullptr
        && this->hostName_ == nullptr && this->instanceId_ == nullptr && this->mode_ == nullptr && this->OSType_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->userGroupId_ == nullptr; };
    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline ListHostsForUserGroupRequest& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ListHostsForUserGroupRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListHostsForUserGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListHostsForUserGroupRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline ListHostsForUserGroupRequest& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListHostsForUserGroupRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListHostsForUserGroupRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListHostsForUserGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListHostsForUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The endpoint of the host that you want to query. You can set this parameter to a domain name or an IP address. Only exact match is supported.
    shared_ptr<string> hostAddress_ {};
    // The name of the host that you want to query. Only exact match is supported.
    shared_ptr<string> hostName_ {};
    // The ID of the bastion host on which you want to query the hosts that the user group is authorized or not authorized to manage.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies the category of the hosts that you want to query. Valid values:
    // 
    // *   **Authorized**: queries the hosts that the user group is authorized to manage. This is the default value.
    // *   **Unauthorized**: queries the hosts that the user group is not authorized to manage.
    shared_ptr<string> mode_ {};
    // The operating system of the host that you want to query. Valid values:
    // 
    // *   **Linux**
    // *   **Windows**
    shared_ptr<string> OSType_ {};
    // The number of the page. Default value: 1.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.\\
    // Maximum value: 100. Default value: 20. If you leave this parameter empty, 20 entries are returned per page.
    // 
    // > We recommend that you do not leave this parameter empty.
    shared_ptr<string> pageSize_ {};
    // The region ID of the bastion host on which you want to query the hosts that the user group is authorized or not authorized to manage.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user group for which you want to query hosts.
    // 
    // > You can call the [ListUserGroups](https://help.aliyun.com/document_detail/204509.html) operation to query the ID of the user group.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
