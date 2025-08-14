// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANRECYCLEAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANRECYCLEAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList.hpp>
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
    virtual bool empty() const override { this->availableAmount_ != nullptr
        && this->currency_ != nullptr && this->metadata_ != nullptr && this->recycleFromFundAccountId_ != nullptr && this->recycleToFundAccountList_ != nullptr && this->requestId_ != nullptr
        && this->transferAmount_ != nullptr; };
    // availableAmount Field Functions 
    bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
    void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
    inline string availableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, "") };
    inline GetFundAccountCanRecycleAmountResponseBody& setAvailableAmount(string availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetFundAccountCanRecycleAmountResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline GetFundAccountCanRecycleAmountResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetFundAccountCanRecycleAmountResponseBody& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // recycleFromFundAccountId Field Functions 
    bool hasRecycleFromFundAccountId() const { return this->recycleFromFundAccountId_ != nullptr;};
    void deleteRecycleFromFundAccountId() { this->recycleFromFundAccountId_ = nullptr;};
    inline string recycleFromFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(recycleFromFundAccountId_, "") };
    inline GetFundAccountCanRecycleAmountResponseBody& setRecycleFromFundAccountId(string recycleFromFundAccountId) { DARABONBA_PTR_SET_VALUE(recycleFromFundAccountId_, recycleFromFundAccountId) };


    // recycleToFundAccountList Field Functions 
    bool hasRecycleToFundAccountList() const { return this->recycleToFundAccountList_ != nullptr;};
    void deleteRecycleToFundAccountList() { this->recycleToFundAccountList_ = nullptr;};
    inline const vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList> & recycleToFundAccountList() const { DARABONBA_PTR_GET_CONST(recycleToFundAccountList_, vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList>) };
    inline vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList> recycleToFundAccountList() { DARABONBA_PTR_GET(recycleToFundAccountList_, vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList>) };
    inline GetFundAccountCanRecycleAmountResponseBody& setRecycleToFundAccountList(const vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList> & recycleToFundAccountList) { DARABONBA_PTR_SET_VALUE(recycleToFundAccountList_, recycleToFundAccountList) };
    inline GetFundAccountCanRecycleAmountResponseBody& setRecycleToFundAccountList(vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList> && recycleToFundAccountList) { DARABONBA_PTR_SET_RVALUE(recycleToFundAccountList_, recycleToFundAccountList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFundAccountCanRecycleAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transferAmount Field Functions 
    bool hasTransferAmount() const { return this->transferAmount_ != nullptr;};
    void deleteTransferAmount() { this->transferAmount_ = nullptr;};
    inline string transferAmount() const { DARABONBA_PTR_GET_DEFAULT(transferAmount_, "") };
    inline GetFundAccountCanRecycleAmountResponseBody& setTransferAmount(string transferAmount) { DARABONBA_PTR_SET_VALUE(transferAmount_, transferAmount) };


  protected:
    std::shared_ptr<string> availableAmount_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    Darabonba::Json metadata_ = nullptr;
    std::shared_ptr<string> recycleFromFundAccountId_ = nullptr;
    std::shared_ptr<vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList>> recycleToFundAccountList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> transferAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
