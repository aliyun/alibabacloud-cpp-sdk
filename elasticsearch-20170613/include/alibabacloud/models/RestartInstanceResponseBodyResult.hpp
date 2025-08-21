// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTINSTANCERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_RESTARTINSTANCERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RestartInstanceResponseBodyResultDictList.hpp>
#include <alibabacloud/models/RestartInstanceResponseBodyResultKibanaConfiguration.hpp>
#include <alibabacloud/models/RestartInstanceResponseBodyResultMasterConfiguration.hpp>
#include <alibabacloud/models/RestartInstanceResponseBodyResultNetworkConfig.hpp>
#include <alibabacloud/models/RestartInstanceResponseBodyResultNodeSpec.hpp>
#include <alibabacloud/models/RestartInstanceResponseBodyResultSynonymsDicts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class RestartInstanceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(dictList, dictList_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(esVersion, esVersion_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_TO_JSON(kibanaDomain, kibanaDomain_);
      DARABONBA_PTR_TO_JSON(kibanaPort, kibanaPort_);
      DARABONBA_PTR_TO_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(publicDomain, publicDomain_);
      DARABONBA_PTR_TO_JSON(publicPort, publicPort_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(synonymsDicts, synonymsDicts_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, RestartInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(dictList, dictList_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(esVersion, esVersion_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_FROM_JSON(kibanaDomain, kibanaDomain_);
      DARABONBA_PTR_FROM_JSON(kibanaPort, kibanaPort_);
      DARABONBA_PTR_FROM_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(publicDomain, publicDomain_);
      DARABONBA_PTR_FROM_JSON(publicPort, publicPort_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(synonymsDicts, synonymsDicts_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    RestartInstanceResponseBodyResult() = default ;
    RestartInstanceResponseBodyResult(const RestartInstanceResponseBodyResult &) = default ;
    RestartInstanceResponseBodyResult(RestartInstanceResponseBodyResult &&) = default ;
    RestartInstanceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartInstanceResponseBodyResult() = default ;
    RestartInstanceResponseBodyResult& operator=(const RestartInstanceResponseBodyResult &) = default ;
    RestartInstanceResponseBodyResult& operator=(RestartInstanceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdAt_ != nullptr
        && this->description_ != nullptr && this->dictList_ != nullptr && this->domain_ != nullptr && this->esVersion_ != nullptr && this->instanceId_ != nullptr
        && this->kibanaConfiguration_ != nullptr && this->kibanaDomain_ != nullptr && this->kibanaPort_ != nullptr && this->masterConfiguration_ != nullptr && this->networkConfig_ != nullptr
        && this->nodeAmount_ != nullptr && this->nodeSpec_ != nullptr && this->paymentType_ != nullptr && this->publicDomain_ != nullptr && this->publicPort_ != nullptr
        && this->status_ != nullptr && this->synonymsDicts_ != nullptr && this->updatedAt_ != nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline RestartInstanceResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RestartInstanceResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dictList Field Functions 
    bool hasDictList() const { return this->dictList_ != nullptr;};
    void deleteDictList() { this->dictList_ = nullptr;};
    inline const vector<Models::RestartInstanceResponseBodyResultDictList> & dictList() const { DARABONBA_PTR_GET_CONST(dictList_, vector<Models::RestartInstanceResponseBodyResultDictList>) };
    inline vector<Models::RestartInstanceResponseBodyResultDictList> dictList() { DARABONBA_PTR_GET(dictList_, vector<Models::RestartInstanceResponseBodyResultDictList>) };
    inline RestartInstanceResponseBodyResult& setDictList(const vector<Models::RestartInstanceResponseBodyResultDictList> & dictList) { DARABONBA_PTR_SET_VALUE(dictList_, dictList) };
    inline RestartInstanceResponseBodyResult& setDictList(vector<Models::RestartInstanceResponseBodyResultDictList> && dictList) { DARABONBA_PTR_SET_RVALUE(dictList_, dictList) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline RestartInstanceResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // esVersion Field Functions 
    bool hasEsVersion() const { return this->esVersion_ != nullptr;};
    void deleteEsVersion() { this->esVersion_ = nullptr;};
    inline string esVersion() const { DARABONBA_PTR_GET_DEFAULT(esVersion_, "") };
    inline RestartInstanceResponseBodyResult& setEsVersion(string esVersion) { DARABONBA_PTR_SET_VALUE(esVersion_, esVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RestartInstanceResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // kibanaConfiguration Field Functions 
    bool hasKibanaConfiguration() const { return this->kibanaConfiguration_ != nullptr;};
    void deleteKibanaConfiguration() { this->kibanaConfiguration_ = nullptr;};
    inline const Models::RestartInstanceResponseBodyResultKibanaConfiguration & kibanaConfiguration() const { DARABONBA_PTR_GET_CONST(kibanaConfiguration_, Models::RestartInstanceResponseBodyResultKibanaConfiguration) };
    inline Models::RestartInstanceResponseBodyResultKibanaConfiguration kibanaConfiguration() { DARABONBA_PTR_GET(kibanaConfiguration_, Models::RestartInstanceResponseBodyResultKibanaConfiguration) };
    inline RestartInstanceResponseBodyResult& setKibanaConfiguration(const Models::RestartInstanceResponseBodyResultKibanaConfiguration & kibanaConfiguration) { DARABONBA_PTR_SET_VALUE(kibanaConfiguration_, kibanaConfiguration) };
    inline RestartInstanceResponseBodyResult& setKibanaConfiguration(Models::RestartInstanceResponseBodyResultKibanaConfiguration && kibanaConfiguration) { DARABONBA_PTR_SET_RVALUE(kibanaConfiguration_, kibanaConfiguration) };


    // kibanaDomain Field Functions 
    bool hasKibanaDomain() const { return this->kibanaDomain_ != nullptr;};
    void deleteKibanaDomain() { this->kibanaDomain_ = nullptr;};
    inline string kibanaDomain() const { DARABONBA_PTR_GET_DEFAULT(kibanaDomain_, "") };
    inline RestartInstanceResponseBodyResult& setKibanaDomain(string kibanaDomain) { DARABONBA_PTR_SET_VALUE(kibanaDomain_, kibanaDomain) };


    // kibanaPort Field Functions 
    bool hasKibanaPort() const { return this->kibanaPort_ != nullptr;};
    void deleteKibanaPort() { this->kibanaPort_ = nullptr;};
    inline int32_t kibanaPort() const { DARABONBA_PTR_GET_DEFAULT(kibanaPort_, 0) };
    inline RestartInstanceResponseBodyResult& setKibanaPort(int32_t kibanaPort) { DARABONBA_PTR_SET_VALUE(kibanaPort_, kibanaPort) };


    // masterConfiguration Field Functions 
    bool hasMasterConfiguration() const { return this->masterConfiguration_ != nullptr;};
    void deleteMasterConfiguration() { this->masterConfiguration_ = nullptr;};
    inline const Models::RestartInstanceResponseBodyResultMasterConfiguration & masterConfiguration() const { DARABONBA_PTR_GET_CONST(masterConfiguration_, Models::RestartInstanceResponseBodyResultMasterConfiguration) };
    inline Models::RestartInstanceResponseBodyResultMasterConfiguration masterConfiguration() { DARABONBA_PTR_GET(masterConfiguration_, Models::RestartInstanceResponseBodyResultMasterConfiguration) };
    inline RestartInstanceResponseBodyResult& setMasterConfiguration(const Models::RestartInstanceResponseBodyResultMasterConfiguration & masterConfiguration) { DARABONBA_PTR_SET_VALUE(masterConfiguration_, masterConfiguration) };
    inline RestartInstanceResponseBodyResult& setMasterConfiguration(Models::RestartInstanceResponseBodyResultMasterConfiguration && masterConfiguration) { DARABONBA_PTR_SET_RVALUE(masterConfiguration_, masterConfiguration) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const Models::RestartInstanceResponseBodyResultNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Models::RestartInstanceResponseBodyResultNetworkConfig) };
    inline Models::RestartInstanceResponseBodyResultNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, Models::RestartInstanceResponseBodyResultNetworkConfig) };
    inline RestartInstanceResponseBodyResult& setNetworkConfig(const Models::RestartInstanceResponseBodyResultNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline RestartInstanceResponseBodyResult& setNetworkConfig(Models::RestartInstanceResponseBodyResultNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline RestartInstanceResponseBodyResult& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const Models::RestartInstanceResponseBodyResultNodeSpec & nodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, Models::RestartInstanceResponseBodyResultNodeSpec) };
    inline Models::RestartInstanceResponseBodyResultNodeSpec nodeSpec() { DARABONBA_PTR_GET(nodeSpec_, Models::RestartInstanceResponseBodyResultNodeSpec) };
    inline RestartInstanceResponseBodyResult& setNodeSpec(const Models::RestartInstanceResponseBodyResultNodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline RestartInstanceResponseBodyResult& setNodeSpec(Models::RestartInstanceResponseBodyResultNodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline RestartInstanceResponseBodyResult& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // publicDomain Field Functions 
    bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
    void deletePublicDomain() { this->publicDomain_ = nullptr;};
    inline string publicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
    inline RestartInstanceResponseBodyResult& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


    // publicPort Field Functions 
    bool hasPublicPort() const { return this->publicPort_ != nullptr;};
    void deletePublicPort() { this->publicPort_ = nullptr;};
    inline int32_t publicPort() const { DARABONBA_PTR_GET_DEFAULT(publicPort_, 0) };
    inline RestartInstanceResponseBodyResult& setPublicPort(int32_t publicPort) { DARABONBA_PTR_SET_VALUE(publicPort_, publicPort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RestartInstanceResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // synonymsDicts Field Functions 
    bool hasSynonymsDicts() const { return this->synonymsDicts_ != nullptr;};
    void deleteSynonymsDicts() { this->synonymsDicts_ = nullptr;};
    inline const vector<Models::RestartInstanceResponseBodyResultSynonymsDicts> & synonymsDicts() const { DARABONBA_PTR_GET_CONST(synonymsDicts_, vector<Models::RestartInstanceResponseBodyResultSynonymsDicts>) };
    inline vector<Models::RestartInstanceResponseBodyResultSynonymsDicts> synonymsDicts() { DARABONBA_PTR_GET(synonymsDicts_, vector<Models::RestartInstanceResponseBodyResultSynonymsDicts>) };
    inline RestartInstanceResponseBodyResult& setSynonymsDicts(const vector<Models::RestartInstanceResponseBodyResultSynonymsDicts> & synonymsDicts) { DARABONBA_PTR_SET_VALUE(synonymsDicts_, synonymsDicts) };
    inline RestartInstanceResponseBodyResult& setSynonymsDicts(vector<Models::RestartInstanceResponseBodyResultSynonymsDicts> && synonymsDicts) { DARABONBA_PTR_SET_RVALUE(synonymsDicts_, synonymsDicts) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline RestartInstanceResponseBodyResult& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // The time when the instance was created.
    std::shared_ptr<string> createdAt_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The configuration of the IK dictionaries.
    std::shared_ptr<vector<Models::RestartInstanceResponseBodyResultDictList>> dictList_ = nullptr;
    // The intranet access address of the instance.
    std::shared_ptr<string> domain_ = nullptr;
    // The version of the instance.
    std::shared_ptr<string> esVersion_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The configuration of Kibana nodes.
    std::shared_ptr<Models::RestartInstanceResponseBodyResultKibanaConfiguration> kibanaConfiguration_ = nullptr;
    // The public network access address of Kibana.
    std::shared_ptr<string> kibanaDomain_ = nullptr;
    // The public port of the Kibana network.
    std::shared_ptr<int32_t> kibanaPort_ = nullptr;
    // The configuration of dedicated master nodes.
    std::shared_ptr<Models::RestartInstanceResponseBodyResultMasterConfiguration> masterConfiguration_ = nullptr;
    // The network configuration.
    std::shared_ptr<Models::RestartInstanceResponseBodyResultNetworkConfig> networkConfig_ = nullptr;
    // The number of data nodes.
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    // The configuration of data nodes.
    std::shared_ptr<Models::RestartInstanceResponseBodyResultNodeSpec> nodeSpec_ = nullptr;
    // The billing method of the created ECS instance.
    // 
    // Valid values: prepaid and postpaid.
    std::shared_ptr<string> paymentType_ = nullptr;
    // The public network access address.
    std::shared_ptr<string> publicDomain_ = nullptr;
    // The public network port.
    std::shared_ptr<int32_t> publicPort_ = nullptr;
    // The state of the cluster.
    // 
    // Supported: active (normal), activating (initializing), inactive (blocked), and invalid (expired).
    std::shared_ptr<string> status_ = nullptr;
    // The configuration of the synonym dictionaries.
    std::shared_ptr<vector<Models::RestartInstanceResponseBodyResultSynonymsDicts>> synonymsDicts_ = nullptr;
    // The time when the instance was last updated.
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
