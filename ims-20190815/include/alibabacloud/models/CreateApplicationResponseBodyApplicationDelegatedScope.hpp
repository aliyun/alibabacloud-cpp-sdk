// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONRESPONSEBODYAPPLICATIONDELEGATEDSCOPE_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONRESPONSEBODYAPPLICATIONDELEGATEDSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateApplicationResponseBodyApplicationDelegatedScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationResponseBodyApplicationDelegatedScope& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationResponseBodyApplicationDelegatedScope& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
    };
    CreateApplicationResponseBodyApplicationDelegatedScope() = default ;
    CreateApplicationResponseBodyApplicationDelegatedScope(const CreateApplicationResponseBodyApplicationDelegatedScope &) = default ;
    CreateApplicationResponseBodyApplicationDelegatedScope(CreateApplicationResponseBodyApplicationDelegatedScope &&) = default ;
    CreateApplicationResponseBodyApplicationDelegatedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationResponseBodyApplicationDelegatedScope() = default ;
    CreateApplicationResponseBodyApplicationDelegatedScope& operator=(const CreateApplicationResponseBodyApplicationDelegatedScope &) = default ;
    CreateApplicationResponseBodyApplicationDelegatedScope& operator=(CreateApplicationResponseBodyApplicationDelegatedScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScopes_ != nullptr; };
    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline const Models::CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes & predefinedScopes() const { DARABONBA_PTR_GET_CONST(predefinedScopes_, Models::CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes) };
    inline Models::CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes predefinedScopes() { DARABONBA_PTR_GET(predefinedScopes_, Models::CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes) };
    inline CreateApplicationResponseBodyApplicationDelegatedScope& setPredefinedScopes(const Models::CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes & predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };
    inline CreateApplicationResponseBodyApplicationDelegatedScope& setPredefinedScopes(Models::CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes && predefinedScopes) { DARABONBA_PTR_SET_RVALUE(predefinedScopes_, predefinedScopes) };


  protected:
    // The information about the permissions that are granted on the application.
    std::shared_ptr<Models::CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes> predefinedScopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
