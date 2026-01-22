// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTTRANSACTIONDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTTRANSACTIONDETAILSREQUEST_HPP_
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
  class GetFundAccountTransactionDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountTransactionDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillNumber, billNumber_);
      DARABONBA_PTR_TO_JSON(ChannelTransactionNumber, channelTransactionNumber_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TransactionChannelList, transactionChannelList_);
      DARABONBA_PTR_TO_JSON(TransactionDirection, transactionDirection_);
      DARABONBA_PTR_TO_JSON(TransactionNumber, transactionNumber_);
      DARABONBA_PTR_TO_JSON(TransactionType, transactionType_);
      DARABONBA_PTR_TO_JSON(TransactionTypeList, transactionTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountTransactionDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillNumber, billNumber_);
      DARABONBA_PTR_FROM_JSON(ChannelTransactionNumber, channelTransactionNumber_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TransactionChannelList, transactionChannelList_);
      DARABONBA_PTR_FROM_JSON(TransactionDirection, transactionDirection_);
      DARABONBA_PTR_FROM_JSON(TransactionNumber, transactionNumber_);
      DARABONBA_PTR_FROM_JSON(TransactionType, transactionType_);
      DARABONBA_PTR_FROM_JSON(TransactionTypeList, transactionTypeList_);
    };
    GetFundAccountTransactionDetailsRequest() = default ;
    GetFundAccountTransactionDetailsRequest(const GetFundAccountTransactionDetailsRequest &) = default ;
    GetFundAccountTransactionDetailsRequest(GetFundAccountTransactionDetailsRequest &&) = default ;
    GetFundAccountTransactionDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountTransactionDetailsRequest() = default ;
    GetFundAccountTransactionDetailsRequest& operator=(const GetFundAccountTransactionDetailsRequest &) = default ;
    GetFundAccountTransactionDetailsRequest& operator=(GetFundAccountTransactionDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billNumber_ == nullptr
        && this->channelTransactionNumber_ == nullptr && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->fundAccountId_ == nullptr && this->pageSize_ == nullptr
        && this->startTime_ == nullptr && this->transactionChannelList_ == nullptr && this->transactionDirection_ == nullptr && this->transactionNumber_ == nullptr && this->transactionType_ == nullptr
        && this->transactionTypeList_ == nullptr; };
    // billNumber Field Functions 
    bool hasBillNumber() const { return this->billNumber_ != nullptr;};
    void deleteBillNumber() { this->billNumber_ = nullptr;};
    inline string getBillNumber() const { DARABONBA_PTR_GET_DEFAULT(billNumber_, "") };
    inline GetFundAccountTransactionDetailsRequest& setBillNumber(string billNumber) { DARABONBA_PTR_SET_VALUE(billNumber_, billNumber) };


    // channelTransactionNumber Field Functions 
    bool hasChannelTransactionNumber() const { return this->channelTransactionNumber_ != nullptr;};
    void deleteChannelTransactionNumber() { this->channelTransactionNumber_ = nullptr;};
    inline string getChannelTransactionNumber() const { DARABONBA_PTR_GET_DEFAULT(channelTransactionNumber_, "") };
    inline GetFundAccountTransactionDetailsRequest& setChannelTransactionNumber(string channelTransactionNumber) { DARABONBA_PTR_SET_VALUE(channelTransactionNumber_, channelTransactionNumber) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetFundAccountTransactionDetailsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetFundAccountTransactionDetailsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline int64_t getFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, 0L) };
    inline GetFundAccountTransactionDetailsRequest& setFundAccountId(int64_t fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetFundAccountTransactionDetailsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetFundAccountTransactionDetailsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // transactionChannelList Field Functions 
    bool hasTransactionChannelList() const { return this->transactionChannelList_ != nullptr;};
    void deleteTransactionChannelList() { this->transactionChannelList_ = nullptr;};
    inline const vector<string> & getTransactionChannelList() const { DARABONBA_PTR_GET_CONST(transactionChannelList_, vector<string>) };
    inline vector<string> getTransactionChannelList() { DARABONBA_PTR_GET(transactionChannelList_, vector<string>) };
    inline GetFundAccountTransactionDetailsRequest& setTransactionChannelList(const vector<string> & transactionChannelList) { DARABONBA_PTR_SET_VALUE(transactionChannelList_, transactionChannelList) };
    inline GetFundAccountTransactionDetailsRequest& setTransactionChannelList(vector<string> && transactionChannelList) { DARABONBA_PTR_SET_RVALUE(transactionChannelList_, transactionChannelList) };


    // transactionDirection Field Functions 
    bool hasTransactionDirection() const { return this->transactionDirection_ != nullptr;};
    void deleteTransactionDirection() { this->transactionDirection_ = nullptr;};
    inline string getTransactionDirection() const { DARABONBA_PTR_GET_DEFAULT(transactionDirection_, "") };
    inline GetFundAccountTransactionDetailsRequest& setTransactionDirection(string transactionDirection) { DARABONBA_PTR_SET_VALUE(transactionDirection_, transactionDirection) };


    // transactionNumber Field Functions 
    bool hasTransactionNumber() const { return this->transactionNumber_ != nullptr;};
    void deleteTransactionNumber() { this->transactionNumber_ = nullptr;};
    inline int64_t getTransactionNumber() const { DARABONBA_PTR_GET_DEFAULT(transactionNumber_, 0L) };
    inline GetFundAccountTransactionDetailsRequest& setTransactionNumber(int64_t transactionNumber) { DARABONBA_PTR_SET_VALUE(transactionNumber_, transactionNumber) };


    // transactionType Field Functions 
    bool hasTransactionType() const { return this->transactionType_ != nullptr;};
    void deleteTransactionType() { this->transactionType_ = nullptr;};
    inline string getTransactionType() const { DARABONBA_PTR_GET_DEFAULT(transactionType_, "") };
    inline GetFundAccountTransactionDetailsRequest& setTransactionType(string transactionType) { DARABONBA_PTR_SET_VALUE(transactionType_, transactionType) };


    // transactionTypeList Field Functions 
    bool hasTransactionTypeList() const { return this->transactionTypeList_ != nullptr;};
    void deleteTransactionTypeList() { this->transactionTypeList_ = nullptr;};
    inline const vector<string> & getTransactionTypeList() const { DARABONBA_PTR_GET_CONST(transactionTypeList_, vector<string>) };
    inline vector<string> getTransactionTypeList() { DARABONBA_PTR_GET(transactionTypeList_, vector<string>) };
    inline GetFundAccountTransactionDetailsRequest& setTransactionTypeList(const vector<string> & transactionTypeList) { DARABONBA_PTR_SET_VALUE(transactionTypeList_, transactionTypeList) };
    inline GetFundAccountTransactionDetailsRequest& setTransactionTypeList(vector<string> && transactionTypeList) { DARABONBA_PTR_SET_RVALUE(transactionTypeList_, transactionTypeList) };


  protected:
    shared_ptr<string> billNumber_ {};
    shared_ptr<string> channelTransactionNumber_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<int64_t> fundAccountId_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<vector<string>> transactionChannelList_ {};
    shared_ptr<string> transactionDirection_ {};
    shared_ptr<int64_t> transactionNumber_ {};
    shared_ptr<string> transactionType_ {};
    shared_ptr<vector<string>> transactionTypeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
