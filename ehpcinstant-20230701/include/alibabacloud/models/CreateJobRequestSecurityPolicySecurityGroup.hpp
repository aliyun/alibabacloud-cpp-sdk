// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTSECURITYPOLICYSECURITYGROUP_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTSECURITYPOLICYSECURITYGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestSecurityPolicySecurityGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestSecurityPolicySecurityGroup& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestSecurityPolicySecurityGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
    };
    CreateJobRequestSecurityPolicySecurityGroup() = default ;
    CreateJobRequestSecurityPolicySecurityGroup(const CreateJobRequestSecurityPolicySecurityGroup &) = default ;
    CreateJobRequestSecurityPolicySecurityGroup(CreateJobRequestSecurityPolicySecurityGroup &&) = default ;
    CreateJobRequestSecurityPolicySecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestSecurityPolicySecurityGroup() = default ;
    CreateJobRequestSecurityPolicySecurityGroup& operator=(const CreateJobRequestSecurityPolicySecurityGroup &) = default ;
    CreateJobRequestSecurityPolicySecurityGroup& operator=(CreateJobRequestSecurityPolicySecurityGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupIds_ == nullptr; };
    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CreateJobRequestSecurityPolicySecurityGroup& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateJobRequestSecurityPolicySecurityGroup& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


  protected:
    // The array of security group IDs.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
