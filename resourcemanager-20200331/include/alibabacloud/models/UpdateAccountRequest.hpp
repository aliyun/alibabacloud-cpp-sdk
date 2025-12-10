// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(NewAccountType, newAccountType_);
      DARABONBA_PTR_TO_JSON(NewDisplayName, newDisplayName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(NewAccountType, newAccountType_);
      DARABONBA_PTR_FROM_JSON(NewDisplayName, newDisplayName_);
    };
    UpdateAccountRequest() = default ;
    UpdateAccountRequest(const UpdateAccountRequest &) = default ;
    UpdateAccountRequest(UpdateAccountRequest &&) = default ;
    UpdateAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccountRequest() = default ;
    UpdateAccountRequest& operator=(const UpdateAccountRequest &) = default ;
    UpdateAccountRequest& operator=(UpdateAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->newAccountType_ == nullptr && return this->newDisplayName_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline UpdateAccountRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // newAccountType Field Functions 
    bool hasNewAccountType() const { return this->newAccountType_ != nullptr;};
    void deleteNewAccountType() { this->newAccountType_ = nullptr;};
    inline string newAccountType() const { DARABONBA_PTR_GET_DEFAULT(newAccountType_, "") };
    inline UpdateAccountRequest& setNewAccountType(string newAccountType) { DARABONBA_PTR_SET_VALUE(newAccountType_, newAccountType) };


    // newDisplayName Field Functions 
    bool hasNewDisplayName() const { return this->newDisplayName_ != nullptr;};
    void deleteNewDisplayName() { this->newDisplayName_ = nullptr;};
    inline string newDisplayName() const { DARABONBA_PTR_GET_DEFAULT(newDisplayName_, "") };
    inline UpdateAccountRequest& setNewDisplayName(string newDisplayName) { DARABONBA_PTR_SET_VALUE(newDisplayName_, newDisplayName) };


  protected:
    // The ID of the Alibaba Cloud account that corresponds to the member.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // The new type of the member. Valid values:
    // 
    // *   ResourceAccount: resource account
    // *   CloudAccount: cloud account
    // 
    // >  You can configure either the `NewDisplayName` or `NewAccountType` parameter.
    std::shared_ptr<string> newAccountType_ = nullptr;
    // The new display name of the member.
    // 
    // >  You can configure either the `NewDisplayName` or `NewAccountType` parameter.
    std::shared_ptr<string> newDisplayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
