// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTPPTARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTPPTARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ExportPptArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportPptArtifactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Edit, edit_);
      DARABONBA_PTR_TO_JSON(ExportFileType, exportFileType_);
      DARABONBA_PTR_TO_JSON(PptArtifactId, pptArtifactId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(Zip, zip_);
    };
    friend void from_json(const Darabonba::Json& j, ExportPptArtifactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Edit, edit_);
      DARABONBA_PTR_FROM_JSON(ExportFileType, exportFileType_);
      DARABONBA_PTR_FROM_JSON(PptArtifactId, pptArtifactId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(Zip, zip_);
    };
    ExportPptArtifactRequest() = default ;
    ExportPptArtifactRequest(const ExportPptArtifactRequest &) = default ;
    ExportPptArtifactRequest(ExportPptArtifactRequest &&) = default ;
    ExportPptArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportPptArtifactRequest() = default ;
    ExportPptArtifactRequest& operator=(const ExportPptArtifactRequest &) = default ;
    ExportPptArtifactRequest& operator=(ExportPptArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edit_ == nullptr
        && this->exportFileType_ == nullptr && this->pptArtifactId_ == nullptr && this->workspaceId_ == nullptr && this->zip_ == nullptr; };
    // edit Field Functions 
    bool hasEdit() const { return this->edit_ != nullptr;};
    void deleteEdit() { this->edit_ = nullptr;};
    inline bool getEdit() const { DARABONBA_PTR_GET_DEFAULT(edit_, false) };
    inline ExportPptArtifactRequest& setEdit(bool edit) { DARABONBA_PTR_SET_VALUE(edit_, edit) };


    // exportFileType Field Functions 
    bool hasExportFileType() const { return this->exportFileType_ != nullptr;};
    void deleteExportFileType() { this->exportFileType_ = nullptr;};
    inline string getExportFileType() const { DARABONBA_PTR_GET_DEFAULT(exportFileType_, "") };
    inline ExportPptArtifactRequest& setExportFileType(string exportFileType) { DARABONBA_PTR_SET_VALUE(exportFileType_, exportFileType) };


    // pptArtifactId Field Functions 
    bool hasPptArtifactId() const { return this->pptArtifactId_ != nullptr;};
    void deletePptArtifactId() { this->pptArtifactId_ = nullptr;};
    inline int64_t getPptArtifactId() const { DARABONBA_PTR_GET_DEFAULT(pptArtifactId_, 0L) };
    inline ExportPptArtifactRequest& setPptArtifactId(int64_t pptArtifactId) { DARABONBA_PTR_SET_VALUE(pptArtifactId_, pptArtifactId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ExportPptArtifactRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // zip Field Functions 
    bool hasZip() const { return this->zip_ != nullptr;};
    void deleteZip() { this->zip_ = nullptr;};
    inline bool getZip() const { DARABONBA_PTR_GET_DEFAULT(zip_, false) };
    inline ExportPptArtifactRequest& setZip(bool zip) { DARABONBA_PTR_SET_VALUE(zip_, zip) };


  protected:
    shared_ptr<bool> edit_ {};
    shared_ptr<string> exportFileType_ {};
    // This parameter is required.
    shared_ptr<int64_t> pptArtifactId_ {};
    shared_ptr<string> workspaceId_ {};
    shared_ptr<bool> zip_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
