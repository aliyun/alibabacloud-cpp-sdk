// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVERESOURCEGROUPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_MOVERESOURCEGROUPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MoveResourceGroupResponseBodyResultDictList.hpp>
#include <alibabacloud/models/MoveResourceGroupResponseBodyResultKibanaConfiguration.hpp>
#include <alibabacloud/models/MoveResourceGroupResponseBodyResultMasterConfiguration.hpp>
#include <alibabacloud/models/MoveResourceGroupResponseBodyResultNetworkConfig.hpp>
#include <alibabacloud/models/MoveResourceGroupResponseBodyResultNodeSpec.hpp>
#include <alibabacloud/models/MoveResourceGroupResponseBodyResultSynonymsDicts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class MoveResourceGroupResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveResourceGroupResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, MoveResourceGroupResponseBodyResult& obj) { 
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
    MoveResourceGroupResponseBodyResult() = default ;
    MoveResourceGroupResponseBodyResult(const MoveResourceGroupResponseBodyResult &) = default ;
    MoveResourceGroupResponseBodyResult(MoveResourceGroupResponseBodyResult &&) = default ;
    MoveResourceGroupResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveResourceGroupResponseBodyResult() = default ;
    MoveResourceGroupResponseBodyResult& operator=(const MoveResourceGroupResponseBodyResult &) = default ;
    MoveResourceGroupResponseBodyResult& operator=(MoveResourceGroupResponseBodyResult &&) = default ;
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
    inline MoveResourceGroupResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MoveResourceGroupResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dictList Field Functions 
    bool hasDictList() const { return this->dictList_ != nullptr;};
    void deleteDictList() { this->dictList_ = nullptr;};
    inline const vector<Models::MoveResourceGroupResponseBodyResultDictList> & dictList() const { DARABONBA_PTR_GET_CONST(dictList_, vector<Models::MoveResourceGroupResponseBodyResultDictList>) };
    inline vector<Models::MoveResourceGroupResponseBodyResultDictList> dictList() { DARABONBA_PTR_GET(dictList_, vector<Models::MoveResourceGroupResponseBodyResultDictList>) };
    inline MoveResourceGroupResponseBodyResult& setDictList(const vector<Models::MoveResourceGroupResponseBodyResultDictList> & dictList) { DARABONBA_PTR_SET_VALUE(dictList_, dictList) };
    inline MoveResourceGroupResponseBodyResult& setDictList(vector<Models::MoveResourceGroupResponseBodyResultDictList> && dictList) { DARABONBA_PTR_SET_RVALUE(dictList_, dictList) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline MoveResourceGroupResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // esVersion Field Functions 
    bool hasEsVersion() const { return this->esVersion_ != nullptr;};
    void deleteEsVersion() { this->esVersion_ = nullptr;};
    inline string esVersion() const { DARABONBA_PTR_GET_DEFAULT(esVersion_, "") };
    inline MoveResourceGroupResponseBodyResult& setEsVersion(string esVersion) { DARABONBA_PTR_SET_VALUE(esVersion_, esVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline MoveResourceGroupResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // kibanaConfiguration Field Functions 
    bool hasKibanaConfiguration() const { return this->kibanaConfiguration_ != nullptr;};
    void deleteKibanaConfiguration() { this->kibanaConfiguration_ = nullptr;};
    inline const Models::MoveResourceGroupResponseBodyResultKibanaConfiguration & kibanaConfiguration() const { DARABONBA_PTR_GET_CONST(kibanaConfiguration_, Models::MoveResourceGroupResponseBodyResultKibanaConfiguration) };
    inline Models::MoveResourceGroupResponseBodyResultKibanaConfiguration kibanaConfiguration() { DARABONBA_PTR_GET(kibanaConfiguration_, Models::MoveResourceGroupResponseBodyResultKibanaConfiguration) };
    inline MoveResourceGroupResponseBodyResult& setKibanaConfiguration(const Models::MoveResourceGroupResponseBodyResultKibanaConfiguration & kibanaConfiguration) { DARABONBA_PTR_SET_VALUE(kibanaConfiguration_, kibanaConfiguration) };
    inline MoveResourceGroupResponseBodyResult& setKibanaConfiguration(Models::MoveResourceGroupResponseBodyResultKibanaConfiguration && kibanaConfiguration) { DARABONBA_PTR_SET_RVALUE(kibanaConfiguration_, kibanaConfiguration) };


    // kibanaDomain Field Functions 
    bool hasKibanaDomain() const { return this->kibanaDomain_ != nullptr;};
    void deleteKibanaDomain() { this->kibanaDomain_ = nullptr;};
    inline string kibanaDomain() const { DARABONBA_PTR_GET_DEFAULT(kibanaDomain_, "") };
    inline MoveResourceGroupResponseBodyResult& setKibanaDomain(string kibanaDomain) { DARABONBA_PTR_SET_VALUE(kibanaDomain_, kibanaDomain) };


    // kibanaPort Field Functions 
    bool hasKibanaPort() const { return this->kibanaPort_ != nullptr;};
    void deleteKibanaPort() { this->kibanaPort_ = nullptr;};
    inline int32_t kibanaPort() const { DARABONBA_PTR_GET_DEFAULT(kibanaPort_, 0) };
    inline MoveResourceGroupResponseBodyResult& setKibanaPort(int32_t kibanaPort) { DARABONBA_PTR_SET_VALUE(kibanaPort_, kibanaPort) };


    // masterConfiguration Field Functions 
    bool hasMasterConfiguration() const { return this->masterConfiguration_ != nullptr;};
    void deleteMasterConfiguration() { this->masterConfiguration_ = nullptr;};
    inline const Models::MoveResourceGroupResponseBodyResultMasterConfiguration & masterConfiguration() const { DARABONBA_PTR_GET_CONST(masterConfiguration_, Models::MoveResourceGroupResponseBodyResultMasterConfiguration) };
    inline Models::MoveResourceGroupResponseBodyResultMasterConfiguration masterConfiguration() { DARABONBA_PTR_GET(masterConfiguration_, Models::MoveResourceGroupResponseBodyResultMasterConfiguration) };
    inline MoveResourceGroupResponseBodyResult& setMasterConfiguration(const Models::MoveResourceGroupResponseBodyResultMasterConfiguration & masterConfiguration) { DARABONBA_PTR_SET_VALUE(masterConfiguration_, masterConfiguration) };
    inline MoveResourceGroupResponseBodyResult& setMasterConfiguration(Models::MoveResourceGroupResponseBodyResultMasterConfiguration && masterConfiguration) { DARABONBA_PTR_SET_RVALUE(masterConfiguration_, masterConfiguration) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const Models::MoveResourceGroupResponseBodyResultNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Models::MoveResourceGroupResponseBodyResultNetworkConfig) };
    inline Models::MoveResourceGroupResponseBodyResultNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, Models::MoveResourceGroupResponseBodyResultNetworkConfig) };
    inline MoveResourceGroupResponseBodyResult& setNetworkConfig(const Models::MoveResourceGroupResponseBodyResultNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline MoveResourceGroupResponseBodyResult& setNetworkConfig(Models::MoveResourceGroupResponseBodyResultNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline MoveResourceGroupResponseBodyResult& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const Models::MoveResourceGroupResponseBodyResultNodeSpec & nodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, Models::MoveResourceGroupResponseBodyResultNodeSpec) };
    inline Models::MoveResourceGroupResponseBodyResultNodeSpec nodeSpec() { DARABONBA_PTR_GET(nodeSpec_, Models::MoveResourceGroupResponseBodyResultNodeSpec) };
    inline MoveResourceGroupResponseBodyResult& setNodeSpec(const Models::MoveResourceGroupResponseBodyResultNodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline MoveResourceGroupResponseBodyResult& setNodeSpec(Models::MoveResourceGroupResponseBodyResultNodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline MoveResourceGroupResponseBodyResult& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // publicDomain Field Functions 
    bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
    void deletePublicDomain() { this->publicDomain_ = nullptr;};
    inline string publicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
    inline MoveResourceGroupResponseBodyResult& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


    // publicPort Field Functions 
    bool hasPublicPort() const { return this->publicPort_ != nullptr;};
    void deletePublicPort() { this->publicPort_ = nullptr;};
    inline int32_t publicPort() const { DARABONBA_PTR_GET_DEFAULT(publicPort_, 0) };
    inline MoveResourceGroupResponseBodyResult& setPublicPort(int32_t publicPort) { DARABONBA_PTR_SET_VALUE(publicPort_, publicPort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline MoveResourceGroupResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // synonymsDicts Field Functions 
    bool hasSynonymsDicts() const { return this->synonymsDicts_ != nullptr;};
    void deleteSynonymsDicts() { this->synonymsDicts_ = nullptr;};
    inline const vector<Models::MoveResourceGroupResponseBodyResultSynonymsDicts> & synonymsDicts() const { DARABONBA_PTR_GET_CONST(synonymsDicts_, vector<Models::MoveResourceGroupResponseBodyResultSynonymsDicts>) };
    inline vector<Models::MoveResourceGroupResponseBodyResultSynonymsDicts> synonymsDicts() { DARABONBA_PTR_GET(synonymsDicts_, vector<Models::MoveResourceGroupResponseBodyResultSynonymsDicts>) };
    inline MoveResourceGroupResponseBodyResult& setSynonymsDicts(const vector<Models::MoveResourceGroupResponseBodyResultSynonymsDicts> & synonymsDicts) { DARABONBA_PTR_SET_VALUE(synonymsDicts_, synonymsDicts) };
    inline MoveResourceGroupResponseBodyResult& setSynonymsDicts(vector<Models::MoveResourceGroupResponseBodyResultSynonymsDicts> && synonymsDicts) { DARABONBA_PTR_SET_RVALUE(synonymsDicts_, synonymsDicts) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline MoveResourceGroupResponseBodyResult& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // The time when the cluster was created.
    std::shared_ptr<string> createdAt_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> description_ = nullptr;
    // The configurations of IK dictionaries.
    std::shared_ptr<vector<Models::MoveResourceGroupResponseBodyResultDictList>> dictList_ = nullptr;
    // The internal endpoint of the cluster.
    std::shared_ptr<string> domain_ = nullptr;
    // The version of the cluster.
    std::shared_ptr<string> esVersion_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The configurations of Kibana nodes.
    std::shared_ptr<Models::MoveResourceGroupResponseBodyResultKibanaConfiguration> kibanaConfiguration_ = nullptr;
    // The public endpoint of the Kibana console of the cluster.
    std::shared_ptr<string> kibanaDomain_ = nullptr;
    // The port number that is used to access the Kibana console of the cluster over the Internet.
    std::shared_ptr<int32_t> kibanaPort_ = nullptr;
    // The configurations of dedicated master nodes.
    std::shared_ptr<Models::MoveResourceGroupResponseBodyResultMasterConfiguration> masterConfiguration_ = nullptr;
    // The network configurations.
    std::shared_ptr<Models::MoveResourceGroupResponseBodyResultNetworkConfig> networkConfig_ = nullptr;
    // The number of data nodes in the cluster.
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    // The configurations of data nodes.
    std::shared_ptr<Models::MoveResourceGroupResponseBodyResultNodeSpec> nodeSpec_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   prepaid: subscription
    // *   postpaid: pay-as-you-go
    std::shared_ptr<string> paymentType_ = nullptr;
    // The public endpoint of the cluster.
    std::shared_ptr<string> publicDomain_ = nullptr;
    // The port number that is used to access the cluster over the Internet.
    std::shared_ptr<int32_t> publicPort_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   active: The cluster is normal.
    // *   activating: The cluster is being activated.
    // *   Inactive: The cluster is frozen.
    // *   invalid: The cluster is valid.
    std::shared_ptr<string> status_ = nullptr;
    // The configurations of synonym dictionaries.
    std::shared_ptr<vector<Models::MoveResourceGroupResponseBodyResultSynonymsDicts>> synonymsDicts_ = nullptr;
    // The time when the cluster was last updated.
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
