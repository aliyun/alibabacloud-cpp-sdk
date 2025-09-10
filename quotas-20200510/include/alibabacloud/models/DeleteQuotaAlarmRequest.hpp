// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQUOTAALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQUOTAALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class DeleteQuotaAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQuotaAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQuotaAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
    };
    DeleteQuotaAlarmRequest() = default ;
    DeleteQuotaAlarmRequest(const DeleteQuotaAlarmRequest &) = default ;
    DeleteQuotaAlarmRequest(DeleteQuotaAlarmRequest &&) = default ;
    DeleteQuotaAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQuotaAlarmRequest() = default ;
    DeleteQuotaAlarmRequest& operator=(const DeleteQuotaAlarmRequest &) = default ;
    DeleteQuotaAlarmRequest& operator=(DeleteQuotaAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmId_ != nullptr; };
    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline string alarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, "") };
    inline DeleteQuotaAlarmRequest& setAlarmId(string alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


  protected:
    // The ID of the quota alert.
    // 
    // >  You can call the [ListQuotaAlarms](https://help.aliyun.com/document_detail/440561.html) operation to obtain the ID of a quota alert.
    // 
    // This parameter is required.
    std::shared_ptr<string> alarmId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
