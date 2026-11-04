// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVENTRECORDPLANDEVICEBYDEVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVENTRECORDPLANDEVICEBYDEVICERESPONSEBODY_HPP_
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
  class QueryEventRecordPlanDeviceByDeviceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEventRecordPlanDeviceByDeviceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEventRecordPlanDeviceByDeviceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryEventRecordPlanDeviceByDeviceResponseBody() = default ;
    QueryEventRecordPlanDeviceByDeviceResponseBody(const QueryEventRecordPlanDeviceByDeviceResponseBody &) = default ;
    QueryEventRecordPlanDeviceByDeviceResponseBody(QueryEventRecordPlanDeviceByDeviceResponseBody &&) = default ;
    QueryEventRecordPlanDeviceByDeviceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEventRecordPlanDeviceByDeviceResponseBody() = default ;
    QueryEventRecordPlanDeviceByDeviceResponseBody& operator=(const QueryEventRecordPlanDeviceByDeviceResponseBody &) = default ;
    QueryEventRecordPlanDeviceByDeviceResponseBody& operator=(QueryEventRecordPlanDeviceByDeviceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PlanId, planId_);
        DARABONBA_PTR_TO_JSON(PreRecordDuration, preRecordDuration_);
        DARABONBA_PTR_TO_JSON(RecordDuration, recordDuration_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateInfo, templateInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PlanId, planId_);
        DARABONBA_PTR_FROM_JSON(PreRecordDuration, preRecordDuration_);
        DARABONBA_PTR_FROM_JSON(RecordDuration, recordDuration_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateInfo, templateInfo_);
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
      class TemplateInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TemplateInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AllDay, allDay_);
          DARABONBA_PTR_TO_JSON(Default, default_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TimeSectionList, timeSectionList_);
        };
        friend void from_json(const Darabonba::Json& j, TemplateInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AllDay, allDay_);
          DARABONBA_PTR_FROM_JSON(Default, default_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(TimeSectionList, timeSectionList_);
        };
        TemplateInfo() = default ;
        TemplateInfo(const TemplateInfo &) = default ;
        TemplateInfo(TemplateInfo &&) = default ;
        TemplateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TemplateInfo() = default ;
        TemplateInfo& operator=(const TemplateInfo &) = default ;
        TemplateInfo& operator=(TemplateInfo &&) = default ;
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
          // The start time of each day. Valid values: 0 to 86399. Unit: seconds.
          shared_ptr<int32_t> begin_ {};
          // The day of the week. Valid values: 0 to 6, representing Sunday through Saturday.
          shared_ptr<int32_t> dayOfWeek_ {};
          // The end time of each day. Valid values: 1 to 86399. Unit: seconds.
          shared_ptr<int32_t> end_ {};
        };

        virtual bool empty() const override { return this->allDay_ == nullptr
        && this->default_ == nullptr && this->name_ == nullptr && this->templateId_ == nullptr && this->timeSectionList_ == nullptr; };
        // allDay Field Functions 
        bool hasAllDay() const { return this->allDay_ != nullptr;};
        void deleteAllDay() { this->allDay_ = nullptr;};
        inline int32_t getAllDay() const { DARABONBA_PTR_GET_DEFAULT(allDay_, 0) };
        inline TemplateInfo& setAllDay(int32_t allDay) { DARABONBA_PTR_SET_VALUE(allDay_, allDay) };


        // default Field Functions 
        bool hasDefault() const { return this->default_ != nullptr;};
        void deleteDefault() { this->default_ = nullptr;};
        inline int32_t getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, 0) };
        inline TemplateInfo& setDefault(int32_t _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TemplateInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline TemplateInfo& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // timeSectionList Field Functions 
        bool hasTimeSectionList() const { return this->timeSectionList_ != nullptr;};
        void deleteTimeSectionList() { this->timeSectionList_ = nullptr;};
        inline const vector<TemplateInfo::TimeSectionList> & getTimeSectionList() const { DARABONBA_PTR_GET_CONST(timeSectionList_, vector<TemplateInfo::TimeSectionList>) };
        inline vector<TemplateInfo::TimeSectionList> getTimeSectionList() { DARABONBA_PTR_GET(timeSectionList_, vector<TemplateInfo::TimeSectionList>) };
        inline TemplateInfo& setTimeSectionList(const vector<TemplateInfo::TimeSectionList> & timeSectionList) { DARABONBA_PTR_SET_VALUE(timeSectionList_, timeSectionList) };
        inline TemplateInfo& setTimeSectionList(vector<TemplateInfo::TimeSectionList> && timeSectionList) { DARABONBA_PTR_SET_RVALUE(timeSectionList_, timeSectionList) };


      protected:
        // Indicates whether 24/7 recording is enabled. Valid values:
        // 
        // - **1**: enabled.
        // - **0**: disabled. For detailed configuration, see the **TimeSectionList** parameter.
        shared_ptr<int32_t> allDay_ {};
        // The templatetype of the time template. Valid values:
        // - **1**: default template
        // - **0**: custom template
        shared_ptr<int32_t> default_ {};
        // The name of the time template.
        shared_ptr<string> name_ {};
        // The ID of the time template.
        shared_ptr<string> templateId_ {};
        // The list of time templates.
        shared_ptr<vector<TemplateInfo::TimeSectionList>> timeSectionList_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->planId_ == nullptr && this->preRecordDuration_ == nullptr && this->recordDuration_ == nullptr && this->templateId_ == nullptr && this->templateInfo_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // planId Field Functions 
      bool hasPlanId() const { return this->planId_ != nullptr;};
      void deletePlanId() { this->planId_ = nullptr;};
      inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
      inline Data& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


      // preRecordDuration Field Functions 
      bool hasPreRecordDuration() const { return this->preRecordDuration_ != nullptr;};
      void deletePreRecordDuration() { this->preRecordDuration_ = nullptr;};
      inline int32_t getPreRecordDuration() const { DARABONBA_PTR_GET_DEFAULT(preRecordDuration_, 0) };
      inline Data& setPreRecordDuration(int32_t preRecordDuration) { DARABONBA_PTR_SET_VALUE(preRecordDuration_, preRecordDuration) };


      // recordDuration Field Functions 
      bool hasRecordDuration() const { return this->recordDuration_ != nullptr;};
      void deleteRecordDuration() { this->recordDuration_ = nullptr;};
      inline int32_t getRecordDuration() const { DARABONBA_PTR_GET_DEFAULT(recordDuration_, 0) };
      inline Data& setRecordDuration(int32_t recordDuration) { DARABONBA_PTR_SET_VALUE(recordDuration_, recordDuration) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Data& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateInfo Field Functions 
      bool hasTemplateInfo() const { return this->templateInfo_ != nullptr;};
      void deleteTemplateInfo() { this->templateInfo_ = nullptr;};
      inline const Data::TemplateInfo & getTemplateInfo() const { DARABONBA_PTR_GET_CONST(templateInfo_, Data::TemplateInfo) };
      inline Data::TemplateInfo getTemplateInfo() { DARABONBA_PTR_GET(templateInfo_, Data::TemplateInfo) };
      inline Data& setTemplateInfo(const Data::TemplateInfo & templateInfo) { DARABONBA_PTR_SET_VALUE(templateInfo_, templateInfo) };
      inline Data& setTemplateInfo(Data::TemplateInfo && templateInfo) { DARABONBA_PTR_SET_RVALUE(templateInfo_, templateInfo) };


    protected:
      // The name of the intelligent alert event recording.
      shared_ptr<string> name_ {};
      // The ID of the intelligent alert event recording plan.
      shared_ptr<string> planId_ {};
      // The pre-recording duration, in seconds.
      shared_ptr<int32_t> preRecordDuration_ {};
      // The recording duration, including the pre-recording duration, in seconds.
      shared_ptr<int32_t> recordDuration_ {};
      // The ID of the time template.
      shared_ptr<string> templateId_ {};
      // The details of the time template.
      shared_ptr<Data::TemplateInfo> templateInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryEventRecordPlanDeviceByDeviceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryEventRecordPlanDeviceByDeviceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryEventRecordPlanDeviceByDeviceResponseBody::Data) };
    inline QueryEventRecordPlanDeviceByDeviceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryEventRecordPlanDeviceByDeviceResponseBody::Data) };
    inline QueryEventRecordPlanDeviceByDeviceResponseBody& setData(const QueryEventRecordPlanDeviceByDeviceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryEventRecordPlanDeviceByDeviceResponseBody& setData(QueryEventRecordPlanDeviceByDeviceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryEventRecordPlanDeviceByDeviceResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEventRecordPlanDeviceByDeviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryEventRecordPlanDeviceByDeviceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // - **200**: success.
    // - Other values: error codes. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The query result.
    shared_ptr<QueryEventRecordPlanDeviceByDeviceResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
