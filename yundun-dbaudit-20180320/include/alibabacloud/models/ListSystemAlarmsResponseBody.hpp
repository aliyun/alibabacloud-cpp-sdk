// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMALARMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMALARMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class ListSystemAlarmsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemAlarmsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Alarms, alarms_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemAlarmsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Alarms, alarms_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSystemAlarmsResponseBody() = default ;
    ListSystemAlarmsResponseBody(const ListSystemAlarmsResponseBody &) = default ;
    ListSystemAlarmsResponseBody(ListSystemAlarmsResponseBody &&) = default ;
    ListSystemAlarmsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemAlarmsResponseBody() = default ;
    ListSystemAlarmsResponseBody& operator=(const ListSystemAlarmsResponseBody &) = default ;
    ListSystemAlarmsResponseBody& operator=(ListSystemAlarmsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Alarms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Alarms& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmDetail, alarmDetail_);
        DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_TO_JSON(AlarmType, alarmType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ReadMark, readMark_);
      };
      friend void from_json(const Darabonba::Json& j, Alarms& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmDetail, alarmDetail_);
        DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_FROM_JSON(AlarmType, alarmType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ReadMark, readMark_);
      };
      Alarms() = default ;
      Alarms(const Alarms &) = default ;
      Alarms(Alarms &&) = default ;
      Alarms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Alarms() = default ;
      Alarms& operator=(const Alarms &) = default ;
      Alarms& operator=(Alarms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmDetail_ == nullptr
        && this->alarmId_ == nullptr && this->alarmType_ == nullptr && this->createTime_ == nullptr && this->readMark_ == nullptr; };
      // alarmDetail Field Functions 
      bool hasAlarmDetail() const { return this->alarmDetail_ != nullptr;};
      void deleteAlarmDetail() { this->alarmDetail_ = nullptr;};
      inline string getAlarmDetail() const { DARABONBA_PTR_GET_DEFAULT(alarmDetail_, "") };
      inline Alarms& setAlarmDetail(string alarmDetail) { DARABONBA_PTR_SET_VALUE(alarmDetail_, alarmDetail) };


      // alarmId Field Functions 
      bool hasAlarmId() const { return this->alarmId_ != nullptr;};
      void deleteAlarmId() { this->alarmId_ = nullptr;};
      inline int32_t getAlarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0) };
      inline Alarms& setAlarmId(int32_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


      // alarmType Field Functions 
      bool hasAlarmType() const { return this->alarmType_ != nullptr;};
      void deleteAlarmType() { this->alarmType_ = nullptr;};
      inline string getAlarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, "") };
      inline Alarms& setAlarmType(string alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Alarms& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // readMark Field Functions 
      bool hasReadMark() const { return this->readMark_ != nullptr;};
      void deleteReadMark() { this->readMark_ = nullptr;};
      inline int32_t getReadMark() const { DARABONBA_PTR_GET_DEFAULT(readMark_, 0) };
      inline Alarms& setReadMark(int32_t readMark) { DARABONBA_PTR_SET_VALUE(readMark_, readMark) };


    protected:
      shared_ptr<string> alarmDetail_ {};
      shared_ptr<int32_t> alarmId_ {};
      shared_ptr<string> alarmType_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int32_t> readMark_ {};
    };

    virtual bool empty() const override { return this->alarms_ == nullptr
        && this->requestId_ == nullptr; };
    // alarms Field Functions 
    bool hasAlarms() const { return this->alarms_ != nullptr;};
    void deleteAlarms() { this->alarms_ = nullptr;};
    inline const vector<ListSystemAlarmsResponseBody::Alarms> & getAlarms() const { DARABONBA_PTR_GET_CONST(alarms_, vector<ListSystemAlarmsResponseBody::Alarms>) };
    inline vector<ListSystemAlarmsResponseBody::Alarms> getAlarms() { DARABONBA_PTR_GET(alarms_, vector<ListSystemAlarmsResponseBody::Alarms>) };
    inline ListSystemAlarmsResponseBody& setAlarms(const vector<ListSystemAlarmsResponseBody::Alarms> & alarms) { DARABONBA_PTR_SET_VALUE(alarms_, alarms) };
    inline ListSystemAlarmsResponseBody& setAlarms(vector<ListSystemAlarmsResponseBody::Alarms> && alarms) { DARABONBA_PTR_SET_RVALUE(alarms_, alarms) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemAlarmsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListSystemAlarmsResponseBody::Alarms>> alarms_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
