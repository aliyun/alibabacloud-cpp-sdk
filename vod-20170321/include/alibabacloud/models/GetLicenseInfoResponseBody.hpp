// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLICENSEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLICENSEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLicenseInfoResponseBodyLicenseInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetLicenseInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLicenseInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LicenseInfo, licenseInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLicenseInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LicenseInfo, licenseInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLicenseInfoResponseBody() = default ;
    GetLicenseInfoResponseBody(const GetLicenseInfoResponseBody &) = default ;
    GetLicenseInfoResponseBody(GetLicenseInfoResponseBody &&) = default ;
    GetLicenseInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLicenseInfoResponseBody() = default ;
    GetLicenseInfoResponseBody& operator=(const GetLicenseInfoResponseBody &) = default ;
    GetLicenseInfoResponseBody& operator=(GetLicenseInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->licenseInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // licenseInfo Field Functions 
    bool hasLicenseInfo() const { return this->licenseInfo_ != nullptr;};
    void deleteLicenseInfo() { this->licenseInfo_ = nullptr;};
    inline const GetLicenseInfoResponseBodyLicenseInfo & licenseInfo() const { DARABONBA_PTR_GET_CONST(licenseInfo_, GetLicenseInfoResponseBodyLicenseInfo) };
    inline GetLicenseInfoResponseBodyLicenseInfo licenseInfo() { DARABONBA_PTR_GET(licenseInfo_, GetLicenseInfoResponseBodyLicenseInfo) };
    inline GetLicenseInfoResponseBody& setLicenseInfo(const GetLicenseInfoResponseBodyLicenseInfo & licenseInfo) { DARABONBA_PTR_SET_VALUE(licenseInfo_, licenseInfo) };
    inline GetLicenseInfoResponseBody& setLicenseInfo(GetLicenseInfoResponseBodyLicenseInfo && licenseInfo) { DARABONBA_PTR_SET_RVALUE(licenseInfo_, licenseInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLicenseInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetLicenseInfoResponseBodyLicenseInfo> licenseInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
