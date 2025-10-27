// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUSPICIOUSSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUSPICIOUSSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSuspiciousStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuspiciousStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemindCount, remindCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SeriousCount, seriousCount_);
      DARABONBA_PTR_TO_JSON(SuspiciousCount, suspiciousCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuspiciousStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemindCount, remindCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SeriousCount, seriousCount_);
      DARABONBA_PTR_FROM_JSON(SuspiciousCount, suspiciousCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetSuspiciousStatisticsResponseBody() = default ;
    GetSuspiciousStatisticsResponseBody(const GetSuspiciousStatisticsResponseBody &) = default ;
    GetSuspiciousStatisticsResponseBody(GetSuspiciousStatisticsResponseBody &&) = default ;
    GetSuspiciousStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuspiciousStatisticsResponseBody() = default ;
    GetSuspiciousStatisticsResponseBody& operator=(const GetSuspiciousStatisticsResponseBody &) = default ;
    GetSuspiciousStatisticsResponseBody& operator=(GetSuspiciousStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remindCount_ == nullptr
        && return this->requestId_ == nullptr && return this->seriousCount_ == nullptr && return this->suspiciousCount_ == nullptr && return this->totalCount_ == nullptr; };
    // remindCount Field Functions 
    bool hasRemindCount() const { return this->remindCount_ != nullptr;};
    void deleteRemindCount() { this->remindCount_ = nullptr;};
    inline int32_t remindCount() const { DARABONBA_PTR_GET_DEFAULT(remindCount_, 0) };
    inline GetSuspiciousStatisticsResponseBody& setRemindCount(int32_t remindCount) { DARABONBA_PTR_SET_VALUE(remindCount_, remindCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSuspiciousStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // seriousCount Field Functions 
    bool hasSeriousCount() const { return this->seriousCount_ != nullptr;};
    void deleteSeriousCount() { this->seriousCount_ = nullptr;};
    inline int32_t seriousCount() const { DARABONBA_PTR_GET_DEFAULT(seriousCount_, 0) };
    inline GetSuspiciousStatisticsResponseBody& setSeriousCount(int32_t seriousCount) { DARABONBA_PTR_SET_VALUE(seriousCount_, seriousCount) };


    // suspiciousCount Field Functions 
    bool hasSuspiciousCount() const { return this->suspiciousCount_ != nullptr;};
    void deleteSuspiciousCount() { this->suspiciousCount_ = nullptr;};
    inline int32_t suspiciousCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousCount_, 0) };
    inline GetSuspiciousStatisticsResponseBody& setSuspiciousCount(int32_t suspiciousCount) { DARABONBA_PTR_SET_VALUE(suspiciousCount_, suspiciousCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetSuspiciousStatisticsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of alerts whose Emergency level is Reminder.
    std::shared_ptr<int32_t> remindCount_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of alerts whose Emergency level is Urgent.
    std::shared_ptr<int32_t> seriousCount_ = nullptr;
    // The number of alerts whose Emergency level is Suspicious.
    std::shared_ptr<int32_t> suspiciousCount_ = nullptr;
    // The total number of alerts.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
