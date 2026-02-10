// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRICTEVENTNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRICTEVENTNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrictEventNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrictEventNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrictEventNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeStrictEventNameResponseBody() = default ;
    DescribeStrictEventNameResponseBody(const DescribeStrictEventNameResponseBody &) = default ;
    DescribeStrictEventNameResponseBody(DescribeStrictEventNameResponseBody &&) = default ;
    DescribeStrictEventNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrictEventNameResponseBody() = default ;
    DescribeStrictEventNameResponseBody& operator=(const DescribeStrictEventNameResponseBody &) = default ;
    DescribeStrictEventNameResponseBody& operator=(DescribeStrictEventNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(ShowEventName, showEventName_);
        DARABONBA_PTR_TO_JSON(ShowEventType, showEventType_);
        DARABONBA_PTR_TO_JSON(SwitchConfig, switchConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(ShowEventName, showEventName_);
        DARABONBA_PTR_FROM_JSON(ShowEventType, showEventType_);
        DARABONBA_PTR_FROM_JSON(SwitchConfig, switchConfig_);
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
      virtual bool empty() const override { return this->eventName_ == nullptr
        && this->eventType_ == nullptr && this->showEventName_ == nullptr && this->showEventType_ == nullptr && this->switchConfig_ == nullptr; };
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


      // showEventName Field Functions 
      bool hasShowEventName() const { return this->showEventName_ != nullptr;};
      void deleteShowEventName() { this->showEventName_ = nullptr;};
      inline string getShowEventName() const { DARABONBA_PTR_GET_DEFAULT(showEventName_, "") };
      inline Data& setShowEventName(string showEventName) { DARABONBA_PTR_SET_VALUE(showEventName_, showEventName) };


      // showEventType Field Functions 
      bool hasShowEventType() const { return this->showEventType_ != nullptr;};
      void deleteShowEventType() { this->showEventType_ = nullptr;};
      inline string getShowEventType() const { DARABONBA_PTR_GET_DEFAULT(showEventType_, "") };
      inline Data& setShowEventType(string showEventType) { DARABONBA_PTR_SET_VALUE(showEventType_, showEventType) };


      // switchConfig Field Functions 
      bool hasSwitchConfig() const { return this->switchConfig_ != nullptr;};
      void deleteSwitchConfig() { this->switchConfig_ = nullptr;};
      inline bool getSwitchConfig() const { DARABONBA_PTR_GET_DEFAULT(switchConfig_, false) };
      inline Data& setSwitchConfig(bool switchConfig) { DARABONBA_PTR_SET_VALUE(switchConfig_, switchConfig) };


    protected:
      // Alarm name.
      shared_ptr<string> eventName_ {};
      // Alarm type.
      shared_ptr<string> eventType_ {};
      // Displayed alarm name.
      shared_ptr<string> showEventName_ {};
      // Displayed alarm type.
      shared_ptr<string> showEventType_ {};
      // Indicates whether the user has enabled the strict mode for this alarm type.
      // - true: Enabled
      // - false: Not enabled
      shared_ptr<bool> switchConfig_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeStrictEventNameResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeStrictEventNameResponseBody::Data>) };
    inline vector<DescribeStrictEventNameResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeStrictEventNameResponseBody::Data>) };
    inline DescribeStrictEventNameResponseBody& setData(const vector<DescribeStrictEventNameResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeStrictEventNameResponseBody& setData(vector<DescribeStrictEventNameResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStrictEventNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data.
    shared_ptr<vector<DescribeStrictEventNameResponseBody::Data>> data_ {};
    // The ID of this call request, a unique identifier generated by Alibaba Cloud for this request, which can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
