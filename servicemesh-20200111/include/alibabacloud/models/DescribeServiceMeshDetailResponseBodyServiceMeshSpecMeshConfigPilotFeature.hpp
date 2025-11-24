// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGPILOTFEATURE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGPILOTFEATURE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature& obj) { 
      DARABONBA_PTR_TO_JSON(EnableSDSServer, enableSDSServer_);
      DARABONBA_PTR_TO_JSON(FilterGatewayClusterConfig, filterGatewayClusterConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableSDSServer, enableSDSServer_);
      DARABONBA_PTR_FROM_JSON(FilterGatewayClusterConfig, filterGatewayClusterConfig_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableSDSServer_ == nullptr
        && return this->filterGatewayClusterConfig_ == nullptr; };
    // enableSDSServer Field Functions 
    bool hasEnableSDSServer() const { return this->enableSDSServer_ != nullptr;};
    void deleteEnableSDSServer() { this->enableSDSServer_ = nullptr;};
    inline bool enableSDSServer() const { DARABONBA_PTR_GET_DEFAULT(enableSDSServer_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature& setEnableSDSServer(bool enableSDSServer) { DARABONBA_PTR_SET_VALUE(enableSDSServer_, enableSDSServer) };


    // filterGatewayClusterConfig Field Functions 
    bool hasFilterGatewayClusterConfig() const { return this->filterGatewayClusterConfig_ != nullptr;};
    void deleteFilterGatewayClusterConfig() { this->filterGatewayClusterConfig_ = nullptr;};
    inline bool filterGatewayClusterConfig() const { DARABONBA_PTR_GET_DEFAULT(filterGatewayClusterConfig_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature& setFilterGatewayClusterConfig(bool filterGatewayClusterConfig) { DARABONBA_PTR_SET_VALUE(filterGatewayClusterConfig_, filterGatewayClusterConfig) };


  protected:
    // Indicates whether Secret Discovery Service (SDS) is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enableSDSServer_ = nullptr;
    // Indicates whether gateway configuration filtering is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> filterGatewayClusterConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
