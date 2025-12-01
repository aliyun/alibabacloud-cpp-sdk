// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBUYERDOMAINTRADERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYBUYERDOMAINTRADERECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryBuyerDomainTradeRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBuyerDomainTradeRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizIdList, bizIdList_);
      DARABONBA_PTR_TO_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(EndPrice, endPrice_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Sorter, sorter_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(StartPrice, startPrice_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(SuffixList, suffixList_);
      DARABONBA_PTR_TO_JSON(TradeTypeList, tradeTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBuyerDomainTradeRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizIdList, bizIdList_);
      DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(EndPrice, endPrice_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Sorter, sorter_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(StartPrice, startPrice_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(SuffixList, suffixList_);
      DARABONBA_PTR_FROM_JSON(TradeTypeList, tradeTypeList_);
    };
    QueryBuyerDomainTradeRecordsRequest() = default ;
    QueryBuyerDomainTradeRecordsRequest(const QueryBuyerDomainTradeRecordsRequest &) = default ;
    QueryBuyerDomainTradeRecordsRequest(QueryBuyerDomainTradeRecordsRequest &&) = default ;
    QueryBuyerDomainTradeRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBuyerDomainTradeRecordsRequest() = default ;
    QueryBuyerDomainTradeRecordsRequest& operator=(const QueryBuyerDomainTradeRecordsRequest &) = default ;
    QueryBuyerDomainTradeRecordsRequest& operator=(QueryBuyerDomainTradeRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizIdList_ == nullptr
        && return this->domainNameList_ == nullptr && return this->endDate_ == nullptr && return this->endPrice_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr
        && return this->sorter_ == nullptr && return this->startDate_ == nullptr && return this->startPrice_ == nullptr && return this->statusList_ == nullptr && return this->suffixList_ == nullptr
        && return this->tradeTypeList_ == nullptr; };
    // bizIdList Field Functions 
    bool hasBizIdList() const { return this->bizIdList_ != nullptr;};
    void deleteBizIdList() { this->bizIdList_ = nullptr;};
    inline const vector<string> & bizIdList() const { DARABONBA_PTR_GET_CONST(bizIdList_, vector<string>) };
    inline vector<string> bizIdList() { DARABONBA_PTR_GET(bizIdList_, vector<string>) };
    inline QueryBuyerDomainTradeRecordsRequest& setBizIdList(const vector<string> & bizIdList) { DARABONBA_PTR_SET_VALUE(bizIdList_, bizIdList) };
    inline QueryBuyerDomainTradeRecordsRequest& setBizIdList(vector<string> && bizIdList) { DARABONBA_PTR_SET_RVALUE(bizIdList_, bizIdList) };


    // domainNameList Field Functions 
    bool hasDomainNameList() const { return this->domainNameList_ != nullptr;};
    void deleteDomainNameList() { this->domainNameList_ = nullptr;};
    inline const vector<string> & domainNameList() const { DARABONBA_PTR_GET_CONST(domainNameList_, vector<string>) };
    inline vector<string> domainNameList() { DARABONBA_PTR_GET(domainNameList_, vector<string>) };
    inline QueryBuyerDomainTradeRecordsRequest& setDomainNameList(const vector<string> & domainNameList) { DARABONBA_PTR_SET_VALUE(domainNameList_, domainNameList) };
    inline QueryBuyerDomainTradeRecordsRequest& setDomainNameList(vector<string> && domainNameList) { DARABONBA_PTR_SET_RVALUE(domainNameList_, domainNameList) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryBuyerDomainTradeRecordsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // endPrice Field Functions 
    bool hasEndPrice() const { return this->endPrice_ != nullptr;};
    void deleteEndPrice() { this->endPrice_ = nullptr;};
    inline float endPrice() const { DARABONBA_PTR_GET_DEFAULT(endPrice_, 0.0) };
    inline QueryBuyerDomainTradeRecordsRequest& setEndPrice(float endPrice) { DARABONBA_PTR_SET_VALUE(endPrice_, endPrice) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline QueryBuyerDomainTradeRecordsRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryBuyerDomainTradeRecordsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sorter Field Functions 
    bool hasSorter() const { return this->sorter_ != nullptr;};
    void deleteSorter() { this->sorter_ = nullptr;};
    inline string sorter() const { DARABONBA_PTR_GET_DEFAULT(sorter_, "") };
    inline QueryBuyerDomainTradeRecordsRequest& setSorter(string sorter) { DARABONBA_PTR_SET_VALUE(sorter_, sorter) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryBuyerDomainTradeRecordsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // startPrice Field Functions 
    bool hasStartPrice() const { return this->startPrice_ != nullptr;};
    void deleteStartPrice() { this->startPrice_ = nullptr;};
    inline float startPrice() const { DARABONBA_PTR_GET_DEFAULT(startPrice_, 0.0) };
    inline QueryBuyerDomainTradeRecordsRequest& setStartPrice(float startPrice) { DARABONBA_PTR_SET_VALUE(startPrice_, startPrice) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline QueryBuyerDomainTradeRecordsRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline QueryBuyerDomainTradeRecordsRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // suffixList Field Functions 
    bool hasSuffixList() const { return this->suffixList_ != nullptr;};
    void deleteSuffixList() { this->suffixList_ = nullptr;};
    inline const vector<string> & suffixList() const { DARABONBA_PTR_GET_CONST(suffixList_, vector<string>) };
    inline vector<string> suffixList() { DARABONBA_PTR_GET(suffixList_, vector<string>) };
    inline QueryBuyerDomainTradeRecordsRequest& setSuffixList(const vector<string> & suffixList) { DARABONBA_PTR_SET_VALUE(suffixList_, suffixList) };
    inline QueryBuyerDomainTradeRecordsRequest& setSuffixList(vector<string> && suffixList) { DARABONBA_PTR_SET_RVALUE(suffixList_, suffixList) };


    // tradeTypeList Field Functions 
    bool hasTradeTypeList() const { return this->tradeTypeList_ != nullptr;};
    void deleteTradeTypeList() { this->tradeTypeList_ = nullptr;};
    inline const vector<string> & tradeTypeList() const { DARABONBA_PTR_GET_CONST(tradeTypeList_, vector<string>) };
    inline vector<string> tradeTypeList() { DARABONBA_PTR_GET(tradeTypeList_, vector<string>) };
    inline QueryBuyerDomainTradeRecordsRequest& setTradeTypeList(const vector<string> & tradeTypeList) { DARABONBA_PTR_SET_VALUE(tradeTypeList_, tradeTypeList) };
    inline QueryBuyerDomainTradeRecordsRequest& setTradeTypeList(vector<string> && tradeTypeList) { DARABONBA_PTR_SET_RVALUE(tradeTypeList_, tradeTypeList) };


  protected:
    std::shared_ptr<vector<string>> bizIdList_ = nullptr;
    std::shared_ptr<vector<string>> domainNameList_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<float> endPrice_ = nullptr;
    std::shared_ptr<int64_t> pageNum_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> sorter_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<float> startPrice_ = nullptr;
    std::shared_ptr<vector<string>> statusList_ = nullptr;
    std::shared_ptr<vector<string>> suffixList_ = nullptr;
    std::shared_ptr<vector<string>> tradeTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
