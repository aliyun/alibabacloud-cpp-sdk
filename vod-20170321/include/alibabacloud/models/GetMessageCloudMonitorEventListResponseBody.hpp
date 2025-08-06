// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECLOUDMONITOREVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECLOUDMONITOREVENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMessageCloudMonitorEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageCloudMonitorEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventList, eventList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageCloudMonitorEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventList, eventList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMessageCloudMonitorEventListResponseBody() = default ;
    GetMessageCloudMonitorEventListResponseBody(const GetMessageCloudMonitorEventListResponseBody &) = default ;
    GetMessageCloudMonitorEventListResponseBody(GetMessageCloudMonitorEventListResponseBody &&) = default ;
    GetMessageCloudMonitorEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageCloudMonitorEventListResponseBody() = default ;
    GetMessageCloudMonitorEventListResponseBody& operator=(const GetMessageCloudMonitorEventListResponseBody &) = default ;
    GetMessageCloudMonitorEventListResponseBody& operator=(GetMessageCloudMonitorEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventList_ != nullptr
        && this->requestId_ != nullptr; };
    // eventList Field Functions 
    bool hasEventList() const { return this->eventList_ != nullptr;};
    void deleteEventList() { this->eventList_ = nullptr;};
    inline string eventList() const { DARABONBA_PTR_GET_DEFAULT(eventList_, "") };
    inline GetMessageCloudMonitorEventListResponseBody& setEventList(string eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageCloudMonitorEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> eventList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
