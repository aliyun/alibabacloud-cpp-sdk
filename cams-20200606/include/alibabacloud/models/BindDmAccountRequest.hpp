// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDDMACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDDMACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class BindDmAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindDmAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountCode, accountCode_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(ExtendAttr, extendAttr_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, BindDmAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountCode, accountCode_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(ExtendAttr, extendAttr_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    BindDmAccountRequest() = default ;
    BindDmAccountRequest(const BindDmAccountRequest &) = default ;
    BindDmAccountRequest(BindDmAccountRequest &&) = default ;
    BindDmAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindDmAccountRequest() = default ;
    BindDmAccountRequest& operator=(const BindDmAccountRequest &) = default ;
    BindDmAccountRequest& operator=(BindDmAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExtendAttr : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtendAttr& obj) { 
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(SendType, sendType_);
      };
      friend void from_json(const Darabonba::Json& j, ExtendAttr& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(SendType, sendType_);
      };
      ExtendAttr() = default ;
      ExtendAttr(const ExtendAttr &) = default ;
      ExtendAttr(ExtendAttr &&) = default ;
      ExtendAttr(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExtendAttr() = default ;
      ExtendAttr& operator=(const ExtendAttr &) = default ;
      ExtendAttr& operator=(ExtendAttr &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountName_ == nullptr
        && this->sendType_ == nullptr; };
      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline ExtendAttr& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // sendType Field Functions 
      bool hasSendType() const { return this->sendType_ != nullptr;};
      void deleteSendType() { this->sendType_ = nullptr;};
      inline string getSendType() const { DARABONBA_PTR_GET_DEFAULT(sendType_, "") };
      inline ExtendAttr& setSendType(string sendType) { DARABONBA_PTR_SET_VALUE(sendType_, sendType) };


    protected:
      // This parameter is required.
      shared_ptr<string> accountName_ {};
      // This parameter is required.
      shared_ptr<string> sendType_ {};
    };

    virtual bool empty() const override { return this->accountCode_ == nullptr
        && this->custSpaceId_ == nullptr && this->extendAttr_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // accountCode Field Functions 
    bool hasAccountCode() const { return this->accountCode_ != nullptr;};
    void deleteAccountCode() { this->accountCode_ = nullptr;};
    inline string getAccountCode() const { DARABONBA_PTR_GET_DEFAULT(accountCode_, "") };
    inline BindDmAccountRequest& setAccountCode(string accountCode) { DARABONBA_PTR_SET_VALUE(accountCode_, accountCode) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline BindDmAccountRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // extendAttr Field Functions 
    bool hasExtendAttr() const { return this->extendAttr_ != nullptr;};
    void deleteExtendAttr() { this->extendAttr_ = nullptr;};
    inline const BindDmAccountRequest::ExtendAttr & getExtendAttr() const { DARABONBA_PTR_GET_CONST(extendAttr_, BindDmAccountRequest::ExtendAttr) };
    inline BindDmAccountRequest::ExtendAttr getExtendAttr() { DARABONBA_PTR_GET(extendAttr_, BindDmAccountRequest::ExtendAttr) };
    inline BindDmAccountRequest& setExtendAttr(const BindDmAccountRequest::ExtendAttr & extendAttr) { DARABONBA_PTR_SET_VALUE(extendAttr_, extendAttr) };
    inline BindDmAccountRequest& setExtendAttr(BindDmAccountRequest::ExtendAttr && extendAttr) { DARABONBA_PTR_SET_RVALUE(extendAttr_, extendAttr) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindDmAccountRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindDmAccountRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindDmAccountRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> accountCode_ {};
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    // This parameter is required.
    shared_ptr<BindDmAccountRequest::ExtendAttr> extendAttr_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
