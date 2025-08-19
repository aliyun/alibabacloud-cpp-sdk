// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERKUBECONFIGSTATESRESPONSEBODYSTATES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERKUBECONFIGSTATESRESPONSEBODYSTATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterKubeconfigStatesResponseBodyStates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterKubeconfigStatesResponseBodyStates& obj) { 
      DARABONBA_PTR_TO_JSON(account_display_name, accountDisplayName_);
      DARABONBA_PTR_TO_JSON(account_id, accountId_);
      DARABONBA_PTR_TO_JSON(account_name, accountName_);
      DARABONBA_PTR_TO_JSON(account_state, accountState_);
      DARABONBA_PTR_TO_JSON(account_type, accountType_);
      DARABONBA_PTR_TO_JSON(cert_expire_time, certExpireTime_);
      DARABONBA_PTR_TO_JSON(cert_state, certState_);
      DARABONBA_PTR_TO_JSON(revokable, revokable_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterKubeconfigStatesResponseBodyStates& obj) { 
      DARABONBA_PTR_FROM_JSON(account_display_name, accountDisplayName_);
      DARABONBA_PTR_FROM_JSON(account_id, accountId_);
      DARABONBA_PTR_FROM_JSON(account_name, accountName_);
      DARABONBA_PTR_FROM_JSON(account_state, accountState_);
      DARABONBA_PTR_FROM_JSON(account_type, accountType_);
      DARABONBA_PTR_FROM_JSON(cert_expire_time, certExpireTime_);
      DARABONBA_PTR_FROM_JSON(cert_state, certState_);
      DARABONBA_PTR_FROM_JSON(revokable, revokable_);
    };
    ListClusterKubeconfigStatesResponseBodyStates() = default ;
    ListClusterKubeconfigStatesResponseBodyStates(const ListClusterKubeconfigStatesResponseBodyStates &) = default ;
    ListClusterKubeconfigStatesResponseBodyStates(ListClusterKubeconfigStatesResponseBodyStates &&) = default ;
    ListClusterKubeconfigStatesResponseBodyStates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterKubeconfigStatesResponseBodyStates() = default ;
    ListClusterKubeconfigStatesResponseBodyStates& operator=(const ListClusterKubeconfigStatesResponseBodyStates &) = default ;
    ListClusterKubeconfigStatesResponseBodyStates& operator=(ListClusterKubeconfigStatesResponseBodyStates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountDisplayName_ != nullptr
        && this->accountId_ != nullptr && this->accountName_ != nullptr && this->accountState_ != nullptr && this->accountType_ != nullptr && this->certExpireTime_ != nullptr
        && this->certState_ != nullptr && this->revokable_ != nullptr; };
    // accountDisplayName Field Functions 
    bool hasAccountDisplayName() const { return this->accountDisplayName_ != nullptr;};
    void deleteAccountDisplayName() { this->accountDisplayName_ = nullptr;};
    inline string accountDisplayName() const { DARABONBA_PTR_GET_DEFAULT(accountDisplayName_, "") };
    inline ListClusterKubeconfigStatesResponseBodyStates& setAccountDisplayName(string accountDisplayName) { DARABONBA_PTR_SET_VALUE(accountDisplayName_, accountDisplayName) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListClusterKubeconfigStatesResponseBodyStates& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ListClusterKubeconfigStatesResponseBodyStates& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountState Field Functions 
    bool hasAccountState() const { return this->accountState_ != nullptr;};
    void deleteAccountState() { this->accountState_ = nullptr;};
    inline string accountState() const { DARABONBA_PTR_GET_DEFAULT(accountState_, "") };
    inline ListClusterKubeconfigStatesResponseBodyStates& setAccountState(string accountState) { DARABONBA_PTR_SET_VALUE(accountState_, accountState) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline ListClusterKubeconfigStatesResponseBodyStates& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // certExpireTime Field Functions 
    bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
    void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
    inline string certExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
    inline ListClusterKubeconfigStatesResponseBodyStates& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


    // certState Field Functions 
    bool hasCertState() const { return this->certState_ != nullptr;};
    void deleteCertState() { this->certState_ = nullptr;};
    inline string certState() const { DARABONBA_PTR_GET_DEFAULT(certState_, "") };
    inline ListClusterKubeconfigStatesResponseBodyStates& setCertState(string certState) { DARABONBA_PTR_SET_VALUE(certState_, certState) };


    // revokable Field Functions 
    bool hasRevokable() const { return this->revokable_ != nullptr;};
    void deleteRevokable() { this->revokable_ = nullptr;};
    inline bool revokable() const { DARABONBA_PTR_GET_DEFAULT(revokable_, false) };
    inline ListClusterKubeconfigStatesResponseBodyStates& setRevokable(bool revokable) { DARABONBA_PTR_SET_VALUE(revokable_, revokable) };


  protected:
    // The displayed name or role name of the RAM user.
    std::shared_ptr<string> accountDisplayName_ = nullptr;
    // The ID of an Alibaba Cloud account, RAM user, or RAM role.
    std::shared_ptr<string> accountId_ = nullptr;
    // The logon name or role name of the RAM user.
    std::shared_ptr<string> accountName_ = nullptr;
    // The status of the account.
    // 
    // *   Active: The account is active.
    // *   InActive: The account is locked.
    // *   Deleted: The account is deleted.
    std::shared_ptr<string> accountState_ = nullptr;
    // The type of the account.
    // 
    // *   RootAccount: Alibaba Cloud account.
    // *   RamUser: RAM user.
    // *   RamRole: RAM role.
    std::shared_ptr<string> accountType_ = nullptr;
    // The expiration time of the client certificate for the kubeconfig file.
    std::shared_ptr<string> certExpireTime_ = nullptr;
    // The status of the client certificate for the kubeconfig file.
    // 
    // *   Unexpired: The certificate is not expired.
    // *   Expired: The certificate is expired.
    // *   Unknown: The status of the certificate is unknown.
    std::shared_ptr<string> certState_ = nullptr;
    // Indicates whether the client certificate for the kubeconfig file can be revoked.
    std::shared_ptr<bool> revokable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
