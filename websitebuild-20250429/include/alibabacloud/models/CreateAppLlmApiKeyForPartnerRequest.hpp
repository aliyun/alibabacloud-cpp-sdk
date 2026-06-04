// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLLMAPIKEYFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLLMAPIKEYFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateAppLlmApiKeyForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppLlmApiKeyForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IpWhiteList, ipWhiteList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppLlmApiKeyForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IpWhiteList, ipWhiteList_);
    };
    CreateAppLlmApiKeyForPartnerRequest() = default ;
    CreateAppLlmApiKeyForPartnerRequest(const CreateAppLlmApiKeyForPartnerRequest &) = default ;
    CreateAppLlmApiKeyForPartnerRequest(CreateAppLlmApiKeyForPartnerRequest &&) = default ;
    CreateAppLlmApiKeyForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppLlmApiKeyForPartnerRequest() = default ;
    CreateAppLlmApiKeyForPartnerRequest& operator=(const CreateAppLlmApiKeyForPartnerRequest &) = default ;
    CreateAppLlmApiKeyForPartnerRequest& operator=(CreateAppLlmApiKeyForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->ipWhiteList_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline CreateAppLlmApiKeyForPartnerRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAppLlmApiKeyForPartnerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppLlmApiKeyForPartnerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipWhiteList Field Functions 
    bool hasIpWhiteList() const { return this->ipWhiteList_ != nullptr;};
    void deleteIpWhiteList() { this->ipWhiteList_ = nullptr;};
    inline const vector<string> & getIpWhiteList() const { DARABONBA_PTR_GET_CONST(ipWhiteList_, vector<string>) };
    inline vector<string> getIpWhiteList() { DARABONBA_PTR_GET(ipWhiteList_, vector<string>) };
    inline CreateAppLlmApiKeyForPartnerRequest& setIpWhiteList(const vector<string> & ipWhiteList) { DARABONBA_PTR_SET_VALUE(ipWhiteList_, ipWhiteList) };
    inline CreateAppLlmApiKeyForPartnerRequest& setIpWhiteList(vector<string> && ipWhiteList) { DARABONBA_PTR_SET_RVALUE(ipWhiteList_, ipWhiteList) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<vector<string>> ipWhiteList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
