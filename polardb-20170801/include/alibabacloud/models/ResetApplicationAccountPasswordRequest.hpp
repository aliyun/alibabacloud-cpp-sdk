// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETAPPLICATIONACCOUNTPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETAPPLICATIONACCOUNTPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ResetApplicationAccountPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetApplicationAccountPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(NewAccountPassword, newAccountPassword_);
    };
    friend void from_json(const Darabonba::Json& j, ResetApplicationAccountPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(NewAccountPassword, newAccountPassword_);
    };
    ResetApplicationAccountPasswordRequest() = default ;
    ResetApplicationAccountPasswordRequest(const ResetApplicationAccountPasswordRequest &) = default ;
    ResetApplicationAccountPasswordRequest(ResetApplicationAccountPasswordRequest &&) = default ;
    ResetApplicationAccountPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetApplicationAccountPasswordRequest() = default ;
    ResetApplicationAccountPasswordRequest& operator=(const ResetApplicationAccountPasswordRequest &) = default ;
    ResetApplicationAccountPasswordRequest& operator=(ResetApplicationAccountPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->applicationId_ == nullptr && this->newAccountPassword_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ResetApplicationAccountPasswordRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ResetApplicationAccountPasswordRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // newAccountPassword Field Functions 
    bool hasNewAccountPassword() const { return this->newAccountPassword_ != nullptr;};
    void deleteNewAccountPassword() { this->newAccountPassword_ = nullptr;};
    inline string getNewAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(newAccountPassword_, "") };
    inline ResetApplicationAccountPasswordRequest& setNewAccountPassword(string newAccountPassword) { DARABONBA_PTR_SET_VALUE(newAccountPassword_, newAccountPassword) };


  protected:
    // The account name.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The new password.
    // 
    // This parameter is required.
    shared_ptr<string> newAccountPassword_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
