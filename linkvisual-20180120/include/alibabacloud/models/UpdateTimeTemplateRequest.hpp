// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETIMETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETIMETEMPLATEREQUEST_HPP_
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
  class UpdateTimeTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTimeTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllDay, allDay_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TimeSections, timeSections_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTimeTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllDay, allDay_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TimeSections, timeSections_);
    };
    UpdateTimeTemplateRequest() = default ;
    UpdateTimeTemplateRequest(const UpdateTimeTemplateRequest &) = default ;
    UpdateTimeTemplateRequest(UpdateTimeTemplateRequest &&) = default ;
    UpdateTimeTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTimeTemplateRequest() = default ;
    UpdateTimeTemplateRequest& operator=(const UpdateTimeTemplateRequest &) = default ;
    UpdateTimeTemplateRequest& operator=(UpdateTimeTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeSections : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeSections& obj) { 
        DARABONBA_PTR_TO_JSON(Begin, begin_);
        DARABONBA_PTR_TO_JSON(DayOfWeek, dayOfWeek_);
        DARABONBA_PTR_TO_JSON(End, end_);
      };
      friend void from_json(const Darabonba::Json& j, TimeSections& obj) { 
        DARABONBA_PTR_FROM_JSON(Begin, begin_);
        DARABONBA_PTR_FROM_JSON(DayOfWeek, dayOfWeek_);
        DARABONBA_PTR_FROM_JSON(End, end_);
      };
      TimeSections() = default ;
      TimeSections(const TimeSections &) = default ;
      TimeSections(TimeSections &&) = default ;
      TimeSections(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeSections() = default ;
      TimeSections& operator=(const TimeSections &) = default ;
      TimeSections& operator=(TimeSections &&) = default ;
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
      inline TimeSections& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


      // dayOfWeek Field Functions 
      bool hasDayOfWeek() const { return this->dayOfWeek_ != nullptr;};
      void deleteDayOfWeek() { this->dayOfWeek_ = nullptr;};
      inline int32_t getDayOfWeek() const { DARABONBA_PTR_GET_DEFAULT(dayOfWeek_, 0) };
      inline TimeSections& setDayOfWeek(int32_t dayOfWeek) { DARABONBA_PTR_SET_VALUE(dayOfWeek_, dayOfWeek) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
      inline TimeSections& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    protected:
      // The start time of the day. Valid values: 0 to 86399. Unit: seconds.
      shared_ptr<int32_t> begin_ {};
      // The day of the week. Valid values: 0 to 6, which indicate Sunday to Saturday.
      shared_ptr<int32_t> dayOfWeek_ {};
      // The end time of the day. Valid values: 1 to 86399. Unit: seconds.
      shared_ptr<int32_t> end_ {};
    };

    virtual bool empty() const override { return this->allDay_ == nullptr
        && this->name_ == nullptr && this->templateId_ == nullptr && this->timeSections_ == nullptr; };
    // allDay Field Functions 
    bool hasAllDay() const { return this->allDay_ != nullptr;};
    void deleteAllDay() { this->allDay_ = nullptr;};
    inline int32_t getAllDay() const { DARABONBA_PTR_GET_DEFAULT(allDay_, 0) };
    inline UpdateTimeTemplateRequest& setAllDay(int32_t allDay) { DARABONBA_PTR_SET_VALUE(allDay_, allDay) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTimeTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateTimeTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // timeSections Field Functions 
    bool hasTimeSections() const { return this->timeSections_ != nullptr;};
    void deleteTimeSections() { this->timeSections_ = nullptr;};
    inline const vector<UpdateTimeTemplateRequest::TimeSections> & getTimeSections() const { DARABONBA_PTR_GET_CONST(timeSections_, vector<UpdateTimeTemplateRequest::TimeSections>) };
    inline vector<UpdateTimeTemplateRequest::TimeSections> getTimeSections() { DARABONBA_PTR_GET(timeSections_, vector<UpdateTimeTemplateRequest::TimeSections>) };
    inline UpdateTimeTemplateRequest& setTimeSections(const vector<UpdateTimeTemplateRequest::TimeSections> & timeSections) { DARABONBA_PTR_SET_VALUE(timeSections_, timeSections) };
    inline UpdateTimeTemplateRequest& setTimeSections(vector<UpdateTimeTemplateRequest::TimeSections> && timeSections) { DARABONBA_PTR_SET_RVALUE(timeSections_, timeSections) };


  protected:
    // Specifies whether 24/7 recording is enabled.
    // 
    // Valid values:
    // - 1: yes.
    // - 0: no. For detailed configurations, see the TimeSections.N.DayOfWeek, TimeSections.N.Begin, and TimeSections.N.End parameters.
    // 
    // This parameter is required.
    shared_ptr<int32_t> allDay_ {};
    // The name of the time template.
    // 
    // The name must be less than 48 characters in length and can contain letters, digits, and the following special characters: hyphens (-), underscores (_), at signs (@), periods (.), and colons (:).
    shared_ptr<string> name_ {};
    // The ID of the time template. You can call the [QueryTimeTemplate](https://help.aliyun.com/document_detail/107890.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // The list of time sections.
    shared_ptr<vector<UpdateTimeTemplateRequest::TimeSections>> timeSections_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
