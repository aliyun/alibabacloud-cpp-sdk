// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONBANDWIDTHPACKAGESRESPONSEBODYCOMMONBANDWIDTHPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONBANDWIDTHPACKAGESRESPONSEBODYCOMMONBANDWIDTHPACKAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages& obj) { 
      DARABONBA_PTR_TO_JSON(CommonBandwidthPackage, commonBandwidthPackage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonBandwidthPackage, commonBandwidthPackage_);
    };
    DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages() = default ;
    DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages(const DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages &) = default ;
    DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages(DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages &&) = default ;
    DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages() = default ;
    DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages& operator=(const DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages &) = default ;
    DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages& operator=(DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonBandwidthPackage_ != nullptr; };
    // commonBandwidthPackage Field Functions 
    bool hasCommonBandwidthPackage() const { return this->commonBandwidthPackage_ != nullptr;};
    void deleteCommonBandwidthPackage() { this->commonBandwidthPackage_ = nullptr;};
    inline const vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackage> & commonBandwidthPackage() const { DARABONBA_PTR_GET_CONST(commonBandwidthPackage_, vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackage>) };
    inline vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackage> commonBandwidthPackage() { DARABONBA_PTR_GET(commonBandwidthPackage_, vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackage>) };
    inline DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages& setCommonBandwidthPackage(const vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackage> & commonBandwidthPackage) { DARABONBA_PTR_SET_VALUE(commonBandwidthPackage_, commonBandwidthPackage) };
    inline DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackages& setCommonBandwidthPackage(vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackage> && commonBandwidthPackage) { DARABONBA_PTR_SET_RVALUE(commonBandwidthPackage_, commonBandwidthPackage) };


  protected:
    std::shared_ptr<vector<Models::DescribeCommonBandwidthPackagesResponseBodyCommonBandwidthPackagesCommonBandwidthPackage>> commonBandwidthPackage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
