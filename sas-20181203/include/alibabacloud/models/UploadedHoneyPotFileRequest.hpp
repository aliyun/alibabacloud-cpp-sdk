// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADEDHONEYPOTFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADEDHONEYPOTFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UploadedHoneyPotFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadedHoneyPotFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TemplateExtra, templateExtra_);
    };
    friend void from_json(const Darabonba::Json& j, UploadedHoneyPotFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TemplateExtra, templateExtra_);
    };
    UploadedHoneyPotFileRequest() = default ;
    UploadedHoneyPotFileRequest(const UploadedHoneyPotFileRequest &) = default ;
    UploadedHoneyPotFileRequest(UploadedHoneyPotFileRequest &&) = default ;
    UploadedHoneyPotFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadedHoneyPotFileRequest() = default ;
    UploadedHoneyPotFileRequest& operator=(const UploadedHoneyPotFileRequest &) = default ;
    UploadedHoneyPotFileRequest& operator=(UploadedHoneyPotFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileKey_ == nullptr
        && return this->fileName_ == nullptr && return this->fileType_ == nullptr && return this->honeypotImageName_ == nullptr && return this->lang_ == nullptr && return this->nodeId_ == nullptr
        && return this->templateExtra_ == nullptr; };
    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline UploadedHoneyPotFileRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadedHoneyPotFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline UploadedHoneyPotFileRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // honeypotImageName Field Functions 
    bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
    void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
    inline string honeypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
    inline UploadedHoneyPotFileRequest& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UploadedHoneyPotFileRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UploadedHoneyPotFileRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // templateExtra Field Functions 
    bool hasTemplateExtra() const { return this->templateExtra_ != nullptr;};
    void deleteTemplateExtra() { this->templateExtra_ = nullptr;};
    inline string templateExtra() const { DARABONBA_PTR_GET_DEFAULT(templateExtra_, "") };
    inline UploadedHoneyPotFileRequest& setTemplateExtra(string templateExtra) { DARABONBA_PTR_SET_VALUE(templateExtra_, templateExtra) };


  protected:
    // The file key that you use to upload the file.
    // 
    // >  The key is in the format of HONEYPOT_FILE/{Timestamp}_{Custom file name}.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileKey_ = nullptr;
    // The name of the file that you want to upload.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // The file type.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileType_ = nullptr;
    // The name of the honeypot image.
    // 
    // This parameter is required.
    std::shared_ptr<string> honeypotImageName_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the management node to which the honeypot belongs.
    // 
    // >  You can call the [ListHoneypotNode](~~ListHoneypotNode~~) operation to obtain the IDs of management nodes. operation to query the management node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The prompt template that corresponds to the file.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateExtra_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
