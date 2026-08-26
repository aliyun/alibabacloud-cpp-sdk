// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateKnowledgeSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EmbeddingDimension, embeddingDimension_);
      DARABONBA_PTR_TO_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_TO_JSON(EnforceAcl, enforceAcl_);
      DARABONBA_PTR_TO_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OSSAccessKey, OSSAccessKey_);
      DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_TO_JSON(OSSSecretKey, OSSSecretKey_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RerankModel, rerankModel_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(ShardingSize, shardingSize_);
      DARABONBA_PTR_TO_JSON(ShardingStrategy, shardingStrategy_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EmbeddingDimension, embeddingDimension_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_FROM_JSON(EnforceAcl, enforceAcl_);
      DARABONBA_PTR_FROM_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OSSAccessKey, OSSAccessKey_);
      DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_FROM_JSON(OSSSecretKey, OSSSecretKey_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RerankModel, rerankModel_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(ShardingSize, shardingSize_);
      DARABONBA_PTR_FROM_JSON(ShardingStrategy, shardingStrategy_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateKnowledgeSpaceRequest() = default ;
    CreateKnowledgeSpaceRequest(const CreateKnowledgeSpaceRequest &) = default ;
    CreateKnowledgeSpaceRequest(CreateKnowledgeSpaceRequest &&) = default ;
    CreateKnowledgeSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeSpaceRequest() = default ;
    CreateKnowledgeSpaceRequest& operator=(const CreateKnowledgeSpaceRequest &) = default ;
    CreateKnowledgeSpaceRequest& operator=(CreateKnowledgeSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBType_ == nullptr
        && this->description_ == nullptr && this->embeddingDimension_ == nullptr && this->embeddingModel_ == nullptr && this->enforceAcl_ == nullptr && this->LLMModel_ == nullptr
        && this->name_ == nullptr && this->OSSAccessKey_ == nullptr && this->OSSBucket_ == nullptr && this->OSSSecretKey_ == nullptr && this->regionId_ == nullptr
        && this->rerankModel_ == nullptr && this->securityGroupId_ == nullptr && this->shardingSize_ == nullptr && this->shardingStrategy_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline CreateKnowledgeSpaceRequest& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeSpaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // embeddingDimension Field Functions 
    bool hasEmbeddingDimension() const { return this->embeddingDimension_ != nullptr;};
    void deleteEmbeddingDimension() { this->embeddingDimension_ = nullptr;};
    inline int32_t getEmbeddingDimension() const { DARABONBA_PTR_GET_DEFAULT(embeddingDimension_, 0) };
    inline CreateKnowledgeSpaceRequest& setEmbeddingDimension(int32_t embeddingDimension) { DARABONBA_PTR_SET_VALUE(embeddingDimension_, embeddingDimension) };


    // embeddingModel Field Functions 
    bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
    void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
    inline string getEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
    inline CreateKnowledgeSpaceRequest& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


    // enforceAcl Field Functions 
    bool hasEnforceAcl() const { return this->enforceAcl_ != nullptr;};
    void deleteEnforceAcl() { this->enforceAcl_ = nullptr;};
    inline bool getEnforceAcl() const { DARABONBA_PTR_GET_DEFAULT(enforceAcl_, false) };
    inline CreateKnowledgeSpaceRequest& setEnforceAcl(bool enforceAcl) { DARABONBA_PTR_SET_VALUE(enforceAcl_, enforceAcl) };


    // LLMModel Field Functions 
    bool hasLLMModel() const { return this->LLMModel_ != nullptr;};
    void deleteLLMModel() { this->LLMModel_ = nullptr;};
    inline string getLLMModel() const { DARABONBA_PTR_GET_DEFAULT(LLMModel_, "") };
    inline CreateKnowledgeSpaceRequest& setLLMModel(string LLMModel) { DARABONBA_PTR_SET_VALUE(LLMModel_, LLMModel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKnowledgeSpaceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // OSSAccessKey Field Functions 
    bool hasOSSAccessKey() const { return this->OSSAccessKey_ != nullptr;};
    void deleteOSSAccessKey() { this->OSSAccessKey_ = nullptr;};
    inline string getOSSAccessKey() const { DARABONBA_PTR_GET_DEFAULT(OSSAccessKey_, "") };
    inline CreateKnowledgeSpaceRequest& setOSSAccessKey(string OSSAccessKey) { DARABONBA_PTR_SET_VALUE(OSSAccessKey_, OSSAccessKey) };


    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string getOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline CreateKnowledgeSpaceRequest& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


    // OSSSecretKey Field Functions 
    bool hasOSSSecretKey() const { return this->OSSSecretKey_ != nullptr;};
    void deleteOSSSecretKey() { this->OSSSecretKey_ = nullptr;};
    inline string getOSSSecretKey() const { DARABONBA_PTR_GET_DEFAULT(OSSSecretKey_, "") };
    inline CreateKnowledgeSpaceRequest& setOSSSecretKey(string OSSSecretKey) { DARABONBA_PTR_SET_VALUE(OSSSecretKey_, OSSSecretKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateKnowledgeSpaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rerankModel Field Functions 
    bool hasRerankModel() const { return this->rerankModel_ != nullptr;};
    void deleteRerankModel() { this->rerankModel_ = nullptr;};
    inline string getRerankModel() const { DARABONBA_PTR_GET_DEFAULT(rerankModel_, "") };
    inline CreateKnowledgeSpaceRequest& setRerankModel(string rerankModel) { DARABONBA_PTR_SET_VALUE(rerankModel_, rerankModel) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateKnowledgeSpaceRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // shardingSize Field Functions 
    bool hasShardingSize() const { return this->shardingSize_ != nullptr;};
    void deleteShardingSize() { this->shardingSize_ = nullptr;};
    inline int32_t getShardingSize() const { DARABONBA_PTR_GET_DEFAULT(shardingSize_, 0) };
    inline CreateKnowledgeSpaceRequest& setShardingSize(int32_t shardingSize) { DARABONBA_PTR_SET_VALUE(shardingSize_, shardingSize) };


    // shardingStrategy Field Functions 
    bool hasShardingStrategy() const { return this->shardingStrategy_ != nullptr;};
    void deleteShardingStrategy() { this->shardingStrategy_ = nullptr;};
    inline string getShardingStrategy() const { DARABONBA_PTR_GET_DEFAULT(shardingStrategy_, "") };
    inline CreateKnowledgeSpaceRequest& setShardingStrategy(string shardingStrategy) { DARABONBA_PTR_SET_VALUE(shardingStrategy_, shardingStrategy) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateKnowledgeSpaceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateKnowledgeSpaceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateKnowledgeSpaceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The database engine type.
    shared_ptr<string> DBType_ {};
    // The description of the knowledge space. The description can be up to 512 characters in length.
    shared_ptr<string> description_ {};
    // The vector dimensions.
    // 
    // This parameter is required.
    shared_ptr<int32_t> embeddingDimension_ {};
    // The name of the embedding model.
    // 
    // This parameter is required.
    shared_ptr<string> embeddingModel_ {};
    // Specifies whether to enable ACL-based authentication for the knowledge space.
    shared_ptr<bool> enforceAcl_ {};
    // The name of the large language model.
    shared_ptr<string> LLMModel_ {};
    // The name of the knowledge space. The name must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // OSS AK
    // 
    // This parameter is required.
    shared_ptr<string> OSSAccessKey_ {};
    // The name of an existing OSS bucket in the same region.
    // 
    // This parameter is required.
    shared_ptr<string> OSSBucket_ {};
    // OSS SK
    // 
    // This parameter is required.
    shared_ptr<string> OSSSecretKey_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The name of the reranking model.
    shared_ptr<string> rerankModel_ {};
    // The security group ID.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    // The shard size, in tokens.
    // 
    // This parameter is required.
    shared_ptr<int32_t> shardingSize_ {};
    // The sharding strategy. Valid values:
    // 
    // - hierarchical (default)
    // - hybrid
    // 
    // This parameter is required.
    shared_ptr<string> shardingStrategy_ {};
    // The vSwitch for automatic creation of the database.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The VPC for automatic creation of the database.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The active zone for automatic creation of the database.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
