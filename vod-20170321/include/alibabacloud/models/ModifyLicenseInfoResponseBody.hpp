// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLICENSEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLICENSEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyLicenseInfoResponseBodyLicenseInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ModifyLicenseInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLicenseInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LicenseInfo, licenseInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLicenseInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LicenseInfo, licenseInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyLicenseInfoResponseBody() = default ;
    ModifyLicenseInfoResponseBody(const ModifyLicenseInfoResponseBody &) = default ;
    ModifyLicenseInfoResponseBody(ModifyLicenseInfoResponseBody &&) = default ;
    ModifyLicenseInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLicenseInfoResponseBody() = default ;
    ModifyLicenseInfoResponseBody& operator=(const ModifyLicenseInfoResponseBody &) = default ;
    ModifyLicenseInfoResponseBody& operator=(ModifyLicenseInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->licenseInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // licenseInfo Field Functions 
    bool hasLicenseInfo() const { return this->licenseInfo_ != nullptr;};
    void deleteLicenseInfo() { this->licenseInfo_ = nullptr;};
    inline const ModifyLicenseInfoResponseBodyLicenseInfo & licenseInfo() const { DARABONBA_PTR_GET_CONST(licenseInfo_, ModifyLicenseInfoResponseBodyLicenseInfo) };
    inline ModifyLicenseInfoResponseBodyLicenseInfo licenseInfo() { DARABONBA_PTR_GET(licenseInfo_, ModifyLicenseInfoResponseBodyLicenseInfo) };
    inline ModifyLicenseInfoResponseBody& setLicenseInfo(const ModifyLicenseInfoResponseBodyLicenseInfo & licenseInfo) { DARABONBA_PTR_SET_VALUE(licenseInfo_, licenseInfo) };
    inline ModifyLicenseInfoResponseBody& setLicenseInfo(ModifyLicenseInfoResponseBodyLicenseInfo && licenseInfo) { DARABONBA_PTR_SET_RVALUE(licenseInfo_, licenseInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyLicenseInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ModifyLicenseInfoResponseBodyLicenseInfo> licenseInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
