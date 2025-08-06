// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEANDROIDINSTANCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEANDROIDINSTANCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class UpgradeAndroidInstanceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeAndroidInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeAndroidInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpgradeAndroidInstanceGroupResponseBody() = default ;
    UpgradeAndroidInstanceGroupResponseBody(const UpgradeAndroidInstanceGroupResponseBody &) = default ;
    UpgradeAndroidInstanceGroupResponseBody(UpgradeAndroidInstanceGroupResponseBody &&) = default ;
    UpgradeAndroidInstanceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeAndroidInstanceGroupResponseBody() = default ;
    UpgradeAndroidInstanceGroupResponseBody& operator=(const UpgradeAndroidInstanceGroupResponseBody &) = default ;
    UpgradeAndroidInstanceGroupResponseBody& operator=(UpgradeAndroidInstanceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIds_ != nullptr
        && this->orderId_ != nullptr && this->requestId_ != nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline UpgradeAndroidInstanceGroupResponseBody& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline UpgradeAndroidInstanceGroupResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpgradeAndroidInstanceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> instanceIds_ = nullptr;
    // The ID of the order.
    std::shared_ptr<string> orderId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
