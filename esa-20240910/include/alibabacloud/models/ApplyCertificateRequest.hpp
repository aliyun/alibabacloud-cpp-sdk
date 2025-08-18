// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ApplyCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ApplyCertificateRequest() = default ;
    ApplyCertificateRequest(const ApplyCertificateRequest &) = default ;
    ApplyCertificateRequest(ApplyCertificateRequest &&) = default ;
    ApplyCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCertificateRequest() = default ;
    ApplyCertificateRequest& operator=(const ApplyCertificateRequest &) = default ;
    ApplyCertificateRequest& operator=(ApplyCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domains_ != nullptr
        && this->siteId_ != nullptr && this->type_ != nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline string domains() const { DARABONBA_PTR_GET_DEFAULT(domains_, "") };
    inline ApplyCertificateRequest& setDomains(string domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ApplyCertificateRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ApplyCertificateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // List of domains, separated by commas.
    // 
    // This parameter is required.
    std::shared_ptr<string> domains_ = nullptr;
    // Site ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The certificate type. Valid values: lets_encrypt, digicert_single, and digicert_wildcard.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
