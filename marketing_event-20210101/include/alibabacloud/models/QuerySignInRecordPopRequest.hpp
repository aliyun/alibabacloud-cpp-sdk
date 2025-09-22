// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSIGNINRECORDPOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSIGNINRECORDPOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QuerySignInRecordPopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySignInRecordPopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySignInRecordPopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QuerySignInRecordPopRequest() = default ;
    QuerySignInRecordPopRequest(const QuerySignInRecordPopRequest &) = default ;
    QuerySignInRecordPopRequest(QuerySignInRecordPopRequest &&) = default ;
    QuerySignInRecordPopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySignInRecordPopRequest() = default ;
    QuerySignInRecordPopRequest& operator=(const QuerySignInRecordPopRequest &) = default ;
    QuerySignInRecordPopRequest& operator=(QuerySignInRecordPopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr
        && this->endTime_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->startTime_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline int64_t activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
    inline QuerySignInRecordPopRequest& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QuerySignInRecordPopRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QuerySignInRecordPopRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySignInRecordPopRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QuerySignInRecordPopRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> activityId_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
