// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASEBOTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PURCHASEBOTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PurchaseBotInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseBotInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BotInstanceLevel, botInstanceLevel_);
      DARABONBA_PTR_TO_JSON(SiteInstanceId, siteInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseBotInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BotInstanceLevel, botInstanceLevel_);
      DARABONBA_PTR_FROM_JSON(SiteInstanceId, siteInstanceId_);
    };
    PurchaseBotInstanceRequest() = default ;
    PurchaseBotInstanceRequest(const PurchaseBotInstanceRequest &) = default ;
    PurchaseBotInstanceRequest(PurchaseBotInstanceRequest &&) = default ;
    PurchaseBotInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseBotInstanceRequest() = default ;
    PurchaseBotInstanceRequest& operator=(const PurchaseBotInstanceRequest &) = default ;
    PurchaseBotInstanceRequest& operator=(PurchaseBotInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->botInstanceLevel_ == nullptr
        && this->siteInstanceId_ == nullptr; };
    // botInstanceLevel Field Functions 
    bool hasBotInstanceLevel() const { return this->botInstanceLevel_ != nullptr;};
    void deleteBotInstanceLevel() { this->botInstanceLevel_ = nullptr;};
    inline string getBotInstanceLevel() const { DARABONBA_PTR_GET_DEFAULT(botInstanceLevel_, "") };
    inline PurchaseBotInstanceRequest& setBotInstanceLevel(string botInstanceLevel) { DARABONBA_PTR_SET_VALUE(botInstanceLevel_, botInstanceLevel) };


    // siteInstanceId Field Functions 
    bool hasSiteInstanceId() const { return this->siteInstanceId_ != nullptr;};
    void deleteSiteInstanceId() { this->siteInstanceId_ = nullptr;};
    inline string getSiteInstanceId() const { DARABONBA_PTR_GET_DEFAULT(siteInstanceId_, "") };
    inline PurchaseBotInstanceRequest& setSiteInstanceId(string siteInstanceId) { DARABONBA_PTR_SET_VALUE(siteInstanceId_, siteInstanceId) };


  protected:
    // The bot instance specifications.
    // 
    // This parameter is required.
    shared_ptr<string> botInstanceLevel_ {};
    // The site instance.
    // 
    // This parameter is required.
    shared_ptr<string> siteInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
