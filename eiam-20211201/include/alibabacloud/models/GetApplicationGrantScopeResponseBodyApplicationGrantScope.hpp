// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONGRANTSCOPERESPONSEBODYAPPLICATIONGRANTSCOPE_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONGRANTSCOPERESPONSEBODYAPPLICATIONGRANTSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationGrantScopeResponseBodyApplicationGrantScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationGrantScopeResponseBodyApplicationGrantScope& obj) { 
      DARABONBA_PTR_TO_JSON(GrantScopes, grantScopes_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationGrantScopeResponseBodyApplicationGrantScope& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantScopes, grantScopes_);
    };
    GetApplicationGrantScopeResponseBodyApplicationGrantScope() = default ;
    GetApplicationGrantScopeResponseBodyApplicationGrantScope(const GetApplicationGrantScopeResponseBodyApplicationGrantScope &) = default ;
    GetApplicationGrantScopeResponseBodyApplicationGrantScope(GetApplicationGrantScopeResponseBodyApplicationGrantScope &&) = default ;
    GetApplicationGrantScopeResponseBodyApplicationGrantScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationGrantScopeResponseBodyApplicationGrantScope() = default ;
    GetApplicationGrantScopeResponseBodyApplicationGrantScope& operator=(const GetApplicationGrantScopeResponseBodyApplicationGrantScope &) = default ;
    GetApplicationGrantScopeResponseBodyApplicationGrantScope& operator=(GetApplicationGrantScopeResponseBodyApplicationGrantScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->grantScopes_ != nullptr; };
    // grantScopes Field Functions 
    bool hasGrantScopes() const { return this->grantScopes_ != nullptr;};
    void deleteGrantScopes() { this->grantScopes_ = nullptr;};
    inline const vector<string> & grantScopes() const { DARABONBA_PTR_GET_CONST(grantScopes_, vector<string>) };
    inline vector<string> grantScopes() { DARABONBA_PTR_GET(grantScopes_, vector<string>) };
    inline GetApplicationGrantScopeResponseBodyApplicationGrantScope& setGrantScopes(const vector<string> & grantScopes) { DARABONBA_PTR_SET_VALUE(grantScopes_, grantScopes) };
    inline GetApplicationGrantScopeResponseBodyApplicationGrantScope& setGrantScopes(vector<string> && grantScopes) { DARABONBA_PTR_SET_RVALUE(grantScopes_, grantScopes) };


  protected:
    // The permissions of the Developer API feature.
    std::shared_ptr<vector<string>> grantScopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
