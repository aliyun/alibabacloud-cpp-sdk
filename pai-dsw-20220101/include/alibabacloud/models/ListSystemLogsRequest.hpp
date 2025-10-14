// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListSystemLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GmtEndTime, gmtEndTime_);
      DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LifecycleId, lifecycleId_);
      DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_TO_JSON(LogRepository, logRepository_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProblemCategory, problemCategory_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SourceRequestId, sourceRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtEndTime, gmtEndTime_);
      DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LifecycleId, lifecycleId_);
      DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_FROM_JSON(LogRepository, logRepository_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProblemCategory, problemCategory_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SourceRequestId, sourceRequestId_);
    };
    ListSystemLogsRequest() = default ;
    ListSystemLogsRequest(const ListSystemLogsRequest &) = default ;
    ListSystemLogsRequest(ListSystemLogsRequest &&) = default ;
    ListSystemLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemLogsRequest() = default ;
    ListSystemLogsRequest& operator=(const ListSystemLogsRequest &) = default ;
    ListSystemLogsRequest& operator=(ListSystemLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtEndTime_ == nullptr
        && return this->gmtStartTime_ == nullptr && return this->instanceId_ == nullptr && return this->lifecycleId_ == nullptr && return this->logLevel_ == nullptr && return this->logRepository_ == nullptr
        && return this->offset_ == nullptr && return this->order_ == nullptr && return this->problemCategory_ == nullptr && return this->sortBy_ == nullptr && return this->sourceRequestId_ == nullptr; };
    // gmtEndTime Field Functions 
    bool hasGmtEndTime() const { return this->gmtEndTime_ != nullptr;};
    void deleteGmtEndTime() { this->gmtEndTime_ = nullptr;};
    inline string gmtEndTime() const { DARABONBA_PTR_GET_DEFAULT(gmtEndTime_, "") };
    inline ListSystemLogsRequest& setGmtEndTime(string gmtEndTime) { DARABONBA_PTR_SET_VALUE(gmtEndTime_, gmtEndTime) };


    // gmtStartTime Field Functions 
    bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
    void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
    inline string gmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
    inline ListSystemLogsRequest& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSystemLogsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lifecycleId Field Functions 
    bool hasLifecycleId() const { return this->lifecycleId_ != nullptr;};
    void deleteLifecycleId() { this->lifecycleId_ = nullptr;};
    inline string lifecycleId() const { DARABONBA_PTR_GET_DEFAULT(lifecycleId_, "") };
    inline ListSystemLogsRequest& setLifecycleId(string lifecycleId) { DARABONBA_PTR_SET_VALUE(lifecycleId_, lifecycleId) };


    // logLevel Field Functions 
    bool hasLogLevel() const { return this->logLevel_ != nullptr;};
    void deleteLogLevel() { this->logLevel_ = nullptr;};
    inline string logLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
    inline ListSystemLogsRequest& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


    // logRepository Field Functions 
    bool hasLogRepository() const { return this->logRepository_ != nullptr;};
    void deleteLogRepository() { this->logRepository_ = nullptr;};
    inline string logRepository() const { DARABONBA_PTR_GET_DEFAULT(logRepository_, "") };
    inline ListSystemLogsRequest& setLogRepository(string logRepository) { DARABONBA_PTR_SET_VALUE(logRepository_, logRepository) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline string offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
    inline ListSystemLogsRequest& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListSystemLogsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // problemCategory Field Functions 
    bool hasProblemCategory() const { return this->problemCategory_ != nullptr;};
    void deleteProblemCategory() { this->problemCategory_ = nullptr;};
    inline string problemCategory() const { DARABONBA_PTR_GET_DEFAULT(problemCategory_, "") };
    inline ListSystemLogsRequest& setProblemCategory(string problemCategory) { DARABONBA_PTR_SET_VALUE(problemCategory_, problemCategory) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListSystemLogsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceRequestId Field Functions 
    bool hasSourceRequestId() const { return this->sourceRequestId_ != nullptr;};
    void deleteSourceRequestId() { this->sourceRequestId_ = nullptr;};
    inline string sourceRequestId() const { DARABONBA_PTR_GET_DEFAULT(sourceRequestId_, "") };
    inline ListSystemLogsRequest& setSourceRequestId(string sourceRequestId) { DARABONBA_PTR_SET_VALUE(sourceRequestId_, sourceRequestId) };


  protected:
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> gmtEndTime_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> gmtStartTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> lifecycleId_ = nullptr;
    std::shared_ptr<string> logLevel_ = nullptr;
    std::shared_ptr<string> logRepository_ = nullptr;
    std::shared_ptr<string> offset_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> problemCategory_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<string> sourceRequestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
