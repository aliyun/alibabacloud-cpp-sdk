// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
    };
    DescribeLicenseRequest() = default ;
    DescribeLicenseRequest(const DescribeLicenseRequest &) = default ;
    DescribeLicenseRequest(DescribeLicenseRequest &&) = default ;
    DescribeLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLicenseRequest() = default ;
    DescribeLicenseRequest& operator=(const DescribeLicenseRequest &) = default ;
    DescribeLicenseRequest& operator=(DescribeLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->licenseCode_ != nullptr; };
    // licenseCode Field Functions 
    bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
    void deleteLicenseCode() { this->licenseCode_ = nullptr;};
    inline string licenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
    inline DescribeLicenseRequest& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> licenseCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
