// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERSUSPEVENTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERSUSPEVENTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterSuspEventStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterSuspEventStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuspStatistics, suspStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterSuspEventStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuspStatistics, suspStatistics_);
    };
    GetClusterSuspEventStatisticsResponseBody() = default ;
    GetClusterSuspEventStatisticsResponseBody(const GetClusterSuspEventStatisticsResponseBody &) = default ;
    GetClusterSuspEventStatisticsResponseBody(GetClusterSuspEventStatisticsResponseBody &&) = default ;
    GetClusterSuspEventStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterSuspEventStatisticsResponseBody() = default ;
    GetClusterSuspEventStatisticsResponseBody& operator=(const GetClusterSuspEventStatisticsResponseBody &) = default ;
    GetClusterSuspEventStatisticsResponseBody& operator=(GetClusterSuspEventStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuspStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuspStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(Remind, remind_);
        DARABONBA_PTR_TO_JSON(Serious, serious_);
        DARABONBA_PTR_TO_JSON(Suspicious, suspicious_);
      };
      friend void from_json(const Darabonba::Json& j, SuspStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(Remind, remind_);
        DARABONBA_PTR_FROM_JSON(Serious, serious_);
        DARABONBA_PTR_FROM_JSON(Suspicious, suspicious_);
      };
      SuspStatistics() = default ;
      SuspStatistics(const SuspStatistics &) = default ;
      SuspStatistics(SuspStatistics &&) = default ;
      SuspStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuspStatistics() = default ;
      SuspStatistics& operator=(const SuspStatistics &) = default ;
      SuspStatistics& operator=(SuspStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->remind_ == nullptr
        && this->serious_ == nullptr && this->suspicious_ == nullptr; };
      // remind Field Functions 
      bool hasRemind() const { return this->remind_ != nullptr;};
      void deleteRemind() { this->remind_ = nullptr;};
      inline int32_t getRemind() const { DARABONBA_PTR_GET_DEFAULT(remind_, 0) };
      inline SuspStatistics& setRemind(int32_t remind) { DARABONBA_PTR_SET_VALUE(remind_, remind) };


      // serious Field Functions 
      bool hasSerious() const { return this->serious_ != nullptr;};
      void deleteSerious() { this->serious_ = nullptr;};
      inline int32_t getSerious() const { DARABONBA_PTR_GET_DEFAULT(serious_, 0) };
      inline SuspStatistics& setSerious(int32_t serious) { DARABONBA_PTR_SET_VALUE(serious_, serious) };


      // suspicious Field Functions 
      bool hasSuspicious() const { return this->suspicious_ != nullptr;};
      void deleteSuspicious() { this->suspicious_ = nullptr;};
      inline int32_t getSuspicious() const { DARABONBA_PTR_GET_DEFAULT(suspicious_, 0) };
      inline SuspStatistics& setSuspicious(int32_t suspicious) { DARABONBA_PTR_SET_VALUE(suspicious_, suspicious) };


    protected:
      // The number of alerts whose Emergency level is Reminder.
      shared_ptr<int32_t> remind_ {};
      // The number of alerts whose Emergency level is Urgent.
      shared_ptr<int32_t> serious_ {};
      // The number of alerts whose Emergency level is Suspicious.
      shared_ptr<int32_t> suspicious_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->suspStatistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterSuspEventStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suspStatistics Field Functions 
    bool hasSuspStatistics() const { return this->suspStatistics_ != nullptr;};
    void deleteSuspStatistics() { this->suspStatistics_ = nullptr;};
    inline const GetClusterSuspEventStatisticsResponseBody::SuspStatistics & getSuspStatistics() const { DARABONBA_PTR_GET_CONST(suspStatistics_, GetClusterSuspEventStatisticsResponseBody::SuspStatistics) };
    inline GetClusterSuspEventStatisticsResponseBody::SuspStatistics getSuspStatistics() { DARABONBA_PTR_GET(suspStatistics_, GetClusterSuspEventStatisticsResponseBody::SuspStatistics) };
    inline GetClusterSuspEventStatisticsResponseBody& setSuspStatistics(const GetClusterSuspEventStatisticsResponseBody::SuspStatistics & suspStatistics) { DARABONBA_PTR_SET_VALUE(suspStatistics_, suspStatistics) };
    inline GetClusterSuspEventStatisticsResponseBody& setSuspStatistics(GetClusterSuspEventStatisticsResponseBody::SuspStatistics && suspStatistics) { DARABONBA_PTR_SET_RVALUE(suspStatistics_, suspStatistics) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The number of alerts by risk level.
    shared_ptr<GetClusterSuspEventStatisticsResponseBody::SuspStatistics> suspStatistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
