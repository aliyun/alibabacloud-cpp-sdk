// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
    };
    GetIdentityProviderRequest() = default ;
    GetIdentityProviderRequest(const GetIdentityProviderRequest &) = default ;
    GetIdentityProviderRequest(GetIdentityProviderRequest &&) = default ;
    GetIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderRequest() = default ;
    GetIdentityProviderRequest& operator=(const GetIdentityProviderRequest &) = default ;
    GetIdentityProviderRequest& operator=(GetIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProviderName_ == nullptr; };
    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string identityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline GetIdentityProviderRequest& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


  protected:
    std::shared_ptr<string> identityProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
