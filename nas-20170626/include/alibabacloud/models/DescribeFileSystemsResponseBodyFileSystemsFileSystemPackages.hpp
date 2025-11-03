// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMPACKAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages& obj) { 
      DARABONBA_PTR_TO_JSON(Package, package_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(Package, package_);
    };
    DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages(const DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages(DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages &&) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages& operator=(const DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages& operator=(DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->package_ == nullptr; };
    // package Field Functions 
    bool hasPackage() const { return this->package_ != nullptr;};
    void deletePackage() { this->package_ = nullptr;};
    inline const vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage> & package() const { DARABONBA_PTR_GET_CONST(package_, vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage>) };
    inline vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage> package() { DARABONBA_PTR_GET(package_, vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage>) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages& setPackage(const vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage> & package) { DARABONBA_PTR_SET_VALUE(package_, package) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages& setPackage(vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage> && package) { DARABONBA_PTR_SET_RVALUE(package_, package) };


  protected:
    std::shared_ptr<vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage>> package_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
