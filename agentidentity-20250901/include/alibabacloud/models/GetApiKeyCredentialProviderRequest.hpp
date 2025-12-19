// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIKEYCREDENTIALPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPIKEYCREDENTIALPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetAPIKeyCredentialProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAPIKeyCredentialProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(APIKeyCredentialProviderName, APIKeyCredentialProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAPIKeyCredentialProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKeyCredentialProviderName, APIKeyCredentialProviderName_);
    };
    GetAPIKeyCredentialProviderRequest() = default ;
    GetAPIKeyCredentialProviderRequest(const GetAPIKeyCredentialProviderRequest &) = default ;
    GetAPIKeyCredentialProviderRequest(GetAPIKeyCredentialProviderRequest &&) = default ;
    GetAPIKeyCredentialProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAPIKeyCredentialProviderRequest() = default ;
    GetAPIKeyCredentialProviderRequest& operator=(const GetAPIKeyCredentialProviderRequest &) = default ;
    GetAPIKeyCredentialProviderRequest& operator=(GetAPIKeyCredentialProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->APIKeyCredentialProviderName_ == nullptr; };
    // APIKeyCredentialProviderName Field Functions 
    bool hasAPIKeyCredentialProviderName() const { return this->APIKeyCredentialProviderName_ != nullptr;};
    void deleteAPIKeyCredentialProviderName() { this->APIKeyCredentialProviderName_ = nullptr;};
    inline string APIKeyCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(APIKeyCredentialProviderName_, "") };
    inline GetAPIKeyCredentialProviderRequest& setAPIKeyCredentialProviderName(string APIKeyCredentialProviderName) { DARABONBA_PTR_SET_VALUE(APIKeyCredentialProviderName_, APIKeyCredentialProviderName) };


  protected:
    std::shared_ptr<string> APIKeyCredentialProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
