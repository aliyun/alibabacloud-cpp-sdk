// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKRESPONSEBODYCOMPLIANCEPACKSCOPE_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKRESPONSEBODYCOMPLIANCEPACKSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCompliancePackResponseBodyCompliancePackScopeExcludeTagsScope.hpp>
#include <alibabacloud/models/GetCompliancePackResponseBodyCompliancePackScopeTagsScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetCompliancePackResponseBodyCompliancePackScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompliancePackResponseBodyCompliancePackScope& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeTagsScope, excludeTagsScope_);
      DARABONBA_PTR_TO_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_TO_JSON(TagKeyScope, tagKeyScope_);
      DARABONBA_PTR_TO_JSON(TagValueScope, tagValueScope_);
      DARABONBA_PTR_TO_JSON(TagsScope, tagsScope_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompliancePackResponseBodyCompliancePackScope& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeTagsScope, excludeTagsScope_);
      DARABONBA_PTR_FROM_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(TagKeyScope, tagKeyScope_);
      DARABONBA_PTR_FROM_JSON(TagValueScope, tagValueScope_);
      DARABONBA_PTR_FROM_JSON(TagsScope, tagsScope_);
    };
    GetCompliancePackResponseBodyCompliancePackScope() = default ;
    GetCompliancePackResponseBodyCompliancePackScope(const GetCompliancePackResponseBodyCompliancePackScope &) = default ;
    GetCompliancePackResponseBodyCompliancePackScope(GetCompliancePackResponseBodyCompliancePackScope &&) = default ;
    GetCompliancePackResponseBodyCompliancePackScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompliancePackResponseBodyCompliancePackScope() = default ;
    GetCompliancePackResponseBodyCompliancePackScope& operator=(const GetCompliancePackResponseBodyCompliancePackScope &) = default ;
    GetCompliancePackResponseBodyCompliancePackScope& operator=(GetCompliancePackResponseBodyCompliancePackScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->excludeRegionIdsScope_ == nullptr
        && return this->excludeResourceGroupIdsScope_ == nullptr && return this->excludeResourceIdsScope_ == nullptr && return this->excludeTagsScope_ == nullptr && return this->regionIdsScope_ == nullptr && return this->resourceGroupIdsScope_ == nullptr
        && return this->resourceIdsScope_ == nullptr && return this->tagKeyScope_ == nullptr && return this->tagValueScope_ == nullptr && return this->tagsScope_ == nullptr; };
    // excludeRegionIdsScope Field Functions 
    bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
    void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
    inline string excludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
    inline GetCompliancePackResponseBodyCompliancePackScope& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


    // excludeResourceGroupIdsScope Field Functions 
    bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
    void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
    inline string excludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
    inline GetCompliancePackResponseBodyCompliancePackScope& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


    // excludeResourceIdsScope Field Functions 
    bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
    void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
    inline string excludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
    inline GetCompliancePackResponseBodyCompliancePackScope& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


    // excludeTagsScope Field Functions 
    bool hasExcludeTagsScope() const { return this->excludeTagsScope_ != nullptr;};
    void deleteExcludeTagsScope() { this->excludeTagsScope_ = nullptr;};
    inline const vector<Models::GetCompliancePackResponseBodyCompliancePackScopeExcludeTagsScope> & excludeTagsScope() const { DARABONBA_PTR_GET_CONST(excludeTagsScope_, vector<Models::GetCompliancePackResponseBodyCompliancePackScopeExcludeTagsScope>) };
    inline vector<Models::GetCompliancePackResponseBodyCompliancePackScopeExcludeTagsScope> excludeTagsScope() { DARABONBA_PTR_GET(excludeTagsScope_, vector<Models::GetCompliancePackResponseBodyCompliancePackScopeExcludeTagsScope>) };
    inline GetCompliancePackResponseBodyCompliancePackScope& setExcludeTagsScope(const vector<Models::GetCompliancePackResponseBodyCompliancePackScopeExcludeTagsScope> & excludeTagsScope) { DARABONBA_PTR_SET_VALUE(excludeTagsScope_, excludeTagsScope) };
    inline GetCompliancePackResponseBodyCompliancePackScope& setExcludeTagsScope(vector<Models::GetCompliancePackResponseBodyCompliancePackScopeExcludeTagsScope> && excludeTagsScope) { DARABONBA_PTR_SET_RVALUE(excludeTagsScope_, excludeTagsScope) };


    // regionIdsScope Field Functions 
    bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
    void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
    inline string regionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
    inline GetCompliancePackResponseBodyCompliancePackScope& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


    // resourceGroupIdsScope Field Functions 
    bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
    void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
    inline string resourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
    inline GetCompliancePackResponseBodyCompliancePackScope& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


    // resourceIdsScope Field Functions 
    bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
    void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
    inline string resourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
    inline GetCompliancePackResponseBodyCompliancePackScope& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


    // tagKeyScope Field Functions 
    bool hasTagKeyScope() const { return this->tagKeyScope_ != nullptr;};
    void deleteTagKeyScope() { this->tagKeyScope_ = nullptr;};
    inline string tagKeyScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyScope_, "") };
    inline GetCompliancePackResponseBodyCompliancePackScope& setTagKeyScope(string tagKeyScope) { DARABONBA_PTR_SET_VALUE(tagKeyScope_, tagKeyScope) };


    // tagValueScope Field Functions 
    bool hasTagValueScope() const { return this->tagValueScope_ != nullptr;};
    void deleteTagValueScope() { this->tagValueScope_ = nullptr;};
    inline string tagValueScope() const { DARABONBA_PTR_GET_DEFAULT(tagValueScope_, "") };
    inline GetCompliancePackResponseBodyCompliancePackScope& setTagValueScope(string tagValueScope) { DARABONBA_PTR_SET_VALUE(tagValueScope_, tagValueScope) };


    // tagsScope Field Functions 
    bool hasTagsScope() const { return this->tagsScope_ != nullptr;};
    void deleteTagsScope() { this->tagsScope_ = nullptr;};
    inline const vector<Models::GetCompliancePackResponseBodyCompliancePackScopeTagsScope> & tagsScope() const { DARABONBA_PTR_GET_CONST(tagsScope_, vector<Models::GetCompliancePackResponseBodyCompliancePackScopeTagsScope>) };
    inline vector<Models::GetCompliancePackResponseBodyCompliancePackScopeTagsScope> tagsScope() { DARABONBA_PTR_GET(tagsScope_, vector<Models::GetCompliancePackResponseBodyCompliancePackScopeTagsScope>) };
    inline GetCompliancePackResponseBodyCompliancePackScope& setTagsScope(const vector<Models::GetCompliancePackResponseBodyCompliancePackScopeTagsScope> & tagsScope) { DARABONBA_PTR_SET_VALUE(tagsScope_, tagsScope) };
    inline GetCompliancePackResponseBodyCompliancePackScope& setTagsScope(vector<Models::GetCompliancePackResponseBodyCompliancePackScopeTagsScope> && tagsScope) { DARABONBA_PTR_SET_RVALUE(tagsScope_, tagsScope) };


  protected:
    // The IDs of regions that are excluded. Separate multiple region IDs with commas (,).
    std::shared_ptr<string> excludeRegionIdsScope_ = nullptr;
    // The IDs of the resource groups whose resources you do not want to evaluate by using the compliance package. Separate multiple resource group IDs with commas (,).
    std::shared_ptr<string> excludeResourceGroupIdsScope_ = nullptr;
    // The ID of the resource that you do not want to evaluate by using the compliance package.
    std::shared_ptr<string> excludeResourceIdsScope_ = nullptr;
    // The scope of the tag that is excluded.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::GetCompliancePackResponseBodyCompliancePackScopeExcludeTagsScope>> excludeTagsScope_ = nullptr;
    // The ID of the region whose resources you want to evaluate by using the compliance package.
    std::shared_ptr<string> regionIdsScope_ = nullptr;
    // The ID of the resource group whose resources you want to evaluate by using the compliance package.
    std::shared_ptr<string> resourceGroupIdsScope_ = nullptr;
    // The IDs of the resources to which the rule applies. Separate multiple resource IDs with commas (,).
    std::shared_ptr<string> resourceIdsScope_ = nullptr;
    // The tag key of the resource that you want to evaluate by using the compliance package.
    std::shared_ptr<string> tagKeyScope_ = nullptr;
    // The tag value of the resource that you want to evaluate by using the compliance package.
    std::shared_ptr<string> tagValueScope_ = nullptr;
    // The tag scope.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::GetCompliancePackResponseBodyCompliancePackScopeTagsScope>> tagsScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
