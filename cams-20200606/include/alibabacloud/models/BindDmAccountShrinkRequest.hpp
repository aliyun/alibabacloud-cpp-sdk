// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDDMACCOUNTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDDMACCOUNTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class BindDmAccountShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindDmAccountShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountCode, accountCode_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(ExtendAttr, extendAttrShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, BindDmAccountShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountCode, accountCode_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(ExtendAttr, extendAttrShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    BindDmAccountShrinkRequest() = default ;
    BindDmAccountShrinkRequest(const BindDmAccountShrinkRequest &) = default ;
    BindDmAccountShrinkRequest(BindDmAccountShrinkRequest &&) = default ;
    BindDmAccountShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindDmAccountShrinkRequest() = default ;
    BindDmAccountShrinkRequest& operator=(const BindDmAccountShrinkRequest &) = default ;
    BindDmAccountShrinkRequest& operator=(BindDmAccountShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountCode_ == nullptr
        && this->custSpaceId_ == nullptr && this->extendAttrShrink_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // accountCode Field Functions 
    bool hasAccountCode() const { return this->accountCode_ != nullptr;};
    void deleteAccountCode() { this->accountCode_ = nullptr;};
    inline string getAccountCode() const { DARABONBA_PTR_GET_DEFAULT(accountCode_, "") };
    inline BindDmAccountShrinkRequest& setAccountCode(string accountCode) { DARABONBA_PTR_SET_VALUE(accountCode_, accountCode) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline BindDmAccountShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // extendAttrShrink Field Functions 
    bool hasExtendAttrShrink() const { return this->extendAttrShrink_ != nullptr;};
    void deleteExtendAttrShrink() { this->extendAttrShrink_ = nullptr;};
    inline string getExtendAttrShrink() const { DARABONBA_PTR_GET_DEFAULT(extendAttrShrink_, "") };
    inline BindDmAccountShrinkRequest& setExtendAttrShrink(string extendAttrShrink) { DARABONBA_PTR_SET_VALUE(extendAttrShrink_, extendAttrShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindDmAccountShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindDmAccountShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindDmAccountShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> accountCode_ {};
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    // This parameter is required.
    shared_ptr<string> extendAttrShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
