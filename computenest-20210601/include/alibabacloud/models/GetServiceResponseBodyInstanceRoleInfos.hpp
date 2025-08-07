// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYINSTANCEROLEINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYINSTANCEROLEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyInstanceRoleInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyInstanceRoleInfos& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(Principals, principals_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyInstanceRoleInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(Principals, principals_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    GetServiceResponseBodyInstanceRoleInfos() = default ;
    GetServiceResponseBodyInstanceRoleInfos(const GetServiceResponseBodyInstanceRoleInfos &) = default ;
    GetServiceResponseBodyInstanceRoleInfos(GetServiceResponseBodyInstanceRoleInfos &&) = default ;
    GetServiceResponseBodyInstanceRoleInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyInstanceRoleInfos() = default ;
    GetServiceResponseBodyInstanceRoleInfos& operator=(const GetServiceResponseBodyInstanceRoleInfos &) = default ;
    GetServiceResponseBodyInstanceRoleInfos& operator=(GetServiceResponseBodyInstanceRoleInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyDocument_ != nullptr
        && this->principals_ != nullptr && this->roleName_ != nullptr && this->templateName_ != nullptr; };
    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string policyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline GetServiceResponseBodyInstanceRoleInfos& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // principals Field Functions 
    bool hasPrincipals() const { return this->principals_ != nullptr;};
    void deletePrincipals() { this->principals_ = nullptr;};
    inline const vector<string> & principals() const { DARABONBA_PTR_GET_CONST(principals_, vector<string>) };
    inline vector<string> principals() { DARABONBA_PTR_GET(principals_, vector<string>) };
    inline GetServiceResponseBodyInstanceRoleInfos& setPrincipals(const vector<string> & principals) { DARABONBA_PTR_SET_VALUE(principals_, principals) };
    inline GetServiceResponseBodyInstanceRoleInfos& setPrincipals(vector<string> && principals) { DARABONBA_PTR_SET_RVALUE(principals_, principals) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline GetServiceResponseBodyInstanceRoleInfos& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetServiceResponseBodyInstanceRoleInfos& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The content of the policy.
    std::shared_ptr<string> policyDocument_ = nullptr;
    // The information of the RAM entity.
    std::shared_ptr<vector<string>> principals_ = nullptr;
    // The ram role name.
    std::shared_ptr<string> roleName_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
