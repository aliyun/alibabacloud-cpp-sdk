// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYADDONRESOURCESSPECEIPRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYADDONRESOURCESSPECEIPRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetAddonResponseBodyAddonResourcesSpecEipResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonResponseBodyAddonResourcesSpecEipResource& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreate, autoCreate_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(EipInstanceId, eipInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonResponseBodyAddonResourcesSpecEipResource& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreate, autoCreate_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(EipInstanceId, eipInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
    };
    GetAddonResponseBodyAddonResourcesSpecEipResource() = default ;
    GetAddonResponseBodyAddonResourcesSpecEipResource(const GetAddonResponseBodyAddonResourcesSpecEipResource &) = default ;
    GetAddonResponseBodyAddonResourcesSpecEipResource(GetAddonResponseBodyAddonResourcesSpecEipResource &&) = default ;
    GetAddonResponseBodyAddonResourcesSpecEipResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonResponseBodyAddonResourcesSpecEipResource() = default ;
    GetAddonResponseBodyAddonResourcesSpecEipResource& operator=(const GetAddonResponseBodyAddonResourcesSpecEipResource &) = default ;
    GetAddonResponseBodyAddonResourcesSpecEipResource& operator=(GetAddonResponseBodyAddonResourcesSpecEipResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCreate_ == nullptr
        && return this->bandwidth_ == nullptr && return this->eipAddress_ == nullptr && return this->eipInstanceId_ == nullptr && return this->instanceChargeType_ == nullptr && return this->internetChargeType_ == nullptr; };
    // autoCreate Field Functions 
    bool hasAutoCreate() const { return this->autoCreate_ != nullptr;};
    void deleteAutoCreate() { this->autoCreate_ = nullptr;};
    inline bool autoCreate() const { DARABONBA_PTR_GET_DEFAULT(autoCreate_, false) };
    inline GetAddonResponseBodyAddonResourcesSpecEipResource& setAutoCreate(bool autoCreate) { DARABONBA_PTR_SET_VALUE(autoCreate_, autoCreate) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline GetAddonResponseBodyAddonResourcesSpecEipResource& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline string eipAddress() const { DARABONBA_PTR_GET_DEFAULT(eipAddress_, "") };
    inline GetAddonResponseBodyAddonResourcesSpecEipResource& setEipAddress(string eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };


    // eipInstanceId Field Functions 
    bool hasEipInstanceId() const { return this->eipInstanceId_ != nullptr;};
    void deleteEipInstanceId() { this->eipInstanceId_ = nullptr;};
    inline string eipInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eipInstanceId_, "") };
    inline GetAddonResponseBodyAddonResourcesSpecEipResource& setEipInstanceId(string eipInstanceId) { DARABONBA_PTR_SET_VALUE(eipInstanceId_, eipInstanceId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline GetAddonResponseBodyAddonResourcesSpecEipResource& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline GetAddonResponseBodyAddonResourcesSpecEipResource& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


  protected:
    // Indicates whether the EIP is automatically created.
    std::shared_ptr<bool> autoCreate_ = nullptr;
    // The maximum bandwidth of the EIP. Unit: Mbit/s.
    std::shared_ptr<string> bandwidth_ = nullptr;
    // The EIP.
    std::shared_ptr<string> eipAddress_ = nullptr;
    // The EIP ID.
    std::shared_ptr<string> eipInstanceId_ = nullptr;
    // The billing method of the EIP.
    // 
    // *   PostPaid: pay-as-you-go.
    // *   PrePaid: subscription.
    // 
    // Default value: PostPaid.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The metering method of the EIP. Valid values:
    // 
    // *   PayByBandwidth: pay by bandwidth.
    // *   PayByTraffic: pay by data transfer.
    // 
    // Valid values of N: 1 to 10.
    std::shared_ptr<string> internetChargeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
