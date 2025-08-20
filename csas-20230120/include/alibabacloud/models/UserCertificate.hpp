// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERCERTIFICATE_HPP_
#define ALIBABACLOUD_MODELS_USERCERTIFICATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UserCertificate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserCertificate& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DnsNames, dnsNames_);
      DARABONBA_PTR_TO_JSON(ExpTimeUnix, expTimeUnix_);
      DARABONBA_PTR_TO_JSON(GmtCreateUnix, gmtCreateUnix_);
      DARABONBA_PTR_TO_JSON(GmtModifiedUnix, gmtModifiedUnix_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
    };
    friend void from_json(const Darabonba::Json& j, UserCertificate& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DnsNames, dnsNames_);
      DARABONBA_PTR_FROM_JSON(ExpTimeUnix, expTimeUnix_);
      DARABONBA_PTR_FROM_JSON(GmtCreateUnix, gmtCreateUnix_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedUnix, gmtModifiedUnix_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
    };
    UserCertificate() = default ;
    UserCertificate(const UserCertificate &) = default ;
    UserCertificate(UserCertificate &&) = default ;
    UserCertificate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserCertificate() = default ;
    UserCertificate& operator=(const UserCertificate &) = default ;
    UserCertificate& operator=(UserCertificate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certId_ != nullptr
        && this->certificate_ != nullptr && this->description_ != nullptr && this->dnsNames_ != nullptr && this->expTimeUnix_ != nullptr && this->gmtCreateUnix_ != nullptr
        && this->gmtModifiedUnix_ != nullptr && this->name_ != nullptr && this->privateKey_ != nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline UserCertificate& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline UserCertificate& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UserCertificate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dnsNames Field Functions 
    bool hasDnsNames() const { return this->dnsNames_ != nullptr;};
    void deleteDnsNames() { this->dnsNames_ = nullptr;};
    inline const vector<string> & dnsNames() const { DARABONBA_PTR_GET_CONST(dnsNames_, vector<string>) };
    inline vector<string> dnsNames() { DARABONBA_PTR_GET(dnsNames_, vector<string>) };
    inline UserCertificate& setDnsNames(const vector<string> & dnsNames) { DARABONBA_PTR_SET_VALUE(dnsNames_, dnsNames) };
    inline UserCertificate& setDnsNames(vector<string> && dnsNames) { DARABONBA_PTR_SET_RVALUE(dnsNames_, dnsNames) };


    // expTimeUnix Field Functions 
    bool hasExpTimeUnix() const { return this->expTimeUnix_ != nullptr;};
    void deleteExpTimeUnix() { this->expTimeUnix_ = nullptr;};
    inline int64_t expTimeUnix() const { DARABONBA_PTR_GET_DEFAULT(expTimeUnix_, 0L) };
    inline UserCertificate& setExpTimeUnix(int64_t expTimeUnix) { DARABONBA_PTR_SET_VALUE(expTimeUnix_, expTimeUnix) };


    // gmtCreateUnix Field Functions 
    bool hasGmtCreateUnix() const { return this->gmtCreateUnix_ != nullptr;};
    void deleteGmtCreateUnix() { this->gmtCreateUnix_ = nullptr;};
    inline int64_t gmtCreateUnix() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateUnix_, 0L) };
    inline UserCertificate& setGmtCreateUnix(int64_t gmtCreateUnix) { DARABONBA_PTR_SET_VALUE(gmtCreateUnix_, gmtCreateUnix) };


    // gmtModifiedUnix Field Functions 
    bool hasGmtModifiedUnix() const { return this->gmtModifiedUnix_ != nullptr;};
    void deleteGmtModifiedUnix() { this->gmtModifiedUnix_ = nullptr;};
    inline int64_t gmtModifiedUnix() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedUnix_, 0L) };
    inline UserCertificate& setGmtModifiedUnix(int64_t gmtModifiedUnix) { DARABONBA_PTR_SET_VALUE(gmtModifiedUnix_, gmtModifiedUnix) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UserCertificate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string privateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline UserCertificate& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


  protected:
    std::shared_ptr<string> certId_ = nullptr;
    std::shared_ptr<string> certificate_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<string>> dnsNames_ = nullptr;
    std::shared_ptr<int64_t> expTimeUnix_ = nullptr;
    std::shared_ptr<int64_t> gmtCreateUnix_ = nullptr;
    std::shared_ptr<int64_t> gmtModifiedUnix_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> privateKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
