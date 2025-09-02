// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListResourceGroupsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizExtKey, bizExtKey_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(ResourceGroupType, resourceGroupType_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizExtKey, bizExtKey_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupType, resourceGroupType_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
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
    virtual bool empty() const override { this->bizExtKey_ != nullptr
        && this->keyword_ != nullptr && this->resourceGroupType_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->tagsShrink_ != nullptr; };
    // bizExtKey Field Functions 
    bool hasBizExtKey() const { return this->bizExtKey_ != nullptr;};
    void deleteBizExtKey() { this->bizExtKey_ = nullptr;};
    inline string bizExtKey() const { DARABONBA_PTR_GET_DEFAULT(bizExtKey_, "") };
    inline ListResourceGroupsShrinkRequest& setBizExtKey(string bizExtKey) { DARABONBA_PTR_SET_VALUE(bizExtKey_, bizExtKey) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListResourceGroupsShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // resourceGroupType Field Functions 
    bool hasResourceGroupType() const { return this->resourceGroupType_ != nullptr;};
    void deleteResourceGroupType() { this->resourceGroupType_ = nullptr;};
    inline int32_t resourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupType_, 0) };
    inline ListResourceGroupsShrinkRequest& setResourceGroupType(int32_t resourceGroupType) { DARABONBA_PTR_SET_VALUE(resourceGroupType_, resourceGroupType) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ListResourceGroupsShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListResourceGroupsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The category of the resource group. Valid values:
    // 
    // *   default (default): shared resource group
    // *   single: exclusive resource group
    std::shared_ptr<string> bizExtKey_ = nullptr;
    // The keyword that is used for fuzzy match by resource group name and identifier.
    std::shared_ptr<string> keyword_ = nullptr;
    // The type of the resource group that you want to query. Valid values:
    // 
    // *   0: DataWorks
    // *   1: scheduling
    // *   2: MaxCompute
    // *   3: Platform for AI (PAI)
    // *   4: Data Integration
    // *   7: exclusive resource group for scheduling (An ID is generated for the purchased resource when you purchase an exclusive resource group for scheduling.)
    // *   9: DataService Studio
    // *   Default value: 1
    // 
    // If the value indicates a compute engine, the resource groups to query are the ones that were created when you purchased the compute engine.
    std::shared_ptr<int32_t> resourceGroupType_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
