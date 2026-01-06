// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDINGTALKMEETINGMEMBEREVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDINGTALKMEETINGMEMBEREVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDingtalkMeetingMemberEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDingtalkMeetingMemberEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDingtalkMeetingMemberEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetDingtalkMeetingMemberEventResponseBody() = default ;
    GetDingtalkMeetingMemberEventResponseBody(const GetDingtalkMeetingMemberEventResponseBody &) = default ;
    GetDingtalkMeetingMemberEventResponseBody(GetDingtalkMeetingMemberEventResponseBody &&) = default ;
    GetDingtalkMeetingMemberEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDingtalkMeetingMemberEventResponseBody() = default ;
    GetDingtalkMeetingMemberEventResponseBody& operator=(const GetDingtalkMeetingMemberEventResponseBody &) = default ;
    GetDingtalkMeetingMemberEventResponseBody& operator=(GetDingtalkMeetingMemberEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(eventId, eventId_);
        DARABONBA_PTR_TO_JSON(eventName, eventName_);
        DARABONBA_PTR_TO_JSON(eventType, eventType_);
        DARABONBA_PTR_TO_JSON(ts, ts_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(eventId, eventId_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(eventType, eventType_);
        DARABONBA_PTR_FROM_JSON(ts, ts_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventId_ == nullptr
        && this->eventName_ == nullptr && this->eventType_ == nullptr && this->ts_ == nullptr; };
      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Data& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Data& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Data& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // ts Field Functions 
      bool hasTs() const { return this->ts_ != nullptr;};
      void deleteTs() { this->ts_ = nullptr;};
      inline int64_t getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, 0L) };
      inline Data& setTs(int64_t ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


    protected:
      shared_ptr<string> eventId_ {};
      shared_ptr<string> eventName_ {};
      shared_ptr<string> eventType_ {};
      shared_ptr<int64_t> ts_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetDingtalkMeetingMemberEventResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetDingtalkMeetingMemberEventResponseBody::Data>) };
    inline vector<GetDingtalkMeetingMemberEventResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetDingtalkMeetingMemberEventResponseBody::Data>) };
    inline GetDingtalkMeetingMemberEventResponseBody& setData(const vector<GetDingtalkMeetingMemberEventResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDingtalkMeetingMemberEventResponseBody& setData(vector<GetDingtalkMeetingMemberEventResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDingtalkMeetingMemberEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetDingtalkMeetingMemberEventResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetDingtalkMeetingMemberEventResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<GetDingtalkMeetingMemberEventResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
