// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHPACKAGESRESPONSEBODYBANDWIDTHPACKAGESBANDWIDTHPACKAGEPUBLICIPADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHPACKAGESRESPONSEBODYBANDWIDTHPACKAGESBANDWIDTHPACKAGEPUBLICIPADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(PublicIpAddresse, publicIpAddresse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(PublicIpAddresse, publicIpAddresse_);
    };
    DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses() = default ;
    DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses(const DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses &) = default ;
    DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses(DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses &&) = default ;
    DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses() = default ;
    DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses& operator=(const DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses &) = default ;
    DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses& operator=(DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->publicIpAddresse_ == nullptr; };
    // publicIpAddresse Field Functions 
    bool hasPublicIpAddresse() const { return this->publicIpAddresse_ != nullptr;};
    void deletePublicIpAddresse() { this->publicIpAddresse_ = nullptr;};
    inline const vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse> & publicIpAddresse() const { DARABONBA_PTR_GET_CONST(publicIpAddresse_, vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse>) };
    inline vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse> publicIpAddresse() { DARABONBA_PTR_GET(publicIpAddresse_, vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse>) };
    inline DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses& setPublicIpAddresse(const vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse> & publicIpAddresse) { DARABONBA_PTR_SET_VALUE(publicIpAddresse_, publicIpAddresse) };
    inline DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddresses& setPublicIpAddresse(vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse> && publicIpAddresse) { DARABONBA_PTR_SET_RVALUE(publicIpAddresse_, publicIpAddresse) };


  protected:
    std::shared_ptr<vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse>> publicIpAddresse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
