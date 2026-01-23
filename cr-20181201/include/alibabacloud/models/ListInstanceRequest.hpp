// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListInstanceRequest() = default ;
    ListInstanceRequest(const ListInstanceRequest &) = default ;
    ListInstanceRequest(ListInstanceRequest &&) = default ;
    ListInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRequest() = default ;
    ListInstanceRequest& operator=(const ListInstanceRequest &) = default ;
    ListInstanceRequest& operator=(ListInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->instanceStatus_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->resourceGroupId_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline ListInstanceRequest& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListInstanceRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstanceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The instance name.
    shared_ptr<string> instanceName_ {};
    // The status of the instance. Valid values:
    // 
    // *   `PENDING`: The instance is being initialized.
    // *   `INIT_ERROR`: The initialization of the instance fails.
    // *   `STARTING`: The instance is being started.
    // *   `RUNNING`: The instance is running.
    // *   `STOPPING`: The instance is being stopped.
    // *   `STOPPED`: The instance is stopped.
    // *   `DELETING`: The instance is being deleted.
    // *   `DELETED`: The instance is deleted.
    shared_ptr<string> instanceStatus_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
