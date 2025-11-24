// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHUPGRADESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHUPGRADESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshUpgradeStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshUpgradeStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllIstioGatewayFullNames, allIstioGatewayFullNames_);
      DARABONBA_PTR_TO_JSON(GuestClusterIds, guestClusterIds_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshUpgradeStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllIstioGatewayFullNames, allIstioGatewayFullNames_);
      DARABONBA_PTR_FROM_JSON(GuestClusterIds, guestClusterIds_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DescribeServiceMeshUpgradeStatusRequest() = default ;
    DescribeServiceMeshUpgradeStatusRequest(const DescribeServiceMeshUpgradeStatusRequest &) = default ;
    DescribeServiceMeshUpgradeStatusRequest(DescribeServiceMeshUpgradeStatusRequest &&) = default ;
    DescribeServiceMeshUpgradeStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshUpgradeStatusRequest() = default ;
    DescribeServiceMeshUpgradeStatusRequest& operator=(const DescribeServiceMeshUpgradeStatusRequest &) = default ;
    DescribeServiceMeshUpgradeStatusRequest& operator=(DescribeServiceMeshUpgradeStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allIstioGatewayFullNames_ == nullptr
        && return this->guestClusterIds_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // allIstioGatewayFullNames Field Functions 
    bool hasAllIstioGatewayFullNames() const { return this->allIstioGatewayFullNames_ != nullptr;};
    void deleteAllIstioGatewayFullNames() { this->allIstioGatewayFullNames_ = nullptr;};
    inline string allIstioGatewayFullNames() const { DARABONBA_PTR_GET_DEFAULT(allIstioGatewayFullNames_, "") };
    inline DescribeServiceMeshUpgradeStatusRequest& setAllIstioGatewayFullNames(string allIstioGatewayFullNames) { DARABONBA_PTR_SET_VALUE(allIstioGatewayFullNames_, allIstioGatewayFullNames) };


    // guestClusterIds Field Functions 
    bool hasGuestClusterIds() const { return this->guestClusterIds_ != nullptr;};
    void deleteGuestClusterIds() { this->guestClusterIds_ = nullptr;};
    inline string guestClusterIds() const { DARABONBA_PTR_GET_DEFAULT(guestClusterIds_, "") };
    inline DescribeServiceMeshUpgradeStatusRequest& setGuestClusterIds(string guestClusterIds) { DARABONBA_PTR_SET_VALUE(guestClusterIds_, guestClusterIds) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeServiceMeshUpgradeStatusRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The fully qualified names of ingress gateways in the ASM instance. Separate multiple names with commas (,).
    std::shared_ptr<string> allIstioGatewayFullNames_ = nullptr;
    // The IDs of the clusters on the data plane of the ASM instance. Separate multiple clusters with commas (,).
    std::shared_ptr<string> guestClusterIds_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
