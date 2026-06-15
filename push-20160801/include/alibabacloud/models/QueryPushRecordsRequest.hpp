// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryPushRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PushType, pushType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PushType, pushType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    QueryPushRecordsRequest() = default ;
    QueryPushRecordsRequest(const QueryPushRecordsRequest &) = default ;
    QueryPushRecordsRequest(QueryPushRecordsRequest &&) = default ;
    QueryPushRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushRecordsRequest() = default ;
    QueryPushRecordsRequest& operator=(const QueryPushRecordsRequest &) = default ;
    QueryPushRecordsRequest& operator=(QueryPushRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->endTime_ == nullptr && this->keyword_ == nullptr && this->nextToken_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->pushType_ == nullptr && this->source_ == nullptr && this->startTime_ == nullptr && this->target_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline QueryPushRecordsRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryPushRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline QueryPushRecordsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryPushRecordsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline QueryPushRecordsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryPushRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string getPushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline QueryPushRecordsRequest& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline QueryPushRecordsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryPushRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline QueryPushRecordsRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The AppKey of the application.
    // 
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    // The end time for the query. Specify the time in UTC, using the ISO-8601 format `YYYY-MM-DDThh:mm:ssZ`.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The keyword used for the query. The search covers the `MessageId`, `Title`, and `Body` fields. For `Title` and `Body`, the system applies Chinese word segmentation and matches whole tokens instead of substrings.
    shared_ptr<string> keyword_ {};
    // This parameter is deprecated.
    shared_ptr<string> nextToken_ {};
    // The page number to query. Default: 1. Maximum: 10,000.
    shared_ptr<int32_t> page_ {};
    // The number of entries to return on each page. Default: 20. Maximum: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The push type. Valid values:
    // 
    // - **MESSAGE**: A message.
    // 
    // - **NOTICE**: A notification.
    // 
    // - **LIVE_ACTIVITY**: A Live Activity.
    shared_ptr<string> pushType_ {};
    // The push source. Valid values:
    // 
    // - **API**: Pushes initiated via an OpenAPI call.
    // 
    // - **CONSOLE**: Pushes initiated from the Mobile Push console.
    // 
    // - **OpenAPIExplorer**: Pushes initiated from Alibaba Cloud OpenAPI Explorer.
    shared_ptr<string> source_ {};
    // The start time for the query. Specify the time in UTC, using the ISO-8601 format `YYYY-MM-DDThh:mm:ssZ`.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The push target. Valid values:
    // 
    // - **DEVICE**: Push to devices.
    // 
    // - **ACCOUNT**: Push to accounts.
    // 
    // - **ALIAS**: Push to aliases.
    // 
    // - **TAG**: Push to tags.
    // 
    // - **ALL**: Push to all devices.
    // 
    // - **TBD**: Initializes a continuous push. The push target is specified in a subsequent call to the `ContinuouslyPush` API operation.
    shared_ptr<string> target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
