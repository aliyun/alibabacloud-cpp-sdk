// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORHOSTSHAREKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORHOSTSHAREKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostAccountsForHostShareKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostAccountsForHostShareKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostAccountsForHostShareKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListHostAccountsForHostShareKeyRequest() = default ;
    ListHostAccountsForHostShareKeyRequest(const ListHostAccountsForHostShareKeyRequest &) = default ;
    ListHostAccountsForHostShareKeyRequest(ListHostAccountsForHostShareKeyRequest &&) = default ;
    ListHostAccountsForHostShareKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostAccountsForHostShareKeyRequest() = default ;
    ListHostAccountsForHostShareKeyRequest& operator=(const ListHostAccountsForHostShareKeyRequest &) = default ;
    ListHostAccountsForHostShareKeyRequest& operator=(ListHostAccountsForHostShareKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostShareKeyId_ == nullptr
        && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // hostShareKeyId Field Functions 
    bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
    void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
    inline string getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
    inline ListHostAccountsForHostShareKeyRequest& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListHostAccountsForHostShareKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListHostAccountsForHostShareKeyRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListHostAccountsForHostShareKeyRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListHostAccountsForHostShareKeyRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListHostAccountsForHostShareKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the host shared key.
    // > You can call the [ListHostShareKeys](https://help.aliyun.com/document_detail/462973.html) operation to retrieve this parameter.
    shared_ptr<string> hostShareKeyId_ {};
    // The instance ID of the Bastionhost.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to retrieve this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies the page number of the returned results. Default value: **1**.
    shared_ptr<string> pageNumber_ {};
    // The Settings for the paged query determine the number of host accounts associated with the host shared key to return on each page during paging. Default value: **10**, which indicates that 10 host accounts associated with the host shared key are displayed on each page.
    shared_ptr<string> pageSize_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the Bastionhost instance.
    // > For the mappings between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
