// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEFILESHARDINGSTRATEGYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEFILESHARDINGSTRATEGYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdateKnowledgeBaseFileShardingStrategyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseFileShardingStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(InheritSpaceStrategy, inheritSpaceStrategy_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShardingStrategyConfig, shardingStrategyConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseFileShardingStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(InheritSpaceStrategy, inheritSpaceStrategy_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShardingStrategyConfig, shardingStrategyConfigShrink_);
    };
    UpdateKnowledgeBaseFileShardingStrategyShrinkRequest() = default ;
    UpdateKnowledgeBaseFileShardingStrategyShrinkRequest(const UpdateKnowledgeBaseFileShardingStrategyShrinkRequest &) = default ;
    UpdateKnowledgeBaseFileShardingStrategyShrinkRequest(UpdateKnowledgeBaseFileShardingStrategyShrinkRequest &&) = default ;
    UpdateKnowledgeBaseFileShardingStrategyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseFileShardingStrategyShrinkRequest() = default ;
    UpdateKnowledgeBaseFileShardingStrategyShrinkRequest& operator=(const UpdateKnowledgeBaseFileShardingStrategyShrinkRequest &) = default ;
    UpdateKnowledgeBaseFileShardingStrategyShrinkRequest& operator=(UpdateKnowledgeBaseFileShardingStrategyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && this->inheritSpaceStrategy_ == nullptr && this->knowledgeBaseId_ == nullptr && this->regionId_ == nullptr && this->shardingStrategyConfigShrink_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline UpdateKnowledgeBaseFileShardingStrategyShrinkRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // inheritSpaceStrategy Field Functions 
    bool hasInheritSpaceStrategy() const { return this->inheritSpaceStrategy_ != nullptr;};
    void deleteInheritSpaceStrategy() { this->inheritSpaceStrategy_ = nullptr;};
    inline bool getInheritSpaceStrategy() const { DARABONBA_PTR_GET_DEFAULT(inheritSpaceStrategy_, false) };
    inline UpdateKnowledgeBaseFileShardingStrategyShrinkRequest& setInheritSpaceStrategy(bool inheritSpaceStrategy) { DARABONBA_PTR_SET_VALUE(inheritSpaceStrategy_, inheritSpaceStrategy) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline UpdateKnowledgeBaseFileShardingStrategyShrinkRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateKnowledgeBaseFileShardingStrategyShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // shardingStrategyConfigShrink Field Functions 
    bool hasShardingStrategyConfigShrink() const { return this->shardingStrategyConfigShrink_ != nullptr;};
    void deleteShardingStrategyConfigShrink() { this->shardingStrategyConfigShrink_ = nullptr;};
    inline string getShardingStrategyConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(shardingStrategyConfigShrink_, "") };
    inline UpdateKnowledgeBaseFileShardingStrategyShrinkRequest& setShardingStrategyConfigShrink(string shardingStrategyConfigShrink) { DARABONBA_PTR_SET_VALUE(shardingStrategyConfigShrink_, shardingStrategyConfigShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> fileId_ {};
    shared_ptr<bool> inheritSpaceStrategy_ {};
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> shardingStrategyConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
