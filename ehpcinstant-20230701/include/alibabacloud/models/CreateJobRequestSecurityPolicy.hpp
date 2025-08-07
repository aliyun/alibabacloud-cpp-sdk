// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTSECURITYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTSECURITYPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJobRequestSecurityPolicySecurityGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestSecurityPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestSecurityPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestSecurityPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
    };
    CreateJobRequestSecurityPolicy() = default ;
    CreateJobRequestSecurityPolicy(const CreateJobRequestSecurityPolicy &) = default ;
    CreateJobRequestSecurityPolicy(CreateJobRequestSecurityPolicy &&) = default ;
    CreateJobRequestSecurityPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestSecurityPolicy() = default ;
    CreateJobRequestSecurityPolicy& operator=(const CreateJobRequestSecurityPolicy &) = default ;
    CreateJobRequestSecurityPolicy& operator=(CreateJobRequestSecurityPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->securityGroup_ != nullptr; };
    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline const Models::CreateJobRequestSecurityPolicySecurityGroup & securityGroup() const { DARABONBA_PTR_GET_CONST(securityGroup_, Models::CreateJobRequestSecurityPolicySecurityGroup) };
    inline Models::CreateJobRequestSecurityPolicySecurityGroup securityGroup() { DARABONBA_PTR_GET(securityGroup_, Models::CreateJobRequestSecurityPolicySecurityGroup) };
    inline CreateJobRequestSecurityPolicy& setSecurityGroup(const Models::CreateJobRequestSecurityPolicySecurityGroup & securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };
    inline CreateJobRequestSecurityPolicy& setSecurityGroup(Models::CreateJobRequestSecurityPolicySecurityGroup && securityGroup) { DARABONBA_PTR_SET_RVALUE(securityGroup_, securityGroup) };


  protected:
    std::shared_ptr<Models::CreateJobRequestSecurityPolicySecurityGroup> securityGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
