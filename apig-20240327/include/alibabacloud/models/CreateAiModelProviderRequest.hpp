// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIMODELPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIMODELPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateAiModelProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAiModelProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(serviceIds, serviceIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAiModelProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(serviceIds, serviceIds_);
    };
    CreateAiModelProviderRequest() = default ;
    CreateAiModelProviderRequest(const CreateAiModelProviderRequest &) = default ;
    CreateAiModelProviderRequest(CreateAiModelProviderRequest &&) = default ;
    CreateAiModelProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAiModelProviderRequest() = default ;
    CreateAiModelProviderRequest& operator=(const CreateAiModelProviderRequest &) = default ;
    CreateAiModelProviderRequest& operator=(CreateAiModelProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->gatewayId_ == nullptr && this->provider_ == nullptr && this->serviceIds_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateAiModelProviderRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateAiModelProviderRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline CreateAiModelProviderRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // serviceIds Field Functions 
    bool hasServiceIds() const { return this->serviceIds_ != nullptr;};
    void deleteServiceIds() { this->serviceIds_ = nullptr;};
    inline const vector<string> & getServiceIds() const { DARABONBA_PTR_GET_CONST(serviceIds_, vector<string>) };
    inline vector<string> getServiceIds() { DARABONBA_PTR_GET(serviceIds_, vector<string>) };
    inline CreateAiModelProviderRequest& setServiceIds(const vector<string> & serviceIds) { DARABONBA_PTR_SET_VALUE(serviceIds_, serviceIds) };
    inline CreateAiModelProviderRequest& setServiceIds(vector<string> && serviceIds) { DARABONBA_PTR_SET_RVALUE(serviceIds_, serviceIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // This parameter is required.
    shared_ptr<string> gatewayId_ {};
    // This parameter is required.
    shared_ptr<string> provider_ {};
    shared_ptr<vector<string>> serviceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
