// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATELICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATELICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class ActivateLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Identification, identification_);
      DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Identification, identification_);
      DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
    };
    ActivateLicenseRequest() = default ;
    ActivateLicenseRequest(const ActivateLicenseRequest &) = default ;
    ActivateLicenseRequest(ActivateLicenseRequest &&) = default ;
    ActivateLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateLicenseRequest() = default ;
    ActivateLicenseRequest& operator=(const ActivateLicenseRequest &) = default ;
    ActivateLicenseRequest& operator=(ActivateLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->identification_ != nullptr
        && this->licenseCode_ != nullptr; };
    // identification Field Functions 
    bool hasIdentification() const { return this->identification_ != nullptr;};
    void deleteIdentification() { this->identification_ = nullptr;};
    inline string identification() const { DARABONBA_PTR_GET_DEFAULT(identification_, "") };
    inline ActivateLicenseRequest& setIdentification(string identification) { DARABONBA_PTR_SET_VALUE(identification_, identification) };


    // licenseCode Field Functions 
    bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
    void deleteLicenseCode() { this->licenseCode_ = nullptr;};
    inline string licenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
    inline ActivateLicenseRequest& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


  protected:
    std::shared_ptr<string> identification_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> licenseCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
