// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIKEYCREDENTIALPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIKEYCREDENTIALPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class UpdateAPIKeyCredentialProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAPIKeyCredentialProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(APIKey, APIKey_);
      DARABONBA_PTR_TO_JSON(APIKeyCredentialProviderName, APIKeyCredentialProviderName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAPIKeyCredentialProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKey, APIKey_);
      DARABONBA_PTR_FROM_JSON(APIKeyCredentialProviderName, APIKeyCredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    UpdateAPIKeyCredentialProviderRequest() = default ;
    UpdateAPIKeyCredentialProviderRequest(const UpdateAPIKeyCredentialProviderRequest &) = default ;
    UpdateAPIKeyCredentialProviderRequest(UpdateAPIKeyCredentialProviderRequest &&) = default ;
    UpdateAPIKeyCredentialProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAPIKeyCredentialProviderRequest() = default ;
    UpdateAPIKeyCredentialProviderRequest& operator=(const UpdateAPIKeyCredentialProviderRequest &) = default ;
    UpdateAPIKeyCredentialProviderRequest& operator=(UpdateAPIKeyCredentialProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->APIKey_ == nullptr
        && return this->APIKeyCredentialProviderName_ == nullptr && return this->description_ == nullptr; };
    // APIKey Field Functions 
    bool hasAPIKey() const { return this->APIKey_ != nullptr;};
    void deleteAPIKey() { this->APIKey_ = nullptr;};
    inline string APIKey() const { DARABONBA_PTR_GET_DEFAULT(APIKey_, "") };
    inline UpdateAPIKeyCredentialProviderRequest& setAPIKey(string APIKey) { DARABONBA_PTR_SET_VALUE(APIKey_, APIKey) };


    // APIKeyCredentialProviderName Field Functions 
    bool hasAPIKeyCredentialProviderName() const { return this->APIKeyCredentialProviderName_ != nullptr;};
    void deleteAPIKeyCredentialProviderName() { this->APIKeyCredentialProviderName_ = nullptr;};
    inline string APIKeyCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(APIKeyCredentialProviderName_, "") };
    inline UpdateAPIKeyCredentialProviderRequest& setAPIKeyCredentialProviderName(string APIKeyCredentialProviderName) { DARABONBA_PTR_SET_VALUE(APIKeyCredentialProviderName_, APIKeyCredentialProviderName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAPIKeyCredentialProviderRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    std::shared_ptr<string> APIKey_ = nullptr;
    std::shared_ptr<string> APIKeyCredentialProviderName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
