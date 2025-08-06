// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELICENSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELICENSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceLicenseResponseBodyLicense.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceLicenseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceLicenseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(License, license_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceLicenseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(License, license_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceLicenseResponseBody() = default ;
    GetInstanceLicenseResponseBody(const GetInstanceLicenseResponseBody &) = default ;
    GetInstanceLicenseResponseBody(GetInstanceLicenseResponseBody &&) = default ;
    GetInstanceLicenseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceLicenseResponseBody() = default ;
    GetInstanceLicenseResponseBody& operator=(const GetInstanceLicenseResponseBody &) = default ;
    GetInstanceLicenseResponseBody& operator=(GetInstanceLicenseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->license_ != nullptr
        && this->requestId_ != nullptr; };
    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline const GetInstanceLicenseResponseBodyLicense & license() const { DARABONBA_PTR_GET_CONST(license_, GetInstanceLicenseResponseBodyLicense) };
    inline GetInstanceLicenseResponseBodyLicense license() { DARABONBA_PTR_GET(license_, GetInstanceLicenseResponseBodyLicense) };
    inline GetInstanceLicenseResponseBody& setLicense(const GetInstanceLicenseResponseBodyLicense & license) { DARABONBA_PTR_SET_VALUE(license_, license) };
    inline GetInstanceLicenseResponseBody& setLicense(GetInstanceLicenseResponseBodyLicense && license) { DARABONBA_PTR_SET_RVALUE(license_, license) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceLicenseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned result.
    std::shared_ptr<GetInstanceLicenseResponseBodyLicense> license_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
