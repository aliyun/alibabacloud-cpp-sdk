// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODYRESOURCESOSUPDATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODYRESOURCESOSUPDATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserResourcesResponseBodyResourcesOsUpdatePackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeUserResourcesResponseBodyResourcesOsUpdate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserResourcesResponseBodyResourcesOsUpdate& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(KbListString, kbListString_);
      DARABONBA_PTR_TO_JSON(PackageCount, packageCount_);
      DARABONBA_PTR_TO_JSON(Packages, packages_);
      DARABONBA_PTR_TO_JSON(UpdateCatalogUrl, updateCatalogUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserResourcesResponseBodyResourcesOsUpdate& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(KbListString, kbListString_);
      DARABONBA_PTR_FROM_JSON(PackageCount, packageCount_);
      DARABONBA_PTR_FROM_JSON(Packages, packages_);
      DARABONBA_PTR_FROM_JSON(UpdateCatalogUrl, updateCatalogUrl_);
    };
    DescribeUserResourcesResponseBodyResourcesOsUpdate() = default ;
    DescribeUserResourcesResponseBodyResourcesOsUpdate(const DescribeUserResourcesResponseBodyResourcesOsUpdate &) = default ;
    DescribeUserResourcesResponseBodyResourcesOsUpdate(DescribeUserResourcesResponseBodyResourcesOsUpdate &&) = default ;
    DescribeUserResourcesResponseBodyResourcesOsUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserResourcesResponseBodyResourcesOsUpdate() = default ;
    DescribeUserResourcesResponseBodyResourcesOsUpdate& operator=(const DescribeUserResourcesResponseBodyResourcesOsUpdate &) = default ;
    DescribeUserResourcesResponseBodyResourcesOsUpdate& operator=(DescribeUserResourcesResponseBodyResourcesOsUpdate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->kbListString_ == nullptr && return this->packageCount_ == nullptr && return this->packages_ == nullptr && return this->updateCatalogUrl_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline DescribeUserResourcesResponseBodyResourcesOsUpdate& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // kbListString Field Functions 
    bool hasKbListString() const { return this->kbListString_ != nullptr;};
    void deleteKbListString() { this->kbListString_ = nullptr;};
    inline string kbListString() const { DARABONBA_PTR_GET_DEFAULT(kbListString_, "") };
    inline DescribeUserResourcesResponseBodyResourcesOsUpdate& setKbListString(string kbListString) { DARABONBA_PTR_SET_VALUE(kbListString_, kbListString) };


    // packageCount Field Functions 
    bool hasPackageCount() const { return this->packageCount_ != nullptr;};
    void deletePackageCount() { this->packageCount_ = nullptr;};
    inline int32_t packageCount() const { DARABONBA_PTR_GET_DEFAULT(packageCount_, 0) };
    inline DescribeUserResourcesResponseBodyResourcesOsUpdate& setPackageCount(int32_t packageCount) { DARABONBA_PTR_SET_VALUE(packageCount_, packageCount) };


    // packages Field Functions 
    bool hasPackages() const { return this->packages_ != nullptr;};
    void deletePackages() { this->packages_ = nullptr;};
    inline const vector<Models::DescribeUserResourcesResponseBodyResourcesOsUpdatePackages> & packages() const { DARABONBA_PTR_GET_CONST(packages_, vector<Models::DescribeUserResourcesResponseBodyResourcesOsUpdatePackages>) };
    inline vector<Models::DescribeUserResourcesResponseBodyResourcesOsUpdatePackages> packages() { DARABONBA_PTR_GET(packages_, vector<Models::DescribeUserResourcesResponseBodyResourcesOsUpdatePackages>) };
    inline DescribeUserResourcesResponseBodyResourcesOsUpdate& setPackages(const vector<Models::DescribeUserResourcesResponseBodyResourcesOsUpdatePackages> & packages) { DARABONBA_PTR_SET_VALUE(packages_, packages) };
    inline DescribeUserResourcesResponseBodyResourcesOsUpdate& setPackages(vector<Models::DescribeUserResourcesResponseBodyResourcesOsUpdatePackages> && packages) { DARABONBA_PTR_SET_RVALUE(packages_, packages) };


    // updateCatalogUrl Field Functions 
    bool hasUpdateCatalogUrl() const { return this->updateCatalogUrl_ != nullptr;};
    void deleteUpdateCatalogUrl() { this->updateCatalogUrl_ = nullptr;};
    inline string updateCatalogUrl() const { DARABONBA_PTR_GET_DEFAULT(updateCatalogUrl_, "") };
    inline DescribeUserResourcesResponseBodyResourcesOsUpdate& setUpdateCatalogUrl(string updateCatalogUrl) { DARABONBA_PTR_SET_VALUE(updateCatalogUrl_, updateCatalogUrl) };


  protected:
    std::shared_ptr<string> checkId_ = nullptr;
    std::shared_ptr<string> kbListString_ = nullptr;
    std::shared_ptr<int32_t> packageCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeUserResourcesResponseBodyResourcesOsUpdatePackages>> packages_ = nullptr;
    std::shared_ptr<string> updateCatalogUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
