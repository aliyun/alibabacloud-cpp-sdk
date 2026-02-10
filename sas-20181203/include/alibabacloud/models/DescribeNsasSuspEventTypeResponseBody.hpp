// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENSASSUSPEVENTTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENSASSUSPEVENTTYPERESPONSEBODY_HPP_
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
  class DescribeNsasSuspEventTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNsasSuspEventTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNsasSuspEventTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNsasSuspEventTypeResponseBody() = default ;
    DescribeNsasSuspEventTypeResponseBody(const DescribeNsasSuspEventTypeResponseBody &) = default ;
    DescribeNsasSuspEventTypeResponseBody(DescribeNsasSuspEventTypeResponseBody &&) = default ;
    DescribeNsasSuspEventTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNsasSuspEventTypeResponseBody() = default ;
    DescribeNsasSuspEventTypeResponseBody& operator=(const DescribeNsasSuspEventTypeResponseBody &) = default ;
    DescribeNsasSuspEventTypeResponseBody& operator=(DescribeNsasSuspEventTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventTypes& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SuspEventCount, suspEventCount_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, EventTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SuspEventCount, suspEventCount_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      EventTypes() = default ;
      EventTypes(const EventTypes &) = default ;
      EventTypes(EventTypes &&) = default ;
      EventTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventTypes() = default ;
      EventTypes& operator=(const EventTypes &) = default ;
      EventTypes& operator=(EventTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->suspEventCount_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EventTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // suspEventCount Field Functions 
      bool hasSuspEventCount() const { return this->suspEventCount_ != nullptr;};
      void deleteSuspEventCount() { this->suspEventCount_ = nullptr;};
      inline int32_t getSuspEventCount() const { DARABONBA_PTR_GET_DEFAULT(suspEventCount_, 0) };
      inline EventTypes& setSuspEventCount(int32_t suspEventCount) { DARABONBA_PTR_SET_VALUE(suspEventCount_, suspEventCount) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline EventTypes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The name of the alert type.
      shared_ptr<string> name_ {};
      // The number of assets for which an alert of the type is generated.
      shared_ptr<int32_t> suspEventCount_ {};
      // The alert type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->eventTypes_ == nullptr
        && this->requestId_ == nullptr; };
    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline const vector<DescribeNsasSuspEventTypeResponseBody::EventTypes> & getEventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<DescribeNsasSuspEventTypeResponseBody::EventTypes>) };
    inline vector<DescribeNsasSuspEventTypeResponseBody::EventTypes> getEventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<DescribeNsasSuspEventTypeResponseBody::EventTypes>) };
    inline DescribeNsasSuspEventTypeResponseBody& setEventTypes(const vector<DescribeNsasSuspEventTypeResponseBody::EventTypes> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
    inline DescribeNsasSuspEventTypeResponseBody& setEventTypes(vector<DescribeNsasSuspEventTypeResponseBody::EventTypes> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNsasSuspEventTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about the alert type.
    shared_ptr<vector<DescribeNsasSuspEventTypeResponseBody::EventTypes>> eventTypes_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
