// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENVAULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENVAULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetTokenVaultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenVaultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TokenVaultName, tokenVaultName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenVaultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TokenVaultName, tokenVaultName_);
    };
    GetTokenVaultRequest() = default ;
    GetTokenVaultRequest(const GetTokenVaultRequest &) = default ;
    GetTokenVaultRequest(GetTokenVaultRequest &&) = default ;
    GetTokenVaultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenVaultRequest() = default ;
    GetTokenVaultRequest& operator=(const GetTokenVaultRequest &) = default ;
    GetTokenVaultRequest& operator=(GetTokenVaultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tokenVaultName_ == nullptr; };
    // tokenVaultName Field Functions 
    bool hasTokenVaultName() const { return this->tokenVaultName_ != nullptr;};
    void deleteTokenVaultName() { this->tokenVaultName_ = nullptr;};
    inline string getTokenVaultName() const { DARABONBA_PTR_GET_DEFAULT(tokenVaultName_, "") };
    inline GetTokenVaultRequest& setTokenVaultName(string tokenVaultName) { DARABONBA_PTR_SET_VALUE(tokenVaultName_, tokenVaultName) };


  protected:
    shared_ptr<string> tokenVaultName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
