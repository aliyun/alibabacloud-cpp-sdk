// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDTRANSFORMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDTRANSFORMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetManagedTransformResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedTransformResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddClientGeolocationHeader, addClientGeolocationHeader_);
      DARABONBA_PTR_TO_JSON(AddRealClientIpHeader, addRealClientIpHeader_);
      DARABONBA_PTR_TO_JSON(RealClientIpHeaderName, realClientIpHeaderName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedTransformResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddClientGeolocationHeader, addClientGeolocationHeader_);
      DARABONBA_PTR_FROM_JSON(AddRealClientIpHeader, addRealClientIpHeader_);
      DARABONBA_PTR_FROM_JSON(RealClientIpHeaderName, realClientIpHeaderName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    GetManagedTransformResponseBody() = default ;
    GetManagedTransformResponseBody(const GetManagedTransformResponseBody &) = default ;
    GetManagedTransformResponseBody(GetManagedTransformResponseBody &&) = default ;
    GetManagedTransformResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedTransformResponseBody() = default ;
    GetManagedTransformResponseBody& operator=(const GetManagedTransformResponseBody &) = default ;
    GetManagedTransformResponseBody& operator=(GetManagedTransformResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addClientGeolocationHeader_ == nullptr
        && this->addRealClientIpHeader_ == nullptr && this->realClientIpHeaderName_ == nullptr && this->requestId_ == nullptr && this->siteVersion_ == nullptr; };
    // addClientGeolocationHeader Field Functions 
    bool hasAddClientGeolocationHeader() const { return this->addClientGeolocationHeader_ != nullptr;};
    void deleteAddClientGeolocationHeader() { this->addClientGeolocationHeader_ = nullptr;};
    inline string getAddClientGeolocationHeader() const { DARABONBA_PTR_GET_DEFAULT(addClientGeolocationHeader_, "") };
    inline GetManagedTransformResponseBody& setAddClientGeolocationHeader(string addClientGeolocationHeader) { DARABONBA_PTR_SET_VALUE(addClientGeolocationHeader_, addClientGeolocationHeader) };


    // addRealClientIpHeader Field Functions 
    bool hasAddRealClientIpHeader() const { return this->addRealClientIpHeader_ != nullptr;};
    void deleteAddRealClientIpHeader() { this->addRealClientIpHeader_ = nullptr;};
    inline string getAddRealClientIpHeader() const { DARABONBA_PTR_GET_DEFAULT(addRealClientIpHeader_, "") };
    inline GetManagedTransformResponseBody& setAddRealClientIpHeader(string addRealClientIpHeader) { DARABONBA_PTR_SET_VALUE(addRealClientIpHeader_, addRealClientIpHeader) };


    // realClientIpHeaderName Field Functions 
    bool hasRealClientIpHeaderName() const { return this->realClientIpHeaderName_ != nullptr;};
    void deleteRealClientIpHeaderName() { this->realClientIpHeaderName_ = nullptr;};
    inline string getRealClientIpHeaderName() const { DARABONBA_PTR_GET_DEFAULT(realClientIpHeaderName_, "") };
    inline GetManagedTransformResponseBody& setRealClientIpHeaderName(string realClientIpHeaderName) { DARABONBA_PTR_SET_VALUE(realClientIpHeaderName_, realClientIpHeaderName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetManagedTransformResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetManagedTransformResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Add visitor geolocation header. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> addClientGeolocationHeader_ {};
    // Add the "ali-real-client-ip" header containing the real client IP. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> addRealClientIpHeader_ {};
    shared_ptr<string> realClientIpHeaderName_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The version number of the site. For sites with version management enabled, this parameter can be used to specify the site version for which the configuration takes effect, defaulting to version 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
