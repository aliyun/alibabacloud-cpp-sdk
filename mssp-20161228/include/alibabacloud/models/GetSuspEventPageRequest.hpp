// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUSPEVENTPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUSPEVENTPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSuspEventPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuspEventPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmEndTime, alarmEndTime_);
      DARABONBA_PTR_TO_JSON(AlarmStartTime, alarmStartTime_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuspEventPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmEndTime, alarmEndTime_);
      DARABONBA_PTR_FROM_JSON(AlarmStartTime, alarmStartTime_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetSuspEventPageRequest() = default ;
    GetSuspEventPageRequest(const GetSuspEventPageRequest &) = default ;
    GetSuspEventPageRequest(GetSuspEventPageRequest &&) = default ;
    GetSuspEventPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuspEventPageRequest() = default ;
    GetSuspEventPageRequest& operator=(const GetSuspEventPageRequest &) = default ;
    GetSuspEventPageRequest& operator=(GetSuspEventPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmEndTime_ == nullptr
        && return this->alarmStartTime_ == nullptr && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->source_ == nullptr && return this->status_ == nullptr; };
    // alarmEndTime Field Functions 
    bool hasAlarmEndTime() const { return this->alarmEndTime_ != nullptr;};
    void deleteAlarmEndTime() { this->alarmEndTime_ = nullptr;};
    inline int64_t alarmEndTime() const { DARABONBA_PTR_GET_DEFAULT(alarmEndTime_, 0L) };
    inline GetSuspEventPageRequest& setAlarmEndTime(int64_t alarmEndTime) { DARABONBA_PTR_SET_VALUE(alarmEndTime_, alarmEndTime) };


    // alarmStartTime Field Functions 
    bool hasAlarmStartTime() const { return this->alarmStartTime_ != nullptr;};
    void deleteAlarmStartTime() { this->alarmStartTime_ = nullptr;};
    inline int64_t alarmStartTime() const { DARABONBA_PTR_GET_DEFAULT(alarmStartTime_, 0L) };
    inline GetSuspEventPageRequest& setAlarmStartTime(int64_t alarmStartTime) { DARABONBA_PTR_SET_VALUE(alarmStartTime_, alarmStartTime) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetSuspEventPageRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSuspEventPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetSuspEventPageRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetSuspEventPageRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Alarm end time.
    std::shared_ptr<int64_t> alarmEndTime_ = nullptr;
    // Alarm start time.
    std::shared_ptr<int64_t> alarmStartTime_ = nullptr;
    // Current page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Number of items per page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Alarm source.
    std::shared_ptr<string> source_ = nullptr;
    // Disposal status.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
