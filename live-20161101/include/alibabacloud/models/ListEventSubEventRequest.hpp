// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSUBEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSUBEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListEventSubEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventSubEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SubscribeId, subscribeId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventSubEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SubscribeId, subscribeId_);
    };
    ListEventSubEventRequest() = default ;
    ListEventSubEventRequest(const ListEventSubEventRequest &) = default ;
    ListEventSubEventRequest(ListEventSubEventRequest &&) = default ;
    ListEventSubEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventSubEventRequest() = default ;
    ListEventSubEventRequest& operator=(const ListEventSubEventRequest &) = default ;
    ListEventSubEventRequest& operator=(ListEventSubEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->endTime_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->startTime_ == nullptr && return this->subscribeId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListEventSubEventRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListEventSubEventRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListEventSubEventRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListEventSubEventRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListEventSubEventRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subscribeId Field Functions 
    bool hasSubscribeId() const { return this->subscribeId_ != nullptr;};
    void deleteSubscribeId() { this->subscribeId_ = nullptr;};
    inline string subscribeId() const { DARABONBA_PTR_GET_DEFAULT(subscribeId_, "") };
    inline ListEventSubEventRequest& setSubscribeId(string subscribeId) { DARABONBA_PTR_SET_VALUE(subscribeId_, subscribeId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of callback records to return on each page. Valid values: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The subscription ID. You can obtain the ID from the response to the [CreateEventSub](https://help.aliyun.com/document_detail/2848209.html) operation.
    std::shared_ptr<string> subscribeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
