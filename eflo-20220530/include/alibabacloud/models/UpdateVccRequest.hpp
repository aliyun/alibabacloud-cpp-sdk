// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVCCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVCCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UpdateVccRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVccRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
      DARABONBA_PTR_TO_JSON(VccName, vccName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVccRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
      DARABONBA_PTR_FROM_JSON(VccName, vccName_);
    };
    UpdateVccRequest() = default ;
    UpdateVccRequest(const UpdateVccRequest &) = default ;
    UpdateVccRequest(UpdateVccRequest &&) = default ;
    UpdateVccRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVccRequest() = default ;
    UpdateVccRequest& operator=(const UpdateVccRequest &) = default ;
    UpdateVccRequest& operator=(UpdateVccRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->orderId_ == nullptr && return this->regionId_ == nullptr && return this->vccId_ == nullptr && return this->vccName_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline UpdateVccRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline UpdateVccRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateVccRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string vccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline UpdateVccRequest& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


    // vccName Field Functions 
    bool hasVccName() const { return this->vccName_ != nullptr;};
    void deleteVccName() { this->vccName_ = nullptr;};
    inline string vccName() const { DARABONBA_PTR_GET_DEFAULT(vccName_, "") };
    inline UpdateVccRequest& setVccName(string vccName) { DARABONBA_PTR_SET_VALUE(vccName_, vccName) };


  protected:
    // The peak bandwidth of the Lingjun connection instance. Unit: Mbit/s. Valid values: 1000 to 400000
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The ID of the order placed on the instance.
    std::shared_ptr<string> orderId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Lingjun connection instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> vccId_ = nullptr;
    // The name of the Lingjun connection instance.
    std::shared_ptr<string> vccName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
