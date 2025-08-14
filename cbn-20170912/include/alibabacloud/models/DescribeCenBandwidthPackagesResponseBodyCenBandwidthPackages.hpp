// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODYCENBANDWIDTHPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODYCENBANDWIDTHPACKAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages& obj) { 
      DARABONBA_PTR_TO_JSON(CenBandwidthPackage, cenBandwidthPackage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(CenBandwidthPackage, cenBandwidthPackage_);
    };
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages() = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages &) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages &&) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages() = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages& operator=(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages &) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages& operator=(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenBandwidthPackage_ != nullptr; };
    // cenBandwidthPackage Field Functions 
    bool hasCenBandwidthPackage() const { return this->cenBandwidthPackage_ != nullptr;};
    void deleteCenBandwidthPackage() { this->cenBandwidthPackage_ = nullptr;};
    inline const vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage> & cenBandwidthPackage() const { DARABONBA_PTR_GET_CONST(cenBandwidthPackage_, vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage>) };
    inline vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage> cenBandwidthPackage() { DARABONBA_PTR_GET(cenBandwidthPackage_, vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage>) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages& setCenBandwidthPackage(const vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage> & cenBandwidthPackage) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackage_, cenBandwidthPackage) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages& setCenBandwidthPackage(vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage> && cenBandwidthPackage) { DARABONBA_PTR_SET_RVALUE(cenBandwidthPackage_, cenBandwidthPackage) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage>> cenBandwidthPackage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
