// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDTARGETSRESPONSEBODYSHAREDTARGETS_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDTARGETSRESPONSEBODYSHAREDTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListSharedTargetsResponseBodySharedTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedTargetsResponseBodySharedTargets& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(External, external_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetProperty, targetProperty_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedTargetsResponseBodySharedTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(External, external_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetProperty, targetProperty_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListSharedTargetsResponseBodySharedTargets() = default ;
    ListSharedTargetsResponseBodySharedTargets(const ListSharedTargetsResponseBodySharedTargets &) = default ;
    ListSharedTargetsResponseBodySharedTargets(ListSharedTargetsResponseBodySharedTargets &&) = default ;
    ListSharedTargetsResponseBodySharedTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedTargetsResponseBodySharedTargets() = default ;
    ListSharedTargetsResponseBodySharedTargets& operator=(const ListSharedTargetsResponseBodySharedTargets &) = default ;
    ListSharedTargetsResponseBodySharedTargets& operator=(ListSharedTargetsResponseBodySharedTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->external_ != nullptr && this->resourceShareId_ != nullptr && this->targetId_ != nullptr && this->targetProperty_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSharedTargetsResponseBodySharedTargets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // external Field Functions 
    bool hasExternal() const { return this->external_ != nullptr;};
    void deleteExternal() { this->external_ = nullptr;};
    inline bool external() const { DARABONBA_PTR_GET_DEFAULT(external_, false) };
    inline ListSharedTargetsResponseBodySharedTargets& setExternal(bool external) { DARABONBA_PTR_SET_VALUE(external_, external) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline ListSharedTargetsResponseBodySharedTargets& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListSharedTargetsResponseBodySharedTargets& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetProperty Field Functions 
    bool hasTargetProperty() const { return this->targetProperty_ != nullptr;};
    void deleteTargetProperty() { this->targetProperty_ = nullptr;};
    inline string targetProperty() const { DARABONBA_PTR_GET_DEFAULT(targetProperty_, "") };
    inline ListSharedTargetsResponseBodySharedTargets& setTargetProperty(string targetProperty) { DARABONBA_PTR_SET_VALUE(targetProperty_, targetProperty) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListSharedTargetsResponseBodySharedTargets& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the principal was associated with the resource share.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the principal is outside the resource directory. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> external_ = nullptr;
    // The ID of the resource share.
    std::shared_ptr<string> resourceShareId_ = nullptr;
    // The ID of the principal or resource owner.
    // 
    // *   If the value of `ResourceOwner` is `Self`, the value of this parameter is the ID of a principal.
    // *   If the value of `ResourceOwner` is `OtherAccounts`, the value of this parameter is the ID of a resource owner.
    std::shared_ptr<string> targetId_ = nullptr;
    // The properties of the principal, such as the time range within which the resource is shared.
    // 
    // >  This parameter is returned only if the principal is an Alibaba Cloud service.
    std::shared_ptr<string> targetProperty_ = nullptr;
    // The time when the association of the principal was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
