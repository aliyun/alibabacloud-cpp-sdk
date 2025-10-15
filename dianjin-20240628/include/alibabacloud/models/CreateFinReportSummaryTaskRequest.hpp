// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFINREPORTSUMMARYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFINREPORTSUMMARYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateFinReportSummaryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFinReportSummaryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(enableTable, enableTable_);
      DARABONBA_PTR_TO_JSON(endPage, endPage_);
      DARABONBA_PTR_TO_JSON(instruction, instruction_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(startPage, startPage_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFinReportSummaryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(enableTable, enableTable_);
      DARABONBA_PTR_FROM_JSON(endPage, endPage_);
      DARABONBA_PTR_FROM_JSON(instruction, instruction_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(startPage, startPage_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
    };
    CreateFinReportSummaryTaskRequest() = default ;
    CreateFinReportSummaryTaskRequest(const CreateFinReportSummaryTaskRequest &) = default ;
    CreateFinReportSummaryTaskRequest(CreateFinReportSummaryTaskRequest &&) = default ;
    CreateFinReportSummaryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFinReportSummaryTaskRequest() = default ;
    CreateFinReportSummaryTaskRequest& operator=(const CreateFinReportSummaryTaskRequest &) = default ;
    CreateFinReportSummaryTaskRequest& operator=(CreateFinReportSummaryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docId_ == nullptr
        && return this->enableTable_ == nullptr && return this->endPage_ == nullptr && return this->instruction_ == nullptr && return this->libraryId_ == nullptr && return this->modelId_ == nullptr
        && return this->startPage_ == nullptr && return this->taskType_ == nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline CreateFinReportSummaryTaskRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // enableTable Field Functions 
    bool hasEnableTable() const { return this->enableTable_ != nullptr;};
    void deleteEnableTable() { this->enableTable_ = nullptr;};
    inline bool enableTable() const { DARABONBA_PTR_GET_DEFAULT(enableTable_, false) };
    inline CreateFinReportSummaryTaskRequest& setEnableTable(bool enableTable) { DARABONBA_PTR_SET_VALUE(enableTable_, enableTable) };


    // endPage Field Functions 
    bool hasEndPage() const { return this->endPage_ != nullptr;};
    void deleteEndPage() { this->endPage_ = nullptr;};
    inline int32_t endPage() const { DARABONBA_PTR_GET_DEFAULT(endPage_, 0) };
    inline CreateFinReportSummaryTaskRequest& setEndPage(int32_t endPage) { DARABONBA_PTR_SET_VALUE(endPage_, endPage) };


    // instruction Field Functions 
    bool hasInstruction() const { return this->instruction_ != nullptr;};
    void deleteInstruction() { this->instruction_ = nullptr;};
    inline string instruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
    inline CreateFinReportSummaryTaskRequest& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline CreateFinReportSummaryTaskRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline CreateFinReportSummaryTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // startPage Field Functions 
    bool hasStartPage() const { return this->startPage_ != nullptr;};
    void deleteStartPage() { this->startPage_ = nullptr;};
    inline int32_t startPage() const { DARABONBA_PTR_GET_DEFAULT(startPage_, 0) };
    inline CreateFinReportSummaryTaskRequest& setStartPage(int32_t startPage) { DARABONBA_PTR_SET_VALUE(startPage_, startPage) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateFinReportSummaryTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> docId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> enableTable_ = nullptr;
    std::shared_ptr<int32_t> endPage_ = nullptr;
    std::shared_ptr<string> instruction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<int32_t> startPage_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
