// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPSOSUPDATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPSOSUPDATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDesktopsResponseBodyDesktopsOsUpdatePackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopsResponseBodyDesktopsOsUpdate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsResponseBodyDesktopsOsUpdate& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(PackageCount, packageCount_);
      DARABONBA_PTR_TO_JSON(Packages, packages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsResponseBodyDesktopsOsUpdate& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(PackageCount, packageCount_);
      DARABONBA_PTR_FROM_JSON(Packages, packages_);
    };
    DescribeDesktopsResponseBodyDesktopsOsUpdate() = default ;
    DescribeDesktopsResponseBodyDesktopsOsUpdate(const DescribeDesktopsResponseBodyDesktopsOsUpdate &) = default ;
    DescribeDesktopsResponseBodyDesktopsOsUpdate(DescribeDesktopsResponseBodyDesktopsOsUpdate &&) = default ;
    DescribeDesktopsResponseBodyDesktopsOsUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsResponseBodyDesktopsOsUpdate() = default ;
    DescribeDesktopsResponseBodyDesktopsOsUpdate& operator=(const DescribeDesktopsResponseBodyDesktopsOsUpdate &) = default ;
    DescribeDesktopsResponseBodyDesktopsOsUpdate& operator=(DescribeDesktopsResponseBodyDesktopsOsUpdate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->packageCount_ == nullptr && return this->packages_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline DescribeDesktopsResponseBodyDesktopsOsUpdate& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // packageCount Field Functions 
    bool hasPackageCount() const { return this->packageCount_ != nullptr;};
    void deletePackageCount() { this->packageCount_ = nullptr;};
    inline int32_t packageCount() const { DARABONBA_PTR_GET_DEFAULT(packageCount_, 0) };
    inline DescribeDesktopsResponseBodyDesktopsOsUpdate& setPackageCount(int32_t packageCount) { DARABONBA_PTR_SET_VALUE(packageCount_, packageCount) };


    // packages Field Functions 
    bool hasPackages() const { return this->packages_ != nullptr;};
    void deletePackages() { this->packages_ = nullptr;};
    inline const vector<Models::DescribeDesktopsResponseBodyDesktopsOsUpdatePackages> & packages() const { DARABONBA_PTR_GET_CONST(packages_, vector<Models::DescribeDesktopsResponseBodyDesktopsOsUpdatePackages>) };
    inline vector<Models::DescribeDesktopsResponseBodyDesktopsOsUpdatePackages> packages() { DARABONBA_PTR_GET(packages_, vector<Models::DescribeDesktopsResponseBodyDesktopsOsUpdatePackages>) };
    inline DescribeDesktopsResponseBodyDesktopsOsUpdate& setPackages(const vector<Models::DescribeDesktopsResponseBodyDesktopsOsUpdatePackages> & packages) { DARABONBA_PTR_SET_VALUE(packages_, packages) };
    inline DescribeDesktopsResponseBodyDesktopsOsUpdate& setPackages(vector<Models::DescribeDesktopsResponseBodyDesktopsOsUpdatePackages> && packages) { DARABONBA_PTR_SET_RVALUE(packages_, packages) };


  protected:
    std::shared_ptr<string> checkId_ = nullptr;
    std::shared_ptr<int32_t> packageCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDesktopsResponseBodyDesktopsOsUpdatePackages>> packages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
