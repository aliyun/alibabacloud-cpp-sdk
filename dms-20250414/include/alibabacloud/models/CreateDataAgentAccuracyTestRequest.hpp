// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTACCURACYTESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTACCURACYTESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateDataAgentAccuracyTestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentAccuracyTestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_TO_JSON(Dataset, dataset_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_TO_JSON(EvaluationPrompt, evaluationPrompt_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MaxConcurrent, maxConcurrent_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeedDelete, needDelete_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentAccuracyTestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_FROM_JSON(Dataset, dataset_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_FROM_JSON(EvaluationPrompt, evaluationPrompt_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrent, maxConcurrent_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeedDelete, needDelete_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDataAgentAccuracyTestRequest() = default ;
    CreateDataAgentAccuracyTestRequest(const CreateDataAgentAccuracyTestRequest &) = default ;
    CreateDataAgentAccuracyTestRequest(CreateDataAgentAccuracyTestRequest &&) = default ;
    CreateDataAgentAccuracyTestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentAccuracyTestRequest() = default ;
    CreateDataAgentAccuracyTestRequest& operator=(const CreateDataAgentAccuracyTestRequest &) = default ;
    CreateDataAgentAccuracyTestRequest& operator=(CreateDataAgentAccuracyTestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customAgentId_ == nullptr
        && this->dataset_ == nullptr && this->desc_ == nullptr && this->dmsUnit_ == nullptr && this->evaluationPrompt_ == nullptr && this->fileId_ == nullptr
        && this->language_ == nullptr && this->maxConcurrent_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr && this->needDelete_ == nullptr
        && this->regionId_ == nullptr && this->workspaceId_ == nullptr; };
    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline CreateDataAgentAccuracyTestRequest& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


    // dataset Field Functions 
    bool hasDataset() const { return this->dataset_ != nullptr;};
    void deleteDataset() { this->dataset_ = nullptr;};
    inline string getDataset() const { DARABONBA_PTR_GET_DEFAULT(dataset_, "") };
    inline CreateDataAgentAccuracyTestRequest& setDataset(string dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline CreateDataAgentAccuracyTestRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // dmsUnit Field Functions 
    bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
    void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
    inline string getDmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
    inline CreateDataAgentAccuracyTestRequest& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


    // evaluationPrompt Field Functions 
    bool hasEvaluationPrompt() const { return this->evaluationPrompt_ != nullptr;};
    void deleteEvaluationPrompt() { this->evaluationPrompt_ = nullptr;};
    inline string getEvaluationPrompt() const { DARABONBA_PTR_GET_DEFAULT(evaluationPrompt_, "") };
    inline CreateDataAgentAccuracyTestRequest& setEvaluationPrompt(string evaluationPrompt) { DARABONBA_PTR_SET_VALUE(evaluationPrompt_, evaluationPrompt) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline CreateDataAgentAccuracyTestRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateDataAgentAccuracyTestRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxConcurrent Field Functions 
    bool hasMaxConcurrent() const { return this->maxConcurrent_ != nullptr;};
    void deleteMaxConcurrent() { this->maxConcurrent_ = nullptr;};
    inline int32_t getMaxConcurrent() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrent_, 0) };
    inline CreateDataAgentAccuracyTestRequest& setMaxConcurrent(int32_t maxConcurrent) { DARABONBA_PTR_SET_VALUE(maxConcurrent_, maxConcurrent) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline CreateDataAgentAccuracyTestRequest& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataAgentAccuracyTestRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needDelete Field Functions 
    bool hasNeedDelete() const { return this->needDelete_ != nullptr;};
    void deleteNeedDelete() { this->needDelete_ = nullptr;};
    inline bool getNeedDelete() const { DARABONBA_PTR_GET_DEFAULT(needDelete_, false) };
    inline CreateDataAgentAccuracyTestRequest& setNeedDelete(bool needDelete) { DARABONBA_PTR_SET_VALUE(needDelete_, needDelete) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDataAgentAccuracyTestRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDataAgentAccuracyTestRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The ID of the custom agent for which you want to run the accuracy test.
    shared_ptr<string> customAgentId_ {};
    // The data source. We recommend that you configure this in the custom agent.
    shared_ptr<string> dataset_ {};
    // The description.
    shared_ptr<string> desc_ {};
    // The DMS unit used to create the resource.
    shared_ptr<string> dmsUnit_ {};
    // The accuracy evaluation criteria. An empty value indicates the default criteria.
    shared_ptr<string> evaluationPrompt_ {};
    // The file ID in the data center.
    shared_ptr<string> fileId_ {};
    // The language used for the analysis task.
    shared_ptr<string> language_ {};
    // The maximum number of concurrent sessions during the test.
    shared_ptr<int32_t> maxConcurrent_ {};
    // The analysis mode.
    shared_ptr<int32_t> mode_ {};
    // The name of the test item.
    shared_ptr<string> name_ {};
    // Specifies whether sessions are displayed after the analysis. This parameter is not supported.
    shared_ptr<bool> needDelete_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
