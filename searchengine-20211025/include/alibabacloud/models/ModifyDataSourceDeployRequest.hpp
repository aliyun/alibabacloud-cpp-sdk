// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATASOURCEDEPLOYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATASOURCEDEPLOYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyDataSourceDeployRequestExtend.hpp>
#include <alibabacloud/models/ModifyDataSourceDeployRequestProcessor.hpp>
#include <alibabacloud/models/ModifyDataSourceDeployRequestStorage.hpp>
#include <alibabacloud/models/ModifyDataSourceDeployRequestSwift.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyDataSourceDeployRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataSourceDeployRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_TO_JSON(extend, extend_);
      DARABONBA_PTR_TO_JSON(processor, processor_);
      DARABONBA_PTR_TO_JSON(storage, storage_);
      DARABONBA_PTR_TO_JSON(swift, swift_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(generationId, generationId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataSourceDeployRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_FROM_JSON(extend, extend_);
      DARABONBA_PTR_FROM_JSON(processor, processor_);
      DARABONBA_PTR_FROM_JSON(storage, storage_);
      DARABONBA_PTR_FROM_JSON(swift, swift_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(generationId, generationId_);
    };
    ModifyDataSourceDeployRequest() = default ;
    ModifyDataSourceDeployRequest(const ModifyDataSourceDeployRequest &) = default ;
    ModifyDataSourceDeployRequest(ModifyDataSourceDeployRequest &&) = default ;
    ModifyDataSourceDeployRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataSourceDeployRequest() = default ;
    ModifyDataSourceDeployRequest& operator=(const ModifyDataSourceDeployRequest &) = default ;
    ModifyDataSourceDeployRequest& operator=(ModifyDataSourceDeployRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoBuildIndex_ != nullptr
        && this->extend_ != nullptr && this->processor_ != nullptr && this->storage_ != nullptr && this->swift_ != nullptr && this->dryRun_ != nullptr
        && this->generationId_ != nullptr; };
    // autoBuildIndex Field Functions 
    bool hasAutoBuildIndex() const { return this->autoBuildIndex_ != nullptr;};
    void deleteAutoBuildIndex() { this->autoBuildIndex_ = nullptr;};
    inline bool autoBuildIndex() const { DARABONBA_PTR_GET_DEFAULT(autoBuildIndex_, false) };
    inline ModifyDataSourceDeployRequest& setAutoBuildIndex(bool autoBuildIndex) { DARABONBA_PTR_SET_VALUE(autoBuildIndex_, autoBuildIndex) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline const ModifyDataSourceDeployRequestExtend & extend() const { DARABONBA_PTR_GET_CONST(extend_, ModifyDataSourceDeployRequestExtend) };
    inline ModifyDataSourceDeployRequestExtend extend() { DARABONBA_PTR_GET(extend_, ModifyDataSourceDeployRequestExtend) };
    inline ModifyDataSourceDeployRequest& setExtend(const ModifyDataSourceDeployRequestExtend & extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };
    inline ModifyDataSourceDeployRequest& setExtend(ModifyDataSourceDeployRequestExtend && extend) { DARABONBA_PTR_SET_RVALUE(extend_, extend) };


    // processor Field Functions 
    bool hasProcessor() const { return this->processor_ != nullptr;};
    void deleteProcessor() { this->processor_ = nullptr;};
    inline const ModifyDataSourceDeployRequestProcessor & processor() const { DARABONBA_PTR_GET_CONST(processor_, ModifyDataSourceDeployRequestProcessor) };
    inline ModifyDataSourceDeployRequestProcessor processor() { DARABONBA_PTR_GET(processor_, ModifyDataSourceDeployRequestProcessor) };
    inline ModifyDataSourceDeployRequest& setProcessor(const ModifyDataSourceDeployRequestProcessor & processor) { DARABONBA_PTR_SET_VALUE(processor_, processor) };
    inline ModifyDataSourceDeployRequest& setProcessor(ModifyDataSourceDeployRequestProcessor && processor) { DARABONBA_PTR_SET_RVALUE(processor_, processor) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline const ModifyDataSourceDeployRequestStorage & storage() const { DARABONBA_PTR_GET_CONST(storage_, ModifyDataSourceDeployRequestStorage) };
    inline ModifyDataSourceDeployRequestStorage storage() { DARABONBA_PTR_GET(storage_, ModifyDataSourceDeployRequestStorage) };
    inline ModifyDataSourceDeployRequest& setStorage(const ModifyDataSourceDeployRequestStorage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
    inline ModifyDataSourceDeployRequest& setStorage(ModifyDataSourceDeployRequestStorage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


    // swift Field Functions 
    bool hasSwift() const { return this->swift_ != nullptr;};
    void deleteSwift() { this->swift_ = nullptr;};
    inline const ModifyDataSourceDeployRequestSwift & swift() const { DARABONBA_PTR_GET_CONST(swift_, ModifyDataSourceDeployRequestSwift) };
    inline ModifyDataSourceDeployRequestSwift swift() { DARABONBA_PTR_GET(swift_, ModifyDataSourceDeployRequestSwift) };
    inline ModifyDataSourceDeployRequest& setSwift(const ModifyDataSourceDeployRequestSwift & swift) { DARABONBA_PTR_SET_VALUE(swift_, swift) };
    inline ModifyDataSourceDeployRequest& setSwift(ModifyDataSourceDeployRequestSwift && swift) { DARABONBA_PTR_SET_RVALUE(swift_, swift) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyDataSourceDeployRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // generationId Field Functions 
    bool hasGenerationId() const { return this->generationId_ != nullptr;};
    void deleteGenerationId() { this->generationId_ = nullptr;};
    inline int64_t generationId() const { DARABONBA_PTR_GET_DEFAULT(generationId_, 0L) };
    inline ModifyDataSourceDeployRequest& setGenerationId(int64_t generationId) { DARABONBA_PTR_SET_VALUE(generationId_, generationId) };


  protected:
    // Specifies whether to enable the automatic full indexing feature.
    std::shared_ptr<bool> autoBuildIndex_ = nullptr;
    // The extended information.
    std::shared_ptr<ModifyDataSourceDeployRequestExtend> extend_ = nullptr;
    // The parameters of the process.
    std::shared_ptr<ModifyDataSourceDeployRequestProcessor> processor_ = nullptr;
    // The information about the data source.
    std::shared_ptr<ModifyDataSourceDeployRequestStorage> storage_ = nullptr;
    // The information about the incremental data source Swift.
    std::shared_ptr<ModifyDataSourceDeployRequestSwift> swift_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. The system only checks the validity of the data source. Valid values: true and false.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the full index version.
    std::shared_ptr<int64_t> generationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
