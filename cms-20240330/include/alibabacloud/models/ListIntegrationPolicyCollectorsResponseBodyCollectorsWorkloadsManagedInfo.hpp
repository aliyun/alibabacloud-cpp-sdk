// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCOLLECTORSRESPONSEBODYCOLLECTORSWORKLOADSMANAGEDINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCOLLECTORSRESPONSEBODYCOLLECTORSWORKLOADSMANAGEDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo& obj) { 
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
    };
    ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo() = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo(const ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo &) = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo(ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo &&) = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo() = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo& operator=(const ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo &) = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo& operator=(ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo &&) = default ;
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
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
