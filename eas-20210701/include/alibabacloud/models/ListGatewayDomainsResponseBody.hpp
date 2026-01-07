// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomDomains, customDomains_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomDomains, customDomains_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGatewayDomainsResponseBody() = default ;
    ListGatewayDomainsResponseBody(const ListGatewayDomainsResponseBody &) = default ;
    ListGatewayDomainsResponseBody(ListGatewayDomainsResponseBody &&) = default ;
    ListGatewayDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayDomainsResponseBody() = default ;
    ListGatewayDomainsResponseBody& operator=(const ListGatewayDomainsResponseBody &) = default ;
    ListGatewayDomainsResponseBody& operator=(ListGatewayDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomDomains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomDomains& obj) { 
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
      friend void from_json(const Darabonba::Json& j, CustomDomains& obj) { 
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
      CustomDomains() = default ;
      CustomDomains(const CustomDomains &) = default ;
      CustomDomains(CustomDomains &&) = default ;
      CustomDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomDomains() = default ;
      CustomDomains& operator=(const CustomDomains &) = default ;
      CustomDomains& operator=(CustomDomains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certificateEndDate_ == nullptr
        && this->certificateId_ == nullptr && this->certificateName_ == nullptr && this->certificateStartDate_ == nullptr && this->certificateStatus_ == nullptr && this->createTime_ == nullptr
        && this->domain_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
      // certificateEndDate Field Functions 
      bool hasCertificateEndDate() const { return this->certificateEndDate_ != nullptr;};
      void deleteCertificateEndDate() { this->certificateEndDate_ = nullptr;};
      inline string getCertificateEndDate() const { DARABONBA_PTR_GET_DEFAULT(certificateEndDate_, "") };
      inline CustomDomains& setCertificateEndDate(string certificateEndDate) { DARABONBA_PTR_SET_VALUE(certificateEndDate_, certificateEndDate) };


      // certificateId Field Functions 
      bool hasCertificateId() const { return this->certificateId_ != nullptr;};
      void deleteCertificateId() { this->certificateId_ = nullptr;};
      inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
      inline CustomDomains& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


      // certificateName Field Functions 
      bool hasCertificateName() const { return this->certificateName_ != nullptr;};
      void deleteCertificateName() { this->certificateName_ = nullptr;};
      inline string getCertificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
      inline CustomDomains& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


      // certificateStartDate Field Functions 
      bool hasCertificateStartDate() const { return this->certificateStartDate_ != nullptr;};
      void deleteCertificateStartDate() { this->certificateStartDate_ = nullptr;};
      inline string getCertificateStartDate() const { DARABONBA_PTR_GET_DEFAULT(certificateStartDate_, "") };
      inline CustomDomains& setCertificateStartDate(string certificateStartDate) { DARABONBA_PTR_SET_VALUE(certificateStartDate_, certificateStartDate) };


      // certificateStatus Field Functions 
      bool hasCertificateStatus() const { return this->certificateStatus_ != nullptr;};
      void deleteCertificateStatus() { this->certificateStatus_ = nullptr;};
      inline string getCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateStatus_, "") };
      inline CustomDomains& setCertificateStatus(string certificateStatus) { DARABONBA_PTR_SET_VALUE(certificateStatus_, certificateStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline CustomDomains& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline CustomDomains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CustomDomains& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline CustomDomains& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> certificateEndDate_ {};
      // The ID of the SSL certificate bound to the domain name. Obtain the certificate ID after you upload or purchase a certificate in the [Certificate Management Service](https://yundunnext.console.aliyun.com/?spm=5176.2020520163.console-base_help.2.4b3baJixaJixOc\\&p=cas) console.
      shared_ptr<string> certificateId_ {};
      shared_ptr<string> certificateName_ {};
      shared_ptr<string> certificateStartDate_ {};
      shared_ptr<string> certificateStatus_ {};
      shared_ptr<string> createTime_ {};
      // The custom domain name.
      shared_ptr<string> domain_ {};
      // The domain name type.
      // 
      // Valid value:
      // 
      // *   intranet: internal network.
      // *   internet: public network.
      shared_ptr<string> type_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->customDomains_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
    // customDomains Field Functions 
    bool hasCustomDomains() const { return this->customDomains_ != nullptr;};
    void deleteCustomDomains() { this->customDomains_ = nullptr;};
    inline const vector<ListGatewayDomainsResponseBody::CustomDomains> & getCustomDomains() const { DARABONBA_PTR_GET_CONST(customDomains_, vector<ListGatewayDomainsResponseBody::CustomDomains>) };
    inline vector<ListGatewayDomainsResponseBody::CustomDomains> getCustomDomains() { DARABONBA_PTR_GET(customDomains_, vector<ListGatewayDomainsResponseBody::CustomDomains>) };
    inline ListGatewayDomainsResponseBody& setCustomDomains(const vector<ListGatewayDomainsResponseBody::CustomDomains> & customDomains) { DARABONBA_PTR_SET_VALUE(customDomains_, customDomains) };
    inline ListGatewayDomainsResponseBody& setCustomDomains(vector<ListGatewayDomainsResponseBody::CustomDomains> && customDomains) { DARABONBA_PTR_SET_RVALUE(customDomains_, customDomains) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewayDomainsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The custom domain names.
    shared_ptr<vector<ListGatewayDomainsResponseBody::CustomDomains>> customDomains_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
