// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANRECYCLEAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANRECYCLEAMOUNTRESPONSEBODY_HPP_
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
  class GetFundAccountCanRecycleAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountCanRecycleAmountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RecycleFromFundAccountId, recycleFromFundAccountId_);
      DARABONBA_PTR_TO_JSON(RecycleToFundAccountList, recycleToFundAccountList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransferAmount, transferAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountCanRecycleAmountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RecycleFromFundAccountId, recycleFromFundAccountId_);
      DARABONBA_PTR_FROM_JSON(RecycleToFundAccountList, recycleToFundAccountList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransferAmount, transferAmount_);
    };
    GetFundAccountCanRecycleAmountResponseBody() = default ;
    GetFundAccountCanRecycleAmountResponseBody(const GetFundAccountCanRecycleAmountResponseBody &) = default ;
    GetFundAccountCanRecycleAmountResponseBody(GetFundAccountCanRecycleAmountResponseBody &&) = default ;
    GetFundAccountCanRecycleAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountCanRecycleAmountResponseBody() = default ;
    GetFundAccountCanRecycleAmountResponseBody& operator=(const GetFundAccountCanRecycleAmountResponseBody &) = default ;
    GetFundAccountCanRecycleAmountResponseBody& operator=(GetFundAccountCanRecycleAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecycleToFundAccountList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecycleToFundAccountList& obj) { 
        DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
        DARABONBA_PTR_TO_JSON(FundAccountName, fundAccountName_);
        DARABONBA_PTR_TO_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
        DARABONBA_PTR_TO_JSON(MaxRecyclableAmount, maxRecyclableAmount_);
        DARABONBA_PTR_TO_JSON(OriginalTransferRemainAmount, originalTransferRemainAmount_);
      };
      friend void from_json(const Darabonba::Json& j, RecycleToFundAccountList& obj) { 
        DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
        DARABONBA_PTR_FROM_JSON(FundAccountName, fundAccountName_);
        DARABONBA_PTR_FROM_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
        DARABONBA_PTR_FROM_JSON(MaxRecyclableAmount, maxRecyclableAmount_);
        DARABONBA_PTR_FROM_JSON(OriginalTransferRemainAmount, originalTransferRemainAmount_);
      };
      RecycleToFundAccountList() = default ;
      RecycleToFundAccountList(const RecycleToFundAccountList &) = default ;
      RecycleToFundAccountList(RecycleToFundAccountList &&) = default ;
      RecycleToFundAccountList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecycleToFundAccountList() = default ;
      RecycleToFundAccountList& operator=(const RecycleToFundAccountList &) = default ;
      RecycleToFundAccountList& operator=(RecycleToFundAccountList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fundAccountId_ == nullptr
        && this->fundAccountName_ == nullptr && this->fundAccountOwnerAccountId_ == nullptr && this->maxRecyclableAmount_ == nullptr && this->originalTransferRemainAmount_ == nullptr; };
      // fundAccountId Field Functions 
      bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
      void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
      inline string getFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, "") };
      inline RecycleToFundAccountList& setFundAccountId(string fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


      // fundAccountName Field Functions 
      bool hasFundAccountName() const { return this->fundAccountName_ != nullptr;};
      void deleteFundAccountName() { this->fundAccountName_ = nullptr;};
      inline string getFundAccountName() const { DARABONBA_PTR_GET_DEFAULT(fundAccountName_, "") };
      inline RecycleToFundAccountList& setFundAccountName(string fundAccountName) { DARABONBA_PTR_SET_VALUE(fundAccountName_, fundAccountName) };


      // fundAccountOwnerAccountId Field Functions 
      bool hasFundAccountOwnerAccountId() const { return this->fundAccountOwnerAccountId_ != nullptr;};
      void deleteFundAccountOwnerAccountId() { this->fundAccountOwnerAccountId_ = nullptr;};
      inline string getFundAccountOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountOwnerAccountId_, "") };
      inline RecycleToFundAccountList& setFundAccountOwnerAccountId(string fundAccountOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountOwnerAccountId_, fundAccountOwnerAccountId) };


      // maxRecyclableAmount Field Functions 
      bool hasMaxRecyclableAmount() const { return this->maxRecyclableAmount_ != nullptr;};
      void deleteMaxRecyclableAmount() { this->maxRecyclableAmount_ = nullptr;};
      inline string getMaxRecyclableAmount() const { DARABONBA_PTR_GET_DEFAULT(maxRecyclableAmount_, "") };
      inline RecycleToFundAccountList& setMaxRecyclableAmount(string maxRecyclableAmount) { DARABONBA_PTR_SET_VALUE(maxRecyclableAmount_, maxRecyclableAmount) };


      // originalTransferRemainAmount Field Functions 
      bool hasOriginalTransferRemainAmount() const { return this->originalTransferRemainAmount_ != nullptr;};
      void deleteOriginalTransferRemainAmount() { this->originalTransferRemainAmount_ = nullptr;};
      inline string getOriginalTransferRemainAmount() const { DARABONBA_PTR_GET_DEFAULT(originalTransferRemainAmount_, "") };
      inline RecycleToFundAccountList& setOriginalTransferRemainAmount(string originalTransferRemainAmount) { DARABONBA_PTR_SET_VALUE(originalTransferRemainAmount_, originalTransferRemainAmount) };


    protected:
      shared_ptr<string> fundAccountId_ {};
      shared_ptr<string> fundAccountName_ {};
      shared_ptr<string> fundAccountOwnerAccountId_ {};
      shared_ptr<string> maxRecyclableAmount_ {};
      shared_ptr<string> originalTransferRemainAmount_ {};
    };

    virtual bool empty() const override { return this->availableAmount_ == nullptr
        && this->currency_ == nullptr && this->metadata_ == nullptr && this->recycleFromFundAccountId_ == nullptr && this->recycleToFundAccountList_ == nullptr && this->requestId_ == nullptr
        && this->transferAmount_ == nullptr; };
    // availableAmount Field Functions 
    bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
    void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
    inline string getAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, "") };
    inline GetFundAccountCanRecycleAmountResponseBody& setAvailableAmount(string availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetFundAccountCanRecycleAmountResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline GetFundAccountCanRecycleAmountResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetFundAccountCanRecycleAmountResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // recycleFromFundAccountId Field Functions 
    bool hasRecycleFromFundAccountId() const { return this->recycleFromFundAccountId_ != nullptr;};
    void deleteRecycleFromFundAccountId() { this->recycleFromFundAccountId_ = nullptr;};
    inline string getRecycleFromFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(recycleFromFundAccountId_, "") };
    inline GetFundAccountCanRecycleAmountResponseBody& setRecycleFromFundAccountId(string recycleFromFundAccountId) { DARABONBA_PTR_SET_VALUE(recycleFromFundAccountId_, recycleFromFundAccountId) };


    // recycleToFundAccountList Field Functions 
    bool hasRecycleToFundAccountList() const { return this->recycleToFundAccountList_ != nullptr;};
    void deleteRecycleToFundAccountList() { this->recycleToFundAccountList_ = nullptr;};
    inline const vector<GetFundAccountCanRecycleAmountResponseBody::RecycleToFundAccountList> & getRecycleToFundAccountList() const { DARABONBA_PTR_GET_CONST(recycleToFundAccountList_, vector<GetFundAccountCanRecycleAmountResponseBody::RecycleToFundAccountList>) };
    inline vector<GetFundAccountCanRecycleAmountResponseBody::RecycleToFundAccountList> getRecycleToFundAccountList() { DARABONBA_PTR_GET(recycleToFundAccountList_, vector<GetFundAccountCanRecycleAmountResponseBody::RecycleToFundAccountList>) };
    inline GetFundAccountCanRecycleAmountResponseBody& setRecycleToFundAccountList(const vector<GetFundAccountCanRecycleAmountResponseBody::RecycleToFundAccountList> & recycleToFundAccountList) { DARABONBA_PTR_SET_VALUE(recycleToFundAccountList_, recycleToFundAccountList) };
    inline GetFundAccountCanRecycleAmountResponseBody& setRecycleToFundAccountList(vector<GetFundAccountCanRecycleAmountResponseBody::RecycleToFundAccountList> && recycleToFundAccountList) { DARABONBA_PTR_SET_RVALUE(recycleToFundAccountList_, recycleToFundAccountList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFundAccountCanRecycleAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transferAmount Field Functions 
    bool hasTransferAmount() const { return this->transferAmount_ != nullptr;};
    void deleteTransferAmount() { this->transferAmount_ = nullptr;};
    inline string getTransferAmount() const { DARABONBA_PTR_GET_DEFAULT(transferAmount_, "") };
    inline GetFundAccountCanRecycleAmountResponseBody& setTransferAmount(string transferAmount) { DARABONBA_PTR_SET_VALUE(transferAmount_, transferAmount) };


  protected:
    shared_ptr<string> availableAmount_ {};
    shared_ptr<string> currency_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> recycleFromFundAccountId_ {};
    shared_ptr<vector<GetFundAccountCanRecycleAmountResponseBody::RecycleToFundAccountList>> recycleToFundAccountList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> transferAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
