// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUTHUSERCONNECTDURATIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUTHUSERCONNECTDURATIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryAuthUserConnectDurationListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuthUserConnectDurationListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(DataDate, dataDate_);
      DARABONBA_PTR_TO_JSON(IsAdUser, isAdUser_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StatisticType, statisticType_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(WithDetail, withDetail_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuthUserConnectDurationListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(DataDate, dataDate_);
      DARABONBA_PTR_FROM_JSON(IsAdUser, isAdUser_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StatisticType, statisticType_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(WithDetail, withDetail_);
    };
    QueryAuthUserConnectDurationListRequest() = default ;
    QueryAuthUserConnectDurationListRequest(const QueryAuthUserConnectDurationListRequest &) = default ;
    QueryAuthUserConnectDurationListRequest(QueryAuthUserConnectDurationListRequest &&) = default ;
    QueryAuthUserConnectDurationListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuthUserConnectDurationListRequest() = default ;
    QueryAuthUserConnectDurationListRequest& operator=(const QueryAuthUserConnectDurationListRequest &) = default ;
    QueryAuthUserConnectDurationListRequest& operator=(QueryAuthUserConnectDurationListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->dataDate_ == nullptr && this->isAdUser_ == nullptr && this->nextToken_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->statisticType_ == nullptr && this->threshold_ == nullptr && this->userName_ == nullptr && this->withDetail_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline QueryAuthUserConnectDurationListRequest& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // dataDate Field Functions 
    bool hasDataDate() const { return this->dataDate_ != nullptr;};
    void deleteDataDate() { this->dataDate_ = nullptr;};
    inline string getDataDate() const { DARABONBA_PTR_GET_DEFAULT(dataDate_, "") };
    inline QueryAuthUserConnectDurationListRequest& setDataDate(string dataDate) { DARABONBA_PTR_SET_VALUE(dataDate_, dataDate) };


    // isAdUser Field Functions 
    bool hasIsAdUser() const { return this->isAdUser_ != nullptr;};
    void deleteIsAdUser() { this->isAdUser_ = nullptr;};
    inline bool getIsAdUser() const { DARABONBA_PTR_GET_DEFAULT(isAdUser_, false) };
    inline QueryAuthUserConnectDurationListRequest& setIsAdUser(bool isAdUser) { DARABONBA_PTR_SET_VALUE(isAdUser_, isAdUser) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryAuthUserConnectDurationListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryAuthUserConnectDurationListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAuthUserConnectDurationListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statisticType Field Functions 
    bool hasStatisticType() const { return this->statisticType_ != nullptr;};
    void deleteStatisticType() { this->statisticType_ = nullptr;};
    inline string getStatisticType() const { DARABONBA_PTR_GET_DEFAULT(statisticType_, "") };
    inline QueryAuthUserConnectDurationListRequest& setStatisticType(string statisticType) { DARABONBA_PTR_SET_VALUE(statisticType_, statisticType) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
    inline QueryAuthUserConnectDurationListRequest& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline QueryAuthUserConnectDurationListRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // withDetail Field Functions 
    bool hasWithDetail() const { return this->withDetail_ != nullptr;};
    void deleteWithDetail() { this->withDetail_ = nullptr;};
    inline bool getWithDetail() const { DARABONBA_PTR_GET_DEFAULT(withDetail_, false) };
    inline QueryAuthUserConnectDurationListRequest& setWithDetail(bool withDetail) { DARABONBA_PTR_SET_VALUE(withDetail_, withDetail) };


  protected:
    // The comparison operator for connection duration. This parameter is used together with Threshold to filter users by a threshold. Valid values:
    // 
    // - GreaterThanThreshold: greater than the threshold.
    // - LessThanThreshold: less than the threshold.
    shared_ptr<string> comparisonOperator_ {};
    // The date for the statistics, in the yyyy-MM-dd format. If this parameter is left empty, statistics from the previous day are returned by default.
    shared_ptr<string> dataDate_ {};
    // Specifies whether to query only Active Directory (AD) users. This parameter is required when UserName or WithDetail is specified.
    shared_ptr<bool> isAdUser_ {};
    // The paging token. This parameter is used only when statistics are collected by individual session details (StatisticType=SingleSession). You do not need to specify this parameter for the first request. For subsequent requests, set this parameter to the NextToken value returned in the previous response to retrieve the next page.
    shared_ptr<string> nextToken_ {};
    // The page number, starting from 1. Default value: 1. This parameter takes effect only when statistics are collected by daily cumulative duration (StatisticType=Daily).
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page. Default value: 100. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The statistics type. Valid values:
    // 
    // - Daily: collects statistics by daily cumulative connection duration. This is the default value.
    // - SingleSession: collects statistics by individual session details.
    shared_ptr<string> statisticType_ {};
    // The connection duration threshold, in seconds. This parameter must be used together with ComparisonOperator.
    shared_ptr<int32_t> threshold_ {};
    // The name of the end user. Fuzzy match is supported. When you use this parameter, you must also specify IsAdUser.
    shared_ptr<string> userName_ {};
    // Specifies whether to backfill user details such as display name and nickname. This parameter supports both AD users and convenience users. When you use this parameter, you must also specify IsAdUser.
    shared_ptr<bool> withDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
