// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROXYBRANDUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROXYBRANDUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UniMkt20181212
{
namespace Models
{
  class CreateProxyBrandUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProxyBrandUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrandUserNick, brandUserNick_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Company, company_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(ContactPhone, contactPhone_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProxyBrandUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandUserNick, brandUserNick_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Company, company_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(ContactPhone, contactPhone_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
    };
    CreateProxyBrandUserRequest() = default ;
    CreateProxyBrandUserRequest(const CreateProxyBrandUserRequest &) = default ;
    CreateProxyBrandUserRequest(CreateProxyBrandUserRequest &&) = default ;
    CreateProxyBrandUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProxyBrandUserRequest() = default ;
    CreateProxyBrandUserRequest& operator=(const CreateProxyBrandUserRequest &) = default ;
    CreateProxyBrandUserRequest& operator=(CreateProxyBrandUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandUserNick_ == nullptr
        && this->channelId_ == nullptr && this->clientToken_ == nullptr && this->company_ == nullptr && this->contactName_ == nullptr && this->contactPhone_ == nullptr
        && this->industry_ == nullptr && this->proxyUserId_ == nullptr; };
    // brandUserNick Field Functions 
    bool hasBrandUserNick() const { return this->brandUserNick_ != nullptr;};
    void deleteBrandUserNick() { this->brandUserNick_ = nullptr;};
    inline string getBrandUserNick() const { DARABONBA_PTR_GET_DEFAULT(brandUserNick_, "") };
    inline CreateProxyBrandUserRequest& setBrandUserNick(string brandUserNick) { DARABONBA_PTR_SET_VALUE(brandUserNick_, brandUserNick) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline CreateProxyBrandUserRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateProxyBrandUserRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // company Field Functions 
    bool hasCompany() const { return this->company_ != nullptr;};
    void deleteCompany() { this->company_ = nullptr;};
    inline string getCompany() const { DARABONBA_PTR_GET_DEFAULT(company_, "") };
    inline CreateProxyBrandUserRequest& setCompany(string company) { DARABONBA_PTR_SET_VALUE(company_, company) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline CreateProxyBrandUserRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // contactPhone Field Functions 
    bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
    void deleteContactPhone() { this->contactPhone_ = nullptr;};
    inline string getContactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
    inline CreateProxyBrandUserRequest& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline CreateProxyBrandUserRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline int64_t getProxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, 0L) };
    inline CreateProxyBrandUserRequest& setProxyUserId(int64_t proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


  protected:
    // This parameter is required.
    shared_ptr<string> brandUserNick_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> company_ {};
    shared_ptr<string> contactName_ {};
    shared_ptr<string> contactPhone_ {};
    // This parameter is required.
    shared_ptr<string> industry_ {};
    // This parameter is required.
    shared_ptr<int64_t> proxyUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UniMkt20181212
#endif
