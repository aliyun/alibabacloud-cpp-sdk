// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXTERNALAPPLICATIONRESPONSEBODYEXTERNALAPPLICATIONDELEGATEDSCOPE_HPP_
#define ALIBABACLOUD_MODELS_GETEXTERNALAPPLICATIONRESPONSEBODYEXTERNALAPPLICATIONDELEGATEDSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetExternalApplicationResponseBodyExternalApplicationDelegatedScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExternalApplicationResponseBodyExternalApplicationDelegatedScope& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
    };
    friend void from_json(const Darabonba::Json& j, GetExternalApplicationResponseBodyExternalApplicationDelegatedScope& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
    };
    GetExternalApplicationResponseBodyExternalApplicationDelegatedScope() = default ;
    GetExternalApplicationResponseBodyExternalApplicationDelegatedScope(const GetExternalApplicationResponseBodyExternalApplicationDelegatedScope &) = default ;
    GetExternalApplicationResponseBodyExternalApplicationDelegatedScope(GetExternalApplicationResponseBodyExternalApplicationDelegatedScope &&) = default ;
    GetExternalApplicationResponseBodyExternalApplicationDelegatedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExternalApplicationResponseBodyExternalApplicationDelegatedScope() = default ;
    GetExternalApplicationResponseBodyExternalApplicationDelegatedScope& operator=(const GetExternalApplicationResponseBodyExternalApplicationDelegatedScope &) = default ;
    GetExternalApplicationResponseBodyExternalApplicationDelegatedScope& operator=(GetExternalApplicationResponseBodyExternalApplicationDelegatedScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScopes_ != nullptr; };
    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline const Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes & predefinedScopes() const { DARABONBA_PTR_GET_CONST(predefinedScopes_, Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes) };
    inline Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes predefinedScopes() { DARABONBA_PTR_GET(predefinedScopes_, Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes) };
    inline GetExternalApplicationResponseBodyExternalApplicationDelegatedScope& setPredefinedScopes(const Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes & predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };
    inline GetExternalApplicationResponseBodyExternalApplicationDelegatedScope& setPredefinedScopes(Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes && predefinedScopes) { DARABONBA_PTR_SET_RVALUE(predefinedScopes_, predefinedScopes) };


  protected:
    // The information about the permissions that are granted on the application.
    std::shared_ptr<Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes> predefinedScopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
