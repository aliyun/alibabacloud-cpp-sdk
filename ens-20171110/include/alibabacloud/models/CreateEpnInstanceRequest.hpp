// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEPNINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEPNINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateEpnInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEpnInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EPNInstanceName, EPNInstanceName_);
      DARABONBA_PTR_TO_JSON(EPNInstanceType, EPNInstanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(NetworkingModel, networkingModel_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEpnInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EPNInstanceName, EPNInstanceName_);
      DARABONBA_PTR_FROM_JSON(EPNInstanceType, EPNInstanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(NetworkingModel, networkingModel_);
    };
    CreateEpnInstanceRequest() = default ;
    CreateEpnInstanceRequest(const CreateEpnInstanceRequest &) = default ;
    CreateEpnInstanceRequest(CreateEpnInstanceRequest &&) = default ;
    CreateEpnInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEpnInstanceRequest() = default ;
    CreateEpnInstanceRequest& operator=(const CreateEpnInstanceRequest &) = default ;
    CreateEpnInstanceRequest& operator=(CreateEpnInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->EPNInstanceName_ == nullptr
        && this->EPNInstanceType_ == nullptr && this->internetChargeType_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->networkingModel_ == nullptr; };
    // EPNInstanceName Field Functions 
    bool hasEPNInstanceName() const { return this->EPNInstanceName_ != nullptr;};
    void deleteEPNInstanceName() { this->EPNInstanceName_ = nullptr;};
    inline string getEPNInstanceName() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceName_, "") };
    inline CreateEpnInstanceRequest& setEPNInstanceName(string EPNInstanceName) { DARABONBA_PTR_SET_VALUE(EPNInstanceName_, EPNInstanceName) };


    // EPNInstanceType Field Functions 
    bool hasEPNInstanceType() const { return this->EPNInstanceType_ != nullptr;};
    void deleteEPNInstanceType() { this->EPNInstanceType_ = nullptr;};
    inline string getEPNInstanceType() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceType_, "") };
    inline CreateEpnInstanceRequest& setEPNInstanceType(string EPNInstanceType) { DARABONBA_PTR_SET_VALUE(EPNInstanceType_, EPNInstanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateEpnInstanceRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline CreateEpnInstanceRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // networkingModel Field Functions 
    bool hasNetworkingModel() const { return this->networkingModel_ != nullptr;};
    void deleteNetworkingModel() { this->networkingModel_ = nullptr;};
    inline string getNetworkingModel() const { DARABONBA_PTR_GET_DEFAULT(networkingModel_, "") };
    inline CreateEpnInstanceRequest& setNetworkingModel(string networkingModel) { DARABONBA_PTR_SET_VALUE(networkingModel_, networkingModel) };


  protected:
    // The name of the Edge-to-Edge network instance.
    shared_ptr<string> EPNInstanceName_ {};
    // The type of the Edge-to-Edge communication instance. Valid value: **EdgeToEdge**.
    // 
    // This parameter is required.
    shared_ptr<string> EPNInstanceType_ {};
    // The network billing type. Valid values:
    // 
    // - **BandwidthByDay**: Daily peak bandwidth.
    // - **95BandwidthByMonth**: Monthly 95th percentile peak bandwidth.
    // - **PayByBandwidth4thMonth**: Monthly fourth peak bandwidth.
    // - **PayByBandwidth**: Bandwidth with defined specifications.
    // 
    // Only one of the Billable methods is supported. If a billing method already exists, the new value is invalid by default, and the existing one prevails.
    // 
    // This parameter is required.
    shared_ptr<string> internetChargeType_ {};
    // The maximum outbound bandwidth to the Internet. Unit: Mbit/s. Valid values: 1 to 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // The networking mode. Valid values:
    // - **SpeedUp**: Intelligent acceleration (Internet).
    // - **Connection**: Internal network connectivity (internal network mode).
    // - **SpeedUpAndConnection**: Intelligent acceleration and internal network connectivity (internal network mode).
    // 
    // This parameter is required.
    shared_ptr<string> networkingModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
