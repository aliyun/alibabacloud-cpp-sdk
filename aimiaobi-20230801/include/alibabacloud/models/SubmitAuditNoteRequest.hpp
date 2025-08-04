// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAUDITNOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAUDITNOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitAuditNoteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAuditNoteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAuditNoteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitAuditNoteRequest() = default ;
    SubmitAuditNoteRequest(const SubmitAuditNoteRequest &) = default ;
    SubmitAuditNoteRequest(SubmitAuditNoteRequest &&) = default ;
    SubmitAuditNoteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAuditNoteRequest() = default ;
    SubmitAuditNoteRequest& operator=(const SubmitAuditNoteRequest &) = default ;
    SubmitAuditNoteRequest& operator=(SubmitAuditNoteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileKey_ != nullptr
        && this->workspaceId_ != nullptr; };
    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline SubmitAuditNoteRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitAuditNoteRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
