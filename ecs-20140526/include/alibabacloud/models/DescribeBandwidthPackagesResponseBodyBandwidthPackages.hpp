// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHPACKAGESRESPONSEBODYBANDWIDTHPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHPACKAGESRESPONSEBODYBANDWIDTHPACKAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeBandwidthPackagesResponseBodyBandwidthPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBandwidthPackagesResponseBodyBandwidthPackages& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackage, bandwidthPackage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBandwidthPackagesResponseBodyBandwidthPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackage, bandwidthPackage_);
    };
    DescribeBandwidthPackagesResponseBodyBandwidthPackages() = default ;
    DescribeBandwidthPackagesResponseBodyBandwidthPackages(const DescribeBandwidthPackagesResponseBodyBandwidthPackages &) = default ;
    DescribeBandwidthPackagesResponseBodyBandwidthPackages(DescribeBandwidthPackagesResponseBodyBandwidthPackages &&) = default ;
    DescribeBandwidthPackagesResponseBodyBandwidthPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBandwidthPackagesResponseBodyBandwidthPackages() = default ;
    DescribeBandwidthPackagesResponseBodyBandwidthPackages& operator=(const DescribeBandwidthPackagesResponseBodyBandwidthPackages &) = default ;
    DescribeBandwidthPackagesResponseBodyBandwidthPackages& operator=(DescribeBandwidthPackagesResponseBodyBandwidthPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthPackage_ != nullptr; };
    // bandwidthPackage Field Functions 
    bool hasBandwidthPackage() const { return this->bandwidthPackage_ != nullptr;};
    void deleteBandwidthPackage() { this->bandwidthPackage_ = nullptr;};
    inline const vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackage> & bandwidthPackage() const { DARABONBA_PTR_GET_CONST(bandwidthPackage_, vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackage>) };
    inline vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackage> bandwidthPackage() { DARABONBA_PTR_GET(bandwidthPackage_, vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackage>) };
    inline DescribeBandwidthPackagesResponseBodyBandwidthPackages& setBandwidthPackage(const vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackage> & bandwidthPackage) { DARABONBA_PTR_SET_VALUE(bandwidthPackage_, bandwidthPackage) };
    inline DescribeBandwidthPackagesResponseBodyBandwidthPackages& setBandwidthPackage(vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackage> && bandwidthPackage) { DARABONBA_PTR_SET_RVALUE(bandwidthPackage_, bandwidthPackage) };


  protected:
    std::shared_ptr<vector<Models::DescribeBandwidthPackagesResponseBodyBandwidthPackagesBandwidthPackage>> bandwidthPackage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
