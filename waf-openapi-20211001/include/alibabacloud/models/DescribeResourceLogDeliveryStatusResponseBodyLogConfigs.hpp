// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGDELIVERYSTATUSRESPONSEBODYLOGCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGDELIVERYSTATUSRESPONSEBODYLOGCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourceLogDeliveryStatusResponseBodyLogConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceLogDeliveryStatusResponseBodyLogConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceLogDeliveryStatusResponseBodyLogConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeResourceLogDeliveryStatusResponseBodyLogConfigs() = default ;
    DescribeResourceLogDeliveryStatusResponseBodyLogConfigs(const DescribeResourceLogDeliveryStatusResponseBodyLogConfigs &) = default ;
    DescribeResourceLogDeliveryStatusResponseBodyLogConfigs(DescribeResourceLogDeliveryStatusResponseBodyLogConfigs &&) = default ;
    DescribeResourceLogDeliveryStatusResponseBodyLogConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceLogDeliveryStatusResponseBodyLogConfigs() = default ;
    DescribeResourceLogDeliveryStatusResponseBodyLogConfigs& operator=(const DescribeResourceLogDeliveryStatusResponseBodyLogConfigs &) = default ;
    DescribeResourceLogDeliveryStatusResponseBodyLogConfigs& operator=(DescribeResourceLogDeliveryStatusResponseBodyLogConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryName_ == nullptr
        && return this->deliveryType_ == nullptr && return this->resource_ == nullptr && return this->status_ == nullptr; };
    // deliveryName Field Functions 
    bool hasDeliveryName() const { return this->deliveryName_ != nullptr;};
    void deleteDeliveryName() { this->deliveryName_ = nullptr;};
    inline string deliveryName() const { DARABONBA_PTR_GET_DEFAULT(deliveryName_, "") };
    inline DescribeResourceLogDeliveryStatusResponseBodyLogConfigs& setDeliveryName(string deliveryName) { DARABONBA_PTR_SET_VALUE(deliveryName_, deliveryName) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline DescribeResourceLogDeliveryStatusResponseBodyLogConfigs& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeResourceLogDeliveryStatusResponseBodyLogConfigs& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline DescribeResourceLogDeliveryStatusResponseBodyLogConfigs& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> deliveryName_ = nullptr;
    std::shared_ptr<string> deliveryType_ = nullptr;
    std::shared_ptr<string> resource_ = nullptr;
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
