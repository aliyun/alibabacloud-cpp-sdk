// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTNAMELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTNAMELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEventNameListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEventNameListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventNameList, eventNameList_);
      DARABONBA_PTR_TO_JSON(NameList, nameList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEventNameListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventNameList, eventNameList_);
      DARABONBA_PTR_FROM_JSON(NameList, nameList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInvadeEventNameListResponseBody() = default ;
    DescribeInvadeEventNameListResponseBody(const DescribeInvadeEventNameListResponseBody &) = default ;
    DescribeInvadeEventNameListResponseBody(DescribeInvadeEventNameListResponseBody &&) = default ;
    DescribeInvadeEventNameListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEventNameListResponseBody() = default ;
    DescribeInvadeEventNameListResponseBody& operator=(const DescribeInvadeEventNameListResponseBody &) = default ;
    DescribeInvadeEventNameListResponseBody& operator=(DescribeInvadeEventNameListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventNameList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventNameList& obj) { 
        DARABONBA_PTR_TO_JSON(EventKey, eventKey_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
      };
      friend void from_json(const Darabonba::Json& j, EventNameList& obj) { 
        DARABONBA_PTR_FROM_JSON(EventKey, eventKey_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      };
      EventNameList() = default ;
      EventNameList(const EventNameList &) = default ;
      EventNameList(EventNameList &&) = default ;
      EventNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventNameList() = default ;
      EventNameList& operator=(const EventNameList &) = default ;
      EventNameList& operator=(EventNameList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventKey_ == nullptr
        && this->eventName_ == nullptr; };
      // eventKey Field Functions 
      bool hasEventKey() const { return this->eventKey_ != nullptr;};
      void deleteEventKey() { this->eventKey_ = nullptr;};
      inline string getEventKey() const { DARABONBA_PTR_GET_DEFAULT(eventKey_, "") };
      inline EventNameList& setEventKey(string eventKey) { DARABONBA_PTR_SET_VALUE(eventKey_, eventKey) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline EventNameList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    protected:
      shared_ptr<string> eventKey_ {};
      shared_ptr<string> eventName_ {};
    };

    virtual bool empty() const override { return this->eventNameList_ == nullptr
        && this->nameList_ == nullptr && this->requestId_ == nullptr; };
    // eventNameList Field Functions 
    bool hasEventNameList() const { return this->eventNameList_ != nullptr;};
    void deleteEventNameList() { this->eventNameList_ = nullptr;};
    inline const vector<DescribeInvadeEventNameListResponseBody::EventNameList> & getEventNameList() const { DARABONBA_PTR_GET_CONST(eventNameList_, vector<DescribeInvadeEventNameListResponseBody::EventNameList>) };
    inline vector<DescribeInvadeEventNameListResponseBody::EventNameList> getEventNameList() { DARABONBA_PTR_GET(eventNameList_, vector<DescribeInvadeEventNameListResponseBody::EventNameList>) };
    inline DescribeInvadeEventNameListResponseBody& setEventNameList(const vector<DescribeInvadeEventNameListResponseBody::EventNameList> & eventNameList) { DARABONBA_PTR_SET_VALUE(eventNameList_, eventNameList) };
    inline DescribeInvadeEventNameListResponseBody& setEventNameList(vector<DescribeInvadeEventNameListResponseBody::EventNameList> && eventNameList) { DARABONBA_PTR_SET_RVALUE(eventNameList_, eventNameList) };


    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline const vector<string> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
    inline vector<string> getNameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
    inline DescribeInvadeEventNameListResponseBody& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline DescribeInvadeEventNameListResponseBody& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvadeEventNameListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeInvadeEventNameListResponseBody::EventNameList>> eventNameList_ {};
    shared_ptr<vector<string>> nameList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
