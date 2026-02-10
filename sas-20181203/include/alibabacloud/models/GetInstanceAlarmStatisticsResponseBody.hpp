// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEALARMSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEALARMSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInstanceAlarmStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceAlarmStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceAlarmStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceAlarmStatisticsResponseBody() = default ;
    GetInstanceAlarmStatisticsResponseBody(const GetInstanceAlarmStatisticsResponseBody &) = default ;
    GetInstanceAlarmStatisticsResponseBody(GetInstanceAlarmStatisticsResponseBody &&) = default ;
    GetInstanceAlarmStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceAlarmStatisticsResponseBody() = default ;
    GetInstanceAlarmStatisticsResponseBody& operator=(const GetInstanceAlarmStatisticsResponseBody &) = default ;
    GetInstanceAlarmStatisticsResponseBody& operator=(GetInstanceAlarmStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RemindCount, remindCount_);
        DARABONBA_PTR_TO_JSON(SeriousCount, seriousCount_);
        DARABONBA_PTR_TO_JSON(SuspiciousCount, suspiciousCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RemindCount, remindCount_);
        DARABONBA_PTR_FROM_JSON(SeriousCount, seriousCount_);
        DARABONBA_PTR_FROM_JSON(SuspiciousCount, suspiciousCount_);
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
      virtual bool empty() const override { return this->remindCount_ == nullptr
        && this->seriousCount_ == nullptr && this->suspiciousCount_ == nullptr; };
      // remindCount Field Functions 
      bool hasRemindCount() const { return this->remindCount_ != nullptr;};
      void deleteRemindCount() { this->remindCount_ = nullptr;};
      inline int32_t getRemindCount() const { DARABONBA_PTR_GET_DEFAULT(remindCount_, 0) };
      inline Data& setRemindCount(int32_t remindCount) { DARABONBA_PTR_SET_VALUE(remindCount_, remindCount) };


      // seriousCount Field Functions 
      bool hasSeriousCount() const { return this->seriousCount_ != nullptr;};
      void deleteSeriousCount() { this->seriousCount_ = nullptr;};
      inline int32_t getSeriousCount() const { DARABONBA_PTR_GET_DEFAULT(seriousCount_, 0) };
      inline Data& setSeriousCount(int32_t seriousCount) { DARABONBA_PTR_SET_VALUE(seriousCount_, seriousCount) };


      // suspiciousCount Field Functions 
      bool hasSuspiciousCount() const { return this->suspiciousCount_ != nullptr;};
      void deleteSuspiciousCount() { this->suspiciousCount_ = nullptr;};
      inline int32_t getSuspiciousCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousCount_, 0) };
      inline Data& setSuspiciousCount(int32_t suspiciousCount) { DARABONBA_PTR_SET_VALUE(suspiciousCount_, suspiciousCount) };


    protected:
      // Reminder alarm count.
      shared_ptr<int32_t> remindCount_ {};
      // Critical alarm count.
      shared_ptr<int32_t> seriousCount_ {};
      // Suspicious alarm count.
      shared_ptr<int32_t> suspiciousCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstanceAlarmStatisticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInstanceAlarmStatisticsResponseBody::Data) };
    inline GetInstanceAlarmStatisticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInstanceAlarmStatisticsResponseBody::Data) };
    inline GetInstanceAlarmStatisticsResponseBody& setData(const GetInstanceAlarmStatisticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstanceAlarmStatisticsResponseBody& setData(GetInstanceAlarmStatisticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceAlarmStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data structure.
    shared_ptr<GetInstanceAlarmStatisticsResponseBody::Data> data_ {};
    // The unique identifier generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
