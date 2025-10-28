// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBACCOUNTRESPONSEBODYSUBACCOUNTLISTSUBACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBACCOUNTRESPONSEBODYSUBACCOUNTLISTSUBACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSubAccountResponseBodySubAccountListSubAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubAccountResponseBodySubAccountListSubAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AdminEdasId, adminEdasId_);
      DARABONBA_PTR_TO_JSON(AdminUserId, adminUserId_);
      DARABONBA_PTR_TO_JSON(AdminUserKp, adminUserKp_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(SubEdasId, subEdasId_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_TO_JSON(SubUserKp, subUserKp_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubAccountResponseBodySubAccountListSubAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminEdasId, adminEdasId_);
      DARABONBA_PTR_FROM_JSON(AdminUserId, adminUserId_);
      DARABONBA_PTR_FROM_JSON(AdminUserKp, adminUserKp_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(SubEdasId, subEdasId_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_FROM_JSON(SubUserKp, subUserKp_);
    };
    ListSubAccountResponseBodySubAccountListSubAccount() = default ;
    ListSubAccountResponseBodySubAccountListSubAccount(const ListSubAccountResponseBodySubAccountListSubAccount &) = default ;
    ListSubAccountResponseBodySubAccountListSubAccount(ListSubAccountResponseBodySubAccountListSubAccount &&) = default ;
    ListSubAccountResponseBodySubAccountListSubAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubAccountResponseBodySubAccountListSubAccount() = default ;
    ListSubAccountResponseBodySubAccountListSubAccount& operator=(const ListSubAccountResponseBodySubAccountListSubAccount &) = default ;
    ListSubAccountResponseBodySubAccountListSubAccount& operator=(ListSubAccountResponseBodySubAccountListSubAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminEdasId_ == nullptr
        && return this->adminUserId_ == nullptr && return this->adminUserKp_ == nullptr && return this->email_ == nullptr && return this->phone_ == nullptr && return this->subEdasId_ == nullptr
        && return this->subUserId_ == nullptr && return this->subUserKp_ == nullptr; };
    // adminEdasId Field Functions 
    bool hasAdminEdasId() const { return this->adminEdasId_ != nullptr;};
    void deleteAdminEdasId() { this->adminEdasId_ = nullptr;};
    inline string adminEdasId() const { DARABONBA_PTR_GET_DEFAULT(adminEdasId_, "") };
    inline ListSubAccountResponseBodySubAccountListSubAccount& setAdminEdasId(string adminEdasId) { DARABONBA_PTR_SET_VALUE(adminEdasId_, adminEdasId) };


    // adminUserId Field Functions 
    bool hasAdminUserId() const { return this->adminUserId_ != nullptr;};
    void deleteAdminUserId() { this->adminUserId_ = nullptr;};
    inline string adminUserId() const { DARABONBA_PTR_GET_DEFAULT(adminUserId_, "") };
    inline ListSubAccountResponseBodySubAccountListSubAccount& setAdminUserId(string adminUserId) { DARABONBA_PTR_SET_VALUE(adminUserId_, adminUserId) };


    // adminUserKp Field Functions 
    bool hasAdminUserKp() const { return this->adminUserKp_ != nullptr;};
    void deleteAdminUserKp() { this->adminUserKp_ = nullptr;};
    inline string adminUserKp() const { DARABONBA_PTR_GET_DEFAULT(adminUserKp_, "") };
    inline ListSubAccountResponseBodySubAccountListSubAccount& setAdminUserKp(string adminUserKp) { DARABONBA_PTR_SET_VALUE(adminUserKp_, adminUserKp) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListSubAccountResponseBodySubAccountListSubAccount& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ListSubAccountResponseBodySubAccountListSubAccount& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // subEdasId Field Functions 
    bool hasSubEdasId() const { return this->subEdasId_ != nullptr;};
    void deleteSubEdasId() { this->subEdasId_ = nullptr;};
    inline string subEdasId() const { DARABONBA_PTR_GET_DEFAULT(subEdasId_, "") };
    inline ListSubAccountResponseBodySubAccountListSubAccount& setSubEdasId(string subEdasId) { DARABONBA_PTR_SET_VALUE(subEdasId_, subEdasId) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline string subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, "") };
    inline ListSubAccountResponseBodySubAccountListSubAccount& setSubUserId(string subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    // subUserKp Field Functions 
    bool hasSubUserKp() const { return this->subUserKp_ != nullptr;};
    void deleteSubUserKp() { this->subUserKp_ = nullptr;};
    inline string subUserKp() const { DARABONBA_PTR_GET_DEFAULT(subUserKp_, "") };
    inline ListSubAccountResponseBodySubAccountListSubAccount& setSubUserKp(string subUserKp) { DARABONBA_PTR_SET_VALUE(subUserKp_, subUserKp) };


  protected:
    // The ID of the Alibaba Cloud account. This ID is generated by EDAS.
    std::shared_ptr<string> adminEdasId_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> adminUserId_ = nullptr;
    // This parameter is the same as the AdminEdasId parameter. This parameter is deprecated.
    std::shared_ptr<string> adminUserKp_ = nullptr;
    // The email address of the RAM user.
    std::shared_ptr<string> email_ = nullptr;
    // The contact information of the RAM user.
    std::shared_ptr<string> phone_ = nullptr;
    // The ID of the RAM user. This ID is generated by Enterprise Distributed Application Service (EDAS).
    std::shared_ptr<string> subEdasId_ = nullptr;
    // The ID of the RAM user.
    std::shared_ptr<string> subUserId_ = nullptr;
    // This parameter is the same as the SubEdasId parameter. This parameter is deprecated.
    std::shared_ptr<string> subUserKp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
