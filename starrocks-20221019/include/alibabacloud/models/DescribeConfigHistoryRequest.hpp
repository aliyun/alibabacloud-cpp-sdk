// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeConfigHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EffectStatuses, effectStatuses_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NeedTotal, needTotal_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectStatuses, effectStatuses_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NeedTotal, needTotal_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeConfigHistoryRequest() = default ;
    DescribeConfigHistoryRequest(const DescribeConfigHistoryRequest &) = default ;
    DescribeConfigHistoryRequest(DescribeConfigHistoryRequest &&) = default ;
    DescribeConfigHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigHistoryRequest() = default ;
    DescribeConfigHistoryRequest& operator=(const DescribeConfigHistoryRequest &) = default ;
    DescribeConfigHistoryRequest& operator=(DescribeConfigHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectStatuses_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->needTotal_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->startTime_ == nullptr; };
    // effectStatuses Field Functions 
    bool hasEffectStatuses() const { return this->effectStatuses_ != nullptr;};
    void deleteEffectStatuses() { this->effectStatuses_ = nullptr;};
    inline string getEffectStatuses() const { DARABONBA_PTR_GET_DEFAULT(effectStatuses_, "") };
    inline DescribeConfigHistoryRequest& setEffectStatuses(string effectStatuses) { DARABONBA_PTR_SET_VALUE(effectStatuses_, effectStatuses) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeConfigHistoryRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeConfigHistoryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // needTotal Field Functions 
    bool hasNeedTotal() const { return this->needTotal_ != nullptr;};
    void deleteNeedTotal() { this->needTotal_ = nullptr;};
    inline bool getNeedTotal() const { DARABONBA_PTR_GET_DEFAULT(needTotal_, false) };
    inline DescribeConfigHistoryRequest& setNeedTotal(bool needTotal) { DARABONBA_PTR_SET_VALUE(needTotal_, needTotal) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeConfigHistoryRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeConfigHistoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeConfigHistoryRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> effectStatuses_ {};
    shared_ptr<int64_t> endTime_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> needTotal_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
