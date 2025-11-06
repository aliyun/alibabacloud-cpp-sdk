// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERACCESSTOKENFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERACCESSTOKENFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetUserAccessTokenForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserAccessTokenForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteHost, siteHost_);
      DARABONBA_PTR_TO_JSON(Ticket, ticket_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserAccessTokenForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteHost, siteHost_);
      DARABONBA_PTR_FROM_JSON(Ticket, ticket_);
    };
    GetUserAccessTokenForPartnerRequest() = default ;
    GetUserAccessTokenForPartnerRequest(const GetUserAccessTokenForPartnerRequest &) = default ;
    GetUserAccessTokenForPartnerRequest(GetUserAccessTokenForPartnerRequest &&) = default ;
    GetUserAccessTokenForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserAccessTokenForPartnerRequest() = default ;
    GetUserAccessTokenForPartnerRequest& operator=(const GetUserAccessTokenForPartnerRequest &) = default ;
    GetUserAccessTokenForPartnerRequest& operator=(GetUserAccessTokenForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteHost_ == nullptr
        && return this->ticket_ == nullptr; };
    // siteHost Field Functions 
    bool hasSiteHost() const { return this->siteHost_ != nullptr;};
    void deleteSiteHost() { this->siteHost_ = nullptr;};
    inline string siteHost() const { DARABONBA_PTR_GET_DEFAULT(siteHost_, "") };
    inline GetUserAccessTokenForPartnerRequest& setSiteHost(string siteHost) { DARABONBA_PTR_SET_VALUE(siteHost_, siteHost) };


    // ticket Field Functions 
    bool hasTicket() const { return this->ticket_ != nullptr;};
    void deleteTicket() { this->ticket_ = nullptr;};
    inline string ticket() const { DARABONBA_PTR_GET_DEFAULT(ticket_, "") };
    inline GetUserAccessTokenForPartnerRequest& setTicket(string ticket) { DARABONBA_PTR_SET_VALUE(ticket_, ticket) };


  protected:
    std::shared_ptr<string> siteHost_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ticket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
