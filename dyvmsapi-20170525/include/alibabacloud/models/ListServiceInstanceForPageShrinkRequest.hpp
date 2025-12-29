// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEFORPAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEFORPAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ListServiceInstanceForPageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceForPageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Pager, pagerShrink_);
      DARABONBA_PTR_TO_JSON(RelationNumber, relationNumber_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(UsageId, usageId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceForPageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Pager, pagerShrink_);
      DARABONBA_PTR_FROM_JSON(RelationNumber, relationNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(UsageId, usageId_);
    };
    ListServiceInstanceForPageShrinkRequest() = default ;
    ListServiceInstanceForPageShrinkRequest(const ListServiceInstanceForPageShrinkRequest &) = default ;
    ListServiceInstanceForPageShrinkRequest(ListServiceInstanceForPageShrinkRequest &&) = default ;
    ListServiceInstanceForPageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceForPageShrinkRequest() = default ;
    ListServiceInstanceForPageShrinkRequest& operator=(const ListServiceInstanceForPageShrinkRequest &) = default ;
    ListServiceInstanceForPageShrinkRequest& operator=(ListServiceInstanceForPageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->ownerId_ == nullptr && this->pagerShrink_ == nullptr && this->relationNumber_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->sceneId_ == nullptr && this->usageId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListServiceInstanceForPageShrinkRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListServiceInstanceForPageShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pagerShrink Field Functions 
    bool hasPagerShrink() const { return this->pagerShrink_ != nullptr;};
    void deletePagerShrink() { this->pagerShrink_ = nullptr;};
    inline string getPagerShrink() const { DARABONBA_PTR_GET_DEFAULT(pagerShrink_, "") };
    inline ListServiceInstanceForPageShrinkRequest& setPagerShrink(string pagerShrink) { DARABONBA_PTR_SET_VALUE(pagerShrink_, pagerShrink) };


    // relationNumber Field Functions 
    bool hasRelationNumber() const { return this->relationNumber_ != nullptr;};
    void deleteRelationNumber() { this->relationNumber_ = nullptr;};
    inline string getRelationNumber() const { DARABONBA_PTR_GET_DEFAULT(relationNumber_, "") };
    inline ListServiceInstanceForPageShrinkRequest& setRelationNumber(string relationNumber) { DARABONBA_PTR_SET_VALUE(relationNumber_, relationNumber) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListServiceInstanceForPageShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListServiceInstanceForPageShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline ListServiceInstanceForPageShrinkRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // usageId Field Functions 
    bool hasUsageId() const { return this->usageId_ != nullptr;};
    void deleteUsageId() { this->usageId_ = nullptr;};
    inline int64_t getUsageId() const { DARABONBA_PTR_GET_DEFAULT(usageId_, 0L) };
    inline ListServiceInstanceForPageShrinkRequest& setUsageId(int64_t usageId) { DARABONBA_PTR_SET_VALUE(usageId_, usageId) };


  protected:
    // 服务实例号
    shared_ptr<string> code_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> pagerShrink_ {};
    // 关联实体号码
    shared_ptr<string> relationNumber_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 场景ID
    shared_ptr<int64_t> sceneId_ {};
    // 用途ID
    shared_ptr<int64_t> usageId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
