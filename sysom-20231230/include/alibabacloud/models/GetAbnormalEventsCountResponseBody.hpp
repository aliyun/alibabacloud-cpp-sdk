// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETABNORMALEVENTSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETABNORMALEVENTSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAbnormalEventsCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAbnormalEventsCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, GetAbnormalEventsCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    GetAbnormalEventsCountResponseBody() = default ;
    GetAbnormalEventsCountResponseBody(const GetAbnormalEventsCountResponseBody &) = default ;
    GetAbnormalEventsCountResponseBody(GetAbnormalEventsCountResponseBody &&) = default ;
    GetAbnormalEventsCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAbnormalEventsCountResponseBody() = default ;
    GetAbnormalEventsCountResponseBody& operator=(const GetAbnormalEventsCountResponseBody &) = default ;
    GetAbnormalEventsCountResponseBody& operator=(GetAbnormalEventsCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(eventList, eventList_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(eventList, eventList_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(value, value_);
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
      virtual bool empty() const override { return this->eventList_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // eventList Field Functions 
      bool hasEventList() const { return this->eventList_ != nullptr;};
      void deleteEventList() { this->eventList_ = nullptr;};
      inline const vector<string> & getEventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<string>) };
      inline vector<string> getEventList() { DARABONBA_PTR_GET(eventList_, vector<string>) };
      inline Data& setEventList(const vector<string> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
      inline Data& setEventList(vector<string> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
      inline Data& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<vector<string>> eventList_ {};
      shared_ptr<string> type_ {};
      shared_ptr<int64_t> value_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAbnormalEventsCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetAbnormalEventsCountResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetAbnormalEventsCountResponseBody::Data>) };
    inline vector<GetAbnormalEventsCountResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetAbnormalEventsCountResponseBody::Data>) };
    inline GetAbnormalEventsCountResponseBody& setData(const vector<GetAbnormalEventsCountResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAbnormalEventsCountResponseBody& setData(vector<GetAbnormalEventsCountResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAbnormalEventsCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetAbnormalEventsCountResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
