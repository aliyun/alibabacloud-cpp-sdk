// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATORRESPONSEBODYAGGREGATORAGGREGATORACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATORRESPONSEBODYAGGREGATORAGGREGATORACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregatorResponseBodyAggregatorAggregatorAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregatorResponseBodyAggregatorAggregatorAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(RecorderStatus, recorderStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregatorResponseBodyAggregatorAggregatorAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(RecorderStatus, recorderStatus_);
    };
    GetAggregatorResponseBodyAggregatorAggregatorAccounts() = default ;
    GetAggregatorResponseBodyAggregatorAggregatorAccounts(const GetAggregatorResponseBodyAggregatorAggregatorAccounts &) = default ;
    GetAggregatorResponseBodyAggregatorAggregatorAccounts(GetAggregatorResponseBodyAggregatorAggregatorAccounts &&) = default ;
    GetAggregatorResponseBodyAggregatorAggregatorAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregatorResponseBodyAggregatorAggregatorAccounts() = default ;
    GetAggregatorResponseBodyAggregatorAggregatorAccounts& operator=(const GetAggregatorResponseBodyAggregatorAggregatorAccounts &) = default ;
    GetAggregatorResponseBodyAggregatorAggregatorAccounts& operator=(GetAggregatorResponseBodyAggregatorAggregatorAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->accountName_ == nullptr && return this->accountType_ == nullptr && return this->recorderStatus_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GetAggregatorResponseBodyAggregatorAggregatorAccounts& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetAggregatorResponseBodyAggregatorAggregatorAccounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline GetAggregatorResponseBodyAggregatorAggregatorAccounts& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // recorderStatus Field Functions 
    bool hasRecorderStatus() const { return this->recorderStatus_ != nullptr;};
    void deleteRecorderStatus() { this->recorderStatus_ = nullptr;};
    inline string recorderStatus() const { DARABONBA_PTR_GET_DEFAULT(recorderStatus_, "") };
    inline GetAggregatorResponseBodyAggregatorAggregatorAccounts& setRecorderStatus(string recorderStatus) { DARABONBA_PTR_SET_VALUE(recorderStatus_, recorderStatus) };


  protected:
    // The ID of the member.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The display name of the member.
    std::shared_ptr<string> accountName_ = nullptr;
    // The resource directory to which the member belongs. Valid value: ResourceDirectory. ResourceDirectory indicates that the member belongs to a resource directory.
    std::shared_ptr<string> accountType_ = nullptr;
    // The status of the configuration recorder for the member. Valid values:
    // 
    // *   REGISTRABLE: The configuration recorder is not registered.
    // *   BUILDING: The configuration recorder is being deployed.
    // *   REGISTERED: The configuration recorder is registered.
    // *   REBUILDING: The configuration recorder is being redeployed.
    std::shared_ptr<string> recorderStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
