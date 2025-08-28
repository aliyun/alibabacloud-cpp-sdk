// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONBANDWIDTHPACKAGESRESPONSEBODYCOMMONBANDWIDTHPACKAGESCOMMONBANDWIDTHPACKAGEPUBLICIPADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONBANDWIDTHPACKAGESRESPONSEBODYCOMMONBANDWIDTHPACKAGESCOMMONBANDWIDTHPACKAGEPUBLICIPADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(PublicIpAddresse, publicIpAddresse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(PublicIpAddresse, publicIpAddresse_);
    };
    DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses() = default ;
    DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses(const DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses &) = default ;
    DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses(DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses &&) = default ;
    DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses() = default ;
    DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses& operator=(const DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses &) = default ;
    DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses& operator=(DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->publicIpAddresse_ != nullptr; };
    // publicIpAddresse Field Functions 
    bool hasPublicIpAddresse() const { return this->publicIpAddresse_ != nullptr;};
    void deletePublicIpAddresse() { this->publicIpAddresse_ = nullptr;};
    inline const vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse> & publicIpAddresse() const { DARABONBA_PTR_GET_CONST(publicIpAddresse_, vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse>) };
    inline vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse> publicIpAddresse() { DARABONBA_PTR_GET(publicIpAddresse_, vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse>) };
    inline DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses& setPublicIpAddresse(const vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse> & publicIpAddresse) { DARABONBA_PTR_SET_VALUE(publicIpAddresse_, publicIpAddresse) };
    inline DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddresses& setPublicIpAddresse(vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse> && publicIpAddresse) { DARABONBA_PTR_SET_RVALUE(publicIpAddresse_, publicIpAddresse) };


  protected:
    std::shared_ptr<vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse>> publicIpAddresse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
