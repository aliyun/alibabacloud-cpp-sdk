// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELABELTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELABELTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20250301
{
namespace Models
{
  class CreateLabelTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLabelTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(IdempotentId, idempotentId_);
      DARABONBA_PTR_TO_JSON(LabelTemplateId, labelTemplateId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLabelTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(IdempotentId, idempotentId_);
      DARABONBA_PTR_FROM_JSON(LabelTemplateId, labelTemplateId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    CreateLabelTaskRequest() = default ;
    CreateLabelTaskRequest(const CreateLabelTaskRequest &) = default ;
    CreateLabelTaskRequest(CreateLabelTaskRequest &&) = default ;
    CreateLabelTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLabelTaskRequest() = default ;
    CreateLabelTaskRequest& operator=(const CreateLabelTaskRequest &) = default ;
    CreateLabelTaskRequest& operator=(CreateLabelTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackUrl_ == nullptr
        && this->fileUrl_ == nullptr && this->idempotentId_ == nullptr && this->labelTemplateId_ == nullptr && this->projectId_ == nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline CreateLabelTaskRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateLabelTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // idempotentId Field Functions 
    bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
    void deleteIdempotentId() { this->idempotentId_ = nullptr;};
    inline string getIdempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
    inline CreateLabelTaskRequest& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


    // labelTemplateId Field Functions 
    bool hasLabelTemplateId() const { return this->labelTemplateId_ != nullptr;};
    void deleteLabelTemplateId() { this->labelTemplateId_ = nullptr;};
    inline string getLabelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(labelTemplateId_, "") };
    inline CreateLabelTaskRequest& setLabelTemplateId(string labelTemplateId) { DARABONBA_PTR_SET_VALUE(labelTemplateId_, labelTemplateId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateLabelTaskRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> callbackUrl_ {};
    // This parameter is required.
    shared_ptr<string> fileUrl_ {};
    shared_ptr<string> idempotentId_ {};
    // This parameter is required.
    shared_ptr<string> labelTemplateId_ {};
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20250301
#endif
