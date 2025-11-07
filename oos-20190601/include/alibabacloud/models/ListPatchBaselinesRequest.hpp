// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPATCHBASELINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPATCHBASELINESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPatchBaselinesRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListPatchBaselinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPatchBaselinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovedPatches, approvedPatches_);
      DARABONBA_PTR_TO_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListPatchBaselinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovedPatches, approvedPatches_);
      DARABONBA_PTR_FROM_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListPatchBaselinesRequest() = default ;
    ListPatchBaselinesRequest(const ListPatchBaselinesRequest &) = default ;
    ListPatchBaselinesRequest(ListPatchBaselinesRequest &&) = default ;
    ListPatchBaselinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPatchBaselinesRequest() = default ;
    ListPatchBaselinesRequest& operator=(const ListPatchBaselinesRequest &) = default ;
    ListPatchBaselinesRequest& operator=(ListPatchBaselinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvedPatches_ == nullptr
        && return this->approvedPatchesEnableNonSecurity_ == nullptr && return this->maxResults_ == nullptr && return this->name_ == nullptr && return this->nextToken_ == nullptr && return this->operationSystem_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->shareType_ == nullptr && return this->sources_ == nullptr && return this->tags_ == nullptr; };
    // approvedPatches Field Functions 
    bool hasApprovedPatches() const { return this->approvedPatches_ != nullptr;};
    void deleteApprovedPatches() { this->approvedPatches_ = nullptr;};
    inline const vector<string> & approvedPatches() const { DARABONBA_PTR_GET_CONST(approvedPatches_, vector<string>) };
    inline vector<string> approvedPatches() { DARABONBA_PTR_GET(approvedPatches_, vector<string>) };
    inline ListPatchBaselinesRequest& setApprovedPatches(const vector<string> & approvedPatches) { DARABONBA_PTR_SET_VALUE(approvedPatches_, approvedPatches) };
    inline ListPatchBaselinesRequest& setApprovedPatches(vector<string> && approvedPatches) { DARABONBA_PTR_SET_RVALUE(approvedPatches_, approvedPatches) };


    // approvedPatchesEnableNonSecurity Field Functions 
    bool hasApprovedPatchesEnableNonSecurity() const { return this->approvedPatchesEnableNonSecurity_ != nullptr;};
    void deleteApprovedPatchesEnableNonSecurity() { this->approvedPatchesEnableNonSecurity_ = nullptr;};
    inline bool approvedPatchesEnableNonSecurity() const { DARABONBA_PTR_GET_DEFAULT(approvedPatchesEnableNonSecurity_, false) };
    inline ListPatchBaselinesRequest& setApprovedPatchesEnableNonSecurity(bool approvedPatchesEnableNonSecurity) { DARABONBA_PTR_SET_VALUE(approvedPatchesEnableNonSecurity_, approvedPatchesEnableNonSecurity) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPatchBaselinesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPatchBaselinesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPatchBaselinesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // operationSystem Field Functions 
    bool hasOperationSystem() const { return this->operationSystem_ != nullptr;};
    void deleteOperationSystem() { this->operationSystem_ = nullptr;};
    inline string operationSystem() const { DARABONBA_PTR_GET_DEFAULT(operationSystem_, "") };
    inline ListPatchBaselinesRequest& setOperationSystem(string operationSystem) { DARABONBA_PTR_SET_VALUE(operationSystem_, operationSystem) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPatchBaselinesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPatchBaselinesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline ListPatchBaselinesRequest& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<string> & sources() const { DARABONBA_PTR_GET_CONST(sources_, vector<string>) };
    inline vector<string> sources() { DARABONBA_PTR_GET(sources_, vector<string>) };
    inline ListPatchBaselinesRequest& setSources(const vector<string> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline ListPatchBaselinesRequest& setSources(vector<string> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListPatchBaselinesRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListPatchBaselinesRequestTags>) };
    inline vector<ListPatchBaselinesRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListPatchBaselinesRequestTags>) };
    inline ListPatchBaselinesRequest& setTags(const vector<ListPatchBaselinesRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPatchBaselinesRequest& setTags(vector<ListPatchBaselinesRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The approved patches.
    std::shared_ptr<vector<string>> approvedPatches_ = nullptr;
    // Specifies whether the approved patch involves updates other than security-related updates.
    std::shared_ptr<bool> approvedPatchesEnableNonSecurity_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The name of the patch baseline.
    std::shared_ptr<string> name_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   Windows
    // *   Ubuntu
    // *   CentOS
    // *   Debian
    // *   AliyunLinux
    // *   RedhatEnterpriseLinux
    // *   Anolis
    // *   AlmaLinux
    std::shared_ptr<string> operationSystem_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The share type of the template. Valid values:
    // 
    // *   **Public**
    // *   **Private**
    std::shared_ptr<string> shareType_ = nullptr;
    // The patch source configurations.
    std::shared_ptr<vector<string>> sources_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListPatchBaselinesRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
