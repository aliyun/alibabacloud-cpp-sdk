// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGESPACESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGESPACESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdateKnowledgeSpaceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeSpaceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
      DARABONBA_PTR_TO_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RerankModel, rerankModel_);
      DARABONBA_PTR_TO_JSON(ShardingStrategyConfig, shardingStrategyConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeSpaceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
      DARABONBA_PTR_FROM_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RerankModel, rerankModel_);
      DARABONBA_PTR_FROM_JSON(ShardingStrategyConfig, shardingStrategyConfigShrink_);
    };
    UpdateKnowledgeSpaceShrinkRequest() = default ;
    UpdateKnowledgeSpaceShrinkRequest(const UpdateKnowledgeSpaceShrinkRequest &) = default ;
    UpdateKnowledgeSpaceShrinkRequest(UpdateKnowledgeSpaceShrinkRequest &&) = default ;
    UpdateKnowledgeSpaceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeSpaceShrinkRequest() = default ;
    UpdateKnowledgeSpaceShrinkRequest& operator=(const UpdateKnowledgeSpaceShrinkRequest &) = default ;
    UpdateKnowledgeSpaceShrinkRequest& operator=(UpdateKnowledgeSpaceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->knowledgeSpaceId_ == nullptr && this->LLMModel_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->rerankModel_ == nullptr
        && this->shardingStrategyConfigShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateKnowledgeSpaceShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // knowledgeSpaceId Field Functions 
    bool hasKnowledgeSpaceId() const { return this->knowledgeSpaceId_ != nullptr;};
    void deleteKnowledgeSpaceId() { this->knowledgeSpaceId_ = nullptr;};
    inline string getKnowledgeSpaceId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeSpaceId_, "") };
    inline UpdateKnowledgeSpaceShrinkRequest& setKnowledgeSpaceId(string knowledgeSpaceId) { DARABONBA_PTR_SET_VALUE(knowledgeSpaceId_, knowledgeSpaceId) };


    // LLMModel Field Functions 
    bool hasLLMModel() const { return this->LLMModel_ != nullptr;};
    void deleteLLMModel() { this->LLMModel_ = nullptr;};
    inline string getLLMModel() const { DARABONBA_PTR_GET_DEFAULT(LLMModel_, "") };
    inline UpdateKnowledgeSpaceShrinkRequest& setLLMModel(string LLMModel) { DARABONBA_PTR_SET_VALUE(LLMModel_, LLMModel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateKnowledgeSpaceShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateKnowledgeSpaceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rerankModel Field Functions 
    bool hasRerankModel() const { return this->rerankModel_ != nullptr;};
    void deleteRerankModel() { this->rerankModel_ = nullptr;};
    inline string getRerankModel() const { DARABONBA_PTR_GET_DEFAULT(rerankModel_, "") };
    inline UpdateKnowledgeSpaceShrinkRequest& setRerankModel(string rerankModel) { DARABONBA_PTR_SET_VALUE(rerankModel_, rerankModel) };


    // shardingStrategyConfigShrink Field Functions 
    bool hasShardingStrategyConfigShrink() const { return this->shardingStrategyConfigShrink_ != nullptr;};
    void deleteShardingStrategyConfigShrink() { this->shardingStrategyConfigShrink_ = nullptr;};
    inline string getShardingStrategyConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(shardingStrategyConfigShrink_, "") };
    inline UpdateKnowledgeSpaceShrinkRequest& setShardingStrategyConfigShrink(string shardingStrategyConfigShrink) { DARABONBA_PTR_SET_VALUE(shardingStrategyConfigShrink_, shardingStrategyConfigShrink) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> knowledgeSpaceId_ {};
    shared_ptr<string> LLMModel_ {};
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> rerankModel_ {};
    shared_ptr<string> shardingStrategyConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
