// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINFORESPONSEBODYAPPLICATIONPROVISIONINFODELEGATEDSCOPE_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINFORESPONSEBODYAPPLICATIONPROVISIONINFODELEGATEDSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
    };
    GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope() = default ;
    GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope(const GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope &) = default ;
    GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope(GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope &&) = default ;
    GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope() = default ;
    GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope& operator=(const GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope &) = default ;
    GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope& operator=(GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScopes_ != nullptr; };
    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline const Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes & predefinedScopes() const { DARABONBA_PTR_GET_CONST(predefinedScopes_, Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes) };
    inline Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes predefinedScopes() { DARABONBA_PTR_GET(predefinedScopes_, Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes) };
    inline GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope& setPredefinedScopes(const Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes & predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };
    inline GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope& setPredefinedScopes(Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes && predefinedScopes) { DARABONBA_PTR_SET_RVALUE(predefinedScopes_, predefinedScopes) };


  protected:
    // The information about the scopes of permissions that are granted to the application.
    std::shared_ptr<Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes> predefinedScopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
