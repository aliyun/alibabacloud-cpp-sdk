// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAIDBCLUSTERMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAIDBCLUSTERMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyAIDBClusterModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAIDBClusterModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DisplayModelName, displayModelName_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAIDBClusterModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DisplayModelName, displayModelName_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyAIDBClusterModelRequest() = default ;
    ModifyAIDBClusterModelRequest(const ModifyAIDBClusterModelRequest &) = default ;
    ModifyAIDBClusterModelRequest(ModifyAIDBClusterModelRequest &&) = default ;
    ModifyAIDBClusterModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAIDBClusterModelRequest() = default ;
    ModifyAIDBClusterModelRequest& operator=(const ModifyAIDBClusterModelRequest &) = default ;
    ModifyAIDBClusterModelRequest& operator=(ModifyAIDBClusterModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->displayModelName_ == nullptr && this->dryRun_ == nullptr && this->modelName_ == nullptr && this->regionId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyAIDBClusterModelRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // displayModelName Field Functions 
    bool hasDisplayModelName() const { return this->displayModelName_ != nullptr;};
    void deleteDisplayModelName() { this->displayModelName_ = nullptr;};
    inline string getDisplayModelName() const { DARABONBA_PTR_GET_DEFAULT(displayModelName_, "") };
    inline ModifyAIDBClusterModelRequest& setDisplayModelName(string displayModelName) { DARABONBA_PTR_SET_VALUE(displayModelName_, displayModelName) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyAIDBClusterModelRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ModifyAIDBClusterModelRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAIDBClusterModelRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the PolarDB AI 3.0 logical instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The new customer-facing invocation name. If this parameter is not specified, the existing invocation name is retained.
    shared_ptr<string> displayModelName_ {};
    // Specifies whether to only preview the change.
    shared_ptr<bool> dryRun_ {};
    // The name of the target model. Select a value from the ModelName values returned by the DescribeAvailableModels operation.
    // 
    // This parameter is required.
    shared_ptr<string> modelName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
