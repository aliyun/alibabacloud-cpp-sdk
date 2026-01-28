// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINREALNAMEVERIFICATIONINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINREALNAMEVERIFICATIONINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainRealNameVerificationInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainRealNameVerificationInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FetchImage, fetchImage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainRealNameVerificationInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FetchImage, fetchImage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryDomainRealNameVerificationInfoRequest() = default ;
    QueryDomainRealNameVerificationInfoRequest(const QueryDomainRealNameVerificationInfoRequest &) = default ;
    QueryDomainRealNameVerificationInfoRequest(QueryDomainRealNameVerificationInfoRequest &&) = default ;
    QueryDomainRealNameVerificationInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainRealNameVerificationInfoRequest() = default ;
    QueryDomainRealNameVerificationInfoRequest& operator=(const QueryDomainRealNameVerificationInfoRequest &) = default ;
    QueryDomainRealNameVerificationInfoRequest& operator=(QueryDomainRealNameVerificationInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->fetchImage_ == nullptr && this->lang_ == nullptr && this->userClientIp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainRealNameVerificationInfoRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // fetchImage Field Functions 
    bool hasFetchImage() const { return this->fetchImage_ != nullptr;};
    void deleteFetchImage() { this->fetchImage_ = nullptr;};
    inline bool getFetchImage() const { DARABONBA_PTR_GET_DEFAULT(fetchImage_, false) };
    inline QueryDomainRealNameVerificationInfoRequest& setFetchImage(bool fetchImage) { DARABONBA_PTR_SET_VALUE(fetchImage_, fetchImage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryDomainRealNameVerificationInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryDomainRealNameVerificationInfoRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<bool> fetchImage_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
