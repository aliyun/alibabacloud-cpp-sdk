// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDOMAINRESOLVEREALTIMETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDOMAINRESOLVEREALTIMETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class AddDomainResolveRealtimeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDomainResolveRealtimeTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, AddDomainResolveRealtimeTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    AddDomainResolveRealtimeTaskRequest() = default ;
    AddDomainResolveRealtimeTaskRequest(const AddDomainResolveRealtimeTaskRequest &) = default ;
    AddDomainResolveRealtimeTaskRequest(AddDomainResolveRealtimeTaskRequest &&) = default ;
    AddDomainResolveRealtimeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDomainResolveRealtimeTaskRequest() = default ;
    AddDomainResolveRealtimeTaskRequest& operator=(const AddDomainResolveRealtimeTaskRequest &) = default ;
    AddDomainResolveRealtimeTaskRequest& operator=(AddDomainResolveRealtimeTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->firewallType_ == nullptr && return this->regionNo_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddDomainResolveRealtimeTaskRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline string firewallType() const { DARABONBA_PTR_GET_DEFAULT(firewallType_, "") };
    inline AddDomainResolveRealtimeTaskRequest& setFirewallType(string firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline AddDomainResolveRealtimeTaskRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> firewallType_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
