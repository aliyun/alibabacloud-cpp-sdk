// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMAPRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMAPRUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class DescribeMapRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMapRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_TO_JSON(ItemCounts, itemCounts_);
      DARABONBA_PTR_TO_JSON(MapRunName, mapRunName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoppedTime, stoppedTime_);
      DARABONBA_PTR_TO_JSON(ToleratedFailedCount, toleratedFailedCount_);
      DARABONBA_PTR_TO_JSON(ToleratedFailedPercentage, toleratedFailedPercentage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMapRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_FROM_JSON(ItemCounts, itemCounts_);
      DARABONBA_PTR_FROM_JSON(MapRunName, mapRunName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoppedTime, stoppedTime_);
      DARABONBA_PTR_FROM_JSON(ToleratedFailedCount, toleratedFailedCount_);
      DARABONBA_PTR_FROM_JSON(ToleratedFailedPercentage, toleratedFailedPercentage_);
    };
    DescribeMapRunResponseBody() = default ;
    DescribeMapRunResponseBody(const DescribeMapRunResponseBody &) = default ;
    DescribeMapRunResponseBody(DescribeMapRunResponseBody &&) = default ;
    DescribeMapRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMapRunResponseBody() = default ;
    DescribeMapRunResponseBody& operator=(const DescribeMapRunResponseBody &) = default ;
    DescribeMapRunResponseBody& operator=(DescribeMapRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ItemCounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ItemCounts& obj) { 
        DARABONBA_PTR_TO_JSON(Aborted, aborted_);
        DARABONBA_PTR_TO_JSON(Failed, failed_);
        DARABONBA_PTR_TO_JSON(Pending, pending_);
        DARABONBA_PTR_TO_JSON(Running, running_);
        DARABONBA_PTR_TO_JSON(Succeed, succeed_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, ItemCounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Aborted, aborted_);
        DARABONBA_PTR_FROM_JSON(Failed, failed_);
        DARABONBA_PTR_FROM_JSON(Pending, pending_);
        DARABONBA_PTR_FROM_JSON(Running, running_);
        DARABONBA_PTR_FROM_JSON(Succeed, succeed_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      ItemCounts() = default ;
      ItemCounts(const ItemCounts &) = default ;
      ItemCounts(ItemCounts &&) = default ;
      ItemCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ItemCounts() = default ;
      ItemCounts& operator=(const ItemCounts &) = default ;
      ItemCounts& operator=(ItemCounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aborted_ == nullptr
        && this->failed_ == nullptr && this->pending_ == nullptr && this->running_ == nullptr && this->succeed_ == nullptr && this->total_ == nullptr; };
      // aborted Field Functions 
      bool hasAborted() const { return this->aborted_ != nullptr;};
      void deleteAborted() { this->aborted_ = nullptr;};
      inline int64_t getAborted() const { DARABONBA_PTR_GET_DEFAULT(aborted_, 0L) };
      inline ItemCounts& setAborted(int64_t aborted) { DARABONBA_PTR_SET_VALUE(aborted_, aborted) };


      // failed Field Functions 
      bool hasFailed() const { return this->failed_ != nullptr;};
      void deleteFailed() { this->failed_ = nullptr;};
      inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
      inline ItemCounts& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


      // pending Field Functions 
      bool hasPending() const { return this->pending_ != nullptr;};
      void deletePending() { this->pending_ = nullptr;};
      inline int64_t getPending() const { DARABONBA_PTR_GET_DEFAULT(pending_, 0L) };
      inline ItemCounts& setPending(int64_t pending) { DARABONBA_PTR_SET_VALUE(pending_, pending) };


      // running Field Functions 
      bool hasRunning() const { return this->running_ != nullptr;};
      void deleteRunning() { this->running_ = nullptr;};
      inline int64_t getRunning() const { DARABONBA_PTR_GET_DEFAULT(running_, 0L) };
      inline ItemCounts& setRunning(int64_t running) { DARABONBA_PTR_SET_VALUE(running_, running) };


      // succeed Field Functions 
      bool hasSucceed() const { return this->succeed_ != nullptr;};
      void deleteSucceed() { this->succeed_ = nullptr;};
      inline int64_t getSucceed() const { DARABONBA_PTR_GET_DEFAULT(succeed_, 0L) };
      inline ItemCounts& setSucceed(int64_t succeed) { DARABONBA_PTR_SET_VALUE(succeed_, succeed) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline ItemCounts& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int64_t> aborted_ {};
      shared_ptr<int64_t> failed_ {};
      shared_ptr<int64_t> pending_ {};
      shared_ptr<int64_t> running_ {};
      shared_ptr<int64_t> succeed_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->concurrency_ == nullptr
        && this->executionName_ == nullptr && this->itemCounts_ == nullptr && this->mapRunName_ == nullptr && this->requestId_ == nullptr && this->startedTime_ == nullptr
        && this->status_ == nullptr && this->stoppedTime_ == nullptr && this->toleratedFailedCount_ == nullptr && this->toleratedFailedPercentage_ == nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int64_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
    inline DescribeMapRunResponseBody& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // executionName Field Functions 
    bool hasExecutionName() const { return this->executionName_ != nullptr;};
    void deleteExecutionName() { this->executionName_ = nullptr;};
    inline string getExecutionName() const { DARABONBA_PTR_GET_DEFAULT(executionName_, "") };
    inline DescribeMapRunResponseBody& setExecutionName(string executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };


    // itemCounts Field Functions 
    bool hasItemCounts() const { return this->itemCounts_ != nullptr;};
    void deleteItemCounts() { this->itemCounts_ = nullptr;};
    inline const DescribeMapRunResponseBody::ItemCounts & getItemCounts() const { DARABONBA_PTR_GET_CONST(itemCounts_, DescribeMapRunResponseBody::ItemCounts) };
    inline DescribeMapRunResponseBody::ItemCounts getItemCounts() { DARABONBA_PTR_GET(itemCounts_, DescribeMapRunResponseBody::ItemCounts) };
    inline DescribeMapRunResponseBody& setItemCounts(const DescribeMapRunResponseBody::ItemCounts & itemCounts) { DARABONBA_PTR_SET_VALUE(itemCounts_, itemCounts) };
    inline DescribeMapRunResponseBody& setItemCounts(DescribeMapRunResponseBody::ItemCounts && itemCounts) { DARABONBA_PTR_SET_RVALUE(itemCounts_, itemCounts) };


    // mapRunName Field Functions 
    bool hasMapRunName() const { return this->mapRunName_ != nullptr;};
    void deleteMapRunName() { this->mapRunName_ = nullptr;};
    inline string getMapRunName() const { DARABONBA_PTR_GET_DEFAULT(mapRunName_, "") };
    inline DescribeMapRunResponseBody& setMapRunName(string mapRunName) { DARABONBA_PTR_SET_VALUE(mapRunName_, mapRunName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMapRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startedTime Field Functions 
    bool hasStartedTime() const { return this->startedTime_ != nullptr;};
    void deleteStartedTime() { this->startedTime_ = nullptr;};
    inline string getStartedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, "") };
    inline DescribeMapRunResponseBody& setStartedTime(string startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMapRunResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stoppedTime Field Functions 
    bool hasStoppedTime() const { return this->stoppedTime_ != nullptr;};
    void deleteStoppedTime() { this->stoppedTime_ = nullptr;};
    inline string getStoppedTime() const { DARABONBA_PTR_GET_DEFAULT(stoppedTime_, "") };
    inline DescribeMapRunResponseBody& setStoppedTime(string stoppedTime) { DARABONBA_PTR_SET_VALUE(stoppedTime_, stoppedTime) };


    // toleratedFailedCount Field Functions 
    bool hasToleratedFailedCount() const { return this->toleratedFailedCount_ != nullptr;};
    void deleteToleratedFailedCount() { this->toleratedFailedCount_ = nullptr;};
    inline int64_t getToleratedFailedCount() const { DARABONBA_PTR_GET_DEFAULT(toleratedFailedCount_, 0L) };
    inline DescribeMapRunResponseBody& setToleratedFailedCount(int64_t toleratedFailedCount) { DARABONBA_PTR_SET_VALUE(toleratedFailedCount_, toleratedFailedCount) };


    // toleratedFailedPercentage Field Functions 
    bool hasToleratedFailedPercentage() const { return this->toleratedFailedPercentage_ != nullptr;};
    void deleteToleratedFailedPercentage() { this->toleratedFailedPercentage_ = nullptr;};
    inline float getToleratedFailedPercentage() const { DARABONBA_PTR_GET_DEFAULT(toleratedFailedPercentage_, 0.0) };
    inline DescribeMapRunResponseBody& setToleratedFailedPercentage(float toleratedFailedPercentage) { DARABONBA_PTR_SET_VALUE(toleratedFailedPercentage_, toleratedFailedPercentage) };


  protected:
    shared_ptr<int64_t> concurrency_ {};
    shared_ptr<string> executionName_ {};
    shared_ptr<DescribeMapRunResponseBody::ItemCounts> itemCounts_ {};
    shared_ptr<string> mapRunName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startedTime_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> stoppedTime_ {};
    shared_ptr<int64_t> toleratedFailedCount_ {};
    shared_ptr<float> toleratedFailedPercentage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
