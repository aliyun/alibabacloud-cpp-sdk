// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTNETWORK_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTNETWORK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppInstanceGroupRequestNetworkDomainRules.hpp>
#include <alibabacloud/models/CreateAppInstanceGroupRequestNetworkRoutes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequestNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequestNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(DomainRules, domainRules_);
      DARABONBA_PTR_TO_JSON(IpExpireMinutes, ipExpireMinutes_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Routes, routes_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequestNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainRules, domainRules_);
      DARABONBA_PTR_FROM_JSON(IpExpireMinutes, ipExpireMinutes_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Routes, routes_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    CreateAppInstanceGroupRequestNetwork() = default ;
    CreateAppInstanceGroupRequestNetwork(const CreateAppInstanceGroupRequestNetwork &) = default ;
    CreateAppInstanceGroupRequestNetwork(CreateAppInstanceGroupRequestNetwork &&) = default ;
    CreateAppInstanceGroupRequestNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequestNetwork() = default ;
    CreateAppInstanceGroupRequestNetwork& operator=(const CreateAppInstanceGroupRequestNetwork &) = default ;
    CreateAppInstanceGroupRequestNetwork& operator=(CreateAppInstanceGroupRequestNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainRules_ == nullptr
        && return this->ipExpireMinutes_ == nullptr && return this->officeSiteId_ == nullptr && return this->routes_ == nullptr && return this->strategyType_ == nullptr && return this->vSwitchIds_ == nullptr; };
    // domainRules Field Functions 
    bool hasDomainRules() const { return this->domainRules_ != nullptr;};
    void deleteDomainRules() { this->domainRules_ = nullptr;};
    inline const vector<Models::CreateAppInstanceGroupRequestNetworkDomainRules> & domainRules() const { DARABONBA_PTR_GET_CONST(domainRules_, vector<Models::CreateAppInstanceGroupRequestNetworkDomainRules>) };
    inline vector<Models::CreateAppInstanceGroupRequestNetworkDomainRules> domainRules() { DARABONBA_PTR_GET(domainRules_, vector<Models::CreateAppInstanceGroupRequestNetworkDomainRules>) };
    inline CreateAppInstanceGroupRequestNetwork& setDomainRules(const vector<Models::CreateAppInstanceGroupRequestNetworkDomainRules> & domainRules) { DARABONBA_PTR_SET_VALUE(domainRules_, domainRules) };
    inline CreateAppInstanceGroupRequestNetwork& setDomainRules(vector<Models::CreateAppInstanceGroupRequestNetworkDomainRules> && domainRules) { DARABONBA_PTR_SET_RVALUE(domainRules_, domainRules) };


    // ipExpireMinutes Field Functions 
    bool hasIpExpireMinutes() const { return this->ipExpireMinutes_ != nullptr;};
    void deleteIpExpireMinutes() { this->ipExpireMinutes_ = nullptr;};
    inline int32_t ipExpireMinutes() const { DARABONBA_PTR_GET_DEFAULT(ipExpireMinutes_, 0) };
    inline CreateAppInstanceGroupRequestNetwork& setIpExpireMinutes(int32_t ipExpireMinutes) { DARABONBA_PTR_SET_VALUE(ipExpireMinutes_, ipExpireMinutes) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateAppInstanceGroupRequestNetwork& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<Models::CreateAppInstanceGroupRequestNetworkRoutes> & routes() const { DARABONBA_PTR_GET_CONST(routes_, vector<Models::CreateAppInstanceGroupRequestNetworkRoutes>) };
    inline vector<Models::CreateAppInstanceGroupRequestNetworkRoutes> routes() { DARABONBA_PTR_GET(routes_, vector<Models::CreateAppInstanceGroupRequestNetworkRoutes>) };
    inline CreateAppInstanceGroupRequestNetwork& setRoutes(const vector<Models::CreateAppInstanceGroupRequestNetworkRoutes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline CreateAppInstanceGroupRequestNetwork& setRoutes(vector<Models::CreateAppInstanceGroupRequestNetworkRoutes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline CreateAppInstanceGroupRequestNetwork& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateAppInstanceGroupRequestNetwork& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateAppInstanceGroupRequestNetwork& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    std::shared_ptr<vector<Models::CreateAppInstanceGroupRequestNetworkDomainRules>> domainRules_ = nullptr;
    std::shared_ptr<int32_t> ipExpireMinutes_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    std::shared_ptr<vector<Models::CreateAppInstanceGroupRequestNetworkRoutes>> routes_ = nullptr;
    std::shared_ptr<string> strategyType_ = nullptr;
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
