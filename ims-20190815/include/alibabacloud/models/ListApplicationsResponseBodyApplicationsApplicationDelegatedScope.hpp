// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONSAPPLICATIONDELEGATEDSCOPE_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONSAPPLICATIONDELEGATEDSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListApplicationsResponseBodyApplicationsApplicationDelegatedScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBodyApplicationsApplicationDelegatedScope& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBodyApplicationsApplicationDelegatedScope& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
    };
    ListApplicationsResponseBodyApplicationsApplicationDelegatedScope() = default ;
    ListApplicationsResponseBodyApplicationsApplicationDelegatedScope(const ListApplicationsResponseBodyApplicationsApplicationDelegatedScope &) = default ;
    ListApplicationsResponseBodyApplicationsApplicationDelegatedScope(ListApplicationsResponseBodyApplicationsApplicationDelegatedScope &&) = default ;
    ListApplicationsResponseBodyApplicationsApplicationDelegatedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBodyApplicationsApplicationDelegatedScope() = default ;
    ListApplicationsResponseBodyApplicationsApplicationDelegatedScope& operator=(const ListApplicationsResponseBodyApplicationsApplicationDelegatedScope &) = default ;
    ListApplicationsResponseBodyApplicationsApplicationDelegatedScope& operator=(ListApplicationsResponseBodyApplicationsApplicationDelegatedScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScopes_ != nullptr; };
    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline const Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes & predefinedScopes() const { DARABONBA_PTR_GET_CONST(predefinedScopes_, Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes) };
    inline Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes predefinedScopes() { DARABONBA_PTR_GET(predefinedScopes_, Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes) };
    inline ListApplicationsResponseBodyApplicationsApplicationDelegatedScope& setPredefinedScopes(const Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes & predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };
    inline ListApplicationsResponseBodyApplicationsApplicationDelegatedScope& setPredefinedScopes(Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes && predefinedScopes) { DARABONBA_PTR_SET_RVALUE(predefinedScopes_, predefinedScopes) };


  protected:
    // The information about the permissions that are granted on the application.
    std::shared_ptr<Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes> predefinedScopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
