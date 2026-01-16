// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECEIVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERECEIVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class CreateReceiverRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReceiverRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReceiversAlias, receiversAlias_);
      DARABONBA_PTR_TO_JSON(ReceiversName, receiversName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReceiverRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReceiversAlias, receiversAlias_);
      DARABONBA_PTR_FROM_JSON(ReceiversName, receiversName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateReceiverRequest() = default ;
    CreateReceiverRequest(const CreateReceiverRequest &) = default ;
    CreateReceiverRequest(CreateReceiverRequest &&) = default ;
    CreateReceiverRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReceiverRequest() = default ;
    CreateReceiverRequest& operator=(const CreateReceiverRequest &) = default ;
    CreateReceiverRequest& operator=(CreateReceiverRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && this->ownerId_ == nullptr && this->receiversAlias_ == nullptr && this->receiversName_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline CreateReceiverRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateReceiverRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // receiversAlias Field Functions 
    bool hasReceiversAlias() const { return this->receiversAlias_ != nullptr;};
    void deleteReceiversAlias() { this->receiversAlias_ = nullptr;};
    inline string getReceiversAlias() const { DARABONBA_PTR_GET_DEFAULT(receiversAlias_, "") };
    inline CreateReceiverRequest& setReceiversAlias(string receiversAlias) { DARABONBA_PTR_SET_VALUE(receiversAlias_, receiversAlias) };


    // receiversName Field Functions 
    bool hasReceiversName() const { return this->receiversName_ != nullptr;};
    void deleteReceiversName() { this->receiversName_ = nullptr;};
    inline string getReceiversName() const { DARABONBA_PTR_GET_DEFAULT(receiversName_, "") };
    inline CreateReceiverRequest& setReceiversName(string receiversName) { DARABONBA_PTR_SET_VALUE(receiversName_, receiversName) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateReceiverRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateReceiverRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // List description.
    shared_ptr<string> desc_ {};
    shared_ptr<int64_t> ownerId_ {};
    // List alias, an email address less than 30 characters long.
    // 
    // This parameter is required.
    shared_ptr<string> receiversAlias_ {};
    // List name, must be unique, with a length of 1-30 characters.
    // 
    // This parameter is required.
    shared_ptr<string> receiversName_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
