// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVECONTACTTOGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVECONTACTTOGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class MoveContactToGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveContactToGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_ANY_TO_JSON(BizExtend, bizExtend_);
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(LinkExistGroups, linkExistGroups_);
      DARABONBA_PTR_TO_JSON(LinkNewGroups, linkNewGroups_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveContactToGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_ANY_FROM_JSON(BizExtend, bizExtend_);
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(LinkExistGroups, linkExistGroups_);
      DARABONBA_PTR_FROM_JSON(LinkNewGroups, linkNewGroups_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    MoveContactToGroupRequest() = default ;
    MoveContactToGroupRequest(const MoveContactToGroupRequest &) = default ;
    MoveContactToGroupRequest(MoveContactToGroupRequest &&) = default ;
    MoveContactToGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveContactToGroupRequest() = default ;
    MoveContactToGroupRequest& operator=(const MoveContactToGroupRequest &) = default ;
    MoveContactToGroupRequest& operator=(MoveContactToGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->bizExtend_ == nullptr && this->contacts_ == nullptr && this->linkExistGroups_ == nullptr && this->linkNewGroups_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline MoveContactToGroupRequest& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // bizExtend Field Functions 
    bool hasBizExtend() const { return this->bizExtend_ != nullptr;};
    void deleteBizExtend() { this->bizExtend_ = nullptr;};
    inline     const Darabonba::Json & getBizExtend() const { DARABONBA_GET(bizExtend_) };
    Darabonba::Json & getBizExtend() { DARABONBA_GET(bizExtend_) };
    inline MoveContactToGroupRequest& setBizExtend(const Darabonba::Json & bizExtend) { DARABONBA_SET_VALUE(bizExtend_, bizExtend) };
    inline MoveContactToGroupRequest& setBizExtend(Darabonba::Json && bizExtend) { DARABONBA_SET_RVALUE(bizExtend_, bizExtend) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline string getContacts() const { DARABONBA_PTR_GET_DEFAULT(contacts_, "") };
    inline MoveContactToGroupRequest& setContacts(string contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };


    // linkExistGroups Field Functions 
    bool hasLinkExistGroups() const { return this->linkExistGroups_ != nullptr;};
    void deleteLinkExistGroups() { this->linkExistGroups_ = nullptr;};
    inline string getLinkExistGroups() const { DARABONBA_PTR_GET_DEFAULT(linkExistGroups_, "") };
    inline MoveContactToGroupRequest& setLinkExistGroups(string linkExistGroups) { DARABONBA_PTR_SET_VALUE(linkExistGroups_, linkExistGroups) };


    // linkNewGroups Field Functions 
    bool hasLinkNewGroups() const { return this->linkNewGroups_ != nullptr;};
    void deleteLinkNewGroups() { this->linkNewGroups_ = nullptr;};
    inline string getLinkNewGroups() const { DARABONBA_PTR_GET_DEFAULT(linkNewGroups_, "") };
    inline MoveContactToGroupRequest& setLinkNewGroups(string linkNewGroups) { DARABONBA_PTR_SET_VALUE(linkNewGroups_, linkNewGroups) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline MoveContactToGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline MoveContactToGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline MoveContactToGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<string> bizCode_ {};
    Darabonba::Json bizExtend_ {};
    // This parameter is required.
    shared_ptr<string> contacts_ {};
    shared_ptr<string> linkExistGroups_ {};
    shared_ptr<string> linkNewGroups_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
