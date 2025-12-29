// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIMPORTTERMSTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIMPORTTERMSTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitImportTermsTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitImportTermsTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(TermsName, termsName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitImportTermsTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(TermsName, termsName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitImportTermsTaskRequest() = default ;
    SubmitImportTermsTaskRequest(const SubmitImportTermsTaskRequest &) = default ;
    SubmitImportTermsTaskRequest(SubmitImportTermsTaskRequest &&) = default ;
    SubmitImportTermsTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitImportTermsTaskRequest() = default ;
    SubmitImportTermsTaskRequest& operator=(const SubmitImportTermsTaskRequest &) = default ;
    SubmitImportTermsTaskRequest& operator=(SubmitImportTermsTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileKey_ == nullptr
        && this->termsName_ == nullptr && this->workspaceId_ == nullptr; };
    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string getFileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline SubmitImportTermsTaskRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // termsName Field Functions 
    bool hasTermsName() const { return this->termsName_ != nullptr;};
    void deleteTermsName() { this->termsName_ = nullptr;};
    inline string getTermsName() const { DARABONBA_PTR_GET_DEFAULT(termsName_, "") };
    inline SubmitImportTermsTaskRequest& setTermsName(string termsName) { DARABONBA_PTR_SET_VALUE(termsName_, termsName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitImportTermsTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> fileKey_ {};
    shared_ptr<string> termsName_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
