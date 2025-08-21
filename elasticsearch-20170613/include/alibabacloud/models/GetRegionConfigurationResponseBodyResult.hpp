// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultClientNodeAmountRange.hpp>
#include <vector>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultClientNodeDiskList.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultDataDiskList.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultElasticNodeProperties.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultEsVersionsLatestList.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultJvmConfine.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultKibanaNodeProperties.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultMasterDiskList.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultNode.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultNodeSpecList.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultSupportVersions.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultWarmNodeProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionConfigurationResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionConfigurationResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(clientNodeAmountRange, clientNodeAmountRange_);
      DARABONBA_PTR_TO_JSON(clientNodeDiskList, clientNodeDiskList_);
      DARABONBA_PTR_TO_JSON(clientNodeSpec, clientNodeSpec_);
      DARABONBA_PTR_TO_JSON(createUrl, createUrl_);
      DARABONBA_PTR_TO_JSON(dataDiskList, dataDiskList_);
      DARABONBA_PTR_TO_JSON(elasticNodeProperties, elasticNodeProperties_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(esVersions, esVersions_);
      DARABONBA_PTR_TO_JSON(esVersionsLatestList, esVersionsLatestList_);
      DARABONBA_PTR_TO_JSON(instanceSupportNodes, instanceSupportNodes_);
      DARABONBA_PTR_TO_JSON(jvmConfine, jvmConfine_);
      DARABONBA_PTR_TO_JSON(kibanaNodeProperties, kibanaNodeProperties_);
      DARABONBA_PTR_TO_JSON(logstashZones, logstashZones_);
      DARABONBA_PTR_TO_JSON(masterDiskList, masterDiskList_);
      DARABONBA_PTR_TO_JSON(masterSpec, masterSpec_);
      DARABONBA_PTR_TO_JSON(node, node_);
      DARABONBA_PTR_TO_JSON(nodeSpecList, nodeSpecList_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(supportVersions, supportVersions_);
      DARABONBA_PTR_TO_JSON(warmNodeProperties, warmNodeProperties_);
      DARABONBA_PTR_TO_JSON(zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionConfigurationResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(clientNodeAmountRange, clientNodeAmountRange_);
      DARABONBA_PTR_FROM_JSON(clientNodeDiskList, clientNodeDiskList_);
      DARABONBA_PTR_FROM_JSON(clientNodeSpec, clientNodeSpec_);
      DARABONBA_PTR_FROM_JSON(createUrl, createUrl_);
      DARABONBA_PTR_FROM_JSON(dataDiskList, dataDiskList_);
      DARABONBA_PTR_FROM_JSON(elasticNodeProperties, elasticNodeProperties_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(esVersions, esVersions_);
      DARABONBA_PTR_FROM_JSON(esVersionsLatestList, esVersionsLatestList_);
      DARABONBA_PTR_FROM_JSON(instanceSupportNodes, instanceSupportNodes_);
      DARABONBA_PTR_FROM_JSON(jvmConfine, jvmConfine_);
      DARABONBA_PTR_FROM_JSON(kibanaNodeProperties, kibanaNodeProperties_);
      DARABONBA_PTR_FROM_JSON(logstashZones, logstashZones_);
      DARABONBA_PTR_FROM_JSON(masterDiskList, masterDiskList_);
      DARABONBA_PTR_FROM_JSON(masterSpec, masterSpec_);
      DARABONBA_PTR_FROM_JSON(node, node_);
      DARABONBA_PTR_FROM_JSON(nodeSpecList, nodeSpecList_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(supportVersions, supportVersions_);
      DARABONBA_PTR_FROM_JSON(warmNodeProperties, warmNodeProperties_);
      DARABONBA_PTR_FROM_JSON(zones, zones_);
    };
    GetRegionConfigurationResponseBodyResult() = default ;
    GetRegionConfigurationResponseBodyResult(const GetRegionConfigurationResponseBodyResult &) = default ;
    GetRegionConfigurationResponseBodyResult(GetRegionConfigurationResponseBodyResult &&) = default ;
    GetRegionConfigurationResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionConfigurationResponseBodyResult() = default ;
    GetRegionConfigurationResponseBodyResult& operator=(const GetRegionConfigurationResponseBodyResult &) = default ;
    GetRegionConfigurationResponseBodyResult& operator=(GetRegionConfigurationResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientNodeAmountRange_ != nullptr
        && this->clientNodeDiskList_ != nullptr && this->clientNodeSpec_ != nullptr && this->createUrl_ != nullptr && this->dataDiskList_ != nullptr && this->elasticNodeProperties_ != nullptr
        && this->env_ != nullptr && this->esVersions_ != nullptr && this->esVersionsLatestList_ != nullptr && this->instanceSupportNodes_ != nullptr && this->jvmConfine_ != nullptr
        && this->kibanaNodeProperties_ != nullptr && this->logstashZones_ != nullptr && this->masterDiskList_ != nullptr && this->masterSpec_ != nullptr && this->node_ != nullptr
        && this->nodeSpecList_ != nullptr && this->regionId_ != nullptr && this->supportVersions_ != nullptr && this->warmNodeProperties_ != nullptr && this->zones_ != nullptr; };
    // clientNodeAmountRange Field Functions 
    bool hasClientNodeAmountRange() const { return this->clientNodeAmountRange_ != nullptr;};
    void deleteClientNodeAmountRange() { this->clientNodeAmountRange_ = nullptr;};
    inline const Models::GetRegionConfigurationResponseBodyResultClientNodeAmountRange & clientNodeAmountRange() const { DARABONBA_PTR_GET_CONST(clientNodeAmountRange_, Models::GetRegionConfigurationResponseBodyResultClientNodeAmountRange) };
    inline Models::GetRegionConfigurationResponseBodyResultClientNodeAmountRange clientNodeAmountRange() { DARABONBA_PTR_GET(clientNodeAmountRange_, Models::GetRegionConfigurationResponseBodyResultClientNodeAmountRange) };
    inline GetRegionConfigurationResponseBodyResult& setClientNodeAmountRange(const Models::GetRegionConfigurationResponseBodyResultClientNodeAmountRange & clientNodeAmountRange) { DARABONBA_PTR_SET_VALUE(clientNodeAmountRange_, clientNodeAmountRange) };
    inline GetRegionConfigurationResponseBodyResult& setClientNodeAmountRange(Models::GetRegionConfigurationResponseBodyResultClientNodeAmountRange && clientNodeAmountRange) { DARABONBA_PTR_SET_RVALUE(clientNodeAmountRange_, clientNodeAmountRange) };


    // clientNodeDiskList Field Functions 
    bool hasClientNodeDiskList() const { return this->clientNodeDiskList_ != nullptr;};
    void deleteClientNodeDiskList() { this->clientNodeDiskList_ = nullptr;};
    inline const vector<Models::GetRegionConfigurationResponseBodyResultClientNodeDiskList> & clientNodeDiskList() const { DARABONBA_PTR_GET_CONST(clientNodeDiskList_, vector<Models::GetRegionConfigurationResponseBodyResultClientNodeDiskList>) };
    inline vector<Models::GetRegionConfigurationResponseBodyResultClientNodeDiskList> clientNodeDiskList() { DARABONBA_PTR_GET(clientNodeDiskList_, vector<Models::GetRegionConfigurationResponseBodyResultClientNodeDiskList>) };
    inline GetRegionConfigurationResponseBodyResult& setClientNodeDiskList(const vector<Models::GetRegionConfigurationResponseBodyResultClientNodeDiskList> & clientNodeDiskList) { DARABONBA_PTR_SET_VALUE(clientNodeDiskList_, clientNodeDiskList) };
    inline GetRegionConfigurationResponseBodyResult& setClientNodeDiskList(vector<Models::GetRegionConfigurationResponseBodyResultClientNodeDiskList> && clientNodeDiskList) { DARABONBA_PTR_SET_RVALUE(clientNodeDiskList_, clientNodeDiskList) };


    // clientNodeSpec Field Functions 
    bool hasClientNodeSpec() const { return this->clientNodeSpec_ != nullptr;};
    void deleteClientNodeSpec() { this->clientNodeSpec_ = nullptr;};
    inline const vector<string> & clientNodeSpec() const { DARABONBA_PTR_GET_CONST(clientNodeSpec_, vector<string>) };
    inline vector<string> clientNodeSpec() { DARABONBA_PTR_GET(clientNodeSpec_, vector<string>) };
    inline GetRegionConfigurationResponseBodyResult& setClientNodeSpec(const vector<string> & clientNodeSpec) { DARABONBA_PTR_SET_VALUE(clientNodeSpec_, clientNodeSpec) };
    inline GetRegionConfigurationResponseBodyResult& setClientNodeSpec(vector<string> && clientNodeSpec) { DARABONBA_PTR_SET_RVALUE(clientNodeSpec_, clientNodeSpec) };


    // createUrl Field Functions 
    bool hasCreateUrl() const { return this->createUrl_ != nullptr;};
    void deleteCreateUrl() { this->createUrl_ = nullptr;};
    inline string createUrl() const { DARABONBA_PTR_GET_DEFAULT(createUrl_, "") };
    inline GetRegionConfigurationResponseBodyResult& setCreateUrl(string createUrl) { DARABONBA_PTR_SET_VALUE(createUrl_, createUrl) };


    // dataDiskList Field Functions 
    bool hasDataDiskList() const { return this->dataDiskList_ != nullptr;};
    void deleteDataDiskList() { this->dataDiskList_ = nullptr;};
    inline const vector<Models::GetRegionConfigurationResponseBodyResultDataDiskList> & dataDiskList() const { DARABONBA_PTR_GET_CONST(dataDiskList_, vector<Models::GetRegionConfigurationResponseBodyResultDataDiskList>) };
    inline vector<Models::GetRegionConfigurationResponseBodyResultDataDiskList> dataDiskList() { DARABONBA_PTR_GET(dataDiskList_, vector<Models::GetRegionConfigurationResponseBodyResultDataDiskList>) };
    inline GetRegionConfigurationResponseBodyResult& setDataDiskList(const vector<Models::GetRegionConfigurationResponseBodyResultDataDiskList> & dataDiskList) { DARABONBA_PTR_SET_VALUE(dataDiskList_, dataDiskList) };
    inline GetRegionConfigurationResponseBodyResult& setDataDiskList(vector<Models::GetRegionConfigurationResponseBodyResultDataDiskList> && dataDiskList) { DARABONBA_PTR_SET_RVALUE(dataDiskList_, dataDiskList) };


    // elasticNodeProperties Field Functions 
    bool hasElasticNodeProperties() const { return this->elasticNodeProperties_ != nullptr;};
    void deleteElasticNodeProperties() { this->elasticNodeProperties_ = nullptr;};
    inline const Models::GetRegionConfigurationResponseBodyResultElasticNodeProperties & elasticNodeProperties() const { DARABONBA_PTR_GET_CONST(elasticNodeProperties_, Models::GetRegionConfigurationResponseBodyResultElasticNodeProperties) };
    inline Models::GetRegionConfigurationResponseBodyResultElasticNodeProperties elasticNodeProperties() { DARABONBA_PTR_GET(elasticNodeProperties_, Models::GetRegionConfigurationResponseBodyResultElasticNodeProperties) };
    inline GetRegionConfigurationResponseBodyResult& setElasticNodeProperties(const Models::GetRegionConfigurationResponseBodyResultElasticNodeProperties & elasticNodeProperties) { DARABONBA_PTR_SET_VALUE(elasticNodeProperties_, elasticNodeProperties) };
    inline GetRegionConfigurationResponseBodyResult& setElasticNodeProperties(Models::GetRegionConfigurationResponseBodyResultElasticNodeProperties && elasticNodeProperties) { DARABONBA_PTR_SET_RVALUE(elasticNodeProperties_, elasticNodeProperties) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetRegionConfigurationResponseBodyResult& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // esVersions Field Functions 
    bool hasEsVersions() const { return this->esVersions_ != nullptr;};
    void deleteEsVersions() { this->esVersions_ = nullptr;};
    inline const vector<string> & esVersions() const { DARABONBA_PTR_GET_CONST(esVersions_, vector<string>) };
    inline vector<string> esVersions() { DARABONBA_PTR_GET(esVersions_, vector<string>) };
    inline GetRegionConfigurationResponseBodyResult& setEsVersions(const vector<string> & esVersions) { DARABONBA_PTR_SET_VALUE(esVersions_, esVersions) };
    inline GetRegionConfigurationResponseBodyResult& setEsVersions(vector<string> && esVersions) { DARABONBA_PTR_SET_RVALUE(esVersions_, esVersions) };


    // esVersionsLatestList Field Functions 
    bool hasEsVersionsLatestList() const { return this->esVersionsLatestList_ != nullptr;};
    void deleteEsVersionsLatestList() { this->esVersionsLatestList_ = nullptr;};
    inline const vector<Models::GetRegionConfigurationResponseBodyResultEsVersionsLatestList> & esVersionsLatestList() const { DARABONBA_PTR_GET_CONST(esVersionsLatestList_, vector<Models::GetRegionConfigurationResponseBodyResultEsVersionsLatestList>) };
    inline vector<Models::GetRegionConfigurationResponseBodyResultEsVersionsLatestList> esVersionsLatestList() { DARABONBA_PTR_GET(esVersionsLatestList_, vector<Models::GetRegionConfigurationResponseBodyResultEsVersionsLatestList>) };
    inline GetRegionConfigurationResponseBodyResult& setEsVersionsLatestList(const vector<Models::GetRegionConfigurationResponseBodyResultEsVersionsLatestList> & esVersionsLatestList) { DARABONBA_PTR_SET_VALUE(esVersionsLatestList_, esVersionsLatestList) };
    inline GetRegionConfigurationResponseBodyResult& setEsVersionsLatestList(vector<Models::GetRegionConfigurationResponseBodyResultEsVersionsLatestList> && esVersionsLatestList) { DARABONBA_PTR_SET_RVALUE(esVersionsLatestList_, esVersionsLatestList) };


    // instanceSupportNodes Field Functions 
    bool hasInstanceSupportNodes() const { return this->instanceSupportNodes_ != nullptr;};
    void deleteInstanceSupportNodes() { this->instanceSupportNodes_ = nullptr;};
    inline const vector<string> & instanceSupportNodes() const { DARABONBA_PTR_GET_CONST(instanceSupportNodes_, vector<string>) };
    inline vector<string> instanceSupportNodes() { DARABONBA_PTR_GET(instanceSupportNodes_, vector<string>) };
    inline GetRegionConfigurationResponseBodyResult& setInstanceSupportNodes(const vector<string> & instanceSupportNodes) { DARABONBA_PTR_SET_VALUE(instanceSupportNodes_, instanceSupportNodes) };
    inline GetRegionConfigurationResponseBodyResult& setInstanceSupportNodes(vector<string> && instanceSupportNodes) { DARABONBA_PTR_SET_RVALUE(instanceSupportNodes_, instanceSupportNodes) };


    // jvmConfine Field Functions 
    bool hasJvmConfine() const { return this->jvmConfine_ != nullptr;};
    void deleteJvmConfine() { this->jvmConfine_ = nullptr;};
    inline const Models::GetRegionConfigurationResponseBodyResultJvmConfine & jvmConfine() const { DARABONBA_PTR_GET_CONST(jvmConfine_, Models::GetRegionConfigurationResponseBodyResultJvmConfine) };
    inline Models::GetRegionConfigurationResponseBodyResultJvmConfine jvmConfine() { DARABONBA_PTR_GET(jvmConfine_, Models::GetRegionConfigurationResponseBodyResultJvmConfine) };
    inline GetRegionConfigurationResponseBodyResult& setJvmConfine(const Models::GetRegionConfigurationResponseBodyResultJvmConfine & jvmConfine) { DARABONBA_PTR_SET_VALUE(jvmConfine_, jvmConfine) };
    inline GetRegionConfigurationResponseBodyResult& setJvmConfine(Models::GetRegionConfigurationResponseBodyResultJvmConfine && jvmConfine) { DARABONBA_PTR_SET_RVALUE(jvmConfine_, jvmConfine) };


    // kibanaNodeProperties Field Functions 
    bool hasKibanaNodeProperties() const { return this->kibanaNodeProperties_ != nullptr;};
    void deleteKibanaNodeProperties() { this->kibanaNodeProperties_ = nullptr;};
    inline const Models::GetRegionConfigurationResponseBodyResultKibanaNodeProperties & kibanaNodeProperties() const { DARABONBA_PTR_GET_CONST(kibanaNodeProperties_, Models::GetRegionConfigurationResponseBodyResultKibanaNodeProperties) };
    inline Models::GetRegionConfigurationResponseBodyResultKibanaNodeProperties kibanaNodeProperties() { DARABONBA_PTR_GET(kibanaNodeProperties_, Models::GetRegionConfigurationResponseBodyResultKibanaNodeProperties) };
    inline GetRegionConfigurationResponseBodyResult& setKibanaNodeProperties(const Models::GetRegionConfigurationResponseBodyResultKibanaNodeProperties & kibanaNodeProperties) { DARABONBA_PTR_SET_VALUE(kibanaNodeProperties_, kibanaNodeProperties) };
    inline GetRegionConfigurationResponseBodyResult& setKibanaNodeProperties(Models::GetRegionConfigurationResponseBodyResultKibanaNodeProperties && kibanaNodeProperties) { DARABONBA_PTR_SET_RVALUE(kibanaNodeProperties_, kibanaNodeProperties) };


    // logstashZones Field Functions 
    bool hasLogstashZones() const { return this->logstashZones_ != nullptr;};
    void deleteLogstashZones() { this->logstashZones_ = nullptr;};
    inline const vector<string> & logstashZones() const { DARABONBA_PTR_GET_CONST(logstashZones_, vector<string>) };
    inline vector<string> logstashZones() { DARABONBA_PTR_GET(logstashZones_, vector<string>) };
    inline GetRegionConfigurationResponseBodyResult& setLogstashZones(const vector<string> & logstashZones) { DARABONBA_PTR_SET_VALUE(logstashZones_, logstashZones) };
    inline GetRegionConfigurationResponseBodyResult& setLogstashZones(vector<string> && logstashZones) { DARABONBA_PTR_SET_RVALUE(logstashZones_, logstashZones) };


    // masterDiskList Field Functions 
    bool hasMasterDiskList() const { return this->masterDiskList_ != nullptr;};
    void deleteMasterDiskList() { this->masterDiskList_ = nullptr;};
    inline const vector<Models::GetRegionConfigurationResponseBodyResultMasterDiskList> & masterDiskList() const { DARABONBA_PTR_GET_CONST(masterDiskList_, vector<Models::GetRegionConfigurationResponseBodyResultMasterDiskList>) };
    inline vector<Models::GetRegionConfigurationResponseBodyResultMasterDiskList> masterDiskList() { DARABONBA_PTR_GET(masterDiskList_, vector<Models::GetRegionConfigurationResponseBodyResultMasterDiskList>) };
    inline GetRegionConfigurationResponseBodyResult& setMasterDiskList(const vector<Models::GetRegionConfigurationResponseBodyResultMasterDiskList> & masterDiskList) { DARABONBA_PTR_SET_VALUE(masterDiskList_, masterDiskList) };
    inline GetRegionConfigurationResponseBodyResult& setMasterDiskList(vector<Models::GetRegionConfigurationResponseBodyResultMasterDiskList> && masterDiskList) { DARABONBA_PTR_SET_RVALUE(masterDiskList_, masterDiskList) };


    // masterSpec Field Functions 
    bool hasMasterSpec() const { return this->masterSpec_ != nullptr;};
    void deleteMasterSpec() { this->masterSpec_ = nullptr;};
    inline const vector<string> & masterSpec() const { DARABONBA_PTR_GET_CONST(masterSpec_, vector<string>) };
    inline vector<string> masterSpec() { DARABONBA_PTR_GET(masterSpec_, vector<string>) };
    inline GetRegionConfigurationResponseBodyResult& setMasterSpec(const vector<string> & masterSpec) { DARABONBA_PTR_SET_VALUE(masterSpec_, masterSpec) };
    inline GetRegionConfigurationResponseBodyResult& setMasterSpec(vector<string> && masterSpec) { DARABONBA_PTR_SET_RVALUE(masterSpec_, masterSpec) };


    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline const Models::GetRegionConfigurationResponseBodyResultNode & node() const { DARABONBA_PTR_GET_CONST(node_, Models::GetRegionConfigurationResponseBodyResultNode) };
    inline Models::GetRegionConfigurationResponseBodyResultNode node() { DARABONBA_PTR_GET(node_, Models::GetRegionConfigurationResponseBodyResultNode) };
    inline GetRegionConfigurationResponseBodyResult& setNode(const Models::GetRegionConfigurationResponseBodyResultNode & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
    inline GetRegionConfigurationResponseBodyResult& setNode(Models::GetRegionConfigurationResponseBodyResultNode && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


    // nodeSpecList Field Functions 
    bool hasNodeSpecList() const { return this->nodeSpecList_ != nullptr;};
    void deleteNodeSpecList() { this->nodeSpecList_ = nullptr;};
    inline const vector<Models::GetRegionConfigurationResponseBodyResultNodeSpecList> & nodeSpecList() const { DARABONBA_PTR_GET_CONST(nodeSpecList_, vector<Models::GetRegionConfigurationResponseBodyResultNodeSpecList>) };
    inline vector<Models::GetRegionConfigurationResponseBodyResultNodeSpecList> nodeSpecList() { DARABONBA_PTR_GET(nodeSpecList_, vector<Models::GetRegionConfigurationResponseBodyResultNodeSpecList>) };
    inline GetRegionConfigurationResponseBodyResult& setNodeSpecList(const vector<Models::GetRegionConfigurationResponseBodyResultNodeSpecList> & nodeSpecList) { DARABONBA_PTR_SET_VALUE(nodeSpecList_, nodeSpecList) };
    inline GetRegionConfigurationResponseBodyResult& setNodeSpecList(vector<Models::GetRegionConfigurationResponseBodyResultNodeSpecList> && nodeSpecList) { DARABONBA_PTR_SET_RVALUE(nodeSpecList_, nodeSpecList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRegionConfigurationResponseBodyResult& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supportVersions Field Functions 
    bool hasSupportVersions() const { return this->supportVersions_ != nullptr;};
    void deleteSupportVersions() { this->supportVersions_ = nullptr;};
    inline const vector<Models::GetRegionConfigurationResponseBodyResultSupportVersions> & supportVersions() const { DARABONBA_PTR_GET_CONST(supportVersions_, vector<Models::GetRegionConfigurationResponseBodyResultSupportVersions>) };
    inline vector<Models::GetRegionConfigurationResponseBodyResultSupportVersions> supportVersions() { DARABONBA_PTR_GET(supportVersions_, vector<Models::GetRegionConfigurationResponseBodyResultSupportVersions>) };
    inline GetRegionConfigurationResponseBodyResult& setSupportVersions(const vector<Models::GetRegionConfigurationResponseBodyResultSupportVersions> & supportVersions) { DARABONBA_PTR_SET_VALUE(supportVersions_, supportVersions) };
    inline GetRegionConfigurationResponseBodyResult& setSupportVersions(vector<Models::GetRegionConfigurationResponseBodyResultSupportVersions> && supportVersions) { DARABONBA_PTR_SET_RVALUE(supportVersions_, supportVersions) };


    // warmNodeProperties Field Functions 
    bool hasWarmNodeProperties() const { return this->warmNodeProperties_ != nullptr;};
    void deleteWarmNodeProperties() { this->warmNodeProperties_ = nullptr;};
    inline const Models::GetRegionConfigurationResponseBodyResultWarmNodeProperties & warmNodeProperties() const { DARABONBA_PTR_GET_CONST(warmNodeProperties_, Models::GetRegionConfigurationResponseBodyResultWarmNodeProperties) };
    inline Models::GetRegionConfigurationResponseBodyResultWarmNodeProperties warmNodeProperties() { DARABONBA_PTR_GET(warmNodeProperties_, Models::GetRegionConfigurationResponseBodyResultWarmNodeProperties) };
    inline GetRegionConfigurationResponseBodyResult& setWarmNodeProperties(const Models::GetRegionConfigurationResponseBodyResultWarmNodeProperties & warmNodeProperties) { DARABONBA_PTR_SET_VALUE(warmNodeProperties_, warmNodeProperties) };
    inline GetRegionConfigurationResponseBodyResult& setWarmNodeProperties(Models::GetRegionConfigurationResponseBodyResultWarmNodeProperties && warmNodeProperties) { DARABONBA_PTR_SET_RVALUE(warmNodeProperties_, warmNodeProperties) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<string> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<string>) };
    inline vector<string> zones() { DARABONBA_PTR_GET(zones_, vector<string>) };
    inline GetRegionConfigurationResponseBodyResult& setZones(const vector<string> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline GetRegionConfigurationResponseBodyResult& setZones(vector<string> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    std::shared_ptr<Models::GetRegionConfigurationResponseBodyResultClientNodeAmountRange> clientNodeAmountRange_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionConfigurationResponseBodyResultClientNodeDiskList>> clientNodeDiskList_ = nullptr;
    std::shared_ptr<vector<string>> clientNodeSpec_ = nullptr;
    std::shared_ptr<string> createUrl_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionConfigurationResponseBodyResultDataDiskList>> dataDiskList_ = nullptr;
    std::shared_ptr<Models::GetRegionConfigurationResponseBodyResultElasticNodeProperties> elasticNodeProperties_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    std::shared_ptr<vector<string>> esVersions_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionConfigurationResponseBodyResultEsVersionsLatestList>> esVersionsLatestList_ = nullptr;
    std::shared_ptr<vector<string>> instanceSupportNodes_ = nullptr;
    std::shared_ptr<Models::GetRegionConfigurationResponseBodyResultJvmConfine> jvmConfine_ = nullptr;
    std::shared_ptr<Models::GetRegionConfigurationResponseBodyResultKibanaNodeProperties> kibanaNodeProperties_ = nullptr;
    std::shared_ptr<vector<string>> logstashZones_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionConfigurationResponseBodyResultMasterDiskList>> masterDiskList_ = nullptr;
    std::shared_ptr<vector<string>> masterSpec_ = nullptr;
    std::shared_ptr<Models::GetRegionConfigurationResponseBodyResultNode> node_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionConfigurationResponseBodyResultNodeSpecList>> nodeSpecList_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionConfigurationResponseBodyResultSupportVersions>> supportVersions_ = nullptr;
    std::shared_ptr<Models::GetRegionConfigurationResponseBodyResultWarmNodeProperties> warmNodeProperties_ = nullptr;
    std::shared_ptr<vector<string>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
