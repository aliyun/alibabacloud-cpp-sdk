// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTERNALAPPLICATIONSRESPONSEBODYEXTERNALAPPLICATIONSEXTERNALAPPLICATIONDELEGATEDSCOPE_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTERNALAPPLICATIONSRESPONSEBODYEXTERNALAPPLICATIONSEXTERNALAPPLICATIONDELEGATEDSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScopePredefinedScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
    };
    friend void from_json(const Darabonba::Json& j, ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
    };
    ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope() = default ;
    ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope(const ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope &) = default ;
    ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope(ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope &&) = default ;
    ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope() = default ;
    ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope& operator=(const ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope &) = default ;
    ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope& operator=(ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScopes_ != nullptr; };
    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline const Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScopePredefinedScopes & predefinedScopes() const { DARABONBA_PTR_GET_CONST(predefinedScopes_, Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScopePredefinedScopes) };
    inline Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScopePredefinedScopes predefinedScopes() { DARABONBA_PTR_GET(predefinedScopes_, Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScopePredefinedScopes) };
    inline ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope& setPredefinedScopes(const Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScopePredefinedScopes & predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };
    inline ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope& setPredefinedScopes(Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScopePredefinedScopes && predefinedScopes) { DARABONBA_PTR_SET_RVALUE(predefinedScopes_, predefinedScopes) };


  protected:
    // The information about the permissions that are granted to the external application.
    std::shared_ptr<Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScopePredefinedScopes> predefinedScopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
