// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORACCOUNTSRESPONSEBODYACCOUNTIDINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORACCOUNTSRESPONSEBODYACCOUNTIDINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeMonitorAccountsResponseBodyAccountIdInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorAccountsResponseBodyAccountIdInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AddTime, addTime_);
      DARABONBA_PTR_TO_JSON(IsCloudSiemAccount, isCloudSiemAccount_);
      DARABONBA_PTR_TO_JSON(IsSasAccount, isSasAccount_);
      DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_TO_JSON(PostBasicService, postBasicService_);
      DARABONBA_PTR_TO_JSON(SasVersion, sasVersion_);
      DARABONBA_PTR_TO_JSON(aliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(isMarked, isMarked_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorAccountsResponseBodyAccountIdInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
      DARABONBA_PTR_FROM_JSON(IsCloudSiemAccount, isCloudSiemAccount_);
      DARABONBA_PTR_FROM_JSON(IsSasAccount, isSasAccount_);
      DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_FROM_JSON(PostBasicService, postBasicService_);
      DARABONBA_PTR_FROM_JSON(SasVersion, sasVersion_);
      DARABONBA_PTR_FROM_JSON(aliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(isMarked, isMarked_);
    };
    DescribeMonitorAccountsResponseBodyAccountIdInfos() = default ;
    DescribeMonitorAccountsResponseBodyAccountIdInfos(const DescribeMonitorAccountsResponseBodyAccountIdInfos &) = default ;
    DescribeMonitorAccountsResponseBodyAccountIdInfos(DescribeMonitorAccountsResponseBodyAccountIdInfos &&) = default ;
    DescribeMonitorAccountsResponseBodyAccountIdInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorAccountsResponseBodyAccountIdInfos() = default ;
    DescribeMonitorAccountsResponseBodyAccountIdInfos& operator=(const DescribeMonitorAccountsResponseBodyAccountIdInfos &) = default ;
    DescribeMonitorAccountsResponseBodyAccountIdInfos& operator=(DescribeMonitorAccountsResponseBodyAccountIdInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->addTime_ != nullptr && this->isCloudSiemAccount_ != nullptr && this->isSasAccount_ != nullptr && this->operatorUid_ != nullptr && this->postBasicService_ != nullptr
        && this->sasVersion_ != nullptr && this->aliUid_ != nullptr && this->isMarked_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // addTime Field Functions 
    bool hasAddTime() const { return this->addTime_ != nullptr;};
    void deleteAddTime() { this->addTime_ = nullptr;};
    inline int64_t addTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, 0L) };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setAddTime(int64_t addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


    // isCloudSiemAccount Field Functions 
    bool hasIsCloudSiemAccount() const { return this->isCloudSiemAccount_ != nullptr;};
    void deleteIsCloudSiemAccount() { this->isCloudSiemAccount_ = nullptr;};
    inline string isCloudSiemAccount() const { DARABONBA_PTR_GET_DEFAULT(isCloudSiemAccount_, "") };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setIsCloudSiemAccount(string isCloudSiemAccount) { DARABONBA_PTR_SET_VALUE(isCloudSiemAccount_, isCloudSiemAccount) };


    // isSasAccount Field Functions 
    bool hasIsSasAccount() const { return this->isSasAccount_ != nullptr;};
    void deleteIsSasAccount() { this->isSasAccount_ = nullptr;};
    inline string isSasAccount() const { DARABONBA_PTR_GET_DEFAULT(isSasAccount_, "") };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setIsSasAccount(string isSasAccount) { DARABONBA_PTR_SET_VALUE(isSasAccount_, isSasAccount) };


    // operatorUid Field Functions 
    bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
    void deleteOperatorUid() { this->operatorUid_ = nullptr;};
    inline string operatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


    // postBasicService Field Functions 
    bool hasPostBasicService() const { return this->postBasicService_ != nullptr;};
    void deletePostBasicService() { this->postBasicService_ = nullptr;};
    inline int32_t postBasicService() const { DARABONBA_PTR_GET_DEFAULT(postBasicService_, 0) };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setPostBasicService(int32_t postBasicService) { DARABONBA_PTR_SET_VALUE(postBasicService_, postBasicService) };


    // sasVersion Field Functions 
    bool hasSasVersion() const { return this->sasVersion_ != nullptr;};
    void deleteSasVersion() { this->sasVersion_ = nullptr;};
    inline string sasVersion() const { DARABONBA_PTR_GET_DEFAULT(sasVersion_, "") };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setSasVersion(string sasVersion) { DARABONBA_PTR_SET_VALUE(sasVersion_, sasVersion) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // isMarked Field Functions 
    bool hasIsMarked() const { return this->isMarked_ != nullptr;};
    void deleteIsMarked() { this->isMarked_ = nullptr;};
    inline string isMarked() const { DARABONBA_PTR_GET_DEFAULT(isMarked_, "") };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setIsMarked(string isMarked) { DARABONBA_PTR_SET_VALUE(isMarked_, isMarked) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<int64_t> addTime_ = nullptr;
    std::shared_ptr<string> isCloudSiemAccount_ = nullptr;
    std::shared_ptr<string> isSasAccount_ = nullptr;
    std::shared_ptr<string> operatorUid_ = nullptr;
    std::shared_ptr<int32_t> postBasicService_ = nullptr;
    std::shared_ptr<string> sasVersion_ = nullptr;
    std::shared_ptr<string> aliUid_ = nullptr;
    std::shared_ptr<string> isMarked_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
