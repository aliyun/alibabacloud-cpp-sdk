// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTTRANSACTIONDETAILSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTTRANSACTIONDETAILSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountTransactionDetailsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountTransactionDetailsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillNumber, billNumber_);
      DARABONBA_PTR_TO_JSON(ChannelTransactionNumber, channelTransactionNumber_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TransactionChannelList, transactionChannelListShrink_);
      DARABONBA_PTR_TO_JSON(TransactionDirection, transactionDirection_);
      DARABONBA_PTR_TO_JSON(TransactionNumber, transactionNumber_);
      DARABONBA_PTR_TO_JSON(TransactionType, transactionType_);
      DARABONBA_PTR_TO_JSON(TransactionTypeList, transactionTypeListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountTransactionDetailsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillNumber, billNumber_);
      DARABONBA_PTR_FROM_JSON(ChannelTransactionNumber, channelTransactionNumber_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TransactionChannelList, transactionChannelListShrink_);
      DARABONBA_PTR_FROM_JSON(TransactionDirection, transactionDirection_);
      DARABONBA_PTR_FROM_JSON(TransactionNumber, transactionNumber_);
      DARABONBA_PTR_FROM_JSON(TransactionType, transactionType_);
      DARABONBA_PTR_FROM_JSON(TransactionTypeList, transactionTypeListShrink_);
    };
    GetFundAccountTransactionDetailsShrinkRequest() = default ;
    GetFundAccountTransactionDetailsShrinkRequest(const GetFundAccountTransactionDetailsShrinkRequest &) = default ;
    GetFundAccountTransactionDetailsShrinkRequest(GetFundAccountTransactionDetailsShrinkRequest &&) = default ;
    GetFundAccountTransactionDetailsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountTransactionDetailsShrinkRequest() = default ;
    GetFundAccountTransactionDetailsShrinkRequest& operator=(const GetFundAccountTransactionDetailsShrinkRequest &) = default ;
    GetFundAccountTransactionDetailsShrinkRequest& operator=(GetFundAccountTransactionDetailsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billNumber_ == nullptr
        && this->channelTransactionNumber_ == nullptr && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->fundAccountId_ == nullptr && this->pageSize_ == nullptr
        && this->startTime_ == nullptr && this->transactionChannelListShrink_ == nullptr && this->transactionDirection_ == nullptr && this->transactionNumber_ == nullptr && this->transactionType_ == nullptr
        && this->transactionTypeListShrink_ == nullptr; };
    // billNumber Field Functions 
    bool hasBillNumber() const { return this->billNumber_ != nullptr;};
    void deleteBillNumber() { this->billNumber_ = nullptr;};
    inline string getBillNumber() const { DARABONBA_PTR_GET_DEFAULT(billNumber_, "") };
    inline GetFundAccountTransactionDetailsShrinkRequest& setBillNumber(string billNumber) { DARABONBA_PTR_SET_VALUE(billNumber_, billNumber) };


    // channelTransactionNumber Field Functions 
    bool hasChannelTransactionNumber() const { return this->channelTransactionNumber_ != nullptr;};
    void deleteChannelTransactionNumber() { this->channelTransactionNumber_ = nullptr;};
    inline string getChannelTransactionNumber() const { DARABONBA_PTR_GET_DEFAULT(channelTransactionNumber_, "") };
    inline GetFundAccountTransactionDetailsShrinkRequest& setChannelTransactionNumber(string channelTransactionNumber) { DARABONBA_PTR_SET_VALUE(channelTransactionNumber_, channelTransactionNumber) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetFundAccountTransactionDetailsShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetFundAccountTransactionDetailsShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline int64_t getFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, 0L) };
    inline GetFundAccountTransactionDetailsShrinkRequest& setFundAccountId(int64_t fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetFundAccountTransactionDetailsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetFundAccountTransactionDetailsShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // transactionChannelListShrink Field Functions 
    bool hasTransactionChannelListShrink() const { return this->transactionChannelListShrink_ != nullptr;};
    void deleteTransactionChannelListShrink() { this->transactionChannelListShrink_ = nullptr;};
    inline string getTransactionChannelListShrink() const { DARABONBA_PTR_GET_DEFAULT(transactionChannelListShrink_, "") };
    inline GetFundAccountTransactionDetailsShrinkRequest& setTransactionChannelListShrink(string transactionChannelListShrink) { DARABONBA_PTR_SET_VALUE(transactionChannelListShrink_, transactionChannelListShrink) };


    // transactionDirection Field Functions 
    bool hasTransactionDirection() const { return this->transactionDirection_ != nullptr;};
    void deleteTransactionDirection() { this->transactionDirection_ = nullptr;};
    inline string getTransactionDirection() const { DARABONBA_PTR_GET_DEFAULT(transactionDirection_, "") };
    inline GetFundAccountTransactionDetailsShrinkRequest& setTransactionDirection(string transactionDirection) { DARABONBA_PTR_SET_VALUE(transactionDirection_, transactionDirection) };


    // transactionNumber Field Functions 
    bool hasTransactionNumber() const { return this->transactionNumber_ != nullptr;};
    void deleteTransactionNumber() { this->transactionNumber_ = nullptr;};
    inline int64_t getTransactionNumber() const { DARABONBA_PTR_GET_DEFAULT(transactionNumber_, 0L) };
    inline GetFundAccountTransactionDetailsShrinkRequest& setTransactionNumber(int64_t transactionNumber) { DARABONBA_PTR_SET_VALUE(transactionNumber_, transactionNumber) };


    // transactionType Field Functions 
    bool hasTransactionType() const { return this->transactionType_ != nullptr;};
    void deleteTransactionType() { this->transactionType_ = nullptr;};
    inline string getTransactionType() const { DARABONBA_PTR_GET_DEFAULT(transactionType_, "") };
    inline GetFundAccountTransactionDetailsShrinkRequest& setTransactionType(string transactionType) { DARABONBA_PTR_SET_VALUE(transactionType_, transactionType) };


    // transactionTypeListShrink Field Functions 
    bool hasTransactionTypeListShrink() const { return this->transactionTypeListShrink_ != nullptr;};
    void deleteTransactionTypeListShrink() { this->transactionTypeListShrink_ = nullptr;};
    inline string getTransactionTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(transactionTypeListShrink_, "") };
    inline GetFundAccountTransactionDetailsShrinkRequest& setTransactionTypeListShrink(string transactionTypeListShrink) { DARABONBA_PTR_SET_VALUE(transactionTypeListShrink_, transactionTypeListShrink) };


  protected:
    shared_ptr<string> billNumber_ {};
    shared_ptr<string> channelTransactionNumber_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<int64_t> fundAccountId_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> transactionChannelListShrink_ {};
    shared_ptr<string> transactionDirection_ {};
    shared_ptr<int64_t> transactionNumber_ {};
    shared_ptr<string> transactionType_ {};
    shared_ptr<string> transactionTypeListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
