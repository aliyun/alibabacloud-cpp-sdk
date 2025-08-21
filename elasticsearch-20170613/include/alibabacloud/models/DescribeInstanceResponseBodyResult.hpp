// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultAdvancedSetting.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultAliwsDicts.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultClientNodeConfiguration.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultDictList.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultElasticDataNodeConfiguration.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultIkHotDicts.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultKibanaConfiguration.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultMasterConfiguration.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultNetworkConfig.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultNodeSpec.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultSynonymsDicts.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultTags.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultWarmNodeConfiguration.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyResultZoneInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeInstanceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(advancedDedicateMaster, advancedDedicateMaster_);
      DARABONBA_PTR_TO_JSON(advancedSetting, advancedSetting_);
      DARABONBA_PTR_TO_JSON(aliwsDicts, aliwsDicts_);
      DARABONBA_PTR_TO_JSON(archType, archType_);
      DARABONBA_PTR_TO_JSON(clientNodeConfiguration, clientNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(dedicateMaster, dedicateMaster_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(dictList, dictList_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(enableKibanaPrivateNetwork, enableKibanaPrivateNetwork_);
      DARABONBA_PTR_TO_JSON(enableKibanaPublicNetwork, enableKibanaPublicNetwork_);
      DARABONBA_PTR_TO_JSON(enablePublic, enablePublic_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_ANY_TO_JSON(esConfig, esConfig_);
      DARABONBA_PTR_TO_JSON(esIPBlacklist, esIPBlacklist_);
      DARABONBA_PTR_TO_JSON(esIPWhitelist, esIPWhitelist_);
      DARABONBA_PTR_TO_JSON(esVersion, esVersion_);
      DARABONBA_PTR_TO_JSON(extendConfigs, extendConfigs_);
      DARABONBA_PTR_TO_JSON(haveClientNode, haveClientNode_);
      DARABONBA_PTR_TO_JSON(haveKibana, haveKibana_);
      DARABONBA_PTR_TO_JSON(ikHotDicts, ikHotDicts_);
      DARABONBA_PTR_TO_JSON(instanceCategory, instanceCategory_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(isNewDeployment, isNewDeployment_);
      DARABONBA_PTR_TO_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_TO_JSON(kibanaDomain, kibanaDomain_);
      DARABONBA_PTR_TO_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
      DARABONBA_PTR_TO_JSON(kibanaPort, kibanaPort_);
      DARABONBA_PTR_TO_JSON(kibanaPrivateDomain, kibanaPrivateDomain_);
      DARABONBA_PTR_TO_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
      DARABONBA_PTR_TO_JSON(kibanaPrivatePort, kibanaPrivatePort_);
      DARABONBA_PTR_TO_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(postpaidServiceStatus, postpaidServiceStatus_);
      DARABONBA_PTR_TO_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(publicDomain, publicDomain_);
      DARABONBA_PTR_TO_JSON(publicIpWhitelist, publicIpWhitelist_);
      DARABONBA_PTR_TO_JSON(publicPort, publicPort_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(serviceVpc, serviceVpc_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(synonymsDicts, synonymsDicts_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(vpcInstanceId, vpcInstanceId_);
      DARABONBA_PTR_TO_JSON(warmNode, warmNode_);
      DARABONBA_PTR_TO_JSON(warmNodeConfiguration, warmNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(zoneCount, zoneCount_);
      DARABONBA_PTR_TO_JSON(zoneInfos, zoneInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(advancedDedicateMaster, advancedDedicateMaster_);
      DARABONBA_PTR_FROM_JSON(advancedSetting, advancedSetting_);
      DARABONBA_PTR_FROM_JSON(aliwsDicts, aliwsDicts_);
      DARABONBA_PTR_FROM_JSON(archType, archType_);
      DARABONBA_PTR_FROM_JSON(clientNodeConfiguration, clientNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(dedicateMaster, dedicateMaster_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(dictList, dictList_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(enableKibanaPrivateNetwork, enableKibanaPrivateNetwork_);
      DARABONBA_PTR_FROM_JSON(enableKibanaPublicNetwork, enableKibanaPublicNetwork_);
      DARABONBA_PTR_FROM_JSON(enablePublic, enablePublic_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_ANY_FROM_JSON(esConfig, esConfig_);
      DARABONBA_PTR_FROM_JSON(esIPBlacklist, esIPBlacklist_);
      DARABONBA_PTR_FROM_JSON(esIPWhitelist, esIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(esVersion, esVersion_);
      DARABONBA_PTR_FROM_JSON(extendConfigs, extendConfigs_);
      DARABONBA_PTR_FROM_JSON(haveClientNode, haveClientNode_);
      DARABONBA_PTR_FROM_JSON(haveKibana, haveKibana_);
      DARABONBA_PTR_FROM_JSON(ikHotDicts, ikHotDicts_);
      DARABONBA_PTR_FROM_JSON(instanceCategory, instanceCategory_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(isNewDeployment, isNewDeployment_);
      DARABONBA_PTR_FROM_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_FROM_JSON(kibanaDomain, kibanaDomain_);
      DARABONBA_PTR_FROM_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(kibanaPort, kibanaPort_);
      DARABONBA_PTR_FROM_JSON(kibanaPrivateDomain, kibanaPrivateDomain_);
      DARABONBA_PTR_FROM_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(kibanaPrivatePort, kibanaPrivatePort_);
      DARABONBA_PTR_FROM_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(postpaidServiceStatus, postpaidServiceStatus_);
      DARABONBA_PTR_FROM_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(publicDomain, publicDomain_);
      DARABONBA_PTR_FROM_JSON(publicIpWhitelist, publicIpWhitelist_);
      DARABONBA_PTR_FROM_JSON(publicPort, publicPort_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(serviceVpc, serviceVpc_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(synonymsDicts, synonymsDicts_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(vpcInstanceId, vpcInstanceId_);
      DARABONBA_PTR_FROM_JSON(warmNode, warmNode_);
      DARABONBA_PTR_FROM_JSON(warmNodeConfiguration, warmNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(zoneCount, zoneCount_);
      DARABONBA_PTR_FROM_JSON(zoneInfos, zoneInfos_);
    };
    DescribeInstanceResponseBodyResult() = default ;
    DescribeInstanceResponseBodyResult(const DescribeInstanceResponseBodyResult &) = default ;
    DescribeInstanceResponseBodyResult(DescribeInstanceResponseBodyResult &&) = default ;
    DescribeInstanceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBodyResult() = default ;
    DescribeInstanceResponseBodyResult& operator=(const DescribeInstanceResponseBodyResult &) = default ;
    DescribeInstanceResponseBodyResult& operator=(DescribeInstanceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advancedDedicateMaster_ != nullptr
        && this->advancedSetting_ != nullptr && this->aliwsDicts_ != nullptr && this->archType_ != nullptr && this->clientNodeConfiguration_ != nullptr && this->createdAt_ != nullptr
        && this->dedicateMaster_ != nullptr && this->description_ != nullptr && this->dictList_ != nullptr && this->domain_ != nullptr && this->elasticDataNodeConfiguration_ != nullptr
        && this->enableKibanaPrivateNetwork_ != nullptr && this->enableKibanaPublicNetwork_ != nullptr && this->enablePublic_ != nullptr && this->endTime_ != nullptr && this->esConfig_ != nullptr
        && this->esIPBlacklist_ != nullptr && this->esIPWhitelist_ != nullptr && this->esVersion_ != nullptr && this->extendConfigs_ != nullptr && this->haveClientNode_ != nullptr
        && this->haveKibana_ != nullptr && this->ikHotDicts_ != nullptr && this->instanceCategory_ != nullptr && this->instanceId_ != nullptr && this->isNewDeployment_ != nullptr
        && this->kibanaConfiguration_ != nullptr && this->kibanaDomain_ != nullptr && this->kibanaIPWhitelist_ != nullptr && this->kibanaPort_ != nullptr && this->kibanaPrivateDomain_ != nullptr
        && this->kibanaPrivateIPWhitelist_ != nullptr && this->kibanaPrivatePort_ != nullptr && this->masterConfiguration_ != nullptr && this->networkConfig_ != nullptr && this->nodeAmount_ != nullptr
        && this->nodeSpec_ != nullptr && this->paymentType_ != nullptr && this->port_ != nullptr && this->postpaidServiceStatus_ != nullptr && this->privateNetworkIpWhiteList_ != nullptr
        && this->protocol_ != nullptr && this->publicDomain_ != nullptr && this->publicIpWhitelist_ != nullptr && this->publicPort_ != nullptr && this->resourceGroupId_ != nullptr
        && this->serviceVpc_ != nullptr && this->status_ != nullptr && this->synonymsDicts_ != nullptr && this->tags_ != nullptr && this->updatedAt_ != nullptr
        && this->vpcInstanceId_ != nullptr && this->warmNode_ != nullptr && this->warmNodeConfiguration_ != nullptr && this->zoneCount_ != nullptr && this->zoneInfos_ != nullptr; };
    // advancedDedicateMaster Field Functions 
    bool hasAdvancedDedicateMaster() const { return this->advancedDedicateMaster_ != nullptr;};
    void deleteAdvancedDedicateMaster() { this->advancedDedicateMaster_ = nullptr;};
    inline bool advancedDedicateMaster() const { DARABONBA_PTR_GET_DEFAULT(advancedDedicateMaster_, false) };
    inline DescribeInstanceResponseBodyResult& setAdvancedDedicateMaster(bool advancedDedicateMaster) { DARABONBA_PTR_SET_VALUE(advancedDedicateMaster_, advancedDedicateMaster) };


    // advancedSetting Field Functions 
    bool hasAdvancedSetting() const { return this->advancedSetting_ != nullptr;};
    void deleteAdvancedSetting() { this->advancedSetting_ = nullptr;};
    inline const Models::DescribeInstanceResponseBodyResultAdvancedSetting & advancedSetting() const { DARABONBA_PTR_GET_CONST(advancedSetting_, Models::DescribeInstanceResponseBodyResultAdvancedSetting) };
    inline Models::DescribeInstanceResponseBodyResultAdvancedSetting advancedSetting() { DARABONBA_PTR_GET(advancedSetting_, Models::DescribeInstanceResponseBodyResultAdvancedSetting) };
    inline DescribeInstanceResponseBodyResult& setAdvancedSetting(const Models::DescribeInstanceResponseBodyResultAdvancedSetting & advancedSetting) { DARABONBA_PTR_SET_VALUE(advancedSetting_, advancedSetting) };
    inline DescribeInstanceResponseBodyResult& setAdvancedSetting(Models::DescribeInstanceResponseBodyResultAdvancedSetting && advancedSetting) { DARABONBA_PTR_SET_RVALUE(advancedSetting_, advancedSetting) };


    // aliwsDicts Field Functions 
    bool hasAliwsDicts() const { return this->aliwsDicts_ != nullptr;};
    void deleteAliwsDicts() { this->aliwsDicts_ = nullptr;};
    inline const vector<Models::DescribeInstanceResponseBodyResultAliwsDicts> & aliwsDicts() const { DARABONBA_PTR_GET_CONST(aliwsDicts_, vector<Models::DescribeInstanceResponseBodyResultAliwsDicts>) };
    inline vector<Models::DescribeInstanceResponseBodyResultAliwsDicts> aliwsDicts() { DARABONBA_PTR_GET(aliwsDicts_, vector<Models::DescribeInstanceResponseBodyResultAliwsDicts>) };
    inline DescribeInstanceResponseBodyResult& setAliwsDicts(const vector<Models::DescribeInstanceResponseBodyResultAliwsDicts> & aliwsDicts) { DARABONBA_PTR_SET_VALUE(aliwsDicts_, aliwsDicts) };
    inline DescribeInstanceResponseBodyResult& setAliwsDicts(vector<Models::DescribeInstanceResponseBodyResultAliwsDicts> && aliwsDicts) { DARABONBA_PTR_SET_RVALUE(aliwsDicts_, aliwsDicts) };


    // archType Field Functions 
    bool hasArchType() const { return this->archType_ != nullptr;};
    void deleteArchType() { this->archType_ = nullptr;};
    inline string archType() const { DARABONBA_PTR_GET_DEFAULT(archType_, "") };
    inline DescribeInstanceResponseBodyResult& setArchType(string archType) { DARABONBA_PTR_SET_VALUE(archType_, archType) };


    // clientNodeConfiguration Field Functions 
    bool hasClientNodeConfiguration() const { return this->clientNodeConfiguration_ != nullptr;};
    void deleteClientNodeConfiguration() { this->clientNodeConfiguration_ = nullptr;};
    inline const Models::DescribeInstanceResponseBodyResultClientNodeConfiguration & clientNodeConfiguration() const { DARABONBA_PTR_GET_CONST(clientNodeConfiguration_, Models::DescribeInstanceResponseBodyResultClientNodeConfiguration) };
    inline Models::DescribeInstanceResponseBodyResultClientNodeConfiguration clientNodeConfiguration() { DARABONBA_PTR_GET(clientNodeConfiguration_, Models::DescribeInstanceResponseBodyResultClientNodeConfiguration) };
    inline DescribeInstanceResponseBodyResult& setClientNodeConfiguration(const Models::DescribeInstanceResponseBodyResultClientNodeConfiguration & clientNodeConfiguration) { DARABONBA_PTR_SET_VALUE(clientNodeConfiguration_, clientNodeConfiguration) };
    inline DescribeInstanceResponseBodyResult& setClientNodeConfiguration(Models::DescribeInstanceResponseBodyResultClientNodeConfiguration && clientNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(clientNodeConfiguration_, clientNodeConfiguration) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline DescribeInstanceResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // dedicateMaster Field Functions 
    bool hasDedicateMaster() const { return this->dedicateMaster_ != nullptr;};
    void deleteDedicateMaster() { this->dedicateMaster_ = nullptr;};
    inline bool dedicateMaster() const { DARABONBA_PTR_GET_DEFAULT(dedicateMaster_, false) };
    inline DescribeInstanceResponseBodyResult& setDedicateMaster(bool dedicateMaster) { DARABONBA_PTR_SET_VALUE(dedicateMaster_, dedicateMaster) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeInstanceResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dictList Field Functions 
    bool hasDictList() const { return this->dictList_ != nullptr;};
    void deleteDictList() { this->dictList_ = nullptr;};
    inline const vector<Models::DescribeInstanceResponseBodyResultDictList> & dictList() const { DARABONBA_PTR_GET_CONST(dictList_, vector<Models::DescribeInstanceResponseBodyResultDictList>) };
    inline vector<Models::DescribeInstanceResponseBodyResultDictList> dictList() { DARABONBA_PTR_GET(dictList_, vector<Models::DescribeInstanceResponseBodyResultDictList>) };
    inline DescribeInstanceResponseBodyResult& setDictList(const vector<Models::DescribeInstanceResponseBodyResultDictList> & dictList) { DARABONBA_PTR_SET_VALUE(dictList_, dictList) };
    inline DescribeInstanceResponseBodyResult& setDictList(vector<Models::DescribeInstanceResponseBodyResultDictList> && dictList) { DARABONBA_PTR_SET_RVALUE(dictList_, dictList) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeInstanceResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // elasticDataNodeConfiguration Field Functions 
    bool hasElasticDataNodeConfiguration() const { return this->elasticDataNodeConfiguration_ != nullptr;};
    void deleteElasticDataNodeConfiguration() { this->elasticDataNodeConfiguration_ = nullptr;};
    inline const Models::DescribeInstanceResponseBodyResultElasticDataNodeConfiguration & elasticDataNodeConfiguration() const { DARABONBA_PTR_GET_CONST(elasticDataNodeConfiguration_, Models::DescribeInstanceResponseBodyResultElasticDataNodeConfiguration) };
    inline Models::DescribeInstanceResponseBodyResultElasticDataNodeConfiguration elasticDataNodeConfiguration() { DARABONBA_PTR_GET(elasticDataNodeConfiguration_, Models::DescribeInstanceResponseBodyResultElasticDataNodeConfiguration) };
    inline DescribeInstanceResponseBodyResult& setElasticDataNodeConfiguration(const Models::DescribeInstanceResponseBodyResultElasticDataNodeConfiguration & elasticDataNodeConfiguration) { DARABONBA_PTR_SET_VALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };
    inline DescribeInstanceResponseBodyResult& setElasticDataNodeConfiguration(Models::DescribeInstanceResponseBodyResultElasticDataNodeConfiguration && elasticDataNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };


    // enableKibanaPrivateNetwork Field Functions 
    bool hasEnableKibanaPrivateNetwork() const { return this->enableKibanaPrivateNetwork_ != nullptr;};
    void deleteEnableKibanaPrivateNetwork() { this->enableKibanaPrivateNetwork_ = nullptr;};
    inline bool enableKibanaPrivateNetwork() const { DARABONBA_PTR_GET_DEFAULT(enableKibanaPrivateNetwork_, false) };
    inline DescribeInstanceResponseBodyResult& setEnableKibanaPrivateNetwork(bool enableKibanaPrivateNetwork) { DARABONBA_PTR_SET_VALUE(enableKibanaPrivateNetwork_, enableKibanaPrivateNetwork) };


    // enableKibanaPublicNetwork Field Functions 
    bool hasEnableKibanaPublicNetwork() const { return this->enableKibanaPublicNetwork_ != nullptr;};
    void deleteEnableKibanaPublicNetwork() { this->enableKibanaPublicNetwork_ = nullptr;};
    inline bool enableKibanaPublicNetwork() const { DARABONBA_PTR_GET_DEFAULT(enableKibanaPublicNetwork_, false) };
    inline DescribeInstanceResponseBodyResult& setEnableKibanaPublicNetwork(bool enableKibanaPublicNetwork) { DARABONBA_PTR_SET_VALUE(enableKibanaPublicNetwork_, enableKibanaPublicNetwork) };


    // enablePublic Field Functions 
    bool hasEnablePublic() const { return this->enablePublic_ != nullptr;};
    void deleteEnablePublic() { this->enablePublic_ = nullptr;};
    inline bool enablePublic() const { DARABONBA_PTR_GET_DEFAULT(enablePublic_, false) };
    inline DescribeInstanceResponseBodyResult& setEnablePublic(bool enablePublic) { DARABONBA_PTR_SET_VALUE(enablePublic_, enablePublic) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeInstanceResponseBodyResult& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // esConfig Field Functions 
    bool hasEsConfig() const { return this->esConfig_ != nullptr;};
    void deleteEsConfig() { this->esConfig_ = nullptr;};
    inline     const Darabonba::Json & esConfig() const { DARABONBA_GET(esConfig_) };
    Darabonba::Json & esConfig() { DARABONBA_GET(esConfig_) };
    inline DescribeInstanceResponseBodyResult& setEsConfig(const Darabonba::Json & esConfig) { DARABONBA_SET_VALUE(esConfig_, esConfig) };
    inline DescribeInstanceResponseBodyResult& setEsConfig(Darabonba::Json & esConfig) { DARABONBA_SET_RVALUE(esConfig_, esConfig) };


    // esIPBlacklist Field Functions 
    bool hasEsIPBlacklist() const { return this->esIPBlacklist_ != nullptr;};
    void deleteEsIPBlacklist() { this->esIPBlacklist_ = nullptr;};
    inline const vector<string> & esIPBlacklist() const { DARABONBA_PTR_GET_CONST(esIPBlacklist_, vector<string>) };
    inline vector<string> esIPBlacklist() { DARABONBA_PTR_GET(esIPBlacklist_, vector<string>) };
    inline DescribeInstanceResponseBodyResult& setEsIPBlacklist(const vector<string> & esIPBlacklist) { DARABONBA_PTR_SET_VALUE(esIPBlacklist_, esIPBlacklist) };
    inline DescribeInstanceResponseBodyResult& setEsIPBlacklist(vector<string> && esIPBlacklist) { DARABONBA_PTR_SET_RVALUE(esIPBlacklist_, esIPBlacklist) };


    // esIPWhitelist Field Functions 
    bool hasEsIPWhitelist() const { return this->esIPWhitelist_ != nullptr;};
    void deleteEsIPWhitelist() { this->esIPWhitelist_ = nullptr;};
    inline const vector<string> & esIPWhitelist() const { DARABONBA_PTR_GET_CONST(esIPWhitelist_, vector<string>) };
    inline vector<string> esIPWhitelist() { DARABONBA_PTR_GET(esIPWhitelist_, vector<string>) };
    inline DescribeInstanceResponseBodyResult& setEsIPWhitelist(const vector<string> & esIPWhitelist) { DARABONBA_PTR_SET_VALUE(esIPWhitelist_, esIPWhitelist) };
    inline DescribeInstanceResponseBodyResult& setEsIPWhitelist(vector<string> && esIPWhitelist) { DARABONBA_PTR_SET_RVALUE(esIPWhitelist_, esIPWhitelist) };


    // esVersion Field Functions 
    bool hasEsVersion() const { return this->esVersion_ != nullptr;};
    void deleteEsVersion() { this->esVersion_ = nullptr;};
    inline string esVersion() const { DARABONBA_PTR_GET_DEFAULT(esVersion_, "") };
    inline DescribeInstanceResponseBodyResult& setEsVersion(string esVersion) { DARABONBA_PTR_SET_VALUE(esVersion_, esVersion) };


    // extendConfigs Field Functions 
    bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
    void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
    inline const vector<Darabonba::Json> & extendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> extendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Darabonba::Json>) };
    inline DescribeInstanceResponseBodyResult& setExtendConfigs(const vector<Darabonba::Json> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
    inline DescribeInstanceResponseBodyResult& setExtendConfigs(vector<Darabonba::Json> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


    // haveClientNode Field Functions 
    bool hasHaveClientNode() const { return this->haveClientNode_ != nullptr;};
    void deleteHaveClientNode() { this->haveClientNode_ = nullptr;};
    inline bool haveClientNode() const { DARABONBA_PTR_GET_DEFAULT(haveClientNode_, false) };
    inline DescribeInstanceResponseBodyResult& setHaveClientNode(bool haveClientNode) { DARABONBA_PTR_SET_VALUE(haveClientNode_, haveClientNode) };


    // haveKibana Field Functions 
    bool hasHaveKibana() const { return this->haveKibana_ != nullptr;};
    void deleteHaveKibana() { this->haveKibana_ = nullptr;};
    inline bool haveKibana() const { DARABONBA_PTR_GET_DEFAULT(haveKibana_, false) };
    inline DescribeInstanceResponseBodyResult& setHaveKibana(bool haveKibana) { DARABONBA_PTR_SET_VALUE(haveKibana_, haveKibana) };


    // ikHotDicts Field Functions 
    bool hasIkHotDicts() const { return this->ikHotDicts_ != nullptr;};
    void deleteIkHotDicts() { this->ikHotDicts_ = nullptr;};
    inline const vector<Models::DescribeInstanceResponseBodyResultIkHotDicts> & ikHotDicts() const { DARABONBA_PTR_GET_CONST(ikHotDicts_, vector<Models::DescribeInstanceResponseBodyResultIkHotDicts>) };
    inline vector<Models::DescribeInstanceResponseBodyResultIkHotDicts> ikHotDicts() { DARABONBA_PTR_GET(ikHotDicts_, vector<Models::DescribeInstanceResponseBodyResultIkHotDicts>) };
    inline DescribeInstanceResponseBodyResult& setIkHotDicts(const vector<Models::DescribeInstanceResponseBodyResultIkHotDicts> & ikHotDicts) { DARABONBA_PTR_SET_VALUE(ikHotDicts_, ikHotDicts) };
    inline DescribeInstanceResponseBodyResult& setIkHotDicts(vector<Models::DescribeInstanceResponseBodyResultIkHotDicts> && ikHotDicts) { DARABONBA_PTR_SET_RVALUE(ikHotDicts_, ikHotDicts) };


    // instanceCategory Field Functions 
    bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
    void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
    inline string instanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
    inline DescribeInstanceResponseBodyResult& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isNewDeployment Field Functions 
    bool hasIsNewDeployment() const { return this->isNewDeployment_ != nullptr;};
    void deleteIsNewDeployment() { this->isNewDeployment_ = nullptr;};
    inline bool isNewDeployment() const { DARABONBA_PTR_GET_DEFAULT(isNewDeployment_, false) };
    inline DescribeInstanceResponseBodyResult& setIsNewDeployment(bool isNewDeployment) { DARABONBA_PTR_SET_VALUE(isNewDeployment_, isNewDeployment) };


    // kibanaConfiguration Field Functions 
    bool hasKibanaConfiguration() const { return this->kibanaConfiguration_ != nullptr;};
    void deleteKibanaConfiguration() { this->kibanaConfiguration_ = nullptr;};
    inline const Models::DescribeInstanceResponseBodyResultKibanaConfiguration & kibanaConfiguration() const { DARABONBA_PTR_GET_CONST(kibanaConfiguration_, Models::DescribeInstanceResponseBodyResultKibanaConfiguration) };
    inline Models::DescribeInstanceResponseBodyResultKibanaConfiguration kibanaConfiguration() { DARABONBA_PTR_GET(kibanaConfiguration_, Models::DescribeInstanceResponseBodyResultKibanaConfiguration) };
    inline DescribeInstanceResponseBodyResult& setKibanaConfiguration(const Models::DescribeInstanceResponseBodyResultKibanaConfiguration & kibanaConfiguration) { DARABONBA_PTR_SET_VALUE(kibanaConfiguration_, kibanaConfiguration) };
    inline DescribeInstanceResponseBodyResult& setKibanaConfiguration(Models::DescribeInstanceResponseBodyResultKibanaConfiguration && kibanaConfiguration) { DARABONBA_PTR_SET_RVALUE(kibanaConfiguration_, kibanaConfiguration) };


    // kibanaDomain Field Functions 
    bool hasKibanaDomain() const { return this->kibanaDomain_ != nullptr;};
    void deleteKibanaDomain() { this->kibanaDomain_ = nullptr;};
    inline string kibanaDomain() const { DARABONBA_PTR_GET_DEFAULT(kibanaDomain_, "") };
    inline DescribeInstanceResponseBodyResult& setKibanaDomain(string kibanaDomain) { DARABONBA_PTR_SET_VALUE(kibanaDomain_, kibanaDomain) };


    // kibanaIPWhitelist Field Functions 
    bool hasKibanaIPWhitelist() const { return this->kibanaIPWhitelist_ != nullptr;};
    void deleteKibanaIPWhitelist() { this->kibanaIPWhitelist_ = nullptr;};
    inline const vector<string> & kibanaIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaIPWhitelist_, vector<string>) };
    inline vector<string> kibanaIPWhitelist() { DARABONBA_PTR_GET(kibanaIPWhitelist_, vector<string>) };
    inline DescribeInstanceResponseBodyResult& setKibanaIPWhitelist(const vector<string> & kibanaIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };
    inline DescribeInstanceResponseBodyResult& setKibanaIPWhitelist(vector<string> && kibanaIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };


    // kibanaPort Field Functions 
    bool hasKibanaPort() const { return this->kibanaPort_ != nullptr;};
    void deleteKibanaPort() { this->kibanaPort_ = nullptr;};
    inline int32_t kibanaPort() const { DARABONBA_PTR_GET_DEFAULT(kibanaPort_, 0) };
    inline DescribeInstanceResponseBodyResult& setKibanaPort(int32_t kibanaPort) { DARABONBA_PTR_SET_VALUE(kibanaPort_, kibanaPort) };


    // kibanaPrivateDomain Field Functions 
    bool hasKibanaPrivateDomain() const { return this->kibanaPrivateDomain_ != nullptr;};
    void deleteKibanaPrivateDomain() { this->kibanaPrivateDomain_ = nullptr;};
    inline string kibanaPrivateDomain() const { DARABONBA_PTR_GET_DEFAULT(kibanaPrivateDomain_, "") };
    inline DescribeInstanceResponseBodyResult& setKibanaPrivateDomain(string kibanaPrivateDomain) { DARABONBA_PTR_SET_VALUE(kibanaPrivateDomain_, kibanaPrivateDomain) };


    // kibanaPrivateIPWhitelist Field Functions 
    bool hasKibanaPrivateIPWhitelist() const { return this->kibanaPrivateIPWhitelist_ != nullptr;};
    void deleteKibanaPrivateIPWhitelist() { this->kibanaPrivateIPWhitelist_ = nullptr;};
    inline const vector<string> & kibanaPrivateIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaPrivateIPWhitelist_, vector<string>) };
    inline vector<string> kibanaPrivateIPWhitelist() { DARABONBA_PTR_GET(kibanaPrivateIPWhitelist_, vector<string>) };
    inline DescribeInstanceResponseBodyResult& setKibanaPrivateIPWhitelist(const vector<string> & kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };
    inline DescribeInstanceResponseBodyResult& setKibanaPrivateIPWhitelist(vector<string> && kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };


    // kibanaPrivatePort Field Functions 
    bool hasKibanaPrivatePort() const { return this->kibanaPrivatePort_ != nullptr;};
    void deleteKibanaPrivatePort() { this->kibanaPrivatePort_ = nullptr;};
    inline string kibanaPrivatePort() const { DARABONBA_PTR_GET_DEFAULT(kibanaPrivatePort_, "") };
    inline DescribeInstanceResponseBodyResult& setKibanaPrivatePort(string kibanaPrivatePort) { DARABONBA_PTR_SET_VALUE(kibanaPrivatePort_, kibanaPrivatePort) };


    // masterConfiguration Field Functions 
    bool hasMasterConfiguration() const { return this->masterConfiguration_ != nullptr;};
    void deleteMasterConfiguration() { this->masterConfiguration_ = nullptr;};
    inline const Models::DescribeInstanceResponseBodyResultMasterConfiguration & masterConfiguration() const { DARABONBA_PTR_GET_CONST(masterConfiguration_, Models::DescribeInstanceResponseBodyResultMasterConfiguration) };
    inline Models::DescribeInstanceResponseBodyResultMasterConfiguration masterConfiguration() { DARABONBA_PTR_GET(masterConfiguration_, Models::DescribeInstanceResponseBodyResultMasterConfiguration) };
    inline DescribeInstanceResponseBodyResult& setMasterConfiguration(const Models::DescribeInstanceResponseBodyResultMasterConfiguration & masterConfiguration) { DARABONBA_PTR_SET_VALUE(masterConfiguration_, masterConfiguration) };
    inline DescribeInstanceResponseBodyResult& setMasterConfiguration(Models::DescribeInstanceResponseBodyResultMasterConfiguration && masterConfiguration) { DARABONBA_PTR_SET_RVALUE(masterConfiguration_, masterConfiguration) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const Models::DescribeInstanceResponseBodyResultNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Models::DescribeInstanceResponseBodyResultNetworkConfig) };
    inline Models::DescribeInstanceResponseBodyResultNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, Models::DescribeInstanceResponseBodyResultNetworkConfig) };
    inline DescribeInstanceResponseBodyResult& setNetworkConfig(const Models::DescribeInstanceResponseBodyResultNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline DescribeInstanceResponseBodyResult& setNetworkConfig(Models::DescribeInstanceResponseBodyResultNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline DescribeInstanceResponseBodyResult& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const Models::DescribeInstanceResponseBodyResultNodeSpec & nodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, Models::DescribeInstanceResponseBodyResultNodeSpec) };
    inline Models::DescribeInstanceResponseBodyResultNodeSpec nodeSpec() { DARABONBA_PTR_GET(nodeSpec_, Models::DescribeInstanceResponseBodyResultNodeSpec) };
    inline DescribeInstanceResponseBodyResult& setNodeSpec(const Models::DescribeInstanceResponseBodyResultNodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline DescribeInstanceResponseBodyResult& setNodeSpec(Models::DescribeInstanceResponseBodyResultNodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline DescribeInstanceResponseBodyResult& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeInstanceResponseBodyResult& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // postpaidServiceStatus Field Functions 
    bool hasPostpaidServiceStatus() const { return this->postpaidServiceStatus_ != nullptr;};
    void deletePostpaidServiceStatus() { this->postpaidServiceStatus_ = nullptr;};
    inline string postpaidServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(postpaidServiceStatus_, "") };
    inline DescribeInstanceResponseBodyResult& setPostpaidServiceStatus(string postpaidServiceStatus) { DARABONBA_PTR_SET_VALUE(postpaidServiceStatus_, postpaidServiceStatus) };


    // privateNetworkIpWhiteList Field Functions 
    bool hasPrivateNetworkIpWhiteList() const { return this->privateNetworkIpWhiteList_ != nullptr;};
    void deletePrivateNetworkIpWhiteList() { this->privateNetworkIpWhiteList_ = nullptr;};
    inline const vector<string> & privateNetworkIpWhiteList() const { DARABONBA_PTR_GET_CONST(privateNetworkIpWhiteList_, vector<string>) };
    inline vector<string> privateNetworkIpWhiteList() { DARABONBA_PTR_GET(privateNetworkIpWhiteList_, vector<string>) };
    inline DescribeInstanceResponseBodyResult& setPrivateNetworkIpWhiteList(const vector<string> & privateNetworkIpWhiteList) { DARABONBA_PTR_SET_VALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };
    inline DescribeInstanceResponseBodyResult& setPrivateNetworkIpWhiteList(vector<string> && privateNetworkIpWhiteList) { DARABONBA_PTR_SET_RVALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeInstanceResponseBodyResult& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // publicDomain Field Functions 
    bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
    void deletePublicDomain() { this->publicDomain_ = nullptr;};
    inline string publicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
    inline DescribeInstanceResponseBodyResult& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


    // publicIpWhitelist Field Functions 
    bool hasPublicIpWhitelist() const { return this->publicIpWhitelist_ != nullptr;};
    void deletePublicIpWhitelist() { this->publicIpWhitelist_ = nullptr;};
    inline const vector<string> & publicIpWhitelist() const { DARABONBA_PTR_GET_CONST(publicIpWhitelist_, vector<string>) };
    inline vector<string> publicIpWhitelist() { DARABONBA_PTR_GET(publicIpWhitelist_, vector<string>) };
    inline DescribeInstanceResponseBodyResult& setPublicIpWhitelist(const vector<string> & publicIpWhitelist) { DARABONBA_PTR_SET_VALUE(publicIpWhitelist_, publicIpWhitelist) };
    inline DescribeInstanceResponseBodyResult& setPublicIpWhitelist(vector<string> && publicIpWhitelist) { DARABONBA_PTR_SET_RVALUE(publicIpWhitelist_, publicIpWhitelist) };


    // publicPort Field Functions 
    bool hasPublicPort() const { return this->publicPort_ != nullptr;};
    void deletePublicPort() { this->publicPort_ = nullptr;};
    inline int32_t publicPort() const { DARABONBA_PTR_GET_DEFAULT(publicPort_, 0) };
    inline DescribeInstanceResponseBodyResult& setPublicPort(int32_t publicPort) { DARABONBA_PTR_SET_VALUE(publicPort_, publicPort) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstanceResponseBodyResult& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceVpc Field Functions 
    bool hasServiceVpc() const { return this->serviceVpc_ != nullptr;};
    void deleteServiceVpc() { this->serviceVpc_ = nullptr;};
    inline bool serviceVpc() const { DARABONBA_PTR_GET_DEFAULT(serviceVpc_, false) };
    inline DescribeInstanceResponseBodyResult& setServiceVpc(bool serviceVpc) { DARABONBA_PTR_SET_VALUE(serviceVpc_, serviceVpc) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // synonymsDicts Field Functions 
    bool hasSynonymsDicts() const { return this->synonymsDicts_ != nullptr;};
    void deleteSynonymsDicts() { this->synonymsDicts_ = nullptr;};
    inline const vector<Models::DescribeInstanceResponseBodyResultSynonymsDicts> & synonymsDicts() const { DARABONBA_PTR_GET_CONST(synonymsDicts_, vector<Models::DescribeInstanceResponseBodyResultSynonymsDicts>) };
    inline vector<Models::DescribeInstanceResponseBodyResultSynonymsDicts> synonymsDicts() { DARABONBA_PTR_GET(synonymsDicts_, vector<Models::DescribeInstanceResponseBodyResultSynonymsDicts>) };
    inline DescribeInstanceResponseBodyResult& setSynonymsDicts(const vector<Models::DescribeInstanceResponseBodyResultSynonymsDicts> & synonymsDicts) { DARABONBA_PTR_SET_VALUE(synonymsDicts_, synonymsDicts) };
    inline DescribeInstanceResponseBodyResult& setSynonymsDicts(vector<Models::DescribeInstanceResponseBodyResultSynonymsDicts> && synonymsDicts) { DARABONBA_PTR_SET_RVALUE(synonymsDicts_, synonymsDicts) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeInstanceResponseBodyResultTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeInstanceResponseBodyResultTags>) };
    inline vector<Models::DescribeInstanceResponseBodyResultTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeInstanceResponseBodyResultTags>) };
    inline DescribeInstanceResponseBodyResult& setTags(const vector<Models::DescribeInstanceResponseBodyResultTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeInstanceResponseBodyResult& setTags(vector<Models::DescribeInstanceResponseBodyResultTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline DescribeInstanceResponseBodyResult& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeInstanceResponseBodyResult& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


    // warmNode Field Functions 
    bool hasWarmNode() const { return this->warmNode_ != nullptr;};
    void deleteWarmNode() { this->warmNode_ = nullptr;};
    inline bool warmNode() const { DARABONBA_PTR_GET_DEFAULT(warmNode_, false) };
    inline DescribeInstanceResponseBodyResult& setWarmNode(bool warmNode) { DARABONBA_PTR_SET_VALUE(warmNode_, warmNode) };


    // warmNodeConfiguration Field Functions 
    bool hasWarmNodeConfiguration() const { return this->warmNodeConfiguration_ != nullptr;};
    void deleteWarmNodeConfiguration() { this->warmNodeConfiguration_ = nullptr;};
    inline const Models::DescribeInstanceResponseBodyResultWarmNodeConfiguration & warmNodeConfiguration() const { DARABONBA_PTR_GET_CONST(warmNodeConfiguration_, Models::DescribeInstanceResponseBodyResultWarmNodeConfiguration) };
    inline Models::DescribeInstanceResponseBodyResultWarmNodeConfiguration warmNodeConfiguration() { DARABONBA_PTR_GET(warmNodeConfiguration_, Models::DescribeInstanceResponseBodyResultWarmNodeConfiguration) };
    inline DescribeInstanceResponseBodyResult& setWarmNodeConfiguration(const Models::DescribeInstanceResponseBodyResultWarmNodeConfiguration & warmNodeConfiguration) { DARABONBA_PTR_SET_VALUE(warmNodeConfiguration_, warmNodeConfiguration) };
    inline DescribeInstanceResponseBodyResult& setWarmNodeConfiguration(Models::DescribeInstanceResponseBodyResultWarmNodeConfiguration && warmNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(warmNodeConfiguration_, warmNodeConfiguration) };


    // zoneCount Field Functions 
    bool hasZoneCount() const { return this->zoneCount_ != nullptr;};
    void deleteZoneCount() { this->zoneCount_ = nullptr;};
    inline int32_t zoneCount() const { DARABONBA_PTR_GET_DEFAULT(zoneCount_, 0) };
    inline DescribeInstanceResponseBodyResult& setZoneCount(int32_t zoneCount) { DARABONBA_PTR_SET_VALUE(zoneCount_, zoneCount) };


    // zoneInfos Field Functions 
    bool hasZoneInfos() const { return this->zoneInfos_ != nullptr;};
    void deleteZoneInfos() { this->zoneInfos_ = nullptr;};
    inline const vector<Models::DescribeInstanceResponseBodyResultZoneInfos> & zoneInfos() const { DARABONBA_PTR_GET_CONST(zoneInfos_, vector<Models::DescribeInstanceResponseBodyResultZoneInfos>) };
    inline vector<Models::DescribeInstanceResponseBodyResultZoneInfos> zoneInfos() { DARABONBA_PTR_GET(zoneInfos_, vector<Models::DescribeInstanceResponseBodyResultZoneInfos>) };
    inline DescribeInstanceResponseBodyResult& setZoneInfos(const vector<Models::DescribeInstanceResponseBodyResultZoneInfos> & zoneInfos) { DARABONBA_PTR_SET_VALUE(zoneInfos_, zoneInfos) };
    inline DescribeInstanceResponseBodyResult& setZoneInfos(vector<Models::DescribeInstanceResponseBodyResultZoneInfos> && zoneInfos) { DARABONBA_PTR_SET_RVALUE(zoneInfos_, zoneInfos) };


  protected:
    std::shared_ptr<bool> advancedDedicateMaster_ = nullptr;
    std::shared_ptr<Models::DescribeInstanceResponseBodyResultAdvancedSetting> advancedSetting_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstanceResponseBodyResultAliwsDicts>> aliwsDicts_ = nullptr;
    std::shared_ptr<string> archType_ = nullptr;
    std::shared_ptr<Models::DescribeInstanceResponseBodyResultClientNodeConfiguration> clientNodeConfiguration_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<bool> dedicateMaster_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstanceResponseBodyResultDictList>> dictList_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<Models::DescribeInstanceResponseBodyResultElasticDataNodeConfiguration> elasticDataNodeConfiguration_ = nullptr;
    std::shared_ptr<bool> enableKibanaPrivateNetwork_ = nullptr;
    std::shared_ptr<bool> enableKibanaPublicNetwork_ = nullptr;
    std::shared_ptr<bool> enablePublic_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    Darabonba::Json esConfig_ = nullptr;
    std::shared_ptr<vector<string>> esIPBlacklist_ = nullptr;
    std::shared_ptr<vector<string>> esIPWhitelist_ = nullptr;
    std::shared_ptr<string> esVersion_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> extendConfigs_ = nullptr;
    std::shared_ptr<bool> haveClientNode_ = nullptr;
    std::shared_ptr<bool> haveKibana_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstanceResponseBodyResultIkHotDicts>> ikHotDicts_ = nullptr;
    std::shared_ptr<string> instanceCategory_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> isNewDeployment_ = nullptr;
    std::shared_ptr<Models::DescribeInstanceResponseBodyResultKibanaConfiguration> kibanaConfiguration_ = nullptr;
    std::shared_ptr<string> kibanaDomain_ = nullptr;
    std::shared_ptr<vector<string>> kibanaIPWhitelist_ = nullptr;
    std::shared_ptr<int32_t> kibanaPort_ = nullptr;
    std::shared_ptr<string> kibanaPrivateDomain_ = nullptr;
    std::shared_ptr<vector<string>> kibanaPrivateIPWhitelist_ = nullptr;
    std::shared_ptr<string> kibanaPrivatePort_ = nullptr;
    std::shared_ptr<Models::DescribeInstanceResponseBodyResultMasterConfiguration> masterConfiguration_ = nullptr;
    std::shared_ptr<Models::DescribeInstanceResponseBodyResultNetworkConfig> networkConfig_ = nullptr;
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    std::shared_ptr<Models::DescribeInstanceResponseBodyResultNodeSpec> nodeSpec_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> postpaidServiceStatus_ = nullptr;
    std::shared_ptr<vector<string>> privateNetworkIpWhiteList_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> publicDomain_ = nullptr;
    std::shared_ptr<vector<string>> publicIpWhitelist_ = nullptr;
    std::shared_ptr<int32_t> publicPort_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<bool> serviceVpc_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstanceResponseBodyResultSynonymsDicts>> synonymsDicts_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstanceResponseBodyResultTags>> tags_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
    std::shared_ptr<bool> warmNode_ = nullptr;
    std::shared_ptr<Models::DescribeInstanceResponseBodyResultWarmNodeConfiguration> warmNodeConfiguration_ = nullptr;
    std::shared_ptr<int32_t> zoneCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstanceResponseBodyResultZoneInfos>> zoneInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
