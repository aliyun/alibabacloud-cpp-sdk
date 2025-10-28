// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SSECRETSRESPONSEBODYRESULTSECRETSCERTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SSECRETSRESPONSEBODYRESULTSECRETSCERTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sSecretsResponseBodyResultSecretsCertDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sSecretsResponseBodyResultSecretsCertDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sSecretsResponseBodyResultSecretsCertDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListK8sSecretsResponseBodyResultSecretsCertDetail() = default ;
    ListK8sSecretsResponseBodyResultSecretsCertDetail(const ListK8sSecretsResponseBodyResultSecretsCertDetail &) = default ;
    ListK8sSecretsResponseBodyResultSecretsCertDetail(ListK8sSecretsResponseBodyResultSecretsCertDetail &&) = default ;
    ListK8sSecretsResponseBodyResultSecretsCertDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sSecretsResponseBodyResultSecretsCertDetail() = default ;
    ListK8sSecretsResponseBodyResultSecretsCertDetail& operator=(const ListK8sSecretsResponseBodyResultSecretsCertDetail &) = default ;
    ListK8sSecretsResponseBodyResultSecretsCertDetail& operator=(ListK8sSecretsResponseBodyResultSecretsCertDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainNames_ == nullptr
        && return this->endTime_ == nullptr && return this->issuer_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline const vector<string> & domainNames() const { DARABONBA_PTR_GET_CONST(domainNames_, vector<string>) };
    inline vector<string> domainNames() { DARABONBA_PTR_GET(domainNames_, vector<string>) };
    inline ListK8sSecretsResponseBodyResultSecretsCertDetail& setDomainNames(const vector<string> & domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };
    inline ListK8sSecretsResponseBodyResultSecretsCertDetail& setDomainNames(vector<string> && domainNames) { DARABONBA_PTR_SET_RVALUE(domainNames_, domainNames) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListK8sSecretsResponseBodyResultSecretsCertDetail& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline ListK8sSecretsResponseBodyResultSecretsCertDetail& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListK8sSecretsResponseBodyResultSecretsCertDetail& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListK8sSecretsResponseBodyResultSecretsCertDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Domain names that are associated with the SSL certificate.
    std::shared_ptr<vector<string>> domainNames_ = nullptr;
    // The time when the SSL certificate expired.
    std::shared_ptr<string> endTime_ = nullptr;
    // The certificate authority (CA) that issued the SSL certificate.
    std::shared_ptr<string> issuer_ = nullptr;
    // The time when the SSL certificate started to take effect.
    std::shared_ptr<string> startTime_ = nullptr;
    // The state of the SSL certificate. Valid values:
    // 
    // *   normal: The SSL certificate is valid.
    // *   invalid: The SSL certificate is invalid.
    // *   expired: The SSL certificate has expired.
    // *   not_yet_valid: The SSL certificate is currently invalid.
    // *   about_to_expire: The SSL certificate is about to expire.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
