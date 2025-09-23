// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGLAYER7RULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGLAYER7RULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ConfigLayer7RuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigLayer7RuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ProxyTypeList, proxyTypeList_);
      DARABONBA_PTR_TO_JSON(ProxyTypes, proxyTypes_);
      DARABONBA_PTR_TO_JSON(RealServers, realServers_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RsType, rsType_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigLayer7RuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ProxyTypeList, proxyTypeList_);
      DARABONBA_PTR_FROM_JSON(ProxyTypes, proxyTypes_);
      DARABONBA_PTR_FROM_JSON(RealServers, realServers_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RsType, rsType_);
    };
    ConfigLayer7RuleRequest() = default ;
    ConfigLayer7RuleRequest(const ConfigLayer7RuleRequest &) = default ;
    ConfigLayer7RuleRequest(ConfigLayer7RuleRequest &&) = default ;
    ConfigLayer7RuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigLayer7RuleRequest() = default ;
    ConfigLayer7RuleRequest& operator=(const ConfigLayer7RuleRequest &) = default ;
    ConfigLayer7RuleRequest& operator=(ConfigLayer7RuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->instanceIds_ != nullptr && this->proxyTypeList_ != nullptr && this->proxyTypes_ != nullptr && this->realServers_ != nullptr && this->resourceGroupId_ != nullptr
        && this->rsType_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ConfigLayer7RuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ConfigLayer7RuleRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ConfigLayer7RuleRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // proxyTypeList Field Functions 
    bool hasProxyTypeList() const { return this->proxyTypeList_ != nullptr;};
    void deleteProxyTypeList() { this->proxyTypeList_ = nullptr;};
    inline string proxyTypeList() const { DARABONBA_PTR_GET_DEFAULT(proxyTypeList_, "") };
    inline ConfigLayer7RuleRequest& setProxyTypeList(string proxyTypeList) { DARABONBA_PTR_SET_VALUE(proxyTypeList_, proxyTypeList) };


    // proxyTypes Field Functions 
    bool hasProxyTypes() const { return this->proxyTypes_ != nullptr;};
    void deleteProxyTypes() { this->proxyTypes_ = nullptr;};
    inline const vector<string> & proxyTypes() const { DARABONBA_PTR_GET_CONST(proxyTypes_, vector<string>) };
    inline vector<string> proxyTypes() { DARABONBA_PTR_GET(proxyTypes_, vector<string>) };
    inline ConfigLayer7RuleRequest& setProxyTypes(const vector<string> & proxyTypes) { DARABONBA_PTR_SET_VALUE(proxyTypes_, proxyTypes) };
    inline ConfigLayer7RuleRequest& setProxyTypes(vector<string> && proxyTypes) { DARABONBA_PTR_SET_RVALUE(proxyTypes_, proxyTypes) };


    // realServers Field Functions 
    bool hasRealServers() const { return this->realServers_ != nullptr;};
    void deleteRealServers() { this->realServers_ = nullptr;};
    inline const vector<string> & realServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<string>) };
    inline vector<string> realServers() { DARABONBA_PTR_GET(realServers_, vector<string>) };
    inline ConfigLayer7RuleRequest& setRealServers(const vector<string> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
    inline ConfigLayer7RuleRequest& setRealServers(vector<string> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigLayer7RuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rsType Field Functions 
    bool hasRsType() const { return this->rsType_ != nullptr;};
    void deleteRsType() { this->rsType_ = nullptr;};
    inline int32_t rsType() const { DARABONBA_PTR_GET_DEFAULT(rsType_, 0) };
    inline ConfigLayer7RuleRequest& setRsType(int32_t rsType) { DARABONBA_PTR_SET_VALUE(rsType_, rsType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<string> proxyTypeList_ = nullptr;
    std::shared_ptr<vector<string>> proxyTypes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> realServers_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> rsType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
