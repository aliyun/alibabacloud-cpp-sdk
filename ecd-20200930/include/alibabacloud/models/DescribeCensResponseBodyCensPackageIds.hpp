// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODYCENSPACKAGEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODYCENSPACKAGEIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCensResponseBodyCensPackageIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCensResponseBodyCensPackageIds& obj) { 
      DARABONBA_PTR_TO_JSON(PackageId, packageId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCensResponseBodyCensPackageIds& obj) { 
      DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
    };
    DescribeCensResponseBodyCensPackageIds() = default ;
    DescribeCensResponseBodyCensPackageIds(const DescribeCensResponseBodyCensPackageIds &) = default ;
    DescribeCensResponseBodyCensPackageIds(DescribeCensResponseBodyCensPackageIds &&) = default ;
    DescribeCensResponseBodyCensPackageIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCensResponseBodyCensPackageIds() = default ;
    DescribeCensResponseBodyCensPackageIds& operator=(const DescribeCensResponseBodyCensPackageIds &) = default ;
    DescribeCensResponseBodyCensPackageIds& operator=(DescribeCensResponseBodyCensPackageIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->packageId_ != nullptr; };
    // packageId Field Functions 
    bool hasPackageId() const { return this->packageId_ != nullptr;};
    void deletePackageId() { this->packageId_ = nullptr;};
    inline string packageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
    inline DescribeCensResponseBodyCensPackageIds& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


  protected:
    // The ID of the bandwidth plan that is bound to the CEN instance.
    std::shared_ptr<string> packageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
