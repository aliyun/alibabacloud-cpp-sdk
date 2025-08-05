// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODYDATACONNECTIONSAUTHPARAMETERSAPIKEYAUTHPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODYDATACONNECTIONSAUTHPARAMETERSAPIKEYAUTHPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeyName, apiKeyName_);
      DARABONBA_PTR_TO_JSON(ApiKeyValue, apiKeyValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyName, apiKeyName_);
      DARABONBA_PTR_FROM_JSON(ApiKeyValue, apiKeyValue_);
    };
    ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters() = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters(const ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters &) = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters(ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters &&) = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters() = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters& operator=(const ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters &) = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters& operator=(ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiKeyName_ != nullptr
        && this->apiKeyValue_ != nullptr; };
    // apiKeyName Field Functions 
    bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
    void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
    inline string apiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


    // apiKeyValue Field Functions 
    bool hasApiKeyValue() const { return this->apiKeyValue_ != nullptr;};
    void deleteApiKeyValue() { this->apiKeyValue_ = nullptr;};
    inline string apiKeyValue() const { DARABONBA_PTR_GET_DEFAULT(apiKeyValue_, "") };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters& setApiKeyValue(string apiKeyValue) { DARABONBA_PTR_SET_VALUE(apiKeyValue_, apiKeyValue) };


  protected:
    // The key of the API key.
    std::shared_ptr<string> apiKeyName_ = nullptr;
    // The value of the API key.
    std::shared_ptr<string> apiKeyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
