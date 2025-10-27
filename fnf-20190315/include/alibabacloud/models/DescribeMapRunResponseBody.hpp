// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMAPRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMAPRUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMapRunResponseBodyItemCounts.hpp>
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
    virtual bool empty() const override { return this->concurrency_ == nullptr
        && return this->executionName_ == nullptr && return this->itemCounts_ == nullptr && return this->mapRunName_ == nullptr && return this->requestId_ == nullptr && return this->startedTime_ == nullptr
        && return this->status_ == nullptr && return this->stoppedTime_ == nullptr && return this->toleratedFailedCount_ == nullptr && return this->toleratedFailedPercentage_ == nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int64_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
    inline DescribeMapRunResponseBody& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // executionName Field Functions 
    bool hasExecutionName() const { return this->executionName_ != nullptr;};
    void deleteExecutionName() { this->executionName_ = nullptr;};
    inline string executionName() const { DARABONBA_PTR_GET_DEFAULT(executionName_, "") };
    inline DescribeMapRunResponseBody& setExecutionName(string executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };


    // itemCounts Field Functions 
    bool hasItemCounts() const { return this->itemCounts_ != nullptr;};
    void deleteItemCounts() { this->itemCounts_ = nullptr;};
    inline const DescribeMapRunResponseBodyItemCounts & itemCounts() const { DARABONBA_PTR_GET_CONST(itemCounts_, DescribeMapRunResponseBodyItemCounts) };
    inline DescribeMapRunResponseBodyItemCounts itemCounts() { DARABONBA_PTR_GET(itemCounts_, DescribeMapRunResponseBodyItemCounts) };
    inline DescribeMapRunResponseBody& setItemCounts(const DescribeMapRunResponseBodyItemCounts & itemCounts) { DARABONBA_PTR_SET_VALUE(itemCounts_, itemCounts) };
    inline DescribeMapRunResponseBody& setItemCounts(DescribeMapRunResponseBodyItemCounts && itemCounts) { DARABONBA_PTR_SET_RVALUE(itemCounts_, itemCounts) };


    // mapRunName Field Functions 
    bool hasMapRunName() const { return this->mapRunName_ != nullptr;};
    void deleteMapRunName() { this->mapRunName_ = nullptr;};
    inline string mapRunName() const { DARABONBA_PTR_GET_DEFAULT(mapRunName_, "") };
    inline DescribeMapRunResponseBody& setMapRunName(string mapRunName) { DARABONBA_PTR_SET_VALUE(mapRunName_, mapRunName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMapRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startedTime Field Functions 
    bool hasStartedTime() const { return this->startedTime_ != nullptr;};
    void deleteStartedTime() { this->startedTime_ = nullptr;};
    inline string startedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, "") };
    inline DescribeMapRunResponseBody& setStartedTime(string startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMapRunResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stoppedTime Field Functions 
    bool hasStoppedTime() const { return this->stoppedTime_ != nullptr;};
    void deleteStoppedTime() { this->stoppedTime_ = nullptr;};
    inline string stoppedTime() const { DARABONBA_PTR_GET_DEFAULT(stoppedTime_, "") };
    inline DescribeMapRunResponseBody& setStoppedTime(string stoppedTime) { DARABONBA_PTR_SET_VALUE(stoppedTime_, stoppedTime) };


    // toleratedFailedCount Field Functions 
    bool hasToleratedFailedCount() const { return this->toleratedFailedCount_ != nullptr;};
    void deleteToleratedFailedCount() { this->toleratedFailedCount_ = nullptr;};
    inline int64_t toleratedFailedCount() const { DARABONBA_PTR_GET_DEFAULT(toleratedFailedCount_, 0L) };
    inline DescribeMapRunResponseBody& setToleratedFailedCount(int64_t toleratedFailedCount) { DARABONBA_PTR_SET_VALUE(toleratedFailedCount_, toleratedFailedCount) };


    // toleratedFailedPercentage Field Functions 
    bool hasToleratedFailedPercentage() const { return this->toleratedFailedPercentage_ != nullptr;};
    void deleteToleratedFailedPercentage() { this->toleratedFailedPercentage_ = nullptr;};
    inline float toleratedFailedPercentage() const { DARABONBA_PTR_GET_DEFAULT(toleratedFailedPercentage_, 0.0) };
    inline DescribeMapRunResponseBody& setToleratedFailedPercentage(float toleratedFailedPercentage) { DARABONBA_PTR_SET_VALUE(toleratedFailedPercentage_, toleratedFailedPercentage) };


  protected:
    std::shared_ptr<int64_t> concurrency_ = nullptr;
    std::shared_ptr<string> executionName_ = nullptr;
    std::shared_ptr<DescribeMapRunResponseBodyItemCounts> itemCounts_ = nullptr;
    std::shared_ptr<string> mapRunName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startedTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> stoppedTime_ = nullptr;
    std::shared_ptr<int64_t> toleratedFailedCount_ = nullptr;
    std::shared_ptr<float> toleratedFailedPercentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
