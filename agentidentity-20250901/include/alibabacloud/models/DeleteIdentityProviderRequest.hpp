// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIDENTITYPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class DeleteIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
    };
    DeleteIdentityProviderRequest() = default ;
    DeleteIdentityProviderRequest(const DeleteIdentityProviderRequest &) = default ;
    DeleteIdentityProviderRequest(DeleteIdentityProviderRequest &&) = default ;
    DeleteIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIdentityProviderRequest() = default ;
    DeleteIdentityProviderRequest& operator=(const DeleteIdentityProviderRequest &) = default ;
    DeleteIdentityProviderRequest& operator=(DeleteIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProviderName_ == nullptr; };
    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string identityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline DeleteIdentityProviderRequest& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


  protected:
    std::shared_ptr<string> identityProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
