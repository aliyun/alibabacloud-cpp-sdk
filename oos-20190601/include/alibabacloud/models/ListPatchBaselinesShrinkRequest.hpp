// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPATCHBASELINESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPATCHBASELINESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListPatchBaselinesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPatchBaselinesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovedPatches, approvedPatchesShrink_);
      DARABONBA_PTR_TO_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListPatchBaselinesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovedPatches, approvedPatchesShrink_);
      DARABONBA_PTR_FROM_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    ListPatchBaselinesShrinkRequest() = default ;
    ListPatchBaselinesShrinkRequest(const ListPatchBaselinesShrinkRequest &) = default ;
    ListPatchBaselinesShrinkRequest(ListPatchBaselinesShrinkRequest &&) = default ;
    ListPatchBaselinesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPatchBaselinesShrinkRequest() = default ;
    ListPatchBaselinesShrinkRequest& operator=(const ListPatchBaselinesShrinkRequest &) = default ;
    ListPatchBaselinesShrinkRequest& operator=(ListPatchBaselinesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvedPatchesShrink_ == nullptr
        && return this->approvedPatchesEnableNonSecurity_ == nullptr && return this->maxResults_ == nullptr && return this->name_ == nullptr && return this->nextToken_ == nullptr && return this->operationSystem_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->shareType_ == nullptr && return this->sourcesShrink_ == nullptr && return this->tagsShrink_ == nullptr; };
    // approvedPatchesShrink Field Functions 
    bool hasApprovedPatchesShrink() const { return this->approvedPatchesShrink_ != nullptr;};
    void deleteApprovedPatchesShrink() { this->approvedPatchesShrink_ = nullptr;};
    inline string approvedPatchesShrink() const { DARABONBA_PTR_GET_DEFAULT(approvedPatchesShrink_, "") };
    inline ListPatchBaselinesShrinkRequest& setApprovedPatchesShrink(string approvedPatchesShrink) { DARABONBA_PTR_SET_VALUE(approvedPatchesShrink_, approvedPatchesShrink) };


    // approvedPatchesEnableNonSecurity Field Functions 
    bool hasApprovedPatchesEnableNonSecurity() const { return this->approvedPatchesEnableNonSecurity_ != nullptr;};
    void deleteApprovedPatchesEnableNonSecurity() { this->approvedPatchesEnableNonSecurity_ = nullptr;};
    inline bool approvedPatchesEnableNonSecurity() const { DARABONBA_PTR_GET_DEFAULT(approvedPatchesEnableNonSecurity_, false) };
    inline ListPatchBaselinesShrinkRequest& setApprovedPatchesEnableNonSecurity(bool approvedPatchesEnableNonSecurity) { DARABONBA_PTR_SET_VALUE(approvedPatchesEnableNonSecurity_, approvedPatchesEnableNonSecurity) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPatchBaselinesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPatchBaselinesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPatchBaselinesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // operationSystem Field Functions 
    bool hasOperationSystem() const { return this->operationSystem_ != nullptr;};
    void deleteOperationSystem() { this->operationSystem_ = nullptr;};
    inline string operationSystem() const { DARABONBA_PTR_GET_DEFAULT(operationSystem_, "") };
    inline ListPatchBaselinesShrinkRequest& setOperationSystem(string operationSystem) { DARABONBA_PTR_SET_VALUE(operationSystem_, operationSystem) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPatchBaselinesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPatchBaselinesShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline ListPatchBaselinesShrinkRequest& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // sourcesShrink Field Functions 
    bool hasSourcesShrink() const { return this->sourcesShrink_ != nullptr;};
    void deleteSourcesShrink() { this->sourcesShrink_ = nullptr;};
    inline string sourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourcesShrink_, "") };
    inline ListPatchBaselinesShrinkRequest& setSourcesShrink(string sourcesShrink) { DARABONBA_PTR_SET_VALUE(sourcesShrink_, sourcesShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListPatchBaselinesShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The approved patches.
    std::shared_ptr<string> approvedPatchesShrink_ = nullptr;
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
    std::shared_ptr<string> sourcesShrink_ = nullptr;
    // The tags.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
