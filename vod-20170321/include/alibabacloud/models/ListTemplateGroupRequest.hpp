// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListTemplateGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsContainsTemplates, isContainsTemplates_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsContainsTemplates, isContainsTemplates_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ListTemplateGroupRequest() = default ;
    ListTemplateGroupRequest(const ListTemplateGroupRequest &) = default ;
    ListTemplateGroupRequest(ListTemplateGroupRequest &&) = default ;
    ListTemplateGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateGroupRequest() = default ;
    ListTemplateGroupRequest& operator=(const ListTemplateGroupRequest &) = default ;
    ListTemplateGroupRequest& operator=(ListTemplateGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isContainsTemplates_ != nullptr
        && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // isContainsTemplates Field Functions 
    bool hasIsContainsTemplates() const { return this->isContainsTemplates_ != nullptr;};
    void deleteIsContainsTemplates() { this->isContainsTemplates_ = nullptr;};
    inline bool isContainsTemplates() const { DARABONBA_PTR_GET_DEFAULT(isContainsTemplates_, false) };
    inline ListTemplateGroupRequest& setIsContainsTemplates(bool isContainsTemplates) { DARABONBA_PTR_SET_VALUE(isContainsTemplates_, isContainsTemplates) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTemplateGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTemplateGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTemplateGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    std::shared_ptr<bool> isContainsTemplates_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
