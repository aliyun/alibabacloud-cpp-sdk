// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAALARMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAALARMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetQuotaAlarmResponseBodyQuotaAlarm.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetQuotaAlarmResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaAlarmResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaAlarm, quotaAlarm_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaAlarmResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaAlarm, quotaAlarm_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetQuotaAlarmResponseBody() = default ;
    GetQuotaAlarmResponseBody(const GetQuotaAlarmResponseBody &) = default ;
    GetQuotaAlarmResponseBody(GetQuotaAlarmResponseBody &&) = default ;
    GetQuotaAlarmResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaAlarmResponseBody() = default ;
    GetQuotaAlarmResponseBody& operator=(const GetQuotaAlarmResponseBody &) = default ;
    GetQuotaAlarmResponseBody& operator=(GetQuotaAlarmResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quotaAlarm_ != nullptr
        && this->requestId_ != nullptr; };
    // quotaAlarm Field Functions 
    bool hasQuotaAlarm() const { return this->quotaAlarm_ != nullptr;};
    void deleteQuotaAlarm() { this->quotaAlarm_ = nullptr;};
    inline const GetQuotaAlarmResponseBodyQuotaAlarm & quotaAlarm() const { DARABONBA_PTR_GET_CONST(quotaAlarm_, GetQuotaAlarmResponseBodyQuotaAlarm) };
    inline GetQuotaAlarmResponseBodyQuotaAlarm quotaAlarm() { DARABONBA_PTR_GET(quotaAlarm_, GetQuotaAlarmResponseBodyQuotaAlarm) };
    inline GetQuotaAlarmResponseBody& setQuotaAlarm(const GetQuotaAlarmResponseBodyQuotaAlarm & quotaAlarm) { DARABONBA_PTR_SET_VALUE(quotaAlarm_, quotaAlarm) };
    inline GetQuotaAlarmResponseBody& setQuotaAlarm(GetQuotaAlarmResponseBodyQuotaAlarm && quotaAlarm) { DARABONBA_PTR_SET_RVALUE(quotaAlarm_, quotaAlarm) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQuotaAlarmResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the quota alert.
    std::shared_ptr<GetQuotaAlarmResponseBodyQuotaAlarm> quotaAlarm_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
