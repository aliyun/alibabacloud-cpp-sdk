// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDRMLICENSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDRMLICENSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDRMLicenseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDRMLicenseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(License, license_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDRMLicenseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(License, license_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDRMLicenseResponseBody() = default ;
    GetDRMLicenseResponseBody(const GetDRMLicenseResponseBody &) = default ;
    GetDRMLicenseResponseBody(GetDRMLicenseResponseBody &&) = default ;
    GetDRMLicenseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDRMLicenseResponseBody() = default ;
    GetDRMLicenseResponseBody& operator=(const GetDRMLicenseResponseBody &) = default ;
    GetDRMLicenseResponseBody& operator=(GetDRMLicenseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->license_ != nullptr
        && this->requestId_ != nullptr; };
    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline string license() const { DARABONBA_PTR_GET_DEFAULT(license_, "") };
    inline GetDRMLicenseResponseBody& setLicense(string license) { DARABONBA_PTR_SET_VALUE(license_, license) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDRMLicenseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> license_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
