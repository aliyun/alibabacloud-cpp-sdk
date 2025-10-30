// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODYPOLICYMANAGEDINFO_HPP_
#define ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODYPOLICYMANAGEDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetIntegrationPolicyResponseBodyPolicyManagedInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntegrationPolicyResponseBodyPolicyManagedInfo& obj) { 
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntegrationPolicyResponseBodyPolicyManagedInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
    };
    GetIntegrationPolicyResponseBodyPolicyManagedInfo() = default ;
    GetIntegrationPolicyResponseBodyPolicyManagedInfo(const GetIntegrationPolicyResponseBodyPolicyManagedInfo &) = default ;
    GetIntegrationPolicyResponseBodyPolicyManagedInfo(GetIntegrationPolicyResponseBodyPolicyManagedInfo &&) = default ;
    GetIntegrationPolicyResponseBodyPolicyManagedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntegrationPolicyResponseBodyPolicyManagedInfo() = default ;
    GetIntegrationPolicyResponseBodyPolicyManagedInfo& operator=(const GetIntegrationPolicyResponseBodyPolicyManagedInfo &) = default ;
    GetIntegrationPolicyResponseBodyPolicyManagedInfo& operator=(GetIntegrationPolicyResponseBodyPolicyManagedInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && return this->vswitchId_ == nullptr; };
    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetIntegrationPolicyResponseBodyPolicyManagedInfo& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline GetIntegrationPolicyResponseBodyPolicyManagedInfo& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // Security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // VSwitch ID.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
