// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSINSERVICEMESHRESPONSEBODYCLUSTERSGUESTCLUSTERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSINSERVICEMESHRESPONSEBODYCLUSTERSGUESTCLUSTERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfigSMC.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SMC, SMC_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SMC, SMC_);
    };
    DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig() = default ;
    DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig(const DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig &) = default ;
    DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig(DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig &&) = default ;
    DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig() = default ;
    DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig& operator=(const DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig &) = default ;
    DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig& operator=(DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->SMC_ == nullptr; };
    // SMC Field Functions 
    bool hasSMC() const { return this->SMC_ != nullptr;};
    void deleteSMC() { this->SMC_ = nullptr;};
    inline const Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfigSMC & SMC() const { DARABONBA_PTR_GET_CONST(SMC_, Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfigSMC) };
    inline Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfigSMC SMC() { DARABONBA_PTR_GET(SMC_, Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfigSMC) };
    inline DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig& setSMC(const Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfigSMC & SMC) { DARABONBA_PTR_SET_VALUE(SMC_, SMC) };
    inline DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfig& setSMC(Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfigSMC && SMC) { DARABONBA_PTR_SET_RVALUE(SMC_, SMC) };


  protected:
    std::shared_ptr<Models::DescribeClustersInServiceMeshResponseBodyClustersGuestClusterConfigSMC> SMC_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
