// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEPAYTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEPAYTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyDBInstancePayTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstancePayTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstancePayTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
    };
    ModifyDBInstancePayTypeRequest() = default ;
    ModifyDBInstancePayTypeRequest(const ModifyDBInstancePayTypeRequest &) = default ;
    ModifyDBInstancePayTypeRequest(ModifyDBInstancePayTypeRequest &&) = default ;
    ModifyDBInstancePayTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstancePayTypeRequest() = default ;
    ModifyDBInstancePayTypeRequest& operator=(const ModifyDBInstancePayTypeRequest &) = default ;
    ModifyDBInstancePayTypeRequest& operator=(ModifyDBInstancePayTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->payType_ == nullptr && this->period_ == nullptr && this->usedTime_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstancePayTypeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ModifyDBInstancePayTypeRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline ModifyDBInstancePayTypeRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline ModifyDBInstancePayTypeRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The billing method of the instance. Valid values:
    // 
    // *   Postpaid: pay-as-you-go.
    // *   Prepaid: subscription.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The unit of the subscription duration. Valid values:
    // 
    // *   Month
    // *   Year
    // 
    // This parameter must be specified only when PayType is set to Prepaid.
    shared_ptr<string> period_ {};
    // The subscription duration.
    // 
    // *   Valid values when Period is set to Month: 1 to 9.
    // *   Valid values when Period is set to Year: 1 to 3.
    // 
    // This parameter must be specified only when PayType is set to Prepaid.
    shared_ptr<int32_t> usedTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
