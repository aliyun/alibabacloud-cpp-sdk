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
    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->labels_ == nullptr && this->option_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->productTypes_ == nullptr
        && this->quotaIds_ == nullptr && this->resourceName_ == nullptr && this->resourceTypes_ == nullptr && this->verbose_ == nullptr && this->verboseFields_ == nullptr
        && this->workspaceId_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListResourcesRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListResourcesRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string getOption() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline ListResourcesRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListResourcesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourcesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productTypes Field Functions 
    bool hasProductTypes() const { return this->productTypes_ != nullptr;};
    void deleteProductTypes() { this->productTypes_ = nullptr;};
    inline string getProductTypes() const { DARABONBA_PTR_GET_DEFAULT(productTypes_, "") };
    inline ListResourcesRequest& setProductTypes(string productTypes) { DARABONBA_PTR_SET_VALUE(productTypes_, productTypes) };


    // quotaIds Field Functions 
    bool hasQuotaIds() const { return this->quotaIds_ != nullptr;};
    void deleteQuotaIds() { this->quotaIds_ = nullptr;};
    inline string getQuotaIds() const { DARABONBA_PTR_GET_DEFAULT(quotaIds_, "") };
    inline ListResourcesRequest& setQuotaIds(string quotaIds) { DARABONBA_PTR_SET_VALUE(quotaIds_, quotaIds) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListResourcesRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline string getResourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
    inline ListResourcesRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool getVerbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline ListResourcesRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


    // verboseFields Field Functions 
    bool hasVerboseFields() const { return this->verboseFields_ != nullptr;};
    void deleteVerboseFields() { this->verboseFields_ = nullptr;};
    inline string getVerboseFields() const { DARABONBA_PTR_GET_DEFAULT(verboseFields_, "") };
    inline ListResourcesRequest& setVerboseFields(string verboseFields) { DARABONBA_PTR_SET_VALUE(verboseFields_, verboseFields) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListResourcesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the resource group. To get the resource group name, see [ListResources](https://help.aliyun.com/document_detail/449143.html).
    shared_ptr<string> groupName_ {};
    // A comma-separated list of labels. This operation returns only the resources that have all the specified labels.
    // 
    // This parameter is available only for resources whose `ResourceTypes` is set to `ACS`.
    shared_ptr<string> labels_ {};
    // The option to query resources. Valid values:
    // 
    // - `ListResourceByWorkspace` (Default): lists the resources in a workspace.
    // 
    // - `ListResource`: lists the resources of the current user.
    shared_ptr<string> option_ {};
    // The page number. The value must be greater than or equal to 1. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // **Deprecated.** This parameter is deprecated. Use the `ResourceType` parameter instead.
    shared_ptr<string> productTypes_ {};
    // A comma-separated list of quota IDs. This operation returns only the resources that are associated with all the specified quota IDs.
    // 
    // > This parameter is available only for resources whose `ResourceTypes` is set to `ACS`.
    shared_ptr<string> quotaIds_ {};
    // The resource name. The name must meet the following requirements:
    // 
    // - The name must be 3 to 28 characters in length.
    // 
    // - The name must be unique within a region.
    shared_ptr<string> resourceName_ {};
    // The resource types. Valid values:
    // 
    // - `MaxCompute`: MaxCompute resources.
    // 
    // - `ECS`: ECS resources.
    // 
    // - `Lingjun`: Lingjun computing resources.
    // 
    // - `ACS`: ACS computing resources.
    // 
    // - `Flink`: Flink resources.
    // 
    // - `SelfManagedAckPro`: self-managed AckPro cluster resources.
    // 
    // - `SelfManagedAckLingjun`: self-managed AckLingjun cluster resources.
    // 
    // - `SelfManagedASI`: self-managed ASI cluster resources from a third-party cloud.
    shared_ptr<string> resourceTypes_ {};
    // Specifies whether to return detailed information. The detailed information includes the `Quotas` field. Valid values:
    // 
    // - `true` (Default): returns detailed information.
    // 
    // - `false`: does not return detailed information.
    shared_ptr<bool> verbose_ {};
    // A comma-separated list of fields that you want to return. Valid values:
    // 
    // - `Quota`
    // 
    // - `Label`
    // 
    // - `IsDefault`
    shared_ptr<string> verboseFields_ {};
    // The ID of the workspace. To get the workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    // 
    // - This parameter is required if `Option` is set to `ListResourceByWorkspace`.
    // 
    // - This parameter is not required if `Option` is set to `ListResource`.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
