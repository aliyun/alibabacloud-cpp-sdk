// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIDEOCREATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIDEOCREATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateVideoCreationTaskRequestCreationInstruction.hpp>
#include <alibabacloud/models/CreateVideoCreationTaskRequestFileInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateVideoCreationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVideoCreationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(creationInstruction, creationInstruction_);
      DARABONBA_PTR_TO_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_TO_JSON(imageDetectionTaskId, imageDetectionTaskId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVideoCreationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(creationInstruction, creationInstruction_);
      DARABONBA_PTR_FROM_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_FROM_JSON(imageDetectionTaskId, imageDetectionTaskId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    CreateVideoCreationTaskRequest() = default ;
    CreateVideoCreationTaskRequest(const CreateVideoCreationTaskRequest &) = default ;
    CreateVideoCreationTaskRequest(CreateVideoCreationTaskRequest &&) = default ;
    CreateVideoCreationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVideoCreationTaskRequest() = default ;
    CreateVideoCreationTaskRequest& operator=(const CreateVideoCreationTaskRequest &) = default ;
    CreateVideoCreationTaskRequest& operator=(CreateVideoCreationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationInstruction_ == nullptr
        && return this->fileInfo_ == nullptr && return this->imageDetectionTaskId_ == nullptr && return this->requestId_ == nullptr && return this->userId_ == nullptr; };
    // creationInstruction Field Functions 
    bool hasCreationInstruction() const { return this->creationInstruction_ != nullptr;};
    void deleteCreationInstruction() { this->creationInstruction_ = nullptr;};
    inline const CreateVideoCreationTaskRequestCreationInstruction & creationInstruction() const { DARABONBA_PTR_GET_CONST(creationInstruction_, CreateVideoCreationTaskRequestCreationInstruction) };
    inline CreateVideoCreationTaskRequestCreationInstruction creationInstruction() { DARABONBA_PTR_GET(creationInstruction_, CreateVideoCreationTaskRequestCreationInstruction) };
    inline CreateVideoCreationTaskRequest& setCreationInstruction(const CreateVideoCreationTaskRequestCreationInstruction & creationInstruction) { DARABONBA_PTR_SET_VALUE(creationInstruction_, creationInstruction) };
    inline CreateVideoCreationTaskRequest& setCreationInstruction(CreateVideoCreationTaskRequestCreationInstruction && creationInstruction) { DARABONBA_PTR_SET_RVALUE(creationInstruction_, creationInstruction) };


    // fileInfo Field Functions 
    bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
    void deleteFileInfo() { this->fileInfo_ = nullptr;};
    inline const CreateVideoCreationTaskRequestFileInfo & fileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, CreateVideoCreationTaskRequestFileInfo) };
    inline CreateVideoCreationTaskRequestFileInfo fileInfo() { DARABONBA_PTR_GET(fileInfo_, CreateVideoCreationTaskRequestFileInfo) };
    inline CreateVideoCreationTaskRequest& setFileInfo(const CreateVideoCreationTaskRequestFileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
    inline CreateVideoCreationTaskRequest& setFileInfo(CreateVideoCreationTaskRequestFileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


    // imageDetectionTaskId Field Functions 
    bool hasImageDetectionTaskId() const { return this->imageDetectionTaskId_ != nullptr;};
    void deleteImageDetectionTaskId() { this->imageDetectionTaskId_ = nullptr;};
    inline string imageDetectionTaskId() const { DARABONBA_PTR_GET_DEFAULT(imageDetectionTaskId_, "") };
    inline CreateVideoCreationTaskRequest& setImageDetectionTaskId(string imageDetectionTaskId) { DARABONBA_PTR_SET_VALUE(imageDetectionTaskId_, imageDetectionTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVideoCreationTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateVideoCreationTaskRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<CreateVideoCreationTaskRequestCreationInstruction> creationInstruction_ = nullptr;
    std::shared_ptr<CreateVideoCreationTaskRequestFileInfo> fileInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageDetectionTaskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
