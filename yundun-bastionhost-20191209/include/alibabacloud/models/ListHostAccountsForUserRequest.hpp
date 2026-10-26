// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostAccountsForUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostAccountsForUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostAccountsForUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListHostAccountsForUserRequest() = default ;
    ListHostAccountsForUserRequest(const ListHostAccountsForUserRequest &) = default ;
    ListHostAccountsForUserRequest(ListHostAccountsForUserRequest &&) = default ;
    ListHostAccountsForUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostAccountsForUserRequest() = default ;
    ListHostAccountsForUserRequest& operator=(const ListHostAccountsForUserRequest &) = default ;
    ListHostAccountsForUserRequest& operator=(ListHostAccountsForUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccountName_ == nullptr
        && this->hostId_ == nullptr && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr
        && this->regionId_ == nullptr && this->userId_ == nullptr; };
    // hostAccountName Field Functions 
    bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
    void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
    inline string getHostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
    inline ListHostAccountsForUserRequest& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ListHostAccountsForUserRequest& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListHostAccountsForUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListHostAccountsForUserRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListHostAccountsForUserRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListHostAccountsForUserRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListHostAccountsForUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListHostAccountsForUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The name of the host account. Exact match is supported.
    shared_ptr<string> hostAccountName_ {};
    // The ID of the host for which you want to query the host accounts.
    // > You can call the [ListHosts](https://help.aliyun.com/document_detail/200665.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> hostId_ {};
    // The instance ID of the Bastionhost instance to which the user whose host accounts with authorization you want to query belongs.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The page number for paging in a paged query. Default value: **1**.
    shared_ptr<string> pageNumber_ {};
    // The maximum number of entries to return on each page for paging in a paged query.  
    // The maximum value of the PageSize parameter is 100. Default value: 20. If you leave this parameter empty, 20 entries are returned.
    // > Specify a value for the PageSize parameter.
    shared_ptr<string> pageSize_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the Bastionhost instance where the user whose authorized host accounts you want to query is located.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user whose authorized and unauthorized host accounts you want to query.
    // > You can call the [ListUsers](https://help.aliyun.com/document_detail/204522.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
