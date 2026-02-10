// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLISHCRONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLISHCRONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetPublishCronResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublishCronResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublishCronResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPublishCronResponseBody() = default ;
    GetPublishCronResponseBody(const GetPublishCronResponseBody &) = default ;
    GetPublishCronResponseBody(GetPublishCronResponseBody &&) = default ;
    GetPublishCronResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublishCronResponseBody() = default ;
    GetPublishCronResponseBody& operator=(const GetPublishCronResponseBody &) = default ;
    GetPublishCronResponseBody& operator=(GetPublishCronResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Cron, cron_);
        DARABONBA_PTR_TO_JSON(CronDay, cronDay_);
        DARABONBA_PTR_TO_JSON(CronTime, cronTime_);
        DARABONBA_PTR_TO_JSON(CronType, cronType_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Cron, cron_);
        DARABONBA_PTR_FROM_JSON(CronDay, cronDay_);
        DARABONBA_PTR_FROM_JSON(CronTime, cronTime_);
        DARABONBA_PTR_FROM_JSON(CronType, cronType_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
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
      virtual bool empty() const override { return this->cron_ == nullptr
        && this->cronDay_ == nullptr && this->cronTime_ == nullptr && this->cronType_ == nullptr && this->duration_ == nullptr; };
      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline Data& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // cronDay Field Functions 
      bool hasCronDay() const { return this->cronDay_ != nullptr;};
      void deleteCronDay() { this->cronDay_ = nullptr;};
      inline string getCronDay() const { DARABONBA_PTR_GET_DEFAULT(cronDay_, "") };
      inline Data& setCronDay(string cronDay) { DARABONBA_PTR_SET_VALUE(cronDay_, cronDay) };


      // cronTime Field Functions 
      bool hasCronTime() const { return this->cronTime_ != nullptr;};
      void deleteCronTime() { this->cronTime_ = nullptr;};
      inline int64_t getCronTime() const { DARABONBA_PTR_GET_DEFAULT(cronTime_, 0L) };
      inline Data& setCronTime(int64_t cronTime) { DARABONBA_PTR_SET_VALUE(cronTime_, cronTime) };


      // cronType Field Functions 
      bool hasCronType() const { return this->cronType_ != nullptr;};
      void deleteCronType() { this->cronType_ = nullptr;};
      inline string getCronType() const { DARABONBA_PTR_GET_DEFAULT(cronType_, "") };
      inline Data& setCronType(string cronType) { DARABONBA_PTR_SET_VALUE(cronType_, cronType) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline Data& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    protected:
      // Cron expression for the start time of the upgrade.
      shared_ptr<string> cron_ {};
      // The day of the week for the upgrade. The values are as follows:
      // - **MON**: Monday
      // - **TUE**: Tuesday
      // - **WED**: Wednesday
      // - **THU**: Thursday
      // - **FRI**: Friday
      // - **SAT**: Saturday
      // - **SUN**: Sunday
      shared_ptr<string> cronDay_ {};
      // Timestamp for the start of the publish, in milliseconds.
      shared_ptr<int64_t> cronTime_ {};
      // Upgrade start cycle type. The values are as follows:
      // - **day**: Daily
      // - **week**: Weekly
      shared_ptr<string> cronType_ {};
      // Duration of the upgrade in hours.
      shared_ptr<int32_t> duration_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPublishCronResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPublishCronResponseBody::Data) };
    inline GetPublishCronResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPublishCronResponseBody::Data) };
    inline GetPublishCronResponseBody& setData(const GetPublishCronResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPublishCronResponseBody& setData(GetPublishCronResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPublishCronResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Publish scheduling configuration information.
    shared_ptr<GetPublishCronResponseBody::Data> data_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for the request and can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
