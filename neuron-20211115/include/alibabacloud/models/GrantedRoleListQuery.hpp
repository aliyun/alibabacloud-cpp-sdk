// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTEDROLELISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_GRANTEDROLELISTQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class GrantedRoleListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantedRoleListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(authorizerId, authorizerId_);
      DARABONBA_PTR_TO_JSON(authorizerType, authorizerType_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GrantedRoleListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(authorizerId, authorizerId_);
      DARABONBA_PTR_FROM_JSON(authorizerType, authorizerType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GrantedRoleListQuery() = default ;
    GrantedRoleListQuery(const GrantedRoleListQuery &) = default ;
    GrantedRoleListQuery(GrantedRoleListQuery &&) = default ;
    GrantedRoleListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantedRoleListQuery() = default ;
    GrantedRoleListQuery& operator=(const GrantedRoleListQuery &) = default ;
    GrantedRoleListQuery& operator=(GrantedRoleListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizerId_ == nullptr
        && this->authorizerType_ == nullptr && this->name_ == nullptr; };
    // authorizerId Field Functions 
    bool hasAuthorizerId() const { return this->authorizerId_ != nullptr;};
    void deleteAuthorizerId() { this->authorizerId_ = nullptr;};
    inline string getAuthorizerId() const { DARABONBA_PTR_GET_DEFAULT(authorizerId_, "") };
    inline GrantedRoleListQuery& setAuthorizerId(string authorizerId) { DARABONBA_PTR_SET_VALUE(authorizerId_, authorizerId) };


    // authorizerType Field Functions 
    bool hasAuthorizerType() const { return this->authorizerType_ != nullptr;};
    void deleteAuthorizerType() { this->authorizerType_ = nullptr;};
    inline string getAuthorizerType() const { DARABONBA_PTR_GET_DEFAULT(authorizerType_, "") };
    inline GrantedRoleListQuery& setAuthorizerType(string authorizerType) { DARABONBA_PTR_SET_VALUE(authorizerType_, authorizerType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GrantedRoleListQuery& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> authorizerId_ {};
    shared_ptr<string> authorizerType_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
