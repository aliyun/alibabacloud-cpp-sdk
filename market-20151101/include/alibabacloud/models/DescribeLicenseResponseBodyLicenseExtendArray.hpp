// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELICENSERESPONSEBODYLICENSEEXTENDARRAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELICENSERESPONSEBODYLICENSEEXTENDARRAY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeLicenseResponseBodyLicenseExtendArray : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLicenseResponseBodyLicenseExtendArray& obj) { 
      DARABONBA_PTR_TO_JSON(LicenseAttribute, licenseAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLicenseResponseBodyLicenseExtendArray& obj) { 
      DARABONBA_PTR_FROM_JSON(LicenseAttribute, licenseAttribute_);
    };
    DescribeLicenseResponseBodyLicenseExtendArray() = default ;
    DescribeLicenseResponseBodyLicenseExtendArray(const DescribeLicenseResponseBodyLicenseExtendArray &) = default ;
    DescribeLicenseResponseBodyLicenseExtendArray(DescribeLicenseResponseBodyLicenseExtendArray &&) = default ;
    DescribeLicenseResponseBodyLicenseExtendArray(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLicenseResponseBodyLicenseExtendArray() = default ;
    DescribeLicenseResponseBodyLicenseExtendArray& operator=(const DescribeLicenseResponseBodyLicenseExtendArray &) = default ;
    DescribeLicenseResponseBodyLicenseExtendArray& operator=(DescribeLicenseResponseBodyLicenseExtendArray &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->licenseAttribute_ != nullptr; };
    // licenseAttribute Field Functions 
    bool hasLicenseAttribute() const { return this->licenseAttribute_ != nullptr;};
    void deleteLicenseAttribute() { this->licenseAttribute_ = nullptr;};
    inline const vector<Models::DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute> & licenseAttribute() const { DARABONBA_PTR_GET_CONST(licenseAttribute_, vector<Models::DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute>) };
    inline vector<Models::DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute> licenseAttribute() { DARABONBA_PTR_GET(licenseAttribute_, vector<Models::DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute>) };
    inline DescribeLicenseResponseBodyLicenseExtendArray& setLicenseAttribute(const vector<Models::DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute> & licenseAttribute) { DARABONBA_PTR_SET_VALUE(licenseAttribute_, licenseAttribute) };
    inline DescribeLicenseResponseBodyLicenseExtendArray& setLicenseAttribute(vector<Models::DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute> && licenseAttribute) { DARABONBA_PTR_SET_RVALUE(licenseAttribute_, licenseAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute>> licenseAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
