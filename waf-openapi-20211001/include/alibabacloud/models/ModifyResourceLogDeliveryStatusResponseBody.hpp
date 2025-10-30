// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESOURCELOGDELIVERYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESOURCELOGDELIVERYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyResourceLogDeliveryStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyResourceLogDeliveryStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyResourceLogDeliveryStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyResourceLogDeliveryStatusResponseBody() = default ;
    ModifyResourceLogDeliveryStatusResponseBody(const ModifyResourceLogDeliveryStatusResponseBody &) = default ;
    ModifyResourceLogDeliveryStatusResponseBody(ModifyResourceLogDeliveryStatusResponseBody &&) = default ;
    ModifyResourceLogDeliveryStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyResourceLogDeliveryStatusResponseBody() = default ;
    ModifyResourceLogDeliveryStatusResponseBody& operator=(const ModifyResourceLogDeliveryStatusResponseBody &) = default ;
    ModifyResourceLogDeliveryStatusResponseBody& operator=(ModifyResourceLogDeliveryStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryName_ == nullptr
        && return this->deliveryType_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // deliveryName Field Functions 
    bool hasDeliveryName() const { return this->deliveryName_ != nullptr;};
    void deleteDeliveryName() { this->deliveryName_ = nullptr;};
    inline string deliveryName() const { DARABONBA_PTR_GET_DEFAULT(deliveryName_, "") };
    inline ModifyResourceLogDeliveryStatusResponseBody& setDeliveryName(string deliveryName) { DARABONBA_PTR_SET_VALUE(deliveryName_, deliveryName) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline ModifyResourceLogDeliveryStatusResponseBody& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyResourceLogDeliveryStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline ModifyResourceLogDeliveryStatusResponseBody& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> deliveryName_ = nullptr;
    std::shared_ptr<string> deliveryType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
