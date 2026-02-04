// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class UpdateAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NewAccountType, newAccountType_);
      DARABONBA_PTR_TO_JSON(NewDisplayName, newDisplayName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
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
        && this->dryRun_ == nullptr && this->newAccountType_ == nullptr && this->newDisplayName_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline UpdateAccountRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateAccountRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // newAccountType Field Functions 
    bool hasNewAccountType() const { return this->newAccountType_ != nullptr;};
    void deleteNewAccountType() { this->newAccountType_ = nullptr;};
    inline string getNewAccountType() const { DARABONBA_PTR_GET_DEFAULT(newAccountType_, "") };
    inline UpdateAccountRequest& setNewAccountType(string newAccountType) { DARABONBA_PTR_SET_VALUE(newAccountType_, newAccountType) };


    // newDisplayName Field Functions 
    bool hasNewDisplayName() const { return this->newDisplayName_ != nullptr;};
    void deleteNewDisplayName() { this->newDisplayName_ = nullptr;};
    inline string getNewDisplayName() const { DARABONBA_PTR_GET_DEFAULT(newDisplayName_, "") };
    inline UpdateAccountRequest& setNewDisplayName(string newDisplayName) { DARABONBA_PTR_SET_VALUE(newDisplayName_, newDisplayName) };


  protected:
    // The Alibaba Cloud account ID of the member.
    // 
    // This parameter is required.
    shared_ptr<string> accountId_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   true: performs only a dry run. The system checks items such as whether the member status can be modified and whether security information is configured for the member. If the request does not pass the dry run, an error code is returned.
    // *   false (default): performs a dry run and performs the actual request.
    shared_ptr<bool> dryRun_ {};
    // The new type of the member. Valid values:
    // 
    // *   ResourceAccount: resource account
    // *   CloudAccount: cloud account
    // 
    // > You can specify either `NewDisplayName` or `NewAccountType`.
    shared_ptr<string> newAccountType_ {};
    // The new display name of the member.
    // 
    // > You can specify either `NewDisplayName` or `NewAccountType`.
    shared_ptr<string> newDisplayName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
