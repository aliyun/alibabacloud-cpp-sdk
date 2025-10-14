// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODYPOLICIESMANAGEDINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODYPOLICIESMANAGEDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPoliciesResponseBodyPoliciesManagedInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPoliciesResponseBodyPoliciesManagedInfo& obj) { 
      DARABONBA_PTR_TO_JSON(eniId, eniId_);
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPoliciesResponseBodyPoliciesManagedInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(eniId, eniId_);
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
    };
    ListIntegrationPoliciesResponseBodyPoliciesManagedInfo() = default ;
    ListIntegrationPoliciesResponseBodyPoliciesManagedInfo(const ListIntegrationPoliciesResponseBodyPoliciesManagedInfo &) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesManagedInfo(ListIntegrationPoliciesResponseBodyPoliciesManagedInfo &&) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesManagedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPoliciesResponseBodyPoliciesManagedInfo() = default ;
    ListIntegrationPoliciesResponseBodyPoliciesManagedInfo& operator=(const ListIntegrationPoliciesResponseBodyPoliciesManagedInfo &) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesManagedInfo& operator=(ListIntegrationPoliciesResponseBodyPoliciesManagedInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eniId_ == nullptr
        && return this->securityGroupId_ == nullptr && return this->vswitchId_ == nullptr; };
    // eniId Field Functions 
    bool hasEniId() const { return this->eniId_ != nullptr;};
    void deleteEniId() { this->eniId_ = nullptr;};
    inline string eniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesManagedInfo& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesManagedInfo& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesManagedInfo& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    std::shared_ptr<string> eniId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
