// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEDETECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEDETECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateImageDetectionTaskRequestFileInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateImageDetectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageDetectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageDetectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    CreateImageDetectionTaskRequest() = default ;
    CreateImageDetectionTaskRequest(const CreateImageDetectionTaskRequest &) = default ;
    CreateImageDetectionTaskRequest(CreateImageDetectionTaskRequest &&) = default ;
    CreateImageDetectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageDetectionTaskRequest() = default ;
    CreateImageDetectionTaskRequest& operator=(const CreateImageDetectionTaskRequest &) = default ;
    CreateImageDetectionTaskRequest& operator=(CreateImageDetectionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileInfo_ == nullptr
        && return this->fileUrl_ == nullptr && return this->requestId_ == nullptr && return this->userId_ == nullptr; };
    // fileInfo Field Functions 
    bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
    void deleteFileInfo() { this->fileInfo_ = nullptr;};
    inline const CreateImageDetectionTaskRequestFileInfo & fileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, CreateImageDetectionTaskRequestFileInfo) };
    inline CreateImageDetectionTaskRequestFileInfo fileInfo() { DARABONBA_PTR_GET(fileInfo_, CreateImageDetectionTaskRequestFileInfo) };
    inline CreateImageDetectionTaskRequest& setFileInfo(const CreateImageDetectionTaskRequestFileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
    inline CreateImageDetectionTaskRequest& setFileInfo(CreateImageDetectionTaskRequestFileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateImageDetectionTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateImageDetectionTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateImageDetectionTaskRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<CreateImageDetectionTaskRequestFileInfo> fileInfo_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
