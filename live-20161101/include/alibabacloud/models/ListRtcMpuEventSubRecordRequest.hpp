// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUEVENTSUBRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUEVENTSUBRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUEventSubRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUEventSubRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SubId, subId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUEventSubRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SubId, subId_);
    };
    ListRtcMPUEventSubRecordRequest() = default ;
    ListRtcMPUEventSubRecordRequest(const ListRtcMPUEventSubRecordRequest &) = default ;
    ListRtcMPUEventSubRecordRequest(ListRtcMPUEventSubRecordRequest &&) = default ;
    ListRtcMPUEventSubRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUEventSubRecordRequest() = default ;
    ListRtcMPUEventSubRecordRequest& operator=(const ListRtcMPUEventSubRecordRequest &) = default ;
    ListRtcMPUEventSubRecordRequest& operator=(ListRtcMPUEventSubRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->endTime_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->startTime_ == nullptr && return this->subId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListRtcMPUEventSubRecordRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListRtcMPUEventSubRecordRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRtcMPUEventSubRecordRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRtcMPUEventSubRecordRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListRtcMPUEventSubRecordRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline string subId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
    inline ListRtcMPUEventSubRecordRequest& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


  protected:
    // The ID of the application.
    // 
    // >  The ID can be up to 64 characters in length and can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the subscription.
    std::shared_ptr<string> subId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
