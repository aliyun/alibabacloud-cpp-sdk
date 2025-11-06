// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORGENERATEDOMAINCERTIFICATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORGENERATEDOMAINCERTIFICATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForGenerateDomainCertificateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForGenerateDomainCertificateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNamesShrink_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForGenerateDomainCertificateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNamesShrink_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveBatchTaskForGenerateDomainCertificateShrinkRequest() = default ;
    SaveBatchTaskForGenerateDomainCertificateShrinkRequest(const SaveBatchTaskForGenerateDomainCertificateShrinkRequest &) = default ;
    SaveBatchTaskForGenerateDomainCertificateShrinkRequest(SaveBatchTaskForGenerateDomainCertificateShrinkRequest &&) = default ;
    SaveBatchTaskForGenerateDomainCertificateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForGenerateDomainCertificateShrinkRequest() = default ;
    SaveBatchTaskForGenerateDomainCertificateShrinkRequest& operator=(const SaveBatchTaskForGenerateDomainCertificateShrinkRequest &) = default ;
    SaveBatchTaskForGenerateDomainCertificateShrinkRequest& operator=(SaveBatchTaskForGenerateDomainCertificateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainNamesShrink_ == nullptr
        && return this->lang_ == nullptr && return this->userClientIp_ == nullptr; };
    // domainNamesShrink Field Functions 
    bool hasDomainNamesShrink() const { return this->domainNamesShrink_ != nullptr;};
    void deleteDomainNamesShrink() { this->domainNamesShrink_ = nullptr;};
    inline string domainNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(domainNamesShrink_, "") };
    inline SaveBatchTaskForGenerateDomainCertificateShrinkRequest& setDomainNamesShrink(string domainNamesShrink) { DARABONBA_PTR_SET_VALUE(domainNamesShrink_, domainNamesShrink) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForGenerateDomainCertificateShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForGenerateDomainCertificateShrinkRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The domain names.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainNamesShrink_ = nullptr;
    // The language of the error message to return if the request fails. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    // 
    // Default value: **en**.
    std::shared_ptr<string> lang_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
