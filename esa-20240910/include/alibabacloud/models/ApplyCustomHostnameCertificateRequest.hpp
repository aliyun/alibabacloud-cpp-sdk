// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCUSTOMHOSTNAMECERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYCUSTOMHOSTNAMECERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ApplyCustomHostnameCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCustomHostnameCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostnameId, hostnameId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCustomHostnameCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostnameId, hostnameId_);
    };
    ApplyCustomHostnameCertificateRequest() = default ;
    ApplyCustomHostnameCertificateRequest(const ApplyCustomHostnameCertificateRequest &) = default ;
    ApplyCustomHostnameCertificateRequest(ApplyCustomHostnameCertificateRequest &&) = default ;
    ApplyCustomHostnameCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCustomHostnameCertificateRequest() = default ;
    ApplyCustomHostnameCertificateRequest& operator=(const ApplyCustomHostnameCertificateRequest &) = default ;
    ApplyCustomHostnameCertificateRequest& operator=(ApplyCustomHostnameCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostnameId_ == nullptr; };
    // hostnameId Field Functions 
    bool hasHostnameId() const { return this->hostnameId_ != nullptr;};
    void deleteHostnameId() { this->hostnameId_ = nullptr;};
    inline int64_t getHostnameId() const { DARABONBA_PTR_GET_DEFAULT(hostnameId_, 0L) };
    inline ApplyCustomHostnameCertificateRequest& setHostnameId(int64_t hostnameId) { DARABONBA_PTR_SET_VALUE(hostnameId_, hostnameId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> hostnameId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
