// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetOnCallSchedulesDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnCallSchedulesDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnCallSchedulesDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOnCallSchedulesDetailResponseBody() = default ;
    GetOnCallSchedulesDetailResponseBody(const GetOnCallSchedulesDetailResponseBody &) = default ;
    GetOnCallSchedulesDetailResponseBody(GetOnCallSchedulesDetailResponseBody &&) = default ;
    GetOnCallSchedulesDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnCallSchedulesDetailResponseBody() = default ;
    GetOnCallSchedulesDetailResponseBody& operator=(const GetOnCallSchedulesDetailResponseBody &) = default ;
    GetOnCallSchedulesDetailResponseBody& operator=(GetOnCallSchedulesDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlertRobotId, alertRobotId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RenderedFinnalEntries, renderedFinnalEntries_);
        DARABONBA_PTR_TO_JSON(RenderedLayerEntries, renderedLayerEntries_);
        DARABONBA_PTR_TO_JSON(RenderedSubstitudeEntries, renderedSubstitudeEntries_);
        DARABONBA_PTR_TO_JSON(ScheduleLayers, scheduleLayers_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertRobotId, alertRobotId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RenderedFinnalEntries, renderedFinnalEntries_);
        DARABONBA_PTR_FROM_JSON(RenderedLayerEntries, renderedLayerEntries_);
        DARABONBA_PTR_FROM_JSON(RenderedSubstitudeEntries, renderedSubstitudeEntries_);
        DARABONBA_PTR_FROM_JSON(ScheduleLayers, scheduleLayers_);
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
      class ScheduleLayers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduleLayers& obj) { 
          DARABONBA_PTR_TO_JSON(ContactIds, contactIds_);
          DARABONBA_PTR_TO_JSON(Restrictions, restrictions_);
          DARABONBA_PTR_TO_JSON(RotationType, rotationType_);
          DARABONBA_PTR_TO_JSON(ShiftLength, shiftLength_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduleLayers& obj) { 
          DARABONBA_PTR_FROM_JSON(ContactIds, contactIds_);
          DARABONBA_PTR_FROM_JSON(Restrictions, restrictions_);
          DARABONBA_PTR_FROM_JSON(RotationType, rotationType_);
          DARABONBA_PTR_FROM_JSON(ShiftLength, shiftLength_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        ScheduleLayers() = default ;
        ScheduleLayers(const ScheduleLayers &) = default ;
        ScheduleLayers(ScheduleLayers &&) = default ;
        ScheduleLayers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduleLayers() = default ;
        ScheduleLayers& operator=(const ScheduleLayers &) = default ;
        ScheduleLayers& operator=(ScheduleLayers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Restrictions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Restrictions& obj) { 
            DARABONBA_PTR_TO_JSON(EndTimeOfDay, endTimeOfDay_);
            DARABONBA_PTR_TO_JSON(RestrictionType, restrictionType_);
            DARABONBA_PTR_TO_JSON(StartTimeOfDay, startTimeOfDay_);
          };
          friend void from_json(const Darabonba::Json& j, Restrictions& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTimeOfDay, endTimeOfDay_);
            DARABONBA_PTR_FROM_JSON(RestrictionType, restrictionType_);
            DARABONBA_PTR_FROM_JSON(StartTimeOfDay, startTimeOfDay_);
          };
          Restrictions() = default ;
          Restrictions(const Restrictions &) = default ;
          Restrictions(Restrictions &&) = default ;
          Restrictions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Restrictions() = default ;
          Restrictions& operator=(const Restrictions &) = default ;
          Restrictions& operator=(Restrictions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTimeOfDay_ == nullptr
        && this->restrictionType_ == nullptr && this->startTimeOfDay_ == nullptr; };
          // endTimeOfDay Field Functions 
          bool hasEndTimeOfDay() const { return this->endTimeOfDay_ != nullptr;};
          void deleteEndTimeOfDay() { this->endTimeOfDay_ = nullptr;};
          inline string getEndTimeOfDay() const { DARABONBA_PTR_GET_DEFAULT(endTimeOfDay_, "") };
          inline Restrictions& setEndTimeOfDay(string endTimeOfDay) { DARABONBA_PTR_SET_VALUE(endTimeOfDay_, endTimeOfDay) };


          // restrictionType Field Functions 
          bool hasRestrictionType() const { return this->restrictionType_ != nullptr;};
          void deleteRestrictionType() { this->restrictionType_ = nullptr;};
          inline string getRestrictionType() const { DARABONBA_PTR_GET_DEFAULT(restrictionType_, "") };
          inline Restrictions& setRestrictionType(string restrictionType) { DARABONBA_PTR_SET_VALUE(restrictionType_, restrictionType) };


          // startTimeOfDay Field Functions 
          bool hasStartTimeOfDay() const { return this->startTimeOfDay_ != nullptr;};
          void deleteStartTimeOfDay() { this->startTimeOfDay_ = nullptr;};
          inline string getStartTimeOfDay() const { DARABONBA_PTR_GET_DEFAULT(startTimeOfDay_, "") };
          inline Restrictions& setStartTimeOfDay(string startTimeOfDay) { DARABONBA_PTR_SET_VALUE(startTimeOfDay_, startTimeOfDay) };


        protected:
          // The end time of the shift per day.
          shared_ptr<string> endTimeOfDay_ {};
          // The type of the limit. Valid values:
          // 
          // *   daily_restriction
          // *   weekly_restriction
          shared_ptr<string> restrictionType_ {};
          // The start time of the shift per day.
          shared_ptr<string> startTimeOfDay_ {};
        };

        virtual bool empty() const override { return this->contactIds_ == nullptr
        && this->restrictions_ == nullptr && this->rotationType_ == nullptr && this->shiftLength_ == nullptr && this->startTime_ == nullptr; };
        // contactIds Field Functions 
        bool hasContactIds() const { return this->contactIds_ != nullptr;};
        void deleteContactIds() { this->contactIds_ = nullptr;};
        inline const vector<int64_t> & getContactIds() const { DARABONBA_PTR_GET_CONST(contactIds_, vector<int64_t>) };
        inline vector<int64_t> getContactIds() { DARABONBA_PTR_GET(contactIds_, vector<int64_t>) };
        inline ScheduleLayers& setContactIds(const vector<int64_t> & contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };
        inline ScheduleLayers& setContactIds(vector<int64_t> && contactIds) { DARABONBA_PTR_SET_RVALUE(contactIds_, contactIds) };


        // restrictions Field Functions 
        bool hasRestrictions() const { return this->restrictions_ != nullptr;};
        void deleteRestrictions() { this->restrictions_ = nullptr;};
        inline const vector<ScheduleLayers::Restrictions> & getRestrictions() const { DARABONBA_PTR_GET_CONST(restrictions_, vector<ScheduleLayers::Restrictions>) };
        inline vector<ScheduleLayers::Restrictions> getRestrictions() { DARABONBA_PTR_GET(restrictions_, vector<ScheduleLayers::Restrictions>) };
        inline ScheduleLayers& setRestrictions(const vector<ScheduleLayers::Restrictions> & restrictions) { DARABONBA_PTR_SET_VALUE(restrictions_, restrictions) };
        inline ScheduleLayers& setRestrictions(vector<ScheduleLayers::Restrictions> && restrictions) { DARABONBA_PTR_SET_RVALUE(restrictions_, restrictions) };


        // rotationType Field Functions 
        bool hasRotationType() const { return this->rotationType_ != nullptr;};
        void deleteRotationType() { this->rotationType_ = nullptr;};
        inline string getRotationType() const { DARABONBA_PTR_GET_DEFAULT(rotationType_, "") };
        inline ScheduleLayers& setRotationType(string rotationType) { DARABONBA_PTR_SET_VALUE(rotationType_, rotationType) };


        // shiftLength Field Functions 
        bool hasShiftLength() const { return this->shiftLength_ != nullptr;};
        void deleteShiftLength() { this->shiftLength_ = nullptr;};
        inline int64_t getShiftLength() const { DARABONBA_PTR_GET_DEFAULT(shiftLength_, 0L) };
        inline ScheduleLayers& setShiftLength(int64_t shiftLength) { DARABONBA_PTR_SET_VALUE(shiftLength_, shiftLength) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline ScheduleLayers& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The ID list of users on duty.
        shared_ptr<vector<int64_t>> contactIds_ {};
        // The limit on the time of the shift.
        shared_ptr<vector<ScheduleLayers::Restrictions>> restrictions_ {};
        // The type of the shift. Valid values:
        // 
        // *   DAY
        // *   WEEK
        // *   CUSTOM
        shared_ptr<string> rotationType_ {};
        // The shift cycle. Unit: hours.
        shared_ptr<int64_t> shiftLength_ {};
        // The date on which the shift change took effect.
        shared_ptr<string> startTime_ {};
      };

      class RenderedSubstitudeEntries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RenderedSubstitudeEntries& obj) { 
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(SimpleContact, simpleContact_);
          DARABONBA_PTR_TO_JSON(Start, start_);
        };
        friend void from_json(const Darabonba::Json& j, RenderedSubstitudeEntries& obj) { 
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(SimpleContact, simpleContact_);
          DARABONBA_PTR_FROM_JSON(Start, start_);
        };
        RenderedSubstitudeEntries() = default ;
        RenderedSubstitudeEntries(const RenderedSubstitudeEntries &) = default ;
        RenderedSubstitudeEntries(RenderedSubstitudeEntries &&) = default ;
        RenderedSubstitudeEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RenderedSubstitudeEntries() = default ;
        RenderedSubstitudeEntries& operator=(const RenderedSubstitudeEntries &) = default ;
        RenderedSubstitudeEntries& operator=(RenderedSubstitudeEntries &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SimpleContact : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SimpleContact& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, SimpleContact& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          SimpleContact() = default ;
          SimpleContact(const SimpleContact &) = default ;
          SimpleContact(SimpleContact &&) = default ;
          SimpleContact(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SimpleContact() = default ;
          SimpleContact& operator=(const SimpleContact &) = default ;
          SimpleContact& operator=(SimpleContact &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline SimpleContact& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SimpleContact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the substitute.
          shared_ptr<int64_t> id_ {};
          // The name of the substitute.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->end_ == nullptr
        && this->simpleContact_ == nullptr && this->start_ == nullptr; };
        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
        inline RenderedSubstitudeEntries& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // simpleContact Field Functions 
        bool hasSimpleContact() const { return this->simpleContact_ != nullptr;};
        void deleteSimpleContact() { this->simpleContact_ = nullptr;};
        inline const RenderedSubstitudeEntries::SimpleContact & getSimpleContact() const { DARABONBA_PTR_GET_CONST(simpleContact_, RenderedSubstitudeEntries::SimpleContact) };
        inline RenderedSubstitudeEntries::SimpleContact getSimpleContact() { DARABONBA_PTR_GET(simpleContact_, RenderedSubstitudeEntries::SimpleContact) };
        inline RenderedSubstitudeEntries& setSimpleContact(const RenderedSubstitudeEntries::SimpleContact & simpleContact) { DARABONBA_PTR_SET_VALUE(simpleContact_, simpleContact) };
        inline RenderedSubstitudeEntries& setSimpleContact(RenderedSubstitudeEntries::SimpleContact && simpleContact) { DARABONBA_PTR_SET_RVALUE(simpleContact_, simpleContact) };


        // start Field Functions 
        bool hasStart() const { return this->start_ != nullptr;};
        void deleteStart() { this->start_ = nullptr;};
        inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
        inline RenderedSubstitudeEntries& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


      protected:
        // The date on which the substitute was supposed to complete shift work.
        shared_ptr<string> end_ {};
        // The information about the substitute.
        shared_ptr<RenderedSubstitudeEntries::SimpleContact> simpleContact_ {};
        // The date from which the substitute was supposed to start shift work.
        shared_ptr<string> start_ {};
      };

      class RenderedFinnalEntries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RenderedFinnalEntries& obj) { 
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(SimpleContact, simpleContact_);
          DARABONBA_PTR_TO_JSON(Start, start_);
        };
        friend void from_json(const Darabonba::Json& j, RenderedFinnalEntries& obj) { 
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(SimpleContact, simpleContact_);
          DARABONBA_PTR_FROM_JSON(Start, start_);
        };
        RenderedFinnalEntries() = default ;
        RenderedFinnalEntries(const RenderedFinnalEntries &) = default ;
        RenderedFinnalEntries(RenderedFinnalEntries &&) = default ;
        RenderedFinnalEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RenderedFinnalEntries() = default ;
        RenderedFinnalEntries& operator=(const RenderedFinnalEntries &) = default ;
        RenderedFinnalEntries& operator=(RenderedFinnalEntries &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SimpleContact : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SimpleContact& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, SimpleContact& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          SimpleContact() = default ;
          SimpleContact(const SimpleContact &) = default ;
          SimpleContact(SimpleContact &&) = default ;
          SimpleContact(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SimpleContact() = default ;
          SimpleContact& operator=(const SimpleContact &) = default ;
          SimpleContact& operator=(SimpleContact &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline SimpleContact& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SimpleContact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the user on duty.
          shared_ptr<int64_t> id_ {};
          // The name of the user on duty.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->end_ == nullptr
        && this->simpleContact_ == nullptr && this->start_ == nullptr; };
        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
        inline RenderedFinnalEntries& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // simpleContact Field Functions 
        bool hasSimpleContact() const { return this->simpleContact_ != nullptr;};
        void deleteSimpleContact() { this->simpleContact_ = nullptr;};
        inline const RenderedFinnalEntries::SimpleContact & getSimpleContact() const { DARABONBA_PTR_GET_CONST(simpleContact_, RenderedFinnalEntries::SimpleContact) };
        inline RenderedFinnalEntries::SimpleContact getSimpleContact() { DARABONBA_PTR_GET(simpleContact_, RenderedFinnalEntries::SimpleContact) };
        inline RenderedFinnalEntries& setSimpleContact(const RenderedFinnalEntries::SimpleContact & simpleContact) { DARABONBA_PTR_SET_VALUE(simpleContact_, simpleContact) };
        inline RenderedFinnalEntries& setSimpleContact(RenderedFinnalEntries::SimpleContact && simpleContact) { DARABONBA_PTR_SET_RVALUE(simpleContact_, simpleContact) };


        // start Field Functions 
        bool hasStart() const { return this->start_ != nullptr;};
        void deleteStart() { this->start_ = nullptr;};
        inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
        inline RenderedFinnalEntries& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


      protected:
        // The date on which the user completed shift work.
        shared_ptr<string> end_ {};
        // The information about the user on duty.
        shared_ptr<RenderedFinnalEntries::SimpleContact> simpleContact_ {};
        // The date from which the user started shift work.
        shared_ptr<string> start_ {};
      };

      virtual bool empty() const override { return this->alertRobotId_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->renderedFinnalEntries_ == nullptr && this->renderedLayerEntries_ == nullptr
        && this->renderedSubstitudeEntries_ == nullptr && this->scheduleLayers_ == nullptr; };
      // alertRobotId Field Functions 
      bool hasAlertRobotId() const { return this->alertRobotId_ != nullptr;};
      void deleteAlertRobotId() { this->alertRobotId_ = nullptr;};
      inline int64_t getAlertRobotId() const { DARABONBA_PTR_GET_DEFAULT(alertRobotId_, 0L) };
      inline Data& setAlertRobotId(int64_t alertRobotId) { DARABONBA_PTR_SET_VALUE(alertRobotId_, alertRobotId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // renderedFinnalEntries Field Functions 
      bool hasRenderedFinnalEntries() const { return this->renderedFinnalEntries_ != nullptr;};
      void deleteRenderedFinnalEntries() { this->renderedFinnalEntries_ = nullptr;};
      inline const vector<Data::RenderedFinnalEntries> & getRenderedFinnalEntries() const { DARABONBA_PTR_GET_CONST(renderedFinnalEntries_, vector<Data::RenderedFinnalEntries>) };
      inline vector<Data::RenderedFinnalEntries> getRenderedFinnalEntries() { DARABONBA_PTR_GET(renderedFinnalEntries_, vector<Data::RenderedFinnalEntries>) };
      inline Data& setRenderedFinnalEntries(const vector<Data::RenderedFinnalEntries> & renderedFinnalEntries) { DARABONBA_PTR_SET_VALUE(renderedFinnalEntries_, renderedFinnalEntries) };
      inline Data& setRenderedFinnalEntries(vector<Data::RenderedFinnalEntries> && renderedFinnalEntries) { DARABONBA_PTR_SET_RVALUE(renderedFinnalEntries_, renderedFinnalEntries) };


      // renderedLayerEntries Field Functions 
      bool hasRenderedLayerEntries() const { return this->renderedLayerEntries_ != nullptr;};
      void deleteRenderedLayerEntries() { this->renderedLayerEntries_ = nullptr;};
      inline const vector<vector<Data::RenderedLayerEntries>> & getRenderedLayerEntries() const { DARABONBA_PTR_GET_CONST(renderedLayerEntries_, vector<vector<Data::RenderedLayerEntries>>) };
      inline vector<vector<Data::RenderedLayerEntries>> getRenderedLayerEntries() { DARABONBA_PTR_GET(renderedLayerEntries_, vector<vector<Data::RenderedLayerEntries>>) };
      inline Data& setRenderedLayerEntries(const vector<vector<Data::RenderedLayerEntries>> & renderedLayerEntries) { DARABONBA_PTR_SET_VALUE(renderedLayerEntries_, renderedLayerEntries) };
      inline Data& setRenderedLayerEntries(vector<vector<Data::RenderedLayerEntries>> && renderedLayerEntries) { DARABONBA_PTR_SET_RVALUE(renderedLayerEntries_, renderedLayerEntries) };


      // renderedSubstitudeEntries Field Functions 
      bool hasRenderedSubstitudeEntries() const { return this->renderedSubstitudeEntries_ != nullptr;};
      void deleteRenderedSubstitudeEntries() { this->renderedSubstitudeEntries_ = nullptr;};
      inline const vector<Data::RenderedSubstitudeEntries> & getRenderedSubstitudeEntries() const { DARABONBA_PTR_GET_CONST(renderedSubstitudeEntries_, vector<Data::RenderedSubstitudeEntries>) };
      inline vector<Data::RenderedSubstitudeEntries> getRenderedSubstitudeEntries() { DARABONBA_PTR_GET(renderedSubstitudeEntries_, vector<Data::RenderedSubstitudeEntries>) };
      inline Data& setRenderedSubstitudeEntries(const vector<Data::RenderedSubstitudeEntries> & renderedSubstitudeEntries) { DARABONBA_PTR_SET_VALUE(renderedSubstitudeEntries_, renderedSubstitudeEntries) };
      inline Data& setRenderedSubstitudeEntries(vector<Data::RenderedSubstitudeEntries> && renderedSubstitudeEntries) { DARABONBA_PTR_SET_RVALUE(renderedSubstitudeEntries_, renderedSubstitudeEntries) };


      // scheduleLayers Field Functions 
      bool hasScheduleLayers() const { return this->scheduleLayers_ != nullptr;};
      void deleteScheduleLayers() { this->scheduleLayers_ = nullptr;};
      inline const vector<Data::ScheduleLayers> & getScheduleLayers() const { DARABONBA_PTR_GET_CONST(scheduleLayers_, vector<Data::ScheduleLayers>) };
      inline vector<Data::ScheduleLayers> getScheduleLayers() { DARABONBA_PTR_GET(scheduleLayers_, vector<Data::ScheduleLayers>) };
      inline Data& setScheduleLayers(const vector<Data::ScheduleLayers> & scheduleLayers) { DARABONBA_PTR_SET_VALUE(scheduleLayers_, scheduleLayers) };
      inline Data& setScheduleLayers(vector<Data::ScheduleLayers> && scheduleLayers) { DARABONBA_PTR_SET_RVALUE(scheduleLayers_, scheduleLayers) };


    protected:
      // The URL of the DingTalk chatbot, which is used to receive notifications about shift changes.
      shared_ptr<int64_t> alertRobotId_ {};
      // The description of the scheduling policy.
      shared_ptr<string> description_ {};
      // The ID of the scheduling policy.
      shared_ptr<int64_t> id_ {};
      // The name of the scheduling policy.
      shared_ptr<string> name_ {};
      // The information about the final user on duty.
      shared_ptr<vector<Data::RenderedFinnalEntries>> renderedFinnalEntries_ {};
      // The scheduled users on duty within a time range.
      shared_ptr<vector<vector<Data::RenderedLayerEntries>>> renderedLayerEntries_ {};
      // The information about the substitutes within a time range.
      shared_ptr<vector<Data::RenderedSubstitudeEntries>> renderedSubstitudeEntries_ {};
      // The information about the shift.
      shared_ptr<vector<Data::ScheduleLayers>> scheduleLayers_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetOnCallSchedulesDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetOnCallSchedulesDetailResponseBody::Data) };
    inline GetOnCallSchedulesDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetOnCallSchedulesDetailResponseBody::Data) };
    inline GetOnCallSchedulesDetailResponseBody& setData(const GetOnCallSchedulesDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetOnCallSchedulesDetailResponseBody& setData(GetOnCallSchedulesDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOnCallSchedulesDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the scheduling policy.
    shared_ptr<GetOnCallSchedulesDetailResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
