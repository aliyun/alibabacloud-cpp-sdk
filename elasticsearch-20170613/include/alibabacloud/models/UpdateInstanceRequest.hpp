// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ClientNodeConfiguration.hpp>
#include <alibabacloud/models/ElasticDataNodeConfiguration.hpp>
#include <alibabacloud/models/IndexNodeConfiguration.hpp>
#include <alibabacloud/models/KibanaNodeConfiguration.hpp>
#include <alibabacloud/models/MasterNodeConfiguration.hpp>
#include <alibabacloud/models/NodeSpec.hpp>
#include <alibabacloud/models/SearchNodeConfiguration.hpp>
#include <alibabacloud/models/WarmNodeConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientNodeConfiguration, clientNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(indexNodeConfiguration, indexNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(instanceCategory, instanceCategory_);
      DARABONBA_PTR_TO_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_TO_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(searchNodeConfiguration, searchNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(updateType, updateType_);
      DARABONBA_PTR_TO_JSON(warmNodeConfiguration, warmNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(force, force_);
      DARABONBA_PTR_TO_JSON(orderActionType, orderActionType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientNodeConfiguration, clientNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(indexNodeConfiguration, indexNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(instanceCategory, instanceCategory_);
      DARABONBA_PTR_FROM_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_FROM_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(searchNodeConfiguration, searchNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(updateType, updateType_);
      DARABONBA_PTR_FROM_JSON(warmNodeConfiguration, warmNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(force, force_);
      DARABONBA_PTR_FROM_JSON(orderActionType, orderActionType_);
    };
    UpdateInstanceRequest() = default ;
    UpdateInstanceRequest(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest(UpdateInstanceRequest &&) = default ;
    UpdateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequest() = default ;
    UpdateInstanceRequest& operator=(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest& operator=(UpdateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientNodeConfiguration_ == nullptr
        && this->elasticDataNodeConfiguration_ == nullptr && this->indexNodeConfiguration_ == nullptr && this->instanceCategory_ == nullptr && this->kibanaConfiguration_ == nullptr && this->masterConfiguration_ == nullptr
        && this->nodeAmount_ == nullptr && this->nodeSpec_ == nullptr && this->searchNodeConfiguration_ == nullptr && this->updateType_ == nullptr && this->warmNodeConfiguration_ == nullptr
        && this->clientToken_ == nullptr && this->force_ == nullptr && this->orderActionType_ == nullptr; };
    // clientNodeConfiguration Field Functions 
    bool hasClientNodeConfiguration() const { return this->clientNodeConfiguration_ != nullptr;};
    void deleteClientNodeConfiguration() { this->clientNodeConfiguration_ = nullptr;};
    inline const ClientNodeConfiguration & getClientNodeConfiguration() const { DARABONBA_PTR_GET_CONST(clientNodeConfiguration_, ClientNodeConfiguration) };
    inline ClientNodeConfiguration getClientNodeConfiguration() { DARABONBA_PTR_GET(clientNodeConfiguration_, ClientNodeConfiguration) };
    inline UpdateInstanceRequest& setClientNodeConfiguration(const ClientNodeConfiguration & clientNodeConfiguration) { DARABONBA_PTR_SET_VALUE(clientNodeConfiguration_, clientNodeConfiguration) };
    inline UpdateInstanceRequest& setClientNodeConfiguration(ClientNodeConfiguration && clientNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(clientNodeConfiguration_, clientNodeConfiguration) };


    // elasticDataNodeConfiguration Field Functions 
    bool hasElasticDataNodeConfiguration() const { return this->elasticDataNodeConfiguration_ != nullptr;};
    void deleteElasticDataNodeConfiguration() { this->elasticDataNodeConfiguration_ = nullptr;};
    inline const ElasticDataNodeConfiguration & getElasticDataNodeConfiguration() const { DARABONBA_PTR_GET_CONST(elasticDataNodeConfiguration_, ElasticDataNodeConfiguration) };
    inline ElasticDataNodeConfiguration getElasticDataNodeConfiguration() { DARABONBA_PTR_GET(elasticDataNodeConfiguration_, ElasticDataNodeConfiguration) };
    inline UpdateInstanceRequest& setElasticDataNodeConfiguration(const ElasticDataNodeConfiguration & elasticDataNodeConfiguration) { DARABONBA_PTR_SET_VALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };
    inline UpdateInstanceRequest& setElasticDataNodeConfiguration(ElasticDataNodeConfiguration && elasticDataNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };


    // indexNodeConfiguration Field Functions 
    bool hasIndexNodeConfiguration() const { return this->indexNodeConfiguration_ != nullptr;};
    void deleteIndexNodeConfiguration() { this->indexNodeConfiguration_ = nullptr;};
    inline const IndexNodeConfiguration & getIndexNodeConfiguration() const { DARABONBA_PTR_GET_CONST(indexNodeConfiguration_, IndexNodeConfiguration) };
    inline IndexNodeConfiguration getIndexNodeConfiguration() { DARABONBA_PTR_GET(indexNodeConfiguration_, IndexNodeConfiguration) };
    inline UpdateInstanceRequest& setIndexNodeConfiguration(const IndexNodeConfiguration & indexNodeConfiguration) { DARABONBA_PTR_SET_VALUE(indexNodeConfiguration_, indexNodeConfiguration) };
    inline UpdateInstanceRequest& setIndexNodeConfiguration(IndexNodeConfiguration && indexNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(indexNodeConfiguration_, indexNodeConfiguration) };


    // instanceCategory Field Functions 
    bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
    void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
    inline string getInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
    inline UpdateInstanceRequest& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


    // kibanaConfiguration Field Functions 
    bool hasKibanaConfiguration() const { return this->kibanaConfiguration_ != nullptr;};
    void deleteKibanaConfiguration() { this->kibanaConfiguration_ = nullptr;};
    inline const KibanaNodeConfiguration & getKibanaConfiguration() const { DARABONBA_PTR_GET_CONST(kibanaConfiguration_, KibanaNodeConfiguration) };
    inline KibanaNodeConfiguration getKibanaConfiguration() { DARABONBA_PTR_GET(kibanaConfiguration_, KibanaNodeConfiguration) };
    inline UpdateInstanceRequest& setKibanaConfiguration(const KibanaNodeConfiguration & kibanaConfiguration) { DARABONBA_PTR_SET_VALUE(kibanaConfiguration_, kibanaConfiguration) };
    inline UpdateInstanceRequest& setKibanaConfiguration(KibanaNodeConfiguration && kibanaConfiguration) { DARABONBA_PTR_SET_RVALUE(kibanaConfiguration_, kibanaConfiguration) };


    // masterConfiguration Field Functions 
    bool hasMasterConfiguration() const { return this->masterConfiguration_ != nullptr;};
    void deleteMasterConfiguration() { this->masterConfiguration_ = nullptr;};
    inline const MasterNodeConfiguration & getMasterConfiguration() const { DARABONBA_PTR_GET_CONST(masterConfiguration_, MasterNodeConfiguration) };
    inline MasterNodeConfiguration getMasterConfiguration() { DARABONBA_PTR_GET(masterConfiguration_, MasterNodeConfiguration) };
    inline UpdateInstanceRequest& setMasterConfiguration(const MasterNodeConfiguration & masterConfiguration) { DARABONBA_PTR_SET_VALUE(masterConfiguration_, masterConfiguration) };
    inline UpdateInstanceRequest& setMasterConfiguration(MasterNodeConfiguration && masterConfiguration) { DARABONBA_PTR_SET_RVALUE(masterConfiguration_, masterConfiguration) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline UpdateInstanceRequest& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const NodeSpec & getNodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, NodeSpec) };
    inline NodeSpec getNodeSpec() { DARABONBA_PTR_GET(nodeSpec_, NodeSpec) };
    inline UpdateInstanceRequest& setNodeSpec(const NodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline UpdateInstanceRequest& setNodeSpec(NodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // searchNodeConfiguration Field Functions 
    bool hasSearchNodeConfiguration() const { return this->searchNodeConfiguration_ != nullptr;};
    void deleteSearchNodeConfiguration() { this->searchNodeConfiguration_ = nullptr;};
    inline const SearchNodeConfiguration & getSearchNodeConfiguration() const { DARABONBA_PTR_GET_CONST(searchNodeConfiguration_, SearchNodeConfiguration) };
    inline SearchNodeConfiguration getSearchNodeConfiguration() { DARABONBA_PTR_GET(searchNodeConfiguration_, SearchNodeConfiguration) };
    inline UpdateInstanceRequest& setSearchNodeConfiguration(const SearchNodeConfiguration & searchNodeConfiguration) { DARABONBA_PTR_SET_VALUE(searchNodeConfiguration_, searchNodeConfiguration) };
    inline UpdateInstanceRequest& setSearchNodeConfiguration(SearchNodeConfiguration && searchNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(searchNodeConfiguration_, searchNodeConfiguration) };


    // updateType Field Functions 
    bool hasUpdateType() const { return this->updateType_ != nullptr;};
    void deleteUpdateType() { this->updateType_ = nullptr;};
    inline string getUpdateType() const { DARABONBA_PTR_GET_DEFAULT(updateType_, "") };
    inline UpdateInstanceRequest& setUpdateType(string updateType) { DARABONBA_PTR_SET_VALUE(updateType_, updateType) };


    // warmNodeConfiguration Field Functions 
    bool hasWarmNodeConfiguration() const { return this->warmNodeConfiguration_ != nullptr;};
    void deleteWarmNodeConfiguration() { this->warmNodeConfiguration_ = nullptr;};
    inline const WarmNodeConfiguration & getWarmNodeConfiguration() const { DARABONBA_PTR_GET_CONST(warmNodeConfiguration_, WarmNodeConfiguration) };
    inline WarmNodeConfiguration getWarmNodeConfiguration() { DARABONBA_PTR_GET(warmNodeConfiguration_, WarmNodeConfiguration) };
    inline UpdateInstanceRequest& setWarmNodeConfiguration(const WarmNodeConfiguration & warmNodeConfiguration) { DARABONBA_PTR_SET_VALUE(warmNodeConfiguration_, warmNodeConfiguration) };
    inline UpdateInstanceRequest& setWarmNodeConfiguration(WarmNodeConfiguration && warmNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(warmNodeConfiguration_, warmNodeConfiguration) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline UpdateInstanceRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // orderActionType Field Functions 
    bool hasOrderActionType() const { return this->orderActionType_ != nullptr;};
    void deleteOrderActionType() { this->orderActionType_ = nullptr;};
    inline string getOrderActionType() const { DARABONBA_PTR_GET_DEFAULT(orderActionType_, "") };
    inline UpdateInstanceRequest& setOrderActionType(string orderActionType) { DARABONBA_PTR_SET_VALUE(orderActionType_, orderActionType) };


  protected:
    // The client node configuration.
    shared_ptr<ClientNodeConfiguration> clientNodeConfiguration_ {};
    // The elastic node configuration.
    shared_ptr<ElasticDataNodeConfiguration> elasticDataNodeConfiguration_ {};
    // The index node configuration. This parameter is supported only by AI engine instances.
    shared_ptr<IndexNodeConfiguration> indexNodeConfiguration_ {};
    // The edition type. Valid values:
    // 
    // - x-pack: Commercial Edition.
    // - advanced: Advanced Edition.
    // - IS: Advanced Edition with Indexing Service enabled.
    // - community: Basic Edition.
    // > To create an Advanced Edition instance with OpenStore enabled, you must also enable Indexing Service.
    shared_ptr<string> instanceCategory_ {};
    // The Kibana node configuration.
    shared_ptr<KibanaNodeConfiguration> kibanaConfiguration_ {};
    // The dedicated master node configuration.
    shared_ptr<MasterNodeConfiguration> masterConfiguration_ {};
    // The number of nodes.
    shared_ptr<int32_t> nodeAmount_ {};
    // The data node configuration.
    shared_ptr<NodeSpec> nodeSpec_ {};
    // The search node configuration. This parameter is supported only by AI engine instances.
    shared_ptr<SearchNodeConfiguration> searchNodeConfiguration_ {};
    // The update type. Valid values:
    // - normal: In-place update.
    // - blue_green: Blue-green update.
    shared_ptr<string> updateType_ {};
    // The warm data node configuration.
    shared_ptr<WarmNodeConfiguration> warmNodeConfiguration_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to force a restart. Valid values:
    // 
    // - true: Yes.
    // - false: No. This is the default value.
    shared_ptr<bool> force_ {};
    // The configuration change type. Valid values:
    // 
    // - upgrade: Upgrades the configuration. This is the default value.
    // - downgrade: Downgrades the configuration.
    shared_ptr<string> orderActionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
