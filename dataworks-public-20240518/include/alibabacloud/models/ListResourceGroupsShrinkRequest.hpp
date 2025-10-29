// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourceGroupsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_TO_JSON(AliyunResourceTags, aliyunResourceTagsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupTypes, resourceGroupTypesShrink_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Statuses, statusesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(AliyunResourceTags, aliyunResourceTagsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupTypes, resourceGroupTypesShrink_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Statuses, statusesShrink_);
    };
    ListResourceGroupsShrinkRequest() = default ;
    ListResourceGroupsShrinkRequest(const ListResourceGroupsShrinkRequest &) = default ;
    ListResourceGroupsShrinkRequest(ListResourceGroupsShrinkRequest &&) = default ;
    ListResourceGroupsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsShrinkRequest() = default ;
    ListResourceGroupsShrinkRequest& operator=(const ListResourceGroupsShrinkRequest &) = default ;
    ListResourceGroupsShrinkRequest& operator=(ListResourceGroupsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunResourceGroupId_ == nullptr
        && return this->aliyunResourceTagsShrink_ == nullptr && return this->name_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->paymentType_ == nullptr
        && return this->projectId_ == nullptr && return this->resourceGroupTypesShrink_ == nullptr && return this->sortBy_ == nullptr && return this->statusesShrink_ == nullptr; };
    // aliyunResourceGroupId Field Functions 
    bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
    void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
    inline string aliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
    inline ListResourceGroupsShrinkRequest& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


    // aliyunResourceTagsShrink Field Functions 
    bool hasAliyunResourceTagsShrink() const { return this->aliyunResourceTagsShrink_ != nullptr;};
    void deleteAliyunResourceTagsShrink() { this->aliyunResourceTagsShrink_ = nullptr;};
    inline string aliyunResourceTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceTagsShrink_, "") };
    inline ListResourceGroupsShrinkRequest& setAliyunResourceTagsShrink(string aliyunResourceTagsShrink) { DARABONBA_PTR_SET_VALUE(aliyunResourceTagsShrink_, aliyunResourceTagsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceGroupsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceGroupsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceGroupsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListResourceGroupsShrinkRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListResourceGroupsShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceGroupTypesShrink Field Functions 
    bool hasResourceGroupTypesShrink() const { return this->resourceGroupTypesShrink_ != nullptr;};
    void deleteResourceGroupTypesShrink() { this->resourceGroupTypesShrink_ = nullptr;};
    inline string resourceGroupTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupTypesShrink_, "") };
    inline ListResourceGroupsShrinkRequest& setResourceGroupTypesShrink(string resourceGroupTypesShrink) { DARABONBA_PTR_SET_VALUE(resourceGroupTypesShrink_, resourceGroupTypesShrink) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListResourceGroupsShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // statusesShrink Field Functions 
    bool hasStatusesShrink() const { return this->statusesShrink_ != nullptr;};
    void deleteStatusesShrink() { this->statusesShrink_ = nullptr;};
    inline string statusesShrink() const { DARABONBA_PTR_GET_DEFAULT(statusesShrink_, "") };
    inline ListResourceGroupsShrinkRequest& setStatusesShrink(string statusesShrink) { DARABONBA_PTR_SET_VALUE(statusesShrink_, statusesShrink) };


  protected:
    // Alibaba Cloud Resource Group ID
    std::shared_ptr<string> aliyunResourceGroupId_ = nullptr;
    // Alibaba Cloud tag list
    std::shared_ptr<string> aliyunResourceTagsShrink_ = nullptr;
    // The name of a resource group, which is used for fuzzy match.
    std::shared_ptr<string> name_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The billing method of resource groups. Valid values:
    // 
    // *   PrePaid
    // *   PostPaid
    std::shared_ptr<string> paymentType_ = nullptr;
    // The ID of the DataWorks workspace.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The types of resource groups to query. If you do not configure this parameter, only serverless resource groups are returned by default.
    std::shared_ptr<string> resourceGroupTypesShrink_ = nullptr;
    // The list of fields used for sorting. Fields such as TriggerTime and StartedTime are supported. You must configure this parameter in the Sorting field + Sort by (Desc/Asc). By default, results are sorted in ascending order. Valid values:
    // 
    // *   Id (Desc/Asc): the resource group ID
    // *   Name (Desc/Asc): the name of the resource group
    // *   Remark (Desc/Asc): the remarks of the resource group
    // *   Type (Desc/Asc): the type of the resource group
    // *   Status (Desc/Asc): the status of the resource group
    // *   Spec (Desc/Asc): the specifications of the resource group
    // *   CreateUser (Desc/Asc): the creator of the resource group
    // *   CreateTime (Desc/Asc): the time when the resource group is created
    // 
    // Default value: CreateTime Asc
    std::shared_ptr<string> sortBy_ = nullptr;
    // The statuses of resource groups.
    std::shared_ptr<string> statusesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
