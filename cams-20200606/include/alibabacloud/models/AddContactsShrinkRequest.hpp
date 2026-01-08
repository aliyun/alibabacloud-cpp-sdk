// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONTACTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCONTACTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class AddContactsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddContactsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(BizExtend, bizExtendShrink_);
      DARABONBA_PTR_TO_JSON(ContactDetails, contactDetails_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(NeedUpdate, needUpdate_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AddContactsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(BizExtend, bizExtendShrink_);
      DARABONBA_PTR_FROM_JSON(ContactDetails, contactDetails_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(NeedUpdate, needUpdate_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AddContactsShrinkRequest() = default ;
    AddContactsShrinkRequest(const AddContactsShrinkRequest &) = default ;
    AddContactsShrinkRequest(AddContactsShrinkRequest &&) = default ;
    AddContactsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddContactsShrinkRequest() = default ;
    AddContactsShrinkRequest& operator=(const AddContactsShrinkRequest &) = default ;
    AddContactsShrinkRequest& operator=(AddContactsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->bizExtendShrink_ == nullptr && this->contactDetails_ == nullptr && this->contactName_ == nullptr && this->country_ == nullptr && this->email_ == nullptr
        && this->filePath_ == nullptr && this->groups_ == nullptr && this->needUpdate_ == nullptr && this->ownerId_ == nullptr && this->remark_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline AddContactsShrinkRequest& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // bizExtendShrink Field Functions 
    bool hasBizExtendShrink() const { return this->bizExtendShrink_ != nullptr;};
    void deleteBizExtendShrink() { this->bizExtendShrink_ = nullptr;};
    inline string getBizExtendShrink() const { DARABONBA_PTR_GET_DEFAULT(bizExtendShrink_, "") };
    inline AddContactsShrinkRequest& setBizExtendShrink(string bizExtendShrink) { DARABONBA_PTR_SET_VALUE(bizExtendShrink_, bizExtendShrink) };


    // contactDetails Field Functions 
    bool hasContactDetails() const { return this->contactDetails_ != nullptr;};
    void deleteContactDetails() { this->contactDetails_ = nullptr;};
    inline string getContactDetails() const { DARABONBA_PTR_GET_DEFAULT(contactDetails_, "") };
    inline AddContactsShrinkRequest& setContactDetails(string contactDetails) { DARABONBA_PTR_SET_VALUE(contactDetails_, contactDetails) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline AddContactsShrinkRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline AddContactsShrinkRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline AddContactsShrinkRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline AddContactsShrinkRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline string getGroups() const { DARABONBA_PTR_GET_DEFAULT(groups_, "") };
    inline AddContactsShrinkRequest& setGroups(string groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };


    // needUpdate Field Functions 
    bool hasNeedUpdate() const { return this->needUpdate_ != nullptr;};
    void deleteNeedUpdate() { this->needUpdate_ = nullptr;};
    inline bool getNeedUpdate() const { DARABONBA_PTR_GET_DEFAULT(needUpdate_, false) };
    inline AddContactsShrinkRequest& setNeedUpdate(bool needUpdate) { DARABONBA_PTR_SET_VALUE(needUpdate_, needUpdate) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddContactsShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddContactsShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddContactsShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddContactsShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<string> bizCode_ {};
    shared_ptr<string> bizExtendShrink_ {};
    shared_ptr<string> contactDetails_ {};
    shared_ptr<string> contactName_ {};
    shared_ptr<string> country_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> filePath_ {};
    // This parameter is required.
    shared_ptr<string> groups_ {};
    // This parameter is required.
    shared_ptr<bool> needUpdate_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
