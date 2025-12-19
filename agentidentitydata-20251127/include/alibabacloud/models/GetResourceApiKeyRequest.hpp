// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class GetResourceAPIKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceAPIKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCredentialProviderName, resourceCredentialProviderName_);
      DARABONBA_PTR_TO_JSON(WorkloadAccessToken, workloadAccessToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceAPIKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCredentialProviderName, resourceCredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(WorkloadAccessToken, workloadAccessToken_);
    };
    GetResourceAPIKeyRequest() = default ;
    GetResourceAPIKeyRequest(const GetResourceAPIKeyRequest &) = default ;
    GetResourceAPIKeyRequest(GetResourceAPIKeyRequest &&) = default ;
    GetResourceAPIKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceAPIKeyRequest() = default ;
    GetResourceAPIKeyRequest& operator=(const GetResourceAPIKeyRequest &) = default ;
    GetResourceAPIKeyRequest& operator=(GetResourceAPIKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceCredentialProviderName_ == nullptr
        && return this->workloadAccessToken_ == nullptr; };
    // resourceCredentialProviderName Field Functions 
    bool hasResourceCredentialProviderName() const { return this->resourceCredentialProviderName_ != nullptr;};
    void deleteResourceCredentialProviderName() { this->resourceCredentialProviderName_ = nullptr;};
    inline string resourceCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(resourceCredentialProviderName_, "") };
    inline GetResourceAPIKeyRequest& setResourceCredentialProviderName(string resourceCredentialProviderName) { DARABONBA_PTR_SET_VALUE(resourceCredentialProviderName_, resourceCredentialProviderName) };


    // workloadAccessToken Field Functions 
    bool hasWorkloadAccessToken() const { return this->workloadAccessToken_ != nullptr;};
    void deleteWorkloadAccessToken() { this->workloadAccessToken_ = nullptr;};
    inline string workloadAccessToken() const { DARABONBA_PTR_GET_DEFAULT(workloadAccessToken_, "") };
    inline GetResourceAPIKeyRequest& setWorkloadAccessToken(string workloadAccessToken) { DARABONBA_PTR_SET_VALUE(workloadAccessToken_, workloadAccessToken) };


  protected:
    std::shared_ptr<string> resourceCredentialProviderName_ = nullptr;
    std::shared_ptr<string> workloadAccessToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
