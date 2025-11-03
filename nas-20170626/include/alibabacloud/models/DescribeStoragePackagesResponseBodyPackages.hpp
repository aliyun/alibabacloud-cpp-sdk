// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEPACKAGESRESPONSEBODYPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEPACKAGESRESPONSEBODYPACKAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStoragePackagesResponseBodyPackagesPackage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeStoragePackagesResponseBodyPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStoragePackagesResponseBodyPackages& obj) { 
      DARABONBA_PTR_TO_JSON(Package, package_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStoragePackagesResponseBodyPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(Package, package_);
    };
    DescribeStoragePackagesResponseBodyPackages() = default ;
    DescribeStoragePackagesResponseBodyPackages(const DescribeStoragePackagesResponseBodyPackages &) = default ;
    DescribeStoragePackagesResponseBodyPackages(DescribeStoragePackagesResponseBodyPackages &&) = default ;
    DescribeStoragePackagesResponseBodyPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStoragePackagesResponseBodyPackages() = default ;
    DescribeStoragePackagesResponseBodyPackages& operator=(const DescribeStoragePackagesResponseBodyPackages &) = default ;
    DescribeStoragePackagesResponseBodyPackages& operator=(DescribeStoragePackagesResponseBodyPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->package_ == nullptr; };
    // package Field Functions 
    bool hasPackage() const { return this->package_ != nullptr;};
    void deletePackage() { this->package_ = nullptr;};
    inline const vector<Models::DescribeStoragePackagesResponseBodyPackagesPackage> & package() const { DARABONBA_PTR_GET_CONST(package_, vector<Models::DescribeStoragePackagesResponseBodyPackagesPackage>) };
    inline vector<Models::DescribeStoragePackagesResponseBodyPackagesPackage> package() { DARABONBA_PTR_GET(package_, vector<Models::DescribeStoragePackagesResponseBodyPackagesPackage>) };
    inline DescribeStoragePackagesResponseBodyPackages& setPackage(const vector<Models::DescribeStoragePackagesResponseBodyPackagesPackage> & package) { DARABONBA_PTR_SET_VALUE(package_, package) };
    inline DescribeStoragePackagesResponseBodyPackages& setPackage(vector<Models::DescribeStoragePackagesResponseBodyPackagesPackage> && package) { DARABONBA_PTR_SET_RVALUE(package_, package) };


  protected:
    std::shared_ptr<vector<Models::DescribeStoragePackagesResponseBodyPackagesPackage>> package_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
