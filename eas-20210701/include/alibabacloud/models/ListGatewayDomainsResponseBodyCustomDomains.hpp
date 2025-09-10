// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYDOMAINSRESPONSEBODYCUSTOMDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYDOMAINSRESPONSEBODYCUSTOMDOMAINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayDomainsResponseBodyCustomDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayDomainsResponseBodyCustomDomains& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateEndDate, certificateEndDate_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_TO_JSON(CertificateStartDate, certificateStartDate_);
      DARABONBA_PTR_TO_JSON(CertificateStatus, certificateStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayDomainsResponseBodyCustomDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateEndDate, certificateEndDate_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_FROM_JSON(CertificateStartDate, certificateStartDate_);
      DARABONBA_PTR_FROM_JSON(CertificateStatus, certificateStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListGatewayDomainsResponseBodyCustomDomains() = default ;
    ListGatewayDomainsResponseBodyCustomDomains(const ListGatewayDomainsResponseBodyCustomDomains &) = default ;
    ListGatewayDomainsResponseBodyCustomDomains(ListGatewayDomainsResponseBodyCustomDomains &&) = default ;
    ListGatewayDomainsResponseBodyCustomDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayDomainsResponseBodyCustomDomains() = default ;
    ListGatewayDomainsResponseBodyCustomDomains& operator=(const ListGatewayDomainsResponseBodyCustomDomains &) = default ;
    ListGatewayDomainsResponseBodyCustomDomains& operator=(ListGatewayDomainsResponseBodyCustomDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateEndDate_ != nullptr
        && this->certificateId_ != nullptr && this->certificateName_ != nullptr && this->certificateStartDate_ != nullptr && this->certificateStatus_ != nullptr && this->createTime_ != nullptr
        && this->domain_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr; };
    // certificateEndDate Field Functions 
    bool hasCertificateEndDate() const { return this->certificateEndDate_ != nullptr;};
    void deleteCertificateEndDate() { this->certificateEndDate_ = nullptr;};
    inline string certificateEndDate() const { DARABONBA_PTR_GET_DEFAULT(certificateEndDate_, "") };
    inline ListGatewayDomainsResponseBodyCustomDomains& setCertificateEndDate(string certificateEndDate) { DARABONBA_PTR_SET_VALUE(certificateEndDate_, certificateEndDate) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline ListGatewayDomainsResponseBodyCustomDomains& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // certificateName Field Functions 
    bool hasCertificateName() const { return this->certificateName_ != nullptr;};
    void deleteCertificateName() { this->certificateName_ = nullptr;};
    inline string certificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
    inline ListGatewayDomainsResponseBodyCustomDomains& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


    // certificateStartDate Field Functions 
    bool hasCertificateStartDate() const { return this->certificateStartDate_ != nullptr;};
    void deleteCertificateStartDate() { this->certificateStartDate_ = nullptr;};
    inline string certificateStartDate() const { DARABONBA_PTR_GET_DEFAULT(certificateStartDate_, "") };
    inline ListGatewayDomainsResponseBodyCustomDomains& setCertificateStartDate(string certificateStartDate) { DARABONBA_PTR_SET_VALUE(certificateStartDate_, certificateStartDate) };


    // certificateStatus Field Functions 
    bool hasCertificateStatus() const { return this->certificateStatus_ != nullptr;};
    void deleteCertificateStatus() { this->certificateStatus_ = nullptr;};
    inline string certificateStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateStatus_, "") };
    inline ListGatewayDomainsResponseBodyCustomDomains& setCertificateStatus(string certificateStatus) { DARABONBA_PTR_SET_VALUE(certificateStatus_, certificateStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListGatewayDomainsResponseBodyCustomDomains& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListGatewayDomainsResponseBodyCustomDomains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGatewayDomainsResponseBodyCustomDomains& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListGatewayDomainsResponseBodyCustomDomains& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> certificateEndDate_ = nullptr;
    // The ID of the SSL certificate bound to the domain name. Obtain the certificate ID after you upload or purchase a certificate in the [Certificate Management Service](https://yundunnext.console.aliyun.com/?spm=5176.2020520163.console-base_help.2.4b3baJixaJixOc\\&p=cas) console.
    std::shared_ptr<string> certificateId_ = nullptr;
    std::shared_ptr<string> certificateName_ = nullptr;
    std::shared_ptr<string> certificateStartDate_ = nullptr;
    std::shared_ptr<string> certificateStatus_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    // The custom domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The domain name type.
    // 
    // Valid value:
    // 
    // *   intranet: internal network.
    // *   internet: public network.
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
