// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSTATISTICSRESPONSEBODYFILESYSTEMSFILESYSTEMPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSTATISTICSRESPONSEBODYFILESYSTEMSFILESYSTEMPACKAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages& obj) { 
      DARABONBA_PTR_TO_JSON(Package, package_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(Package, package_);
    };
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages() = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages(const DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages &) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages(DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages &&) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages() = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages& operator=(const DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages &) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages& operator=(DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->package_ == nullptr; };
    // package Field Functions 
    bool hasPackage() const { return this->package_ != nullptr;};
    void deletePackage() { this->package_ = nullptr;};
    inline const vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage> & package() const { DARABONBA_PTR_GET_CONST(package_, vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage>) };
    inline vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage> package() { DARABONBA_PTR_GET(package_, vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage>) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages& setPackage(const vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage> & package) { DARABONBA_PTR_SET_VALUE(package_, package) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages& setPackage(vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage> && package) { DARABONBA_PTR_SET_RVALUE(package_, package) };


  protected:
    std::shared_ptr<vector<Models::DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage>> package_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
