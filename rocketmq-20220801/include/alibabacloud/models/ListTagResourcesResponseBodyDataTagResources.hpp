// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODYDATATAGRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODYDATATAGRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListTagResourcesResponseBodyDataTagResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesResponseBodyDataTagResources& obj) { 
      DARABONBA_PTR_TO_JSON(aliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesResponseBodyDataTagResources& obj) { 
      DARABONBA_PTR_FROM_JSON(aliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
    };
    ListTagResourcesResponseBodyDataTagResources() = default ;
    ListTagResourcesResponseBodyDataTagResources(const ListTagResourcesResponseBodyDataTagResources &) = default ;
    ListTagResourcesResponseBodyDataTagResources(ListTagResourcesResponseBodyDataTagResources &&) = default ;
    ListTagResourcesResponseBodyDataTagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesResponseBodyDataTagResources() = default ;
    ListTagResourcesResponseBodyDataTagResources& operator=(const ListTagResourcesResponseBodyDataTagResources &) = default ;
    ListTagResourcesResponseBodyDataTagResources& operator=(ListTagResourcesResponseBodyDataTagResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->category_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr && return this->scope_ == nullptr && return this->tagKey_ == nullptr
        && return this->tagValue_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListTagResourcesResponseBodyDataTagResources& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListTagResourcesResponseBodyDataTagResources& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListTagResourcesResponseBodyDataTagResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTagResourcesResponseBodyDataTagResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListTagResourcesResponseBodyDataTagResources& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline ListTagResourcesResponseBodyDataTagResources& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline ListTagResourcesResponseBodyDataTagResources& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // UID of the resource owner.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // Tag category.
    std::shared_ptr<string> category_ = nullptr;
    // Resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // Resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Visibility scope.
    std::shared_ptr<string> scope_ = nullptr;
    // Tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
    // Tag value.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
