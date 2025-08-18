// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESITERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateSiteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NameServerList, nameServerList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NameServerList, nameServerList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
    };
    CreateSiteResponseBody() = default ;
    CreateSiteResponseBody(const CreateSiteResponseBody &) = default ;
    CreateSiteResponseBody(CreateSiteResponseBody &&) = default ;
    CreateSiteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteResponseBody() = default ;
    CreateSiteResponseBody& operator=(const CreateSiteResponseBody &) = default ;
    CreateSiteResponseBody& operator=(CreateSiteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nameServerList_ != nullptr
        && this->requestId_ != nullptr && this->siteId_ != nullptr && this->verifyCode_ != nullptr; };
    // nameServerList Field Functions 
    bool hasNameServerList() const { return this->nameServerList_ != nullptr;};
    void deleteNameServerList() { this->nameServerList_ = nullptr;};
    inline string nameServerList() const { DARABONBA_PTR_GET_DEFAULT(nameServerList_, "") };
    inline CreateSiteResponseBody& setNameServerList(string nameServerList) { DARABONBA_PTR_SET_VALUE(nameServerList_, nameServerList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSiteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateSiteResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // verifyCode Field Functions 
    bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
    void deleteVerifyCode() { this->verifyCode_ = nullptr;};
    inline string verifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
    inline CreateSiteResponseBody& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


  protected:
    // The nameservers assigned by ESA. The values are separated by commas (,). This parameter is returned if you set AccessType to NS. In this case, you must change the nameservers of your domain to the assigned ones. Then, you can verify the domain ownership and activate your website.
    std::shared_ptr<string> nameServerList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The verification code for the website. If you set AccessType to CNAME, you need to add a TXT record whose hostname is **_esaauth.[websiteDomainName]** and record value is the value of VerifyCode to the DNS records of your domain. ****Then, you can verify the domain ownership and activate your website.
    std::shared_ptr<string> verifyCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
