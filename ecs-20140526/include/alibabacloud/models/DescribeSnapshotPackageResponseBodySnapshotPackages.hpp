// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTPACKAGERESPONSEBODYSNAPSHOTPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTPACKAGERESPONSEBODYSNAPSHOTPACKAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotPackageResponseBodySnapshotPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotPackageResponseBodySnapshotPackages& obj) { 
      DARABONBA_PTR_TO_JSON(SnapshotPackage, snapshotPackage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotPackageResponseBodySnapshotPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(SnapshotPackage, snapshotPackage_);
    };
    DescribeSnapshotPackageResponseBodySnapshotPackages() = default ;
    DescribeSnapshotPackageResponseBodySnapshotPackages(const DescribeSnapshotPackageResponseBodySnapshotPackages &) = default ;
    DescribeSnapshotPackageResponseBodySnapshotPackages(DescribeSnapshotPackageResponseBodySnapshotPackages &&) = default ;
    DescribeSnapshotPackageResponseBodySnapshotPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotPackageResponseBodySnapshotPackages() = default ;
    DescribeSnapshotPackageResponseBodySnapshotPackages& operator=(const DescribeSnapshotPackageResponseBodySnapshotPackages &) = default ;
    DescribeSnapshotPackageResponseBodySnapshotPackages& operator=(DescribeSnapshotPackageResponseBodySnapshotPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->snapshotPackage_ != nullptr; };
    // snapshotPackage Field Functions 
    bool hasSnapshotPackage() const { return this->snapshotPackage_ != nullptr;};
    void deleteSnapshotPackage() { this->snapshotPackage_ = nullptr;};
    inline const vector<Models::DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage> & snapshotPackage() const { DARABONBA_PTR_GET_CONST(snapshotPackage_, vector<Models::DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage>) };
    inline vector<Models::DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage> snapshotPackage() { DARABONBA_PTR_GET(snapshotPackage_, vector<Models::DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage>) };
    inline DescribeSnapshotPackageResponseBodySnapshotPackages& setSnapshotPackage(const vector<Models::DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage> & snapshotPackage) { DARABONBA_PTR_SET_VALUE(snapshotPackage_, snapshotPackage) };
    inline DescribeSnapshotPackageResponseBodySnapshotPackages& setSnapshotPackage(vector<Models::DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage> && snapshotPackage) { DARABONBA_PTR_SET_RVALUE(snapshotPackage_, snapshotPackage) };


  protected:
    std::shared_ptr<vector<Models::DescribeSnapshotPackageResponseBodySnapshotPackagesSnapshotPackage>> snapshotPackage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
