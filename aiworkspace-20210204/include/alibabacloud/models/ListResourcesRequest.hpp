// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductTypes, productTypes_);
      DARABONBA_PTR_TO_JSON(QuotaIds, quotaIds_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
      DARABONBA_PTR_TO_JSON(VerboseFields, verboseFields_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductTypes, productTypes_);
      DARABONBA_PTR_FROM_JSON(QuotaIds, quotaIds_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
      DARABONBA_PTR_FROM_JSON(VerboseFields, verboseFields_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListResourcesRequest() = default ;
    ListResourcesRequest(const ListResourcesRequest &) = default ;
    ListResourcesRequest(ListResourcesRequest &&) = default ;
    ListResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesRequest() = default ;
    ListResourcesRequest& operator=(const ListResourcesRequest &) = default ;
    ListResourcesRequest& operator=(ListResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->labels_ != nullptr && this->option_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->productTypes_ != nullptr
        && this->quotaIds_ != nullptr && this->resourceName_ != nullptr && this->resourceTypes_ != nullptr && this->verbose_ != nullptr && this->verboseFields_ != nullptr
        && this->workspaceId_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListResourcesRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListResourcesRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline ListResourcesRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListResourcesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourcesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productTypes Field Functions 
    bool hasProductTypes() const { return this->productTypes_ != nullptr;};
    void deleteProductTypes() { this->productTypes_ = nullptr;};
    inline string productTypes() const { DARABONBA_PTR_GET_DEFAULT(productTypes_, "") };
    inline ListResourcesRequest& setProductTypes(string productTypes) { DARABONBA_PTR_SET_VALUE(productTypes_, productTypes) };


    // quotaIds Field Functions 
    bool hasQuotaIds() const { return this->quotaIds_ != nullptr;};
    void deleteQuotaIds() { this->quotaIds_ = nullptr;};
    inline string quotaIds() const { DARABONBA_PTR_GET_DEFAULT(quotaIds_, "") };
    inline ListResourcesRequest& setQuotaIds(string quotaIds) { DARABONBA_PTR_SET_VALUE(quotaIds_, quotaIds) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListResourcesRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline string resourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
    inline ListResourcesRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool verbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline ListResourcesRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


    // verboseFields Field Functions 
    bool hasVerboseFields() const { return this->verboseFields_ != nullptr;};
    void deleteVerboseFields() { this->verboseFields_ = nullptr;};
    inline string verboseFields() const { DARABONBA_PTR_GET_DEFAULT(verboseFields_, "") };
    inline ListResourcesRequest& setVerboseFields(string verboseFields) { DARABONBA_PTR_SET_VALUE(verboseFields_, verboseFields) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListResourcesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the resource group. You can call [ListResources](https://help.aliyun.com/document_detail/449143.html) to obtain the name of the resource group.
    std::shared_ptr<string> groupName_ = nullptr;
    // Tag-based filter conditions. Multiple conditions are separated by commas (,). Only resources that meet all the specified tag-based filter conditions are returned.
    // 
    // This parameter is available only for resources whose ProductType is ACS.
    std::shared_ptr<string> labels_ = nullptr;
    // The operation to perform. Valid values:
    // 
    // *   ListResourceByWorkspace: obtains the resources in the workspace. This is the default value.
    // *   ListResource: obtains the resources of the user.
    std::shared_ptr<string> option_ = nullptr;
    // The page number. The pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // **This field is no longer used and will be removed. Use the ResourceType field instead.
    std::shared_ptr<string> productTypes_ = nullptr;
    // The quota IDs, which are separated by commas (,). Only resources that contain all the specified quotas are returned.
    // 
    // >  This parameter is available only for resources whose ResourceTypes is ACS.
    std::shared_ptr<string> quotaIds_ = nullptr;
    // The resource name. The value must meet the following requirements:
    // 
    // *   The name must be 3 to 28 characters in length.
    // *   The name is unique in the region.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The resource types. Valid values:
    // 
    // *   MaxCompute
    // *   ECS
    // *   Lingjun
    // *   ACS
    // *   FLINK
    std::shared_ptr<string> resourceTypes_ = nullptr;
    // Specifies whether to show detailed information, which includes the Quotas field. Valid values:
    // 
    // *   true (default)
    // *   false
    std::shared_ptr<bool> verbose_ = nullptr;
    // The fields to return. Multiple fields are separated by commas (,). Valid values:
    // 
    // *   Quota
    // *   Label
    // *   IsDefault
    std::shared_ptr<string> verboseFields_ = nullptr;
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    // 
    // *   This parameter is required when the Option parameter is set to ListResourceByWorkspace.
    // *   You do not need to configure this parameter when the Option parameter is set to ListResource.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
