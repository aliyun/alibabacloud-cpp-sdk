// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELASTICSEARCH_HPP_
#define ALIBABACLOUD_MODELS_ELASTICSEARCH_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ElasticsearchAdvancedSetting.hpp>
#include <vector>
#include <alibabacloud/models/DictInfo.hpp>
#include <alibabacloud/models/ClientNodeConfiguration.hpp>
#include <alibabacloud/models/ElasticDataNodeConfiguration.hpp>
#include <map>
#include <alibabacloud/models/KibanaNodeConfiguration.hpp>
#include <alibabacloud/models/MasterNodeConfiguration.hpp>
#include <alibabacloud/models/NetworkConfig.hpp>
#include <alibabacloud/models/NodeSpec.hpp>
#include <alibabacloud/models/ReadWritePolicy.hpp>
#include <alibabacloud/models/Tag.hpp>
#include <alibabacloud/models/WarmNodeConfiguration.hpp>
#include <alibabacloud/models/ZoneInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class Elasticsearch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Elasticsearch& obj) { 
      DARABONBA_PTR_TO_JSON(advancedDedicateMaster, advancedDedicateMaster_);
      DARABONBA_PTR_TO_JSON(advancedSetting, advancedSetting_);
      DARABONBA_PTR_TO_JSON(aliwsDicts, aliwsDicts_);
      DARABONBA_PTR_TO_JSON(clientNodeConfiguration, clientNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(dataNode, dataNode_);
      DARABONBA_PTR_TO_JSON(dedicateMaster, dedicateMaster_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(dictList, dictList_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(enableKibanaPrivateNetwork, enableKibanaPrivateNetwork_);
      DARABONBA_PTR_TO_JSON(enableKibanaPublicNetwork, enableKibanaPublicNetwork_);
      DARABONBA_PTR_TO_JSON(enablePublic, enablePublic_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(esConfig, esConfig_);
      DARABONBA_PTR_TO_JSON(esIPWhitelist, esIPWhitelist_);
      DARABONBA_PTR_TO_JSON(esVersion, esVersion_);
      DARABONBA_PTR_TO_JSON(extendConfigs, extendConfigs_);
      DARABONBA_PTR_TO_JSON(haveClientNode, haveClientNode_);
      DARABONBA_PTR_TO_JSON(haveElasticDataNode, haveElasticDataNode_);
      DARABONBA_PTR_TO_JSON(haveKibana, haveKibana_);
      DARABONBA_PTR_TO_JSON(ikHotDicts, ikHotDicts_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_TO_JSON(kibanaDomain, kibanaDomain_);
      DARABONBA_PTR_TO_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
      DARABONBA_PTR_TO_JSON(kibanaPort, kibanaPort_);
      DARABONBA_PTR_TO_JSON(kibanaPrivateDomain, kibanaPrivateDomain_);
      DARABONBA_PTR_TO_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
      DARABONBA_PTR_TO_JSON(kibanaPrivatePort, kibanaPrivatePort_);
      DARABONBA_PTR_TO_JSON(kibanaProtocol, kibanaProtocol_);
      DARABONBA_PTR_TO_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
      DARABONBA_PTR_TO_JSON(productType, productType_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(publicDomain, publicDomain_);
      DARABONBA_PTR_TO_JSON(publicIpWhitelist, publicIpWhitelist_);
      DARABONBA_PTR_TO_JSON(publicPort, publicPort_);
      DARABONBA_PTR_TO_JSON(readWritePolicy, readWritePolicy_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(serviceVpc, serviceVpc_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(synonymsDicts, synonymsDicts_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(warmNode, warmNode_);
      DARABONBA_PTR_TO_JSON(warmNodeConfiguration, warmNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(zoneCount, zoneCount_);
      DARABONBA_PTR_TO_JSON(zoneInfos, zoneInfos_);
    };
    friend void from_json(const Darabonba::Json& j, Elasticsearch& obj) { 
      DARABONBA_PTR_FROM_JSON(advancedDedicateMaster, advancedDedicateMaster_);
      DARABONBA_PTR_FROM_JSON(advancedSetting, advancedSetting_);
      DARABONBA_PTR_FROM_JSON(aliwsDicts, aliwsDicts_);
      DARABONBA_PTR_FROM_JSON(clientNodeConfiguration, clientNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(dataNode, dataNode_);
      DARABONBA_PTR_FROM_JSON(dedicateMaster, dedicateMaster_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(dictList, dictList_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(enableKibanaPrivateNetwork, enableKibanaPrivateNetwork_);
      DARABONBA_PTR_FROM_JSON(enableKibanaPublicNetwork, enableKibanaPublicNetwork_);
      DARABONBA_PTR_FROM_JSON(enablePublic, enablePublic_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(esConfig, esConfig_);
      DARABONBA_PTR_FROM_JSON(esIPWhitelist, esIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(esVersion, esVersion_);
      DARABONBA_PTR_FROM_JSON(extendConfigs, extendConfigs_);
      DARABONBA_PTR_FROM_JSON(haveClientNode, haveClientNode_);
      DARABONBA_PTR_FROM_JSON(haveElasticDataNode, haveElasticDataNode_);
      DARABONBA_PTR_FROM_JSON(haveKibana, haveKibana_);
      DARABONBA_PTR_FROM_JSON(ikHotDicts, ikHotDicts_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_FROM_JSON(kibanaDomain, kibanaDomain_);
      DARABONBA_PTR_FROM_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(kibanaPort, kibanaPort_);
      DARABONBA_PTR_FROM_JSON(kibanaPrivateDomain, kibanaPrivateDomain_);
      DARABONBA_PTR_FROM_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(kibanaPrivatePort, kibanaPrivatePort_);
      DARABONBA_PTR_FROM_JSON(kibanaProtocol, kibanaProtocol_);
      DARABONBA_PTR_FROM_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
      DARABONBA_PTR_FROM_JSON(productType, productType_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(publicDomain, publicDomain_);
      DARABONBA_PTR_FROM_JSON(publicIpWhitelist, publicIpWhitelist_);
      DARABONBA_PTR_FROM_JSON(publicPort, publicPort_);
      DARABONBA_PTR_FROM_JSON(readWritePolicy, readWritePolicy_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(serviceVpc, serviceVpc_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(synonymsDicts, synonymsDicts_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(warmNode, warmNode_);
      DARABONBA_PTR_FROM_JSON(warmNodeConfiguration, warmNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(zoneCount, zoneCount_);
      DARABONBA_PTR_FROM_JSON(zoneInfos, zoneInfos_);
    };
    Elasticsearch() = default ;
    Elasticsearch(const Elasticsearch &) = default ;
    Elasticsearch(Elasticsearch &&) = default ;
    Elasticsearch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Elasticsearch() = default ;
    Elasticsearch& operator=(const Elasticsearch &) = default ;
    Elasticsearch& operator=(Elasticsearch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advancedDedicateMaster_ != nullptr
        && this->advancedSetting_ != nullptr && this->aliwsDicts_ != nullptr && this->clientNodeConfiguration_ != nullptr && this->createdAt_ != nullptr && this->dataNode_ != nullptr
        && this->dedicateMaster_ != nullptr && this->description_ != nullptr && this->dictList_ != nullptr && this->domain_ != nullptr && this->elasticDataNodeConfiguration_ != nullptr
        && this->enableKibanaPrivateNetwork_ != nullptr && this->enableKibanaPublicNetwork_ != nullptr && this->enablePublic_ != nullptr && this->endTime_ != nullptr && this->esConfig_ != nullptr
        && this->esIPWhitelist_ != nullptr && this->esVersion_ != nullptr && this->extendConfigs_ != nullptr && this->haveClientNode_ != nullptr && this->haveElasticDataNode_ != nullptr
        && this->haveKibana_ != nullptr && this->ikHotDicts_ != nullptr && this->instanceId_ != nullptr && this->kibanaConfiguration_ != nullptr && this->kibanaDomain_ != nullptr
        && this->kibanaIPWhitelist_ != nullptr && this->kibanaPort_ != nullptr && this->kibanaPrivateDomain_ != nullptr && this->kibanaPrivateIPWhitelist_ != nullptr && this->kibanaPrivatePort_ != nullptr
        && this->kibanaProtocol_ != nullptr && this->masterConfiguration_ != nullptr && this->networkConfig_ != nullptr && this->nodeAmount_ != nullptr && this->nodeSpec_ != nullptr
        && this->paymentType_ != nullptr && this->port_ != nullptr && this->privateNetworkIpWhiteList_ != nullptr && this->productType_ != nullptr && this->protocol_ != nullptr
        && this->publicDomain_ != nullptr && this->publicIpWhitelist_ != nullptr && this->publicPort_ != nullptr && this->readWritePolicy_ != nullptr && this->resourceGroupId_ != nullptr
        && this->serviceVpc_ != nullptr && this->status_ != nullptr && this->synonymsDicts_ != nullptr && this->tags_ != nullptr && this->updatedAt_ != nullptr
        && this->warmNode_ != nullptr && this->warmNodeConfiguration_ != nullptr && this->zoneCount_ != nullptr && this->zoneInfos_ != nullptr; };
    // advancedDedicateMaster Field Functions 
    bool hasAdvancedDedicateMaster() const { return this->advancedDedicateMaster_ != nullptr;};
    void deleteAdvancedDedicateMaster() { this->advancedDedicateMaster_ = nullptr;};
    inline bool advancedDedicateMaster() const { DARABONBA_PTR_GET_DEFAULT(advancedDedicateMaster_, false) };
    inline Elasticsearch& setAdvancedDedicateMaster(bool advancedDedicateMaster) { DARABONBA_PTR_SET_VALUE(advancedDedicateMaster_, advancedDedicateMaster) };


    // advancedSetting Field Functions 
    bool hasAdvancedSetting() const { return this->advancedSetting_ != nullptr;};
    void deleteAdvancedSetting() { this->advancedSetting_ = nullptr;};
    inline const ElasticsearchAdvancedSetting & advancedSetting() const { DARABONBA_PTR_GET_CONST(advancedSetting_, ElasticsearchAdvancedSetting) };
    inline ElasticsearchAdvancedSetting advancedSetting() { DARABONBA_PTR_GET(advancedSetting_, ElasticsearchAdvancedSetting) };
    inline Elasticsearch& setAdvancedSetting(const ElasticsearchAdvancedSetting & advancedSetting) { DARABONBA_PTR_SET_VALUE(advancedSetting_, advancedSetting) };
    inline Elasticsearch& setAdvancedSetting(ElasticsearchAdvancedSetting && advancedSetting) { DARABONBA_PTR_SET_RVALUE(advancedSetting_, advancedSetting) };


    // aliwsDicts Field Functions 
    bool hasAliwsDicts() const { return this->aliwsDicts_ != nullptr;};
    void deleteAliwsDicts() { this->aliwsDicts_ = nullptr;};
    inline const vector<DictInfo> & aliwsDicts() const { DARABONBA_PTR_GET_CONST(aliwsDicts_, vector<DictInfo>) };
    inline vector<DictInfo> aliwsDicts() { DARABONBA_PTR_GET(aliwsDicts_, vector<DictInfo>) };
    inline Elasticsearch& setAliwsDicts(const vector<DictInfo> & aliwsDicts) { DARABONBA_PTR_SET_VALUE(aliwsDicts_, aliwsDicts) };
    inline Elasticsearch& setAliwsDicts(vector<DictInfo> && aliwsDicts) { DARABONBA_PTR_SET_RVALUE(aliwsDicts_, aliwsDicts) };


    // clientNodeConfiguration Field Functions 
    bool hasClientNodeConfiguration() const { return this->clientNodeConfiguration_ != nullptr;};
    void deleteClientNodeConfiguration() { this->clientNodeConfiguration_ = nullptr;};
    inline const ClientNodeConfiguration & clientNodeConfiguration() const { DARABONBA_PTR_GET_CONST(clientNodeConfiguration_, ClientNodeConfiguration) };
    inline ClientNodeConfiguration clientNodeConfiguration() { DARABONBA_PTR_GET(clientNodeConfiguration_, ClientNodeConfiguration) };
    inline Elasticsearch& setClientNodeConfiguration(const ClientNodeConfiguration & clientNodeConfiguration) { DARABONBA_PTR_SET_VALUE(clientNodeConfiguration_, clientNodeConfiguration) };
    inline Elasticsearch& setClientNodeConfiguration(ClientNodeConfiguration && clientNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(clientNodeConfiguration_, clientNodeConfiguration) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Elasticsearch& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // dataNode Field Functions 
    bool hasDataNode() const { return this->dataNode_ != nullptr;};
    void deleteDataNode() { this->dataNode_ = nullptr;};
    inline bool dataNode() const { DARABONBA_PTR_GET_DEFAULT(dataNode_, false) };
    inline Elasticsearch& setDataNode(bool dataNode) { DARABONBA_PTR_SET_VALUE(dataNode_, dataNode) };


    // dedicateMaster Field Functions 
    bool hasDedicateMaster() const { return this->dedicateMaster_ != nullptr;};
    void deleteDedicateMaster() { this->dedicateMaster_ = nullptr;};
    inline bool dedicateMaster() const { DARABONBA_PTR_GET_DEFAULT(dedicateMaster_, false) };
    inline Elasticsearch& setDedicateMaster(bool dedicateMaster) { DARABONBA_PTR_SET_VALUE(dedicateMaster_, dedicateMaster) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Elasticsearch& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dictList Field Functions 
    bool hasDictList() const { return this->dictList_ != nullptr;};
    void deleteDictList() { this->dictList_ = nullptr;};
    inline const vector<DictInfo> & dictList() const { DARABONBA_PTR_GET_CONST(dictList_, vector<DictInfo>) };
    inline vector<DictInfo> dictList() { DARABONBA_PTR_GET(dictList_, vector<DictInfo>) };
    inline Elasticsearch& setDictList(const vector<DictInfo> & dictList) { DARABONBA_PTR_SET_VALUE(dictList_, dictList) };
    inline Elasticsearch& setDictList(vector<DictInfo> && dictList) { DARABONBA_PTR_SET_RVALUE(dictList_, dictList) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline Elasticsearch& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // elasticDataNodeConfiguration Field Functions 
    bool hasElasticDataNodeConfiguration() const { return this->elasticDataNodeConfiguration_ != nullptr;};
    void deleteElasticDataNodeConfiguration() { this->elasticDataNodeConfiguration_ = nullptr;};
    inline const ElasticDataNodeConfiguration & elasticDataNodeConfiguration() const { DARABONBA_PTR_GET_CONST(elasticDataNodeConfiguration_, ElasticDataNodeConfiguration) };
    inline ElasticDataNodeConfiguration elasticDataNodeConfiguration() { DARABONBA_PTR_GET(elasticDataNodeConfiguration_, ElasticDataNodeConfiguration) };
    inline Elasticsearch& setElasticDataNodeConfiguration(const ElasticDataNodeConfiguration & elasticDataNodeConfiguration) { DARABONBA_PTR_SET_VALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };
    inline Elasticsearch& setElasticDataNodeConfiguration(ElasticDataNodeConfiguration && elasticDataNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };


    // enableKibanaPrivateNetwork Field Functions 
    bool hasEnableKibanaPrivateNetwork() const { return this->enableKibanaPrivateNetwork_ != nullptr;};
    void deleteEnableKibanaPrivateNetwork() { this->enableKibanaPrivateNetwork_ = nullptr;};
    inline bool enableKibanaPrivateNetwork() const { DARABONBA_PTR_GET_DEFAULT(enableKibanaPrivateNetwork_, false) };
    inline Elasticsearch& setEnableKibanaPrivateNetwork(bool enableKibanaPrivateNetwork) { DARABONBA_PTR_SET_VALUE(enableKibanaPrivateNetwork_, enableKibanaPrivateNetwork) };


    // enableKibanaPublicNetwork Field Functions 
    bool hasEnableKibanaPublicNetwork() const { return this->enableKibanaPublicNetwork_ != nullptr;};
    void deleteEnableKibanaPublicNetwork() { this->enableKibanaPublicNetwork_ = nullptr;};
    inline bool enableKibanaPublicNetwork() const { DARABONBA_PTR_GET_DEFAULT(enableKibanaPublicNetwork_, false) };
    inline Elasticsearch& setEnableKibanaPublicNetwork(bool enableKibanaPublicNetwork) { DARABONBA_PTR_SET_VALUE(enableKibanaPublicNetwork_, enableKibanaPublicNetwork) };


    // enablePublic Field Functions 
    bool hasEnablePublic() const { return this->enablePublic_ != nullptr;};
    void deleteEnablePublic() { this->enablePublic_ = nullptr;};
    inline bool enablePublic() const { DARABONBA_PTR_GET_DEFAULT(enablePublic_, false) };
    inline Elasticsearch& setEnablePublic(bool enablePublic) { DARABONBA_PTR_SET_VALUE(enablePublic_, enablePublic) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline Elasticsearch& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // esConfig Field Functions 
    bool hasEsConfig() const { return this->esConfig_ != nullptr;};
    void deleteEsConfig() { this->esConfig_ = nullptr;};
    inline const map<string, string> & esConfig() const { DARABONBA_PTR_GET_CONST(esConfig_, map<string, string>) };
    inline map<string, string> esConfig() { DARABONBA_PTR_GET(esConfig_, map<string, string>) };
    inline Elasticsearch& setEsConfig(const map<string, string> & esConfig) { DARABONBA_PTR_SET_VALUE(esConfig_, esConfig) };
    inline Elasticsearch& setEsConfig(map<string, string> && esConfig) { DARABONBA_PTR_SET_RVALUE(esConfig_, esConfig) };


    // esIPWhitelist Field Functions 
    bool hasEsIPWhitelist() const { return this->esIPWhitelist_ != nullptr;};
    void deleteEsIPWhitelist() { this->esIPWhitelist_ = nullptr;};
    inline const vector<string> & esIPWhitelist() const { DARABONBA_PTR_GET_CONST(esIPWhitelist_, vector<string>) };
    inline vector<string> esIPWhitelist() { DARABONBA_PTR_GET(esIPWhitelist_, vector<string>) };
    inline Elasticsearch& setEsIPWhitelist(const vector<string> & esIPWhitelist) { DARABONBA_PTR_SET_VALUE(esIPWhitelist_, esIPWhitelist) };
    inline Elasticsearch& setEsIPWhitelist(vector<string> && esIPWhitelist) { DARABONBA_PTR_SET_RVALUE(esIPWhitelist_, esIPWhitelist) };


    // esVersion Field Functions 
    bool hasEsVersion() const { return this->esVersion_ != nullptr;};
    void deleteEsVersion() { this->esVersion_ = nullptr;};
    inline string esVersion() const { DARABONBA_PTR_GET_DEFAULT(esVersion_, "") };
    inline Elasticsearch& setEsVersion(string esVersion) { DARABONBA_PTR_SET_VALUE(esVersion_, esVersion) };


    // extendConfigs Field Functions 
    bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
    void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
    inline const vector<Darabonba::Json> & extendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> extendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Darabonba::Json>) };
    inline Elasticsearch& setExtendConfigs(const vector<Darabonba::Json> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
    inline Elasticsearch& setExtendConfigs(vector<Darabonba::Json> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


    // haveClientNode Field Functions 
    bool hasHaveClientNode() const { return this->haveClientNode_ != nullptr;};
    void deleteHaveClientNode() { this->haveClientNode_ = nullptr;};
    inline bool haveClientNode() const { DARABONBA_PTR_GET_DEFAULT(haveClientNode_, false) };
    inline Elasticsearch& setHaveClientNode(bool haveClientNode) { DARABONBA_PTR_SET_VALUE(haveClientNode_, haveClientNode) };


    // haveElasticDataNode Field Functions 
    bool hasHaveElasticDataNode() const { return this->haveElasticDataNode_ != nullptr;};
    void deleteHaveElasticDataNode() { this->haveElasticDataNode_ = nullptr;};
    inline bool haveElasticDataNode() const { DARABONBA_PTR_GET_DEFAULT(haveElasticDataNode_, false) };
    inline Elasticsearch& setHaveElasticDataNode(bool haveElasticDataNode) { DARABONBA_PTR_SET_VALUE(haveElasticDataNode_, haveElasticDataNode) };


    // haveKibana Field Functions 
    bool hasHaveKibana() const { return this->haveKibana_ != nullptr;};
    void deleteHaveKibana() { this->haveKibana_ = nullptr;};
    inline bool haveKibana() const { DARABONBA_PTR_GET_DEFAULT(haveKibana_, false) };
    inline Elasticsearch& setHaveKibana(bool haveKibana) { DARABONBA_PTR_SET_VALUE(haveKibana_, haveKibana) };


    // ikHotDicts Field Functions 
    bool hasIkHotDicts() const { return this->ikHotDicts_ != nullptr;};
    void deleteIkHotDicts() { this->ikHotDicts_ = nullptr;};
    inline const vector<DictInfo> & ikHotDicts() const { DARABONBA_PTR_GET_CONST(ikHotDicts_, vector<DictInfo>) };
    inline vector<DictInfo> ikHotDicts() { DARABONBA_PTR_GET(ikHotDicts_, vector<DictInfo>) };
    inline Elasticsearch& setIkHotDicts(const vector<DictInfo> & ikHotDicts) { DARABONBA_PTR_SET_VALUE(ikHotDicts_, ikHotDicts) };
    inline Elasticsearch& setIkHotDicts(vector<DictInfo> && ikHotDicts) { DARABONBA_PTR_SET_RVALUE(ikHotDicts_, ikHotDicts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline Elasticsearch& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // kibanaConfiguration Field Functions 
    bool hasKibanaConfiguration() const { return this->kibanaConfiguration_ != nullptr;};
    void deleteKibanaConfiguration() { this->kibanaConfiguration_ = nullptr;};
    inline const KibanaNodeConfiguration & kibanaConfiguration() const { DARABONBA_PTR_GET_CONST(kibanaConfiguration_, KibanaNodeConfiguration) };
    inline KibanaNodeConfiguration kibanaConfiguration() { DARABONBA_PTR_GET(kibanaConfiguration_, KibanaNodeConfiguration) };
    inline Elasticsearch& setKibanaConfiguration(const KibanaNodeConfiguration & kibanaConfiguration) { DARABONBA_PTR_SET_VALUE(kibanaConfiguration_, kibanaConfiguration) };
    inline Elasticsearch& setKibanaConfiguration(KibanaNodeConfiguration && kibanaConfiguration) { DARABONBA_PTR_SET_RVALUE(kibanaConfiguration_, kibanaConfiguration) };


    // kibanaDomain Field Functions 
    bool hasKibanaDomain() const { return this->kibanaDomain_ != nullptr;};
    void deleteKibanaDomain() { this->kibanaDomain_ = nullptr;};
    inline string kibanaDomain() const { DARABONBA_PTR_GET_DEFAULT(kibanaDomain_, "") };
    inline Elasticsearch& setKibanaDomain(string kibanaDomain) { DARABONBA_PTR_SET_VALUE(kibanaDomain_, kibanaDomain) };


    // kibanaIPWhitelist Field Functions 
    bool hasKibanaIPWhitelist() const { return this->kibanaIPWhitelist_ != nullptr;};
    void deleteKibanaIPWhitelist() { this->kibanaIPWhitelist_ = nullptr;};
    inline const vector<string> & kibanaIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaIPWhitelist_, vector<string>) };
    inline vector<string> kibanaIPWhitelist() { DARABONBA_PTR_GET(kibanaIPWhitelist_, vector<string>) };
    inline Elasticsearch& setKibanaIPWhitelist(const vector<string> & kibanaIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };
    inline Elasticsearch& setKibanaIPWhitelist(vector<string> && kibanaIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };


    // kibanaPort Field Functions 
    bool hasKibanaPort() const { return this->kibanaPort_ != nullptr;};
    void deleteKibanaPort() { this->kibanaPort_ = nullptr;};
    inline int64_t kibanaPort() const { DARABONBA_PTR_GET_DEFAULT(kibanaPort_, 0L) };
    inline Elasticsearch& setKibanaPort(int64_t kibanaPort) { DARABONBA_PTR_SET_VALUE(kibanaPort_, kibanaPort) };


    // kibanaPrivateDomain Field Functions 
    bool hasKibanaPrivateDomain() const { return this->kibanaPrivateDomain_ != nullptr;};
    void deleteKibanaPrivateDomain() { this->kibanaPrivateDomain_ = nullptr;};
    inline string kibanaPrivateDomain() const { DARABONBA_PTR_GET_DEFAULT(kibanaPrivateDomain_, "") };
    inline Elasticsearch& setKibanaPrivateDomain(string kibanaPrivateDomain) { DARABONBA_PTR_SET_VALUE(kibanaPrivateDomain_, kibanaPrivateDomain) };


    // kibanaPrivateIPWhitelist Field Functions 
    bool hasKibanaPrivateIPWhitelist() const { return this->kibanaPrivateIPWhitelist_ != nullptr;};
    void deleteKibanaPrivateIPWhitelist() { this->kibanaPrivateIPWhitelist_ = nullptr;};
    inline const vector<string> & kibanaPrivateIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaPrivateIPWhitelist_, vector<string>) };
    inline vector<string> kibanaPrivateIPWhitelist() { DARABONBA_PTR_GET(kibanaPrivateIPWhitelist_, vector<string>) };
    inline Elasticsearch& setKibanaPrivateIPWhitelist(const vector<string> & kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };
    inline Elasticsearch& setKibanaPrivateIPWhitelist(vector<string> && kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };


    // kibanaPrivatePort Field Functions 
    bool hasKibanaPrivatePort() const { return this->kibanaPrivatePort_ != nullptr;};
    void deleteKibanaPrivatePort() { this->kibanaPrivatePort_ = nullptr;};
    inline int64_t kibanaPrivatePort() const { DARABONBA_PTR_GET_DEFAULT(kibanaPrivatePort_, 0L) };
    inline Elasticsearch& setKibanaPrivatePort(int64_t kibanaPrivatePort) { DARABONBA_PTR_SET_VALUE(kibanaPrivatePort_, kibanaPrivatePort) };


    // kibanaProtocol Field Functions 
    bool hasKibanaProtocol() const { return this->kibanaProtocol_ != nullptr;};
    void deleteKibanaProtocol() { this->kibanaProtocol_ = nullptr;};
    inline string kibanaProtocol() const { DARABONBA_PTR_GET_DEFAULT(kibanaProtocol_, "") };
    inline Elasticsearch& setKibanaProtocol(string kibanaProtocol) { DARABONBA_PTR_SET_VALUE(kibanaProtocol_, kibanaProtocol) };


    // masterConfiguration Field Functions 
    bool hasMasterConfiguration() const { return this->masterConfiguration_ != nullptr;};
    void deleteMasterConfiguration() { this->masterConfiguration_ = nullptr;};
    inline const MasterNodeConfiguration & masterConfiguration() const { DARABONBA_PTR_GET_CONST(masterConfiguration_, MasterNodeConfiguration) };
    inline MasterNodeConfiguration masterConfiguration() { DARABONBA_PTR_GET(masterConfiguration_, MasterNodeConfiguration) };
    inline Elasticsearch& setMasterConfiguration(const MasterNodeConfiguration & masterConfiguration) { DARABONBA_PTR_SET_VALUE(masterConfiguration_, masterConfiguration) };
    inline Elasticsearch& setMasterConfiguration(MasterNodeConfiguration && masterConfiguration) { DARABONBA_PTR_SET_RVALUE(masterConfiguration_, masterConfiguration) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const NetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, NetworkConfig) };
    inline NetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, NetworkConfig) };
    inline Elasticsearch& setNetworkConfig(const NetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline Elasticsearch& setNetworkConfig(NetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int64_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0L) };
    inline Elasticsearch& setNodeAmount(int64_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const NodeSpec & nodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, NodeSpec) };
    inline NodeSpec nodeSpec() { DARABONBA_PTR_GET(nodeSpec_, NodeSpec) };
    inline Elasticsearch& setNodeSpec(const NodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline Elasticsearch& setNodeSpec(NodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline Elasticsearch& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline Elasticsearch& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateNetworkIpWhiteList Field Functions 
    bool hasPrivateNetworkIpWhiteList() const { return this->privateNetworkIpWhiteList_ != nullptr;};
    void deletePrivateNetworkIpWhiteList() { this->privateNetworkIpWhiteList_ = nullptr;};
    inline const vector<string> & privateNetworkIpWhiteList() const { DARABONBA_PTR_GET_CONST(privateNetworkIpWhiteList_, vector<string>) };
    inline vector<string> privateNetworkIpWhiteList() { DARABONBA_PTR_GET(privateNetworkIpWhiteList_, vector<string>) };
    inline Elasticsearch& setPrivateNetworkIpWhiteList(const vector<string> & privateNetworkIpWhiteList) { DARABONBA_PTR_SET_VALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };
    inline Elasticsearch& setPrivateNetworkIpWhiteList(vector<string> && privateNetworkIpWhiteList) { DARABONBA_PTR_SET_RVALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline Elasticsearch& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline Elasticsearch& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // publicDomain Field Functions 
    bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
    void deletePublicDomain() { this->publicDomain_ = nullptr;};
    inline string publicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
    inline Elasticsearch& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


    // publicIpWhitelist Field Functions 
    bool hasPublicIpWhitelist() const { return this->publicIpWhitelist_ != nullptr;};
    void deletePublicIpWhitelist() { this->publicIpWhitelist_ = nullptr;};
    inline const vector<string> & publicIpWhitelist() const { DARABONBA_PTR_GET_CONST(publicIpWhitelist_, vector<string>) };
    inline vector<string> publicIpWhitelist() { DARABONBA_PTR_GET(publicIpWhitelist_, vector<string>) };
    inline Elasticsearch& setPublicIpWhitelist(const vector<string> & publicIpWhitelist) { DARABONBA_PTR_SET_VALUE(publicIpWhitelist_, publicIpWhitelist) };
    inline Elasticsearch& setPublicIpWhitelist(vector<string> && publicIpWhitelist) { DARABONBA_PTR_SET_RVALUE(publicIpWhitelist_, publicIpWhitelist) };


    // publicPort Field Functions 
    bool hasPublicPort() const { return this->publicPort_ != nullptr;};
    void deletePublicPort() { this->publicPort_ = nullptr;};
    inline int64_t publicPort() const { DARABONBA_PTR_GET_DEFAULT(publicPort_, 0L) };
    inline Elasticsearch& setPublicPort(int64_t publicPort) { DARABONBA_PTR_SET_VALUE(publicPort_, publicPort) };


    // readWritePolicy Field Functions 
    bool hasReadWritePolicy() const { return this->readWritePolicy_ != nullptr;};
    void deleteReadWritePolicy() { this->readWritePolicy_ = nullptr;};
    inline const ReadWritePolicy & readWritePolicy() const { DARABONBA_PTR_GET_CONST(readWritePolicy_, ReadWritePolicy) };
    inline ReadWritePolicy readWritePolicy() { DARABONBA_PTR_GET(readWritePolicy_, ReadWritePolicy) };
    inline Elasticsearch& setReadWritePolicy(const ReadWritePolicy & readWritePolicy) { DARABONBA_PTR_SET_VALUE(readWritePolicy_, readWritePolicy) };
    inline Elasticsearch& setReadWritePolicy(ReadWritePolicy && readWritePolicy) { DARABONBA_PTR_SET_RVALUE(readWritePolicy_, readWritePolicy) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline Elasticsearch& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceVpc Field Functions 
    bool hasServiceVpc() const { return this->serviceVpc_ != nullptr;};
    void deleteServiceVpc() { this->serviceVpc_ = nullptr;};
    inline bool serviceVpc() const { DARABONBA_PTR_GET_DEFAULT(serviceVpc_, false) };
    inline Elasticsearch& setServiceVpc(bool serviceVpc) { DARABONBA_PTR_SET_VALUE(serviceVpc_, serviceVpc) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Elasticsearch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // synonymsDicts Field Functions 
    bool hasSynonymsDicts() const { return this->synonymsDicts_ != nullptr;};
    void deleteSynonymsDicts() { this->synonymsDicts_ = nullptr;};
    inline const vector<DictInfo> & synonymsDicts() const { DARABONBA_PTR_GET_CONST(synonymsDicts_, vector<DictInfo>) };
    inline vector<DictInfo> synonymsDicts() { DARABONBA_PTR_GET(synonymsDicts_, vector<DictInfo>) };
    inline Elasticsearch& setSynonymsDicts(const vector<DictInfo> & synonymsDicts) { DARABONBA_PTR_SET_VALUE(synonymsDicts_, synonymsDicts) };
    inline Elasticsearch& setSynonymsDicts(vector<DictInfo> && synonymsDicts) { DARABONBA_PTR_SET_RVALUE(synonymsDicts_, synonymsDicts) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline Elasticsearch& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline Elasticsearch& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline Elasticsearch& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // warmNode Field Functions 
    bool hasWarmNode() const { return this->warmNode_ != nullptr;};
    void deleteWarmNode() { this->warmNode_ = nullptr;};
    inline bool warmNode() const { DARABONBA_PTR_GET_DEFAULT(warmNode_, false) };
    inline Elasticsearch& setWarmNode(bool warmNode) { DARABONBA_PTR_SET_VALUE(warmNode_, warmNode) };


    // warmNodeConfiguration Field Functions 
    bool hasWarmNodeConfiguration() const { return this->warmNodeConfiguration_ != nullptr;};
    void deleteWarmNodeConfiguration() { this->warmNodeConfiguration_ = nullptr;};
    inline const WarmNodeConfiguration & warmNodeConfiguration() const { DARABONBA_PTR_GET_CONST(warmNodeConfiguration_, WarmNodeConfiguration) };
    inline WarmNodeConfiguration warmNodeConfiguration() { DARABONBA_PTR_GET(warmNodeConfiguration_, WarmNodeConfiguration) };
    inline Elasticsearch& setWarmNodeConfiguration(const WarmNodeConfiguration & warmNodeConfiguration) { DARABONBA_PTR_SET_VALUE(warmNodeConfiguration_, warmNodeConfiguration) };
    inline Elasticsearch& setWarmNodeConfiguration(WarmNodeConfiguration && warmNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(warmNodeConfiguration_, warmNodeConfiguration) };


    // zoneCount Field Functions 
    bool hasZoneCount() const { return this->zoneCount_ != nullptr;};
    void deleteZoneCount() { this->zoneCount_ = nullptr;};
    inline int64_t zoneCount() const { DARABONBA_PTR_GET_DEFAULT(zoneCount_, 0L) };
    inline Elasticsearch& setZoneCount(int64_t zoneCount) { DARABONBA_PTR_SET_VALUE(zoneCount_, zoneCount) };


    // zoneInfos Field Functions 
    bool hasZoneInfos() const { return this->zoneInfos_ != nullptr;};
    void deleteZoneInfos() { this->zoneInfos_ = nullptr;};
    inline const vector<ZoneInfo> & zoneInfos() const { DARABONBA_PTR_GET_CONST(zoneInfos_, vector<ZoneInfo>) };
    inline vector<ZoneInfo> zoneInfos() { DARABONBA_PTR_GET(zoneInfos_, vector<ZoneInfo>) };
    inline Elasticsearch& setZoneInfos(const vector<ZoneInfo> & zoneInfos) { DARABONBA_PTR_SET_VALUE(zoneInfos_, zoneInfos) };
    inline Elasticsearch& setZoneInfos(vector<ZoneInfo> && zoneInfos) { DARABONBA_PTR_SET_RVALUE(zoneInfos_, zoneInfos) };


  protected:
    std::shared_ptr<bool> advancedDedicateMaster_ = nullptr;
    std::shared_ptr<ElasticsearchAdvancedSetting> advancedSetting_ = nullptr;
    std::shared_ptr<vector<DictInfo>> aliwsDicts_ = nullptr;
    std::shared_ptr<ClientNodeConfiguration> clientNodeConfiguration_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<bool> dataNode_ = nullptr;
    std::shared_ptr<bool> dedicateMaster_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<DictInfo>> dictList_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<ElasticDataNodeConfiguration> elasticDataNodeConfiguration_ = nullptr;
    std::shared_ptr<bool> enableKibanaPrivateNetwork_ = nullptr;
    std::shared_ptr<bool> enableKibanaPublicNetwork_ = nullptr;
    std::shared_ptr<bool> enablePublic_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<map<string, string>> esConfig_ = nullptr;
    std::shared_ptr<vector<string>> esIPWhitelist_ = nullptr;
    std::shared_ptr<string> esVersion_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> extendConfigs_ = nullptr;
    std::shared_ptr<bool> haveClientNode_ = nullptr;
    std::shared_ptr<bool> haveElasticDataNode_ = nullptr;
    std::shared_ptr<bool> haveKibana_ = nullptr;
    std::shared_ptr<vector<DictInfo>> ikHotDicts_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<KibanaNodeConfiguration> kibanaConfiguration_ = nullptr;
    std::shared_ptr<string> kibanaDomain_ = nullptr;
    std::shared_ptr<vector<string>> kibanaIPWhitelist_ = nullptr;
    std::shared_ptr<int64_t> kibanaPort_ = nullptr;
    std::shared_ptr<string> kibanaPrivateDomain_ = nullptr;
    std::shared_ptr<vector<string>> kibanaPrivateIPWhitelist_ = nullptr;
    std::shared_ptr<int64_t> kibanaPrivatePort_ = nullptr;
    std::shared_ptr<string> kibanaProtocol_ = nullptr;
    std::shared_ptr<MasterNodeConfiguration> masterConfiguration_ = nullptr;
    std::shared_ptr<NetworkConfig> networkConfig_ = nullptr;
    std::shared_ptr<int64_t> nodeAmount_ = nullptr;
    std::shared_ptr<NodeSpec> nodeSpec_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<int64_t> port_ = nullptr;
    std::shared_ptr<vector<string>> privateNetworkIpWhiteList_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> publicDomain_ = nullptr;
    std::shared_ptr<vector<string>> publicIpWhitelist_ = nullptr;
    std::shared_ptr<int64_t> publicPort_ = nullptr;
    std::shared_ptr<ReadWritePolicy> readWritePolicy_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<bool> serviceVpc_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<DictInfo>> synonymsDicts_ = nullptr;
    std::shared_ptr<vector<Tag>> tags_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
    std::shared_ptr<bool> warmNode_ = nullptr;
    std::shared_ptr<WarmNodeConfiguration> warmNodeConfiguration_ = nullptr;
    std::shared_ptr<int64_t> zoneCount_ = nullptr;
    std::shared_ptr<vector<ZoneInfo>> zoneInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
