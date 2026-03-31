// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPSITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPSITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateOpsItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpsItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DedupString, dedupString_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Solutions, solutions_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpsItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DedupString, dedupString_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Solutions, solutions_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateOpsItemRequest() = default ;
    CreateOpsItemRequest(const CreateOpsItemRequest &) = default ;
    CreateOpsItemRequest(CreateOpsItemRequest &&) = default ;
    CreateOpsItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpsItemRequest() = default ;
    CreateOpsItemRequest& operator=(const CreateOpsItemRequest &) = default ;
    CreateOpsItemRequest& operator=(CreateOpsItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->clientToken_ == nullptr && this->dedupString_ == nullptr && this->description_ == nullptr && this->priority_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resources_ == nullptr && this->severity_ == nullptr && this->solutions_ == nullptr && this->source_ == nullptr
        && this->tags_ == nullptr && this->title_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateOpsItemRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateOpsItemRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dedupString Field Functions 
    bool hasDedupString() const { return this->dedupString_ != nullptr;};
    void deleteDedupString() { this->dedupString_ = nullptr;};
    inline string getDedupString() const { DARABONBA_PTR_GET_DEFAULT(dedupString_, "") };
    inline CreateOpsItemRequest& setDedupString(string dedupString) { DARABONBA_PTR_SET_VALUE(dedupString_, dedupString) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateOpsItemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateOpsItemRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOpsItemRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateOpsItemRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline CreateOpsItemRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline CreateOpsItemRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // solutions Field Functions 
    bool hasSolutions() const { return this->solutions_ != nullptr;};
    void deleteSolutions() { this->solutions_ = nullptr;};
    inline string getSolutions() const { DARABONBA_PTR_GET_DEFAULT(solutions_, "") };
    inline CreateOpsItemRequest& setSolutions(string solutions) { DARABONBA_PTR_SET_VALUE(solutions_, solutions) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateOpsItemRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline CreateOpsItemRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateOpsItemRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateOpsItemRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The category.
    // 
    // Valid values:
    // 
    // *   Availability
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Performance
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Security
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Cost
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Recovery
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    shared_ptr<string> category_ {};
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The string to be deduplicated.
    shared_ptr<string> dedupString_ {};
    // The description of the operation.
    shared_ptr<string> description_ {};
    // The priority. Valid values: 1 to 5. 1 indicates the highest priority.
    shared_ptr<int32_t> priority_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The Alibaba Cloud Resource Names (ARNs) of the associated resources.
    shared_ptr<string> resources_ {};
    // The severity level.
    // 
    // Valid values:
    // 
    // *   High
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Low
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Medium
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Critical
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    shared_ptr<string> severity_ {};
    // The solutions.
    shared_ptr<string> solutions_ {};
    // The source business.
    // 
    // This parameter is required.
    shared_ptr<string> source_ {};
    // The tags.
    Darabonba::Json tags_ {};
    // The title of the O\\&M item.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
