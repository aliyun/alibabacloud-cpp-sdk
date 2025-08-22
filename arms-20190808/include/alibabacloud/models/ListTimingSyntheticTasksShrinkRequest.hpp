// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListTimingSyntheticTasksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTimingSyntheticTasksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Search, searchShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListTimingSyntheticTasksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Search, searchShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    ListTimingSyntheticTasksShrinkRequest() = default ;
    ListTimingSyntheticTasksShrinkRequest(const ListTimingSyntheticTasksShrinkRequest &) = default ;
    ListTimingSyntheticTasksShrinkRequest(ListTimingSyntheticTasksShrinkRequest &&) = default ;
    ListTimingSyntheticTasksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTimingSyntheticTasksShrinkRequest() = default ;
    ListTimingSyntheticTasksShrinkRequest& operator=(const ListTimingSyntheticTasksShrinkRequest &) = default ;
    ListTimingSyntheticTasksShrinkRequest& operator=(ListTimingSyntheticTasksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->searchShrink_ != nullptr && this->tagsShrink_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTimingSyntheticTasksShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTimingSyntheticTasksShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // searchShrink Field Functions 
    bool hasSearchShrink() const { return this->searchShrink_ != nullptr;};
    void deleteSearchShrink() { this->searchShrink_ = nullptr;};
    inline string searchShrink() const { DARABONBA_PTR_GET_DEFAULT(searchShrink_, "") };
    inline ListTimingSyntheticTasksShrinkRequest& setSearchShrink(string searchShrink) { DARABONBA_PTR_SET_VALUE(searchShrink_, searchShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListTimingSyntheticTasksShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The search keyword.
    std::shared_ptr<string> searchShrink_ = nullptr;
    // The tags.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
