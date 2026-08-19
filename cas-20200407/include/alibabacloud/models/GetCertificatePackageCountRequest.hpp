// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATEPACKAGECOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATEPACKAGECOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetCertificatePackageCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificatePackageCountRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetCertificatePackageCountRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetCertificatePackageCountRequest() = default ;
    GetCertificatePackageCountRequest(const GetCertificatePackageCountRequest &) = default ;
    GetCertificatePackageCountRequest(GetCertificatePackageCountRequest &&) = default ;
    GetCertificatePackageCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificatePackageCountRequest() = default ;
    GetCertificatePackageCountRequest& operator=(const GetCertificatePackageCountRequest &) = default ;
    GetCertificatePackageCountRequest& operator=(GetCertificatePackageCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
