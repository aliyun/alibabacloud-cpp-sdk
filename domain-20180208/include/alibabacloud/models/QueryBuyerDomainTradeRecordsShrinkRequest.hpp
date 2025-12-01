// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBUYERDOMAINTRADERECORDSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYBUYERDOMAINTRADERECORDSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryBuyerDomainTradeRecordsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBuyerDomainTradeRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizIdList, bizIdListShrink_);
      DARABONBA_PTR_TO_JSON(DomainNameList, domainNameListShrink_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(EndPrice, endPrice_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Sorter, sorter_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(StartPrice, startPrice_);
      DARABONBA_PTR_TO_JSON(StatusList, statusListShrink_);
      DARABONBA_PTR_TO_JSON(SuffixList, suffixListShrink_);
      DARABONBA_PTR_TO_JSON(TradeTypeList, tradeTypeListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBuyerDomainTradeRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizIdList, bizIdListShrink_);
      DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameListShrink_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(EndPrice, endPrice_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Sorter, sorter_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(StartPrice, startPrice_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusListShrink_);
      DARABONBA_PTR_FROM_JSON(SuffixList, suffixListShrink_);
      DARABONBA_PTR_FROM_JSON(TradeTypeList, tradeTypeListShrink_);
    };
    QueryBuyerDomainTradeRecordsShrinkRequest() = default ;
    QueryBuyerDomainTradeRecordsShrinkRequest(const QueryBuyerDomainTradeRecordsShrinkRequest &) = default ;
    QueryBuyerDomainTradeRecordsShrinkRequest(QueryBuyerDomainTradeRecordsShrinkRequest &&) = default ;
    QueryBuyerDomainTradeRecordsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBuyerDomainTradeRecordsShrinkRequest() = default ;
    QueryBuyerDomainTradeRecordsShrinkRequest& operator=(const QueryBuyerDomainTradeRecordsShrinkRequest &) = default ;
    QueryBuyerDomainTradeRecordsShrinkRequest& operator=(QueryBuyerDomainTradeRecordsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizIdListShrink_ == nullptr
        && return this->domainNameListShrink_ == nullptr && return this->endDate_ == nullptr && return this->endPrice_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr
        && return this->sorter_ == nullptr && return this->startDate_ == nullptr && return this->startPrice_ == nullptr && return this->statusListShrink_ == nullptr && return this->suffixListShrink_ == nullptr
        && return this->tradeTypeListShrink_ == nullptr; };
    // bizIdListShrink Field Functions 
    bool hasBizIdListShrink() const { return this->bizIdListShrink_ != nullptr;};
    void deleteBizIdListShrink() { this->bizIdListShrink_ = nullptr;};
    inline string bizIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(bizIdListShrink_, "") };
    inline QueryBuyerDomainTradeRecordsShrinkRequest& setBizIdListShrink(string bizIdListShrink) { DARABONBA_PTR_SET_VALUE(bizIdListShrink_, bizIdListShrink) };


    // domainNameListShrink Field Functions 
    bool hasDomainNameListShrink() const { return this->domainNameListShrink_ != nullptr;};
    void deleteDomainNameListShrink() { this->domainNameListShrink_ = nullptr;};
    inline string domainNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(domainNameListShrink_, "") };
    inline QueryBuyerDomainTradeRecordsShrinkRequest& setDomainNameListShrink(string domainNameListShrink) { DARABONBA_PTR_SET_VALUE(domainNameListShrink_, domainNameListShrink) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryBuyerDomainTradeRecordsShrinkRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // endPrice Field Functions 
    bool hasEndPrice() const { return this->endPrice_ != nullptr;};
    void deleteEndPrice() { this->endPrice_ = nullptr;};
    inline float endPrice() const { DARABONBA_PTR_GET_DEFAULT(endPrice_, 0.0) };
    inline QueryBuyerDomainTradeRecordsShrinkRequest& setEndPrice(float endPrice) { DARABONBA_PTR_SET_VALUE(endPrice_, endPrice) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline QueryBuyerDomainTradeRecordsShrinkRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryBuyerDomainTradeRecordsShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sorter Field Functions 
    bool hasSorter() const { return this->sorter_ != nullptr;};
    void deleteSorter() { this->sorter_ = nullptr;};
    inline string sorter() const { DARABONBA_PTR_GET_DEFAULT(sorter_, "") };
    inline QueryBuyerDomainTradeRecordsShrinkRequest& setSorter(string sorter) { DARABONBA_PTR_SET_VALUE(sorter_, sorter) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryBuyerDomainTradeRecordsShrinkRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // startPrice Field Functions 
    bool hasStartPrice() const { return this->startPrice_ != nullptr;};
    void deleteStartPrice() { this->startPrice_ = nullptr;};
    inline float startPrice() const { DARABONBA_PTR_GET_DEFAULT(startPrice_, 0.0) };
    inline QueryBuyerDomainTradeRecordsShrinkRequest& setStartPrice(float startPrice) { DARABONBA_PTR_SET_VALUE(startPrice_, startPrice) };


    // statusListShrink Field Functions 
    bool hasStatusListShrink() const { return this->statusListShrink_ != nullptr;};
    void deleteStatusListShrink() { this->statusListShrink_ = nullptr;};
    inline string statusListShrink() const { DARABONBA_PTR_GET_DEFAULT(statusListShrink_, "") };
    inline QueryBuyerDomainTradeRecordsShrinkRequest& setStatusListShrink(string statusListShrink) { DARABONBA_PTR_SET_VALUE(statusListShrink_, statusListShrink) };


    // suffixListShrink Field Functions 
    bool hasSuffixListShrink() const { return this->suffixListShrink_ != nullptr;};
    void deleteSuffixListShrink() { this->suffixListShrink_ = nullptr;};
    inline string suffixListShrink() const { DARABONBA_PTR_GET_DEFAULT(suffixListShrink_, "") };
    inline QueryBuyerDomainTradeRecordsShrinkRequest& setSuffixListShrink(string suffixListShrink) { DARABONBA_PTR_SET_VALUE(suffixListShrink_, suffixListShrink) };


    // tradeTypeListShrink Field Functions 
    bool hasTradeTypeListShrink() const { return this->tradeTypeListShrink_ != nullptr;};
    void deleteTradeTypeListShrink() { this->tradeTypeListShrink_ = nullptr;};
    inline string tradeTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(tradeTypeListShrink_, "") };
    inline QueryBuyerDomainTradeRecordsShrinkRequest& setTradeTypeListShrink(string tradeTypeListShrink) { DARABONBA_PTR_SET_VALUE(tradeTypeListShrink_, tradeTypeListShrink) };


  protected:
    std::shared_ptr<string> bizIdListShrink_ = nullptr;
    std::shared_ptr<string> domainNameListShrink_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<float> endPrice_ = nullptr;
    std::shared_ptr<int64_t> pageNum_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> sorter_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<float> startPrice_ = nullptr;
    std::shared_ptr<string> statusListShrink_ = nullptr;
    std::shared_ptr<string> suffixListShrink_ = nullptr;
    std::shared_ptr<string> tradeTypeListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
