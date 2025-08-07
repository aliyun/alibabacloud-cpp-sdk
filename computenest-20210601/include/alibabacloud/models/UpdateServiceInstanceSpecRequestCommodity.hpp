// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCESPECREQUESTCOMMODITY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCESPECREQUESTCOMMODITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class UpdateServiceInstanceSpecRequestCommodity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceInstanceSpecRequestCommodity& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceSpecRequestCommodity& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
    };
    UpdateServiceInstanceSpecRequestCommodity() = default ;
    UpdateServiceInstanceSpecRequestCommodity(const UpdateServiceInstanceSpecRequestCommodity &) = default ;
    UpdateServiceInstanceSpecRequestCommodity(UpdateServiceInstanceSpecRequestCommodity &&) = default ;
    UpdateServiceInstanceSpecRequestCommodity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceInstanceSpecRequestCommodity() = default ;
    UpdateServiceInstanceSpecRequestCommodity& operator=(const UpdateServiceInstanceSpecRequestCommodity &) = default ;
    UpdateServiceInstanceSpecRequestCommodity& operator=(UpdateServiceInstanceSpecRequestCommodity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPay_ != nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline UpdateServiceInstanceSpecRequestCommodity& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


  protected:
    // Specifies whether to enable automatic payment.
    // 
    // Valid values:
    // 
    // *   **true (default)**: automatically completes the payment. You must make sure that your account balance is sufficient.
    // *   **false**: does not automatically complete the payment. An unpaid order is generated. If your account balance is insufficient, you can set AutoPay to false. In this case, an unpaid order is generated. You can complete the payment in the Expenses and Costs console.[](https://rdsnext.console.aliyun.com/dashboard/cn-beijing)
    std::shared_ptr<bool> autoPay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
