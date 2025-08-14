// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANTRANSFERAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANTRANSFERAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountCanTransferAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountCanTransferAmountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_TO_JSON(CashAmount, cashAmount_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(FundAccountEcid, fundAccountEcid_);
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_TO_JSON(FundAccountName, fundAccountName_);
      DARABONBA_PTR_TO_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(MaxTransferableAmount, maxTransferableAmount_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Site, site_);
      DARABONBA_PTR_TO_JSON(TransferAmount, transferAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountCanTransferAmountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_FROM_JSON(CashAmount, cashAmount_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(FundAccountEcid, fundAccountEcid_);
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_FROM_JSON(FundAccountName, fundAccountName_);
      DARABONBA_PTR_FROM_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(MaxTransferableAmount, maxTransferableAmount_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Site, site_);
      DARABONBA_PTR_FROM_JSON(TransferAmount, transferAmount_);
    };
    GetFundAccountCanTransferAmountResponseBody() = default ;
    GetFundAccountCanTransferAmountResponseBody(const GetFundAccountCanTransferAmountResponseBody &) = default ;
    GetFundAccountCanTransferAmountResponseBody(GetFundAccountCanTransferAmountResponseBody &&) = default ;
    GetFundAccountCanTransferAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountCanTransferAmountResponseBody() = default ;
    GetFundAccountCanTransferAmountResponseBody& operator=(const GetFundAccountCanTransferAmountResponseBody &) = default ;
    GetFundAccountCanTransferAmountResponseBody& operator=(GetFundAccountCanTransferAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableAmount_ != nullptr
        && this->cashAmount_ != nullptr && this->currency_ != nullptr && this->fundAccountEcid_ != nullptr && this->fundAccountId_ != nullptr && this->fundAccountName_ != nullptr
        && this->fundAccountOwnerAccountId_ != nullptr && this->maxTransferableAmount_ != nullptr && this->metadata_ != nullptr && this->nbid_ != nullptr && this->requestId_ != nullptr
        && this->site_ != nullptr && this->transferAmount_ != nullptr; };
    // availableAmount Field Functions 
    bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
    void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
    inline string availableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, "") };
    inline GetFundAccountCanTransferAmountResponseBody& setAvailableAmount(string availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


    // cashAmount Field Functions 
    bool hasCashAmount() const { return this->cashAmount_ != nullptr;};
    void deleteCashAmount() { this->cashAmount_ = nullptr;};
    inline string cashAmount() const { DARABONBA_PTR_GET_DEFAULT(cashAmount_, "") };
    inline GetFundAccountCanTransferAmountResponseBody& setCashAmount(string cashAmount) { DARABONBA_PTR_SET_VALUE(cashAmount_, cashAmount) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetFundAccountCanTransferAmountResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // fundAccountEcid Field Functions 
    bool hasFundAccountEcid() const { return this->fundAccountEcid_ != nullptr;};
    void deleteFundAccountEcid() { this->fundAccountEcid_ = nullptr;};
    inline string fundAccountEcid() const { DARABONBA_PTR_GET_DEFAULT(fundAccountEcid_, "") };
    inline GetFundAccountCanTransferAmountResponseBody& setFundAccountEcid(string fundAccountEcid) { DARABONBA_PTR_SET_VALUE(fundAccountEcid_, fundAccountEcid) };


    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline int64_t fundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, 0L) };
    inline GetFundAccountCanTransferAmountResponseBody& setFundAccountId(int64_t fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


    // fundAccountName Field Functions 
    bool hasFundAccountName() const { return this->fundAccountName_ != nullptr;};
    void deleteFundAccountName() { this->fundAccountName_ = nullptr;};
    inline string fundAccountName() const { DARABONBA_PTR_GET_DEFAULT(fundAccountName_, "") };
    inline GetFundAccountCanTransferAmountResponseBody& setFundAccountName(string fundAccountName) { DARABONBA_PTR_SET_VALUE(fundAccountName_, fundAccountName) };


    // fundAccountOwnerAccountId Field Functions 
    bool hasFundAccountOwnerAccountId() const { return this->fundAccountOwnerAccountId_ != nullptr;};
    void deleteFundAccountOwnerAccountId() { this->fundAccountOwnerAccountId_ = nullptr;};
    inline int64_t fundAccountOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountOwnerAccountId_, 0L) };
    inline GetFundAccountCanTransferAmountResponseBody& setFundAccountOwnerAccountId(int64_t fundAccountOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountOwnerAccountId_, fundAccountOwnerAccountId) };


    // maxTransferableAmount Field Functions 
    bool hasMaxTransferableAmount() const { return this->maxTransferableAmount_ != nullptr;};
    void deleteMaxTransferableAmount() { this->maxTransferableAmount_ = nullptr;};
    inline string maxTransferableAmount() const { DARABONBA_PTR_GET_DEFAULT(maxTransferableAmount_, "") };
    inline GetFundAccountCanTransferAmountResponseBody& setMaxTransferableAmount(string maxTransferableAmount) { DARABONBA_PTR_SET_VALUE(maxTransferableAmount_, maxTransferableAmount) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline GetFundAccountCanTransferAmountResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetFundAccountCanTransferAmountResponseBody& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline GetFundAccountCanTransferAmountResponseBody& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFundAccountCanTransferAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string site() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline GetFundAccountCanTransferAmountResponseBody& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


    // transferAmount Field Functions 
    bool hasTransferAmount() const { return this->transferAmount_ != nullptr;};
    void deleteTransferAmount() { this->transferAmount_ = nullptr;};
    inline string transferAmount() const { DARABONBA_PTR_GET_DEFAULT(transferAmount_, "") };
    inline GetFundAccountCanTransferAmountResponseBody& setTransferAmount(string transferAmount) { DARABONBA_PTR_SET_VALUE(transferAmount_, transferAmount) };


  protected:
    std::shared_ptr<string> availableAmount_ = nullptr;
    std::shared_ptr<string> cashAmount_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> fundAccountEcid_ = nullptr;
    std::shared_ptr<int64_t> fundAccountId_ = nullptr;
    std::shared_ptr<string> fundAccountName_ = nullptr;
    std::shared_ptr<int64_t> fundAccountOwnerAccountId_ = nullptr;
    std::shared_ptr<string> maxTransferableAmount_ = nullptr;
    Darabonba::Json metadata_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> site_ = nullptr;
    std::shared_ptr<string> transferAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
