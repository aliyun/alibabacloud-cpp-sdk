// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTNETWORK_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTNETWORK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyAppInstanceGroupAttributeRequestNetworkDomainRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupAttributeRequestNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupAttributeRequestNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(DomainRules, domainRules_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupAttributeRequestNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainRules, domainRules_);
    };
    ModifyAppInstanceGroupAttributeRequestNetwork() = default ;
    ModifyAppInstanceGroupAttributeRequestNetwork(const ModifyAppInstanceGroupAttributeRequestNetwork &) = default ;
    ModifyAppInstanceGroupAttributeRequestNetwork(ModifyAppInstanceGroupAttributeRequestNetwork &&) = default ;
    ModifyAppInstanceGroupAttributeRequestNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupAttributeRequestNetwork() = default ;
    ModifyAppInstanceGroupAttributeRequestNetwork& operator=(const ModifyAppInstanceGroupAttributeRequestNetwork &) = default ;
    ModifyAppInstanceGroupAttributeRequestNetwork& operator=(ModifyAppInstanceGroupAttributeRequestNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainRules_ == nullptr; };
    // domainRules Field Functions 
    bool hasDomainRules() const { return this->domainRules_ != nullptr;};
    void deleteDomainRules() { this->domainRules_ = nullptr;};
    inline const vector<Models::ModifyAppInstanceGroupAttributeRequestNetworkDomainRules> & domainRules() const { DARABONBA_PTR_GET_CONST(domainRules_, vector<Models::ModifyAppInstanceGroupAttributeRequestNetworkDomainRules>) };
    inline vector<Models::ModifyAppInstanceGroupAttributeRequestNetworkDomainRules> domainRules() { DARABONBA_PTR_GET(domainRules_, vector<Models::ModifyAppInstanceGroupAttributeRequestNetworkDomainRules>) };
    inline ModifyAppInstanceGroupAttributeRequestNetwork& setDomainRules(const vector<Models::ModifyAppInstanceGroupAttributeRequestNetworkDomainRules> & domainRules) { DARABONBA_PTR_SET_VALUE(domainRules_, domainRules) };
    inline ModifyAppInstanceGroupAttributeRequestNetwork& setDomainRules(vector<Models::ModifyAppInstanceGroupAttributeRequestNetworkDomainRules> && domainRules) { DARABONBA_PTR_SET_RVALUE(domainRules_, domainRules) };


  protected:
    // The domain name rules.
    std::shared_ptr<vector<Models::ModifyAppInstanceGroupAttributeRequestNetworkDomainRules>> domainRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
