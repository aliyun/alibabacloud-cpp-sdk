// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTIMETEMPLATEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTIMETEMPLATEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryTimeTemplateDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTimeTemplateDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTimeTemplateDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryTimeTemplateDetailResponseBody() = default ;
    QueryTimeTemplateDetailResponseBody(const QueryTimeTemplateDetailResponseBody &) = default ;
    QueryTimeTemplateDetailResponseBody(QueryTimeTemplateDetailResponseBody &&) = default ;
    QueryTimeTemplateDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTimeTemplateDetailResponseBody() = default ;
    QueryTimeTemplateDetailResponseBody& operator=(const QueryTimeTemplateDetailResponseBody &) = default ;
    QueryTimeTemplateDetailResponseBody& operator=(QueryTimeTemplateDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AllDay, allDay_);
        DARABONBA_PTR_TO_JSON(Default, default_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TimeSectionList, timeSectionList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AllDay, allDay_);
        DARABONBA_PTR_FROM_JSON(Default, default_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TimeSectionList, timeSectionList_);
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
      class TimeSectionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimeSectionList& obj) { 
          DARABONBA_PTR_TO_JSON(Begin, begin_);
          DARABONBA_PTR_TO_JSON(DayOfWeek, dayOfWeek_);
          DARABONBA_PTR_TO_JSON(End, end_);
        };
        friend void from_json(const Darabonba::Json& j, TimeSectionList& obj) { 
          DARABONBA_PTR_FROM_JSON(Begin, begin_);
          DARABONBA_PTR_FROM_JSON(DayOfWeek, dayOfWeek_);
          DARABONBA_PTR_FROM_JSON(End, end_);
        };
        TimeSectionList() = default ;
        TimeSectionList(const TimeSectionList &) = default ;
        TimeSectionList(TimeSectionList &&) = default ;
        TimeSectionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimeSectionList() = default ;
        TimeSectionList& operator=(const TimeSectionList &) = default ;
        TimeSectionList& operator=(TimeSectionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->begin_ == nullptr
        && this->dayOfWeek_ == nullptr && this->end_ == nullptr; };
        // begin Field Functions 
        bool hasBegin() const { return this->begin_ != nullptr;};
        void deleteBegin() { this->begin_ = nullptr;};
        inline int32_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
        inline TimeSectionList& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


        // dayOfWeek Field Functions 
        bool hasDayOfWeek() const { return this->dayOfWeek_ != nullptr;};
        void deleteDayOfWeek() { this->dayOfWeek_ = nullptr;};
        inline int32_t getDayOfWeek() const { DARABONBA_PTR_GET_DEFAULT(dayOfWeek_, 0) };
        inline TimeSectionList& setDayOfWeek(int32_t dayOfWeek) { DARABONBA_PTR_SET_VALUE(dayOfWeek_, dayOfWeek) };


        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
        inline TimeSectionList& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      protected:
        // The start time of each day, in seconds.
        shared_ptr<int32_t> begin_ {};
        // The day of the week. Valid values: 0 to 6, where 0 indicates Sunday and 6 indicates Saturday.
        shared_ptr<int32_t> dayOfWeek_ {};
        // The end time of each day, in seconds.
        shared_ptr<int32_t> end_ {};
      };

      virtual bool empty() const override { return this->allDay_ == nullptr
        && this->default_ == nullptr && this->name_ == nullptr && this->templateId_ == nullptr && this->timeSectionList_ == nullptr; };
      // allDay Field Functions 
      bool hasAllDay() const { return this->allDay_ != nullptr;};
      void deleteAllDay() { this->allDay_ = nullptr;};
      inline int32_t getAllDay() const { DARABONBA_PTR_GET_DEFAULT(allDay_, 0) };
      inline Data& setAllDay(int32_t allDay) { DARABONBA_PTR_SET_VALUE(allDay_, allDay) };


      // default Field Functions 
      bool hasDefault() const { return this->default_ != nullptr;};
      void deleteDefault() { this->default_ = nullptr;};
      inline int32_t getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, 0) };
      inline Data& setDefault(int32_t _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Data& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // timeSectionList Field Functions 
      bool hasTimeSectionList() const { return this->timeSectionList_ != nullptr;};
      void deleteTimeSectionList() { this->timeSectionList_ = nullptr;};
      inline const vector<Data::TimeSectionList> & getTimeSectionList() const { DARABONBA_PTR_GET_CONST(timeSectionList_, vector<Data::TimeSectionList>) };
      inline vector<Data::TimeSectionList> getTimeSectionList() { DARABONBA_PTR_GET(timeSectionList_, vector<Data::TimeSectionList>) };
      inline Data& setTimeSectionList(const vector<Data::TimeSectionList> & timeSectionList) { DARABONBA_PTR_SET_VALUE(timeSectionList_, timeSectionList) };
      inline Data& setTimeSectionList(vector<Data::TimeSectionList> && timeSectionList) { DARABONBA_PTR_SET_RVALUE(timeSectionList_, timeSectionList) };


    protected:
      // Indicates whether 24/7 recording is enabled:
      // 
      // - **1**: Yes.
      // - **0**: No. For detailed configuration, see the **TimeSectionList** parameter.
      shared_ptr<int32_t> allDay_ {};
      // Indicates whether the template is the default template:
      // 
      // - **1**: Default template.
      // - **0**: Custom template.
      shared_ptr<int32_t> default_ {};
      // The name of the time template.
      shared_ptr<string> name_ {};
      // The ID of the time template.
      shared_ptr<string> templateId_ {};
      // The list of time sections in the time template.
      shared_ptr<vector<Data::TimeSectionList>> timeSectionList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryTimeTemplateDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTimeTemplateDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTimeTemplateDetailResponseBody::Data) };
    inline QueryTimeTemplateDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTimeTemplateDetailResponseBody::Data) };
    inline QueryTimeTemplateDetailResponseBody& setData(const QueryTimeTemplateDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTimeTemplateDetailResponseBody& setData(QueryTimeTemplateDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryTimeTemplateDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTimeTemplateDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryTimeTemplateDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code:
    // 
    // - **200**: The call is successful.
    // - Other values: error codes. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The time template information returned when the call was successful.
    shared_ptr<QueryTimeTemplateDetailResponseBody::Data> data_ {};
    // The error message returned when the call failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
