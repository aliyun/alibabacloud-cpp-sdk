// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSCRIPTRECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSCRIPTRECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class UploadScriptRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadScriptRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadScriptRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    UploadScriptRecordingRequest() = default ;
    UploadScriptRecordingRequest(const UploadScriptRecordingRequest &) = default ;
    UploadScriptRecordingRequest(UploadScriptRecordingRequest &&) = default ;
    UploadScriptRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadScriptRecordingRequest() = default ;
    UploadScriptRecordingRequest& operator=(const UploadScriptRecordingRequest &) = default ;
    UploadScriptRecordingRequest& operator=(UploadScriptRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->fileId_ == nullptr && return this->fileName_ == nullptr && return this->instanceId_ == nullptr && return this->scriptId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UploadScriptRecordingRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline UploadScriptRecordingRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadScriptRecordingRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UploadScriptRecordingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline UploadScriptRecordingRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
