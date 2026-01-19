// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINCLIENTCERTIFICATEHOSTNAMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINCLIENTCERTIFICATEHOSTNAMESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginClientCertificateHostnamesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginClientCertificateHostnamesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginClientCertificateHostnamesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetOriginClientCertificateHostnamesRequest() = default ;
    GetOriginClientCertificateHostnamesRequest(const GetOriginClientCertificateHostnamesRequest &) = default ;
    GetOriginClientCertificateHostnamesRequest(GetOriginClientCertificateHostnamesRequest &&) = default ;
    GetOriginClientCertificateHostnamesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginClientCertificateHostnamesRequest() = default ;
    GetOriginClientCertificateHostnamesRequest& operator=(const GetOriginClientCertificateHostnamesRequest &) = default ;
    GetOriginClientCertificateHostnamesRequest& operator=(GetOriginClientCertificateHostnamesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->siteId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetOriginClientCertificateHostnamesRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetOriginClientCertificateHostnamesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The ID of the certificate.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
