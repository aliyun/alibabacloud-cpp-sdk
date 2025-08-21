// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEPNINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEPNINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyEpnInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEpnInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_TO_JSON(EPNInstanceName, EPNInstanceName_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(NetworkingModel, networkingModel_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEpnInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_FROM_JSON(EPNInstanceName, EPNInstanceName_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(NetworkingModel, networkingModel_);
    };
    ModifyEpnInstanceRequest() = default ;
    ModifyEpnInstanceRequest(const ModifyEpnInstanceRequest &) = default ;
    ModifyEpnInstanceRequest(ModifyEpnInstanceRequest &&) = default ;
    ModifyEpnInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEpnInstanceRequest() = default ;
    ModifyEpnInstanceRequest& operator=(const ModifyEpnInstanceRequest &) = default ;
    ModifyEpnInstanceRequest& operator=(ModifyEpnInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->EPNInstanceId_ != nullptr
        && this->EPNInstanceName_ != nullptr && this->internetMaxBandwidthOut_ != nullptr && this->networkingModel_ != nullptr; };
    // EPNInstanceId Field Functions 
    bool hasEPNInstanceId() const { return this->EPNInstanceId_ != nullptr;};
    void deleteEPNInstanceId() { this->EPNInstanceId_ = nullptr;};
    inline string EPNInstanceId() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceId_, "") };
    inline ModifyEpnInstanceRequest& setEPNInstanceId(string EPNInstanceId) { DARABONBA_PTR_SET_VALUE(EPNInstanceId_, EPNInstanceId) };


    // EPNInstanceName Field Functions 
    bool hasEPNInstanceName() const { return this->EPNInstanceName_ != nullptr;};
    void deleteEPNInstanceName() { this->EPNInstanceName_ = nullptr;};
    inline string EPNInstanceName() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceName_, "") };
    inline ModifyEpnInstanceRequest& setEPNInstanceName(string EPNInstanceName) { DARABONBA_PTR_SET_VALUE(EPNInstanceName_, EPNInstanceName) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline ModifyEpnInstanceRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // networkingModel Field Functions 
    bool hasNetworkingModel() const { return this->networkingModel_ != nullptr;};
    void deleteNetworkingModel() { this->networkingModel_ = nullptr;};
    inline string networkingModel() const { DARABONBA_PTR_GET_DEFAULT(networkingModel_, "") };
    inline ModifyEpnInstanceRequest& setNetworkingModel(string networkingModel) { DARABONBA_PTR_SET_VALUE(networkingModel_, networkingModel) };


  protected:
    // The ID of the EPN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> EPNInstanceId_ = nullptr;
    // The name of the EPN instance.
    std::shared_ptr<string> EPNInstanceName_ = nullptr;
    // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 1 Mbit/s to 100 Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // The networking mode. Valid values:
    // 
    // *   **SpeedUp**: Intelligent acceleration network (Internet).
    // *   **Connection**: Internal network.
    // *   **SpeedUpAndConnection**: Intelligent acceleration network and internal network.
    // 
    // >  The internal network supports only **Connection** and **SpeedUpAndConnection**.
    std::shared_ptr<string> networkingModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
