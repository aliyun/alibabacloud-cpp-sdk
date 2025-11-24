// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONACCESSLOGEXTRACONF_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONACCESSLOGEXTRACONF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayEnabled, gatewayEnabled_);
      DARABONBA_PTR_TO_JSON(GatewayLifecycle, gatewayLifecycle_);
      DARABONBA_PTR_TO_JSON(SidecarEnabled, sidecarEnabled_);
      DARABONBA_PTR_TO_JSON(SidecarLifecycle, sidecarLifecycle_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayEnabled, gatewayEnabled_);
      DARABONBA_PTR_FROM_JSON(GatewayLifecycle, gatewayLifecycle_);
      DARABONBA_PTR_FROM_JSON(SidecarEnabled, sidecarEnabled_);
      DARABONBA_PTR_FROM_JSON(SidecarLifecycle, sidecarLifecycle_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayEnabled_ == nullptr
        && return this->gatewayLifecycle_ == nullptr && return this->sidecarEnabled_ == nullptr && return this->sidecarLifecycle_ == nullptr; };
    // gatewayEnabled Field Functions 
    bool hasGatewayEnabled() const { return this->gatewayEnabled_ != nullptr;};
    void deleteGatewayEnabled() { this->gatewayEnabled_ = nullptr;};
    inline bool gatewayEnabled() const { DARABONBA_PTR_GET_DEFAULT(gatewayEnabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf& setGatewayEnabled(bool gatewayEnabled) { DARABONBA_PTR_SET_VALUE(gatewayEnabled_, gatewayEnabled) };


    // gatewayLifecycle Field Functions 
    bool hasGatewayLifecycle() const { return this->gatewayLifecycle_ != nullptr;};
    void deleteGatewayLifecycle() { this->gatewayLifecycle_ = nullptr;};
    inline int32_t gatewayLifecycle() const { DARABONBA_PTR_GET_DEFAULT(gatewayLifecycle_, 0) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf& setGatewayLifecycle(int32_t gatewayLifecycle) { DARABONBA_PTR_SET_VALUE(gatewayLifecycle_, gatewayLifecycle) };


    // sidecarEnabled Field Functions 
    bool hasSidecarEnabled() const { return this->sidecarEnabled_ != nullptr;};
    void deleteSidecarEnabled() { this->sidecarEnabled_ = nullptr;};
    inline bool sidecarEnabled() const { DARABONBA_PTR_GET_DEFAULT(sidecarEnabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf& setSidecarEnabled(bool sidecarEnabled) { DARABONBA_PTR_SET_VALUE(sidecarEnabled_, sidecarEnabled) };


    // sidecarLifecycle Field Functions 
    bool hasSidecarLifecycle() const { return this->sidecarLifecycle_ != nullptr;};
    void deleteSidecarLifecycle() { this->sidecarLifecycle_ = nullptr;};
    inline int32_t sidecarLifecycle() const { DARABONBA_PTR_GET_DEFAULT(sidecarLifecycle_, 0) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf& setSidecarLifecycle(int32_t sidecarLifecycle) { DARABONBA_PTR_SET_VALUE(sidecarLifecycle_, sidecarLifecycle) };


  protected:
    // Indicates whether gateway log collection is enabled.
    std::shared_ptr<bool> gatewayEnabled_ = nullptr;
    // The retention period for the access logs of the ingress gateway. Unit: day. The logs are collected by using Simple Log Service. For example, the value 30 indicates that the logs are retained for 30 days.
    std::shared_ptr<int32_t> gatewayLifecycle_ = nullptr;
    // Indicates whether sidecar log collection is enabled.
    std::shared_ptr<bool> sidecarEnabled_ = nullptr;
    // The retention period for the access logs of sidecar proxies. Unit: day. The logs are collected by using Simple Log Service. For example, the value 30 indicates that the logs are retained for 30 days.
    std::shared_ptr<int32_t> sidecarLifecycle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
