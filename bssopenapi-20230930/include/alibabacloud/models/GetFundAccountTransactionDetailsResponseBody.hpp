// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTTRANSACTIONDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTTRANSACTIONDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountTransactionDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountTransactionDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountTransactionDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetFundAccountTransactionDetailsResponseBody() = default ;
    GetFundAccountTransactionDetailsResponseBody(const GetFundAccountTransactionDetailsResponseBody &) = default ;
    GetFundAccountTransactionDetailsResponseBody(GetFundAccountTransactionDetailsResponseBody &&) = default ;
    GetFundAccountTransactionDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountTransactionDetailsResponseBody() = default ;
    GetFundAccountTransactionDetailsResponseBody& operator=(const GetFundAccountTransactionDetailsResponseBody &) = default ;
    GetFundAccountTransactionDetailsResponseBody& operator=(GetFundAccountTransactionDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->balance_ == nullptr
        && this->billNumber_ == nullptr && this->channelTransactionNumber_ == nullptr && this->currency_ == nullptr && this->fundAccountEcid_ == nullptr && this->fundAccountId_ == nullptr
        && this->fundAccountName_ == nullptr && this->fundAccountOwnerAccountId_ == nullptr && this->fundType_ == nullptr && this->nbid_ == nullptr && this->remark_ == nullptr
        && this->site_ == nullptr && this->transactionAccount_ == nullptr && this->transactionAmount_ == nullptr && this->transactionChannel_ == nullptr && this->transactionDirection_ == nullptr
        && this->transactionNumber_ == nullptr && this->transactionTime_ == nullptr && this->transactionType_ == nullptr; };
      // balance Field Functions 
      bool hasBalance() const { return this->balance_ != nullptr;};
      void deleteBalance() { this->balance_ = nullptr;};
      inline string getBalance() const { DARABONBA_PTR_GET_DEFAULT(balance_, "") };
      inline Data& setBalance(string balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


      // billNumber Field Functions 
      bool hasBillNumber() const { return this->billNumber_ != nullptr;};
      void deleteBillNumber() { this->billNumber_ = nullptr;};
      inline string getBillNumber() const { DARABONBA_PTR_GET_DEFAULT(billNumber_, "") };
      inline Data& setBillNumber(string billNumber) { DARABONBA_PTR_SET_VALUE(billNumber_, billNumber) };


      // channelTransactionNumber Field Functions 
      bool hasChannelTransactionNumber() const { return this->channelTransactionNumber_ != nullptr;};
      void deleteChannelTransactionNumber() { this->channelTransactionNumber_ = nullptr;};
      inline string getChannelTransactionNumber() const { DARABONBA_PTR_GET_DEFAULT(channelTransactionNumber_, "") };
      inline Data& setChannelTransactionNumber(string channelTransactionNumber) { DARABONBA_PTR_SET_VALUE(channelTransactionNumber_, channelTransactionNumber) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // fundAccountEcid Field Functions 
      bool hasFundAccountEcid() const { return this->fundAccountEcid_ != nullptr;};
      void deleteFundAccountEcid() { this->fundAccountEcid_ = nullptr;};
      inline string getFundAccountEcid() const { DARABONBA_PTR_GET_DEFAULT(fundAccountEcid_, "") };
      inline Data& setFundAccountEcid(string fundAccountEcid) { DARABONBA_PTR_SET_VALUE(fundAccountEcid_, fundAccountEcid) };


      // fundAccountId Field Functions 
      bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
      void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
      inline int64_t getFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, 0L) };
      inline Data& setFundAccountId(int64_t fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


      // fundAccountName Field Functions 
      bool hasFundAccountName() const { return this->fundAccountName_ != nullptr;};
      void deleteFundAccountName() { this->fundAccountName_ = nullptr;};
      inline string getFundAccountName() const { DARABONBA_PTR_GET_DEFAULT(fundAccountName_, "") };
      inline Data& setFundAccountName(string fundAccountName) { DARABONBA_PTR_SET_VALUE(fundAccountName_, fundAccountName) };


      // fundAccountOwnerAccountId Field Functions 
      bool hasFundAccountOwnerAccountId() const { return this->fundAccountOwnerAccountId_ != nullptr;};
      void deleteFundAccountOwnerAccountId() { this->fundAccountOwnerAccountId_ = nullptr;};
      inline int64_t getFundAccountOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountOwnerAccountId_, 0L) };
      inline Data& setFundAccountOwnerAccountId(int64_t fundAccountOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountOwnerAccountId_, fundAccountOwnerAccountId) };


      // fundType Field Functions 
      bool hasFundType() const { return this->fundType_ != nullptr;};
      void deleteFundType() { this->fundType_ = nullptr;};
      inline string getFundType() const { DARABONBA_PTR_GET_DEFAULT(fundType_, "") };
      inline Data& setFundType(string fundType) { DARABONBA_PTR_SET_VALUE(fundType_, fundType) };


      // nbid Field Functions 
      bool hasNbid() const { return this->nbid_ != nullptr;};
      void deleteNbid() { this->nbid_ = nullptr;};
      inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
      inline Data& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // site Field Functions 
      bool hasSite() const { return this->site_ != nullptr;};
      void deleteSite() { this->site_ = nullptr;};
      inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
      inline Data& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


      // transactionAccount Field Functions 
      bool hasTransactionAccount() const { return this->transactionAccount_ != nullptr;};
      void deleteTransactionAccount() { this->transactionAccount_ = nullptr;};
      inline string getTransactionAccount() const { DARABONBA_PTR_GET_DEFAULT(transactionAccount_, "") };
      inline Data& setTransactionAccount(string transactionAccount) { DARABONBA_PTR_SET_VALUE(transactionAccount_, transactionAccount) };


      // transactionAmount Field Functions 
      bool hasTransactionAmount() const { return this->transactionAmount_ != nullptr;};
      void deleteTransactionAmount() { this->transactionAmount_ = nullptr;};
      inline string getTransactionAmount() const { DARABONBA_PTR_GET_DEFAULT(transactionAmount_, "") };
      inline Data& setTransactionAmount(string transactionAmount) { DARABONBA_PTR_SET_VALUE(transactionAmount_, transactionAmount) };


      // transactionChannel Field Functions 
      bool hasTransactionChannel() const { return this->transactionChannel_ != nullptr;};
      void deleteTransactionChannel() { this->transactionChannel_ = nullptr;};
      inline string getTransactionChannel() const { DARABONBA_PTR_GET_DEFAULT(transactionChannel_, "") };
      inline Data& setTransactionChannel(string transactionChannel) { DARABONBA_PTR_SET_VALUE(transactionChannel_, transactionChannel) };


      // transactionDirection Field Functions 
      bool hasTransactionDirection() const { return this->transactionDirection_ != nullptr;};
      void deleteTransactionDirection() { this->transactionDirection_ = nullptr;};
      inline string getTransactionDirection() const { DARABONBA_PTR_GET_DEFAULT(transactionDirection_, "") };
      inline Data& setTransactionDirection(string transactionDirection) { DARABONBA_PTR_SET_VALUE(transactionDirection_, transactionDirection) };


      // transactionNumber Field Functions 
      bool hasTransactionNumber() const { return this->transactionNumber_ != nullptr;};
      void deleteTransactionNumber() { this->transactionNumber_ = nullptr;};
      inline int64_t getTransactionNumber() const { DARABONBA_PTR_GET_DEFAULT(transactionNumber_, 0L) };
      inline Data& setTransactionNumber(int64_t transactionNumber) { DARABONBA_PTR_SET_VALUE(transactionNumber_, transactionNumber) };


      // transactionTime Field Functions 
      bool hasTransactionTime() const { return this->transactionTime_ != nullptr;};
      void deleteTransactionTime() { this->transactionTime_ = nullptr;};
      inline string getTransactionTime() const { DARABONBA_PTR_GET_DEFAULT(transactionTime_, "") };
      inline Data& setTransactionTime(string transactionTime) { DARABONBA_PTR_SET_VALUE(transactionTime_, transactionTime) };


      // transactionType Field Functions 
      bool hasTransactionType() const { return this->transactionType_ != nullptr;};
      void deleteTransactionType() { this->transactionType_ = nullptr;};
      inline string getTransactionType() const { DARABONBA_PTR_GET_DEFAULT(transactionType_, "") };
      inline Data& setTransactionType(string transactionType) { DARABONBA_PTR_SET_VALUE(transactionType_, transactionType) };


    protected:
      shared_ptr<string> balance_ {};
      shared_ptr<string> billNumber_ {};
      shared_ptr<string> channelTransactionNumber_ {};
      shared_ptr<string> currency_ {};
      shared_ptr<string> fundAccountEcid_ {};
      shared_ptr<int64_t> fundAccountId_ {};
      shared_ptr<string> fundAccountName_ {};
      shared_ptr<int64_t> fundAccountOwnerAccountId_ {};
      shared_ptr<string> fundType_ {};
      shared_ptr<string> nbid_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> site_ {};
      shared_ptr<string> transactionAccount_ {};
      shared_ptr<string> transactionAmount_ {};
      shared_ptr<string> transactionChannel_ {};
      shared_ptr<string> transactionDirection_ {};
      shared_ptr<int64_t> transactionNumber_ {};
      shared_ptr<string> transactionTime_ {};
      shared_ptr<string> transactionType_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->metadata_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetFundAccountTransactionDetailsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetFundAccountTransactionDetailsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetFundAccountTransactionDetailsResponseBody::Data>) };
    inline vector<GetFundAccountTransactionDetailsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetFundAccountTransactionDetailsResponseBody::Data>) };
    inline GetFundAccountTransactionDetailsResponseBody& setData(const vector<GetFundAccountTransactionDetailsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFundAccountTransactionDetailsResponseBody& setData(vector<GetFundAccountTransactionDetailsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline GetFundAccountTransactionDetailsResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetFundAccountTransactionDetailsResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetFundAccountTransactionDetailsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFundAccountTransactionDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetFundAccountTransactionDetailsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<GetFundAccountTransactionDetailsResponseBody::Data>> data_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
