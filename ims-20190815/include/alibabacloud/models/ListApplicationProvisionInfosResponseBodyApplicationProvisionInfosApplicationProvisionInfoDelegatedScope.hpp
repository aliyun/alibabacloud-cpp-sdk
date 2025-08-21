// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONPROVISIONINFOSRESPONSEBODYAPPLICATIONPROVISIONINFOSAPPLICATIONPROVISIONINFODELEGATEDSCOPE_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONPROVISIONINFOSRESPONSEBODYAPPLICATIONPROVISIONINFOSAPPLICATIONPROVISIONINFODELEGATEDSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScopePredefinedScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
    };
    ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope() = default ;
    ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope(const ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope &) = default ;
    ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope(ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope &&) = default ;
    ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope() = default ;
    ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope& operator=(const ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope &) = default ;
    ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope& operator=(ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScopes_ != nullptr; };
    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline const Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScopePredefinedScopes & predefinedScopes() const { DARABONBA_PTR_GET_CONST(predefinedScopes_, Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScopePredefinedScopes) };
    inline Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScopePredefinedScopes predefinedScopes() { DARABONBA_PTR_GET(predefinedScopes_, Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScopePredefinedScopes) };
    inline ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope& setPredefinedScopes(const Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScopePredefinedScopes & predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };
    inline ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScope& setPredefinedScopes(Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScopePredefinedScopes && predefinedScopes) { DARABONBA_PTR_SET_RVALUE(predefinedScopes_, predefinedScopes) };


  protected:
    // The information about the permissions that are granted to the application.
    std::shared_ptr<Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfoDelegatedScopePredefinedScopes> predefinedScopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
