// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLICENSEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLICENSEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetLicenseInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLicenseInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LicenseId, licenseId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLicenseInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LicenseId, licenseId_);
    };
    GetLicenseInfoRequest() = default ;
    GetLicenseInfoRequest(const GetLicenseInfoRequest &) = default ;
    GetLicenseInfoRequest(GetLicenseInfoRequest &&) = default ;
    GetLicenseInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLicenseInfoRequest() = default ;
    GetLicenseInfoRequest& operator=(const GetLicenseInfoRequest &) = default ;
    GetLicenseInfoRequest& operator=(GetLicenseInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->licenseId_ != nullptr; };
    // licenseId Field Functions 
    bool hasLicenseId() const { return this->licenseId_ != nullptr;};
    void deleteLicenseId() { this->licenseId_ = nullptr;};
    inline string licenseId() const { DARABONBA_PTR_GET_DEFAULT(licenseId_, "") };
    inline GetLicenseInfoRequest& setLicenseId(string licenseId) { DARABONBA_PTR_SET_VALUE(licenseId_, licenseId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> licenseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
