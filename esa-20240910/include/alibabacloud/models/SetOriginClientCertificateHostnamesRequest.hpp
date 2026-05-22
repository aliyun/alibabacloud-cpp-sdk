// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETORIGINCLIENTCERTIFICATEHOSTNAMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETORIGINCLIENTCERTIFICATEHOSTNAMESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetOriginClientCertificateHostnamesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetOriginClientCertificateHostnamesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, SetOriginClientCertificateHostnamesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    SetOriginClientCertificateHostnamesRequest() = default ;
    SetOriginClientCertificateHostnamesRequest(const SetOriginClientCertificateHostnamesRequest &) = default ;
    SetOriginClientCertificateHostnamesRequest(SetOriginClientCertificateHostnamesRequest &&) = default ;
    SetOriginClientCertificateHostnamesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetOriginClientCertificateHostnamesRequest() = default ;
    SetOriginClientCertificateHostnamesRequest& operator=(const SetOriginClientCertificateHostnamesRequest &) = default ;
    SetOriginClientCertificateHostnamesRequest& operator=(SetOriginClientCertificateHostnamesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostnames_ == nullptr
        && this->id_ == nullptr && this->siteId_ == nullptr; };
    // hostnames Field Functions 
    bool hasHostnames() const { return this->hostnames_ != nullptr;};
    void deleteHostnames() { this->hostnames_ = nullptr;};
    inline const vector<string> & getHostnames() const { DARABONBA_PTR_GET_CONST(hostnames_, vector<string>) };
    inline vector<string> getHostnames() { DARABONBA_PTR_GET(hostnames_, vector<string>) };
    inline SetOriginClientCertificateHostnamesRequest& setHostnames(const vector<string> & hostnames) { DARABONBA_PTR_SET_VALUE(hostnames_, hostnames) };
    inline SetOriginClientCertificateHostnamesRequest& setHostnames(vector<string> && hostnames) { DARABONBA_PTR_SET_RVALUE(hostnames_, hostnames) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SetOriginClientCertificateHostnamesRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline SetOriginClientCertificateHostnamesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The domain names to associate.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> hostnames_ {};
    // The certificate ID.
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
