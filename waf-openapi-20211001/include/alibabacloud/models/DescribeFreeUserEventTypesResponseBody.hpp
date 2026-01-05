// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFreeUserEventTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFreeUserEventTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFreeUserEventTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFreeUserEventTypesResponseBody() = default ;
    DescribeFreeUserEventTypesResponseBody(const DescribeFreeUserEventTypesResponseBody &) = default ;
    DescribeFreeUserEventTypesResponseBody(DescribeFreeUserEventTypesResponseBody &&) = default ;
    DescribeFreeUserEventTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFreeUserEventTypesResponseBody() = default ;
    DescribeFreeUserEventTypesResponseBody& operator=(const DescribeFreeUserEventTypesResponseBody &) = default ;
    DescribeFreeUserEventTypesResponseBody& operator=(DescribeFreeUserEventTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EventNum, eventNum_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EventNum, eventNum_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
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
      virtual bool empty() const override { return this->eventNum_ == nullptr
        && this->eventType_ == nullptr; };
      // eventNum Field Functions 
      bool hasEventNum() const { return this->eventNum_ != nullptr;};
      void deleteEventNum() { this->eventNum_ = nullptr;};
      inline string getEventNum() const { DARABONBA_PTR_GET_DEFAULT(eventNum_, "") };
      inline Data& setEventNum(string eventNum) { DARABONBA_PTR_SET_VALUE(eventNum_, eventNum) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Data& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    protected:
      // The number of security events.
      shared_ptr<string> eventNum_ {};
      // The type of the security event.
      shared_ptr<string> eventType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeFreeUserEventTypesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeFreeUserEventTypesResponseBody::Data>) };
    inline vector<DescribeFreeUserEventTypesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeFreeUserEventTypesResponseBody::Data>) };
    inline DescribeFreeUserEventTypesResponseBody& setData(const vector<DescribeFreeUserEventTypesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeFreeUserEventTypesResponseBody& setData(vector<DescribeFreeUserEventTypesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFreeUserEventTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The types of security events on which basic detection is performed.
    shared_ptr<vector<DescribeFreeUserEventTypesResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
