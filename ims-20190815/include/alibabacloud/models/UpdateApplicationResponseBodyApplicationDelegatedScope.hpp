// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONRESPONSEBODYAPPLICATIONDELEGATEDSCOPE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONRESPONSEBODYAPPLICATIONDELEGATEDSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateApplicationResponseBodyApplicationDelegatedScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationResponseBodyApplicationDelegatedScope& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationResponseBodyApplicationDelegatedScope& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
    };
    UpdateApplicationResponseBodyApplicationDelegatedScope() = default ;
    UpdateApplicationResponseBodyApplicationDelegatedScope(const UpdateApplicationResponseBodyApplicationDelegatedScope &) = default ;
    UpdateApplicationResponseBodyApplicationDelegatedScope(UpdateApplicationResponseBodyApplicationDelegatedScope &&) = default ;
    UpdateApplicationResponseBodyApplicationDelegatedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationResponseBodyApplicationDelegatedScope() = default ;
    UpdateApplicationResponseBodyApplicationDelegatedScope& operator=(const UpdateApplicationResponseBodyApplicationDelegatedScope &) = default ;
    UpdateApplicationResponseBodyApplicationDelegatedScope& operator=(UpdateApplicationResponseBodyApplicationDelegatedScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScopes_ != nullptr; };
    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline const Models::UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes & predefinedScopes() const { DARABONBA_PTR_GET_CONST(predefinedScopes_, Models::UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes) };
    inline Models::UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes predefinedScopes() { DARABONBA_PTR_GET(predefinedScopes_, Models::UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes) };
    inline UpdateApplicationResponseBodyApplicationDelegatedScope& setPredefinedScopes(const Models::UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes & predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };
    inline UpdateApplicationResponseBodyApplicationDelegatedScope& setPredefinedScopes(Models::UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes && predefinedScopes) { DARABONBA_PTR_SET_RVALUE(predefinedScopes_, predefinedScopes) };


  protected:
    // The information about the permissions that are granted on the application.
    std::shared_ptr<Models::UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes> predefinedScopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
