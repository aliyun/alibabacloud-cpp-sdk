// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindId, bindId_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(FilterStr, filterStr_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IsBind, isBind_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindId, bindId_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(FilterStr, filterStr_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IsBind, isBind_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
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
    virtual bool empty() const override { return this->bindId_ == nullptr
        && this->channelType_ == nullptr && this->filterStr_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->isBind_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->resourceGroupId_ == nullptr && this->submitTime_ == nullptr; };
    // bindId Field Functions 
    bool hasBindId() const { return this->bindId_ != nullptr;};
    void deleteBindId() { this->bindId_ = nullptr;};
    inline string getBindId() const { DARABONBA_PTR_GET_DEFAULT(bindId_, "") };
    inline ListInstanceRequest& setBindId(string bindId) { DARABONBA_PTR_SET_VALUE(bindId_, bindId) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline ListInstanceRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // filterStr Field Functions 
    bool hasFilterStr() const { return this->filterStr_ != nullptr;};
    void deleteFilterStr() { this->filterStr_ = nullptr;};
    inline string getFilterStr() const { DARABONBA_PTR_GET_DEFAULT(filterStr_, "") };
    inline ListInstanceRequest& setFilterStr(string filterStr) { DARABONBA_PTR_SET_VALUE(filterStr_, filterStr) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isBind Field Functions 
    bool hasIsBind() const { return this->isBind_ != nullptr;};
    void deleteIsBind() { this->isBind_ = nullptr;};
    inline bool getIsBind() const { DARABONBA_PTR_GET_DEFAULT(isBind_, false) };
    inline ListInstanceRequest& setIsBind(bool isBind) { DARABONBA_PTR_SET_VALUE(isBind_, isBind) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline ListInstanceRequest& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListInstanceRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline ListInstanceRequest& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


  protected:
    shared_ptr<string> bindId_ {};
    // The channel type. Valid values:
    // 
    // - **whatsapp**
    // 
    // - **messenger**
    // - **instagram**
    // 
    // <props="intl">- **viber**
    shared_ptr<string> channelType_ {};
    // The filter condition.
    shared_ptr<string> filterStr_ {};
    // The instance ID. Only non-Alibaba Cloud hosts are supported.
    shared_ptr<string> instanceId_ {};
    // The instance name.
    shared_ptr<string> instanceName_ {};
    shared_ptr<bool> isBind_ {};
    // The page number.
    shared_ptr<int64_t> pageIndex_ {};
    // The number of records per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the enterprise resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The submit time.
    shared_ptr<string> submitTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
