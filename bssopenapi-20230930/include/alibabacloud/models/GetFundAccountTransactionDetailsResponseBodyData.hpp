// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTTRANSACTIONDETAILSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTTRANSACTIONDETAILSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountTransactionDetailsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountTransactionDetailsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Balance, balance_);
      DARABONBA_PTR_TO_JSON(BillNumber, billNumber_);
      DARABONBA_PTR_TO_JSON(ChannelTransactionNumber, channelTransactionNumber_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(FundAccountEcid, fundAccountEcid_);
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_TO_JSON(FundAccountName, fundAccountName_);
      DARABONBA_PTR_TO_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(FundType, fundType_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Site, site_);
      DARABONBA_PTR_TO_JSON(TransactionAccount, transactionAccount_);
      DARABONBA_PTR_TO_JSON(TransactionAmount, transactionAmount_);
      DARABONBA_PTR_TO_JSON(TransactionChannel, transactionChannel_);
      DARABONBA_PTR_TO_JSON(TransactionDirection, transactionDirection_);
      DARABONBA_PTR_TO_JSON(TransactionNumber, transactionNumber_);
      DARABONBA_PTR_TO_JSON(TransactionTime, transactionTime_);
      DARABONBA_PTR_TO_JSON(TransactionType, transactionType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountTransactionDetailsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Balance, balance_);
      DARABONBA_PTR_FROM_JSON(BillNumber, billNumber_);
      DARABONBA_PTR_FROM_JSON(ChannelTransactionNumber, channelTransactionNumber_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(FundAccountEcid, fundAccountEcid_);
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_FROM_JSON(FundAccountName, fundAccountName_);
      DARABONBA_PTR_FROM_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(FundType, fundType_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Site, site_);
      DARABONBA_PTR_FROM_JSON(TransactionAccount, transactionAccount_);
      DARABONBA_PTR_FROM_JSON(TransactionAmount, transactionAmount_);
      DARABONBA_PTR_FROM_JSON(TransactionChannel, transactionChannel_);
      DARABONBA_PTR_FROM_JSON(TransactionDirection, transactionDirection_);
      DARABONBA_PTR_FROM_JSON(TransactionNumber, transactionNumber_);
      DARABONBA_PTR_FROM_JSON(TransactionTime, transactionTime_);
      DARABONBA_PTR_FROM_JSON(TransactionType, transactionType_);
    };
    GetFundAccountTransactionDetailsResponseBodyData() = default ;
    GetFundAccountTransactionDetailsResponseBodyData(const GetFundAccountTransactionDetailsResponseBodyData &) = default ;
    GetFundAccountTransactionDetailsResponseBodyData(GetFundAccountTransactionDetailsResponseBodyData &&) = default ;
    GetFundAccountTransactionDetailsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountTransactionDetailsResponseBodyData() = default ;
    GetFundAccountTransactionDetailsResponseBodyData& operator=(const GetFundAccountTransactionDetailsResponseBodyData &) = default ;
    GetFundAccountTransactionDetailsResponseBodyData& operator=(GetFundAccountTransactionDetailsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->balance_ != nullptr
        && this->billNumber_ != nullptr && this->channelTransactionNumber_ != nullptr && this->currency_ != nullptr && this->fundAccountEcid_ != nullptr && this->fundAccountId_ != nullptr
        && this->fundAccountName_ != nullptr && this->fundAccountOwnerAccountId_ != nullptr && this->fundType_ != nullptr && this->nbid_ != nullptr && this->remark_ != nullptr
        && this->site_ != nullptr && this->transactionAccount_ != nullptr && this->transactionAmount_ != nullptr && this->transactionChannel_ != nullptr && this->transactionDirection_ != nullptr
        && this->transactionNumber_ != nullptr && this->transactionTime_ != nullptr && this->transactionType_ != nullptr; };
    // balance Field Functions 
    bool hasBalance() const { return this->balance_ != nullptr;};
    void deleteBalance() { this->balance_ = nullptr;};
    inline string balance() const { DARABONBA_PTR_GET_DEFAULT(balance_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setBalance(string balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


    // billNumber Field Functions 
    bool hasBillNumber() const { return this->billNumber_ != nullptr;};
    void deleteBillNumber() { this->billNumber_ = nullptr;};
    inline string billNumber() const { DARABONBA_PTR_GET_DEFAULT(billNumber_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setBillNumber(string billNumber) { DARABONBA_PTR_SET_VALUE(billNumber_, billNumber) };


    // channelTransactionNumber Field Functions 
    bool hasChannelTransactionNumber() const { return this->channelTransactionNumber_ != nullptr;};
    void deleteChannelTransactionNumber() { this->channelTransactionNumber_ = nullptr;};
    inline string channelTransactionNumber() const { DARABONBA_PTR_GET_DEFAULT(channelTransactionNumber_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setChannelTransactionNumber(string channelTransactionNumber) { DARABONBA_PTR_SET_VALUE(channelTransactionNumber_, channelTransactionNumber) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // fundAccountEcid Field Functions 
    bool hasFundAccountEcid() const { return this->fundAccountEcid_ != nullptr;};
    void deleteFundAccountEcid() { this->fundAccountEcid_ = nullptr;};
    inline string fundAccountEcid() const { DARABONBA_PTR_GET_DEFAULT(fundAccountEcid_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setFundAccountEcid(string fundAccountEcid) { DARABONBA_PTR_SET_VALUE(fundAccountEcid_, fundAccountEcid) };


    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline int64_t fundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, 0L) };
    inline GetFundAccountTransactionDetailsResponseBodyData& setFundAccountId(int64_t fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


    // fundAccountName Field Functions 
    bool hasFundAccountName() const { return this->fundAccountName_ != nullptr;};
    void deleteFundAccountName() { this->fundAccountName_ = nullptr;};
    inline string fundAccountName() const { DARABONBA_PTR_GET_DEFAULT(fundAccountName_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setFundAccountName(string fundAccountName) { DARABONBA_PTR_SET_VALUE(fundAccountName_, fundAccountName) };


    // fundAccountOwnerAccountId Field Functions 
    bool hasFundAccountOwnerAccountId() const { return this->fundAccountOwnerAccountId_ != nullptr;};
    void deleteFundAccountOwnerAccountId() { this->fundAccountOwnerAccountId_ = nullptr;};
    inline int64_t fundAccountOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountOwnerAccountId_, 0L) };
    inline GetFundAccountTransactionDetailsResponseBodyData& setFundAccountOwnerAccountId(int64_t fundAccountOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountOwnerAccountId_, fundAccountOwnerAccountId) };


    // fundType Field Functions 
    bool hasFundType() const { return this->fundType_ != nullptr;};
    void deleteFundType() { this->fundType_ = nullptr;};
    inline string fundType() const { DARABONBA_PTR_GET_DEFAULT(fundType_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setFundType(string fundType) { DARABONBA_PTR_SET_VALUE(fundType_, fundType) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string site() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


    // transactionAccount Field Functions 
    bool hasTransactionAccount() const { return this->transactionAccount_ != nullptr;};
    void deleteTransactionAccount() { this->transactionAccount_ = nullptr;};
    inline string transactionAccount() const { DARABONBA_PTR_GET_DEFAULT(transactionAccount_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setTransactionAccount(string transactionAccount) { DARABONBA_PTR_SET_VALUE(transactionAccount_, transactionAccount) };


    // transactionAmount Field Functions 
    bool hasTransactionAmount() const { return this->transactionAmount_ != nullptr;};
    void deleteTransactionAmount() { this->transactionAmount_ = nullptr;};
    inline string transactionAmount() const { DARABONBA_PTR_GET_DEFAULT(transactionAmount_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setTransactionAmount(string transactionAmount) { DARABONBA_PTR_SET_VALUE(transactionAmount_, transactionAmount) };


    // transactionChannel Field Functions 
    bool hasTransactionChannel() const { return this->transactionChannel_ != nullptr;};
    void deleteTransactionChannel() { this->transactionChannel_ = nullptr;};
    inline string transactionChannel() const { DARABONBA_PTR_GET_DEFAULT(transactionChannel_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setTransactionChannel(string transactionChannel) { DARABONBA_PTR_SET_VALUE(transactionChannel_, transactionChannel) };


    // transactionDirection Field Functions 
    bool hasTransactionDirection() const { return this->transactionDirection_ != nullptr;};
    void deleteTransactionDirection() { this->transactionDirection_ = nullptr;};
    inline string transactionDirection() const { DARABONBA_PTR_GET_DEFAULT(transactionDirection_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setTransactionDirection(string transactionDirection) { DARABONBA_PTR_SET_VALUE(transactionDirection_, transactionDirection) };


    // transactionNumber Field Functions 
    bool hasTransactionNumber() const { return this->transactionNumber_ != nullptr;};
    void deleteTransactionNumber() { this->transactionNumber_ = nullptr;};
    inline int64_t transactionNumber() const { DARABONBA_PTR_GET_DEFAULT(transactionNumber_, 0L) };
    inline GetFundAccountTransactionDetailsResponseBodyData& setTransactionNumber(int64_t transactionNumber) { DARABONBA_PTR_SET_VALUE(transactionNumber_, transactionNumber) };


    // transactionTime Field Functions 
    bool hasTransactionTime() const { return this->transactionTime_ != nullptr;};
    void deleteTransactionTime() { this->transactionTime_ = nullptr;};
    inline string transactionTime() const { DARABONBA_PTR_GET_DEFAULT(transactionTime_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setTransactionTime(string transactionTime) { DARABONBA_PTR_SET_VALUE(transactionTime_, transactionTime) };


    // transactionType Field Functions 
    bool hasTransactionType() const { return this->transactionType_ != nullptr;};
    void deleteTransactionType() { this->transactionType_ = nullptr;};
    inline string transactionType() const { DARABONBA_PTR_GET_DEFAULT(transactionType_, "") };
    inline GetFundAccountTransactionDetailsResponseBodyData& setTransactionType(string transactionType) { DARABONBA_PTR_SET_VALUE(transactionType_, transactionType) };


  protected:
    std::shared_ptr<string> balance_ = nullptr;
    std::shared_ptr<string> billNumber_ = nullptr;
    std::shared_ptr<string> channelTransactionNumber_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> fundAccountEcid_ = nullptr;
    std::shared_ptr<int64_t> fundAccountId_ = nullptr;
    std::shared_ptr<string> fundAccountName_ = nullptr;
    std::shared_ptr<int64_t> fundAccountOwnerAccountId_ = nullptr;
    std::shared_ptr<string> fundType_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> site_ = nullptr;
    std::shared_ptr<string> transactionAccount_ = nullptr;
    std::shared_ptr<string> transactionAmount_ = nullptr;
    std::shared_ptr<string> transactionChannel_ = nullptr;
    std::shared_ptr<string> transactionDirection_ = nullptr;
    std::shared_ptr<int64_t> transactionNumber_ = nullptr;
    std::shared_ptr<string> transactionTime_ = nullptr;
    std::shared_ptr<string> transactionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
