// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeCustomEventCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEventCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CustomEventCounts, customEventCounts_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEventCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CustomEventCounts, customEventCounts_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCustomEventCountResponseBody() = default ;
    DescribeCustomEventCountResponseBody(const DescribeCustomEventCountResponseBody &) = default ;
    DescribeCustomEventCountResponseBody(DescribeCustomEventCountResponseBody &&) = default ;
    DescribeCustomEventCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEventCountResponseBody() = default ;
    DescribeCustomEventCountResponseBody& operator=(const DescribeCustomEventCountResponseBody &) = default ;
    DescribeCustomEventCountResponseBody& operator=(DescribeCustomEventCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomEventCounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomEventCounts& obj) { 
        DARABONBA_PTR_TO_JSON(CustomEventCount, customEventCount_);
      };
      friend void from_json(const Darabonba::Json& j, CustomEventCounts& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomEventCount, customEventCount_);
      };
      CustomEventCounts() = default ;
      CustomEventCounts(const CustomEventCounts &) = default ;
      CustomEventCounts(CustomEventCounts &&) = default ;
      CustomEventCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomEventCounts() = default ;
      CustomEventCounts& operator=(const CustomEventCounts &) = default ;
      CustomEventCounts& operator=(CustomEventCounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomEventCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomEventCount& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Num, num_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, CustomEventCount& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Num, num_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        CustomEventCount() = default ;
        CustomEventCount(const CustomEventCount &) = default ;
        CustomEventCount(CustomEventCount &&) = default ;
        CustomEventCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomEventCount() = default ;
        CustomEventCount& operator=(const CustomEventCount &) = default ;
        CustomEventCount& operator=(CustomEventCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->num_ == nullptr && this->time_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CustomEventCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // num Field Functions 
        bool hasNum() const { return this->num_ != nullptr;};
        void deleteNum() { this->num_ = nullptr;};
        inline int32_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
        inline CustomEventCount& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
        inline CustomEventCount& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        // The event name.
        shared_ptr<string> name_ {};
        // The number of times that the custom event occurred.
        shared_ptr<int32_t> num_ {};
        // The time when the event occurred.
        // 
        // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> time_ {};
      };

      virtual bool empty() const override { return this->customEventCount_ == nullptr; };
      // customEventCount Field Functions 
      bool hasCustomEventCount() const { return this->customEventCount_ != nullptr;};
      void deleteCustomEventCount() { this->customEventCount_ = nullptr;};
      inline const vector<CustomEventCounts::CustomEventCount> & getCustomEventCount() const { DARABONBA_PTR_GET_CONST(customEventCount_, vector<CustomEventCounts::CustomEventCount>) };
      inline vector<CustomEventCounts::CustomEventCount> getCustomEventCount() { DARABONBA_PTR_GET(customEventCount_, vector<CustomEventCounts::CustomEventCount>) };
      inline CustomEventCounts& setCustomEventCount(const vector<CustomEventCounts::CustomEventCount> & customEventCount) { DARABONBA_PTR_SET_VALUE(customEventCount_, customEventCount) };
      inline CustomEventCounts& setCustomEventCount(vector<CustomEventCounts::CustomEventCount> && customEventCount) { DARABONBA_PTR_SET_RVALUE(customEventCount_, customEventCount) };


    protected:
      shared_ptr<vector<CustomEventCounts::CustomEventCount>> customEventCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->customEventCounts_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCustomEventCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // customEventCounts Field Functions 
    bool hasCustomEventCounts() const { return this->customEventCounts_ != nullptr;};
    void deleteCustomEventCounts() { this->customEventCounts_ = nullptr;};
    inline const DescribeCustomEventCountResponseBody::CustomEventCounts & getCustomEventCounts() const { DARABONBA_PTR_GET_CONST(customEventCounts_, DescribeCustomEventCountResponseBody::CustomEventCounts) };
    inline DescribeCustomEventCountResponseBody::CustomEventCounts getCustomEventCounts() { DARABONBA_PTR_GET(customEventCounts_, DescribeCustomEventCountResponseBody::CustomEventCounts) };
    inline DescribeCustomEventCountResponseBody& setCustomEventCounts(const DescribeCustomEventCountResponseBody::CustomEventCounts & customEventCounts) { DARABONBA_PTR_SET_VALUE(customEventCounts_, customEventCounts) };
    inline DescribeCustomEventCountResponseBody& setCustomEventCounts(DescribeCustomEventCountResponseBody::CustomEventCounts && customEventCounts) { DARABONBA_PTR_SET_RVALUE(customEventCounts_, customEventCounts) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCustomEventCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomEventCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCustomEventCountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The details of the custom event.
    shared_ptr<DescribeCustomEventCountResponseBody::CustomEventCounts> customEventCounts_ {};
    // The returned message. If the request was successful, a success message is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
