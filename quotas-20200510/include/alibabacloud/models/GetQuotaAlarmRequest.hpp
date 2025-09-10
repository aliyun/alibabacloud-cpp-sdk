// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetQuotaAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
    };
    GetQuotaAlarmRequest() = default ;
    GetQuotaAlarmRequest(const GetQuotaAlarmRequest &) = default ;
    GetQuotaAlarmRequest(GetQuotaAlarmRequest &&) = default ;
    GetQuotaAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaAlarmRequest() = default ;
    GetQuotaAlarmRequest& operator=(const GetQuotaAlarmRequest &) = default ;
    GetQuotaAlarmRequest& operator=(GetQuotaAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmId_ != nullptr; };
    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline string alarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, "") };
    inline GetQuotaAlarmRequest& setAlarmId(string alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


  protected:
    // The ID of the quota alert.
    // 
    // For more information about how to query the ID of a quota alert, see [ListQuotaAlarms](https://help.aliyun.com/document_detail/184348.html).
    std::shared_ptr<string> alarmId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
