// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_REFUNDINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class RefundInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, RefundInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    RefundInstanceResponseBodyData() = default ;
    RefundInstanceResponseBodyData(const RefundInstanceResponseBodyData &) = default ;
    RefundInstanceResponseBodyData(RefundInstanceResponseBodyData &&) = default ;
    RefundInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundInstanceResponseBodyData() = default ;
    RefundInstanceResponseBodyData& operator=(const RefundInstanceResponseBodyData &) = default ;
    RefundInstanceResponseBodyData& operator=(RefundInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostId_ != nullptr
        && this->orderId_ != nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline RefundInstanceResponseBodyData& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline RefundInstanceResponseBodyData& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The site of the execution host.
    std::shared_ptr<string> hostId_ = nullptr;
    // The ID of the refund order that is returned only if the instance is unsubscribed from.
    std::shared_ptr<int64_t> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
