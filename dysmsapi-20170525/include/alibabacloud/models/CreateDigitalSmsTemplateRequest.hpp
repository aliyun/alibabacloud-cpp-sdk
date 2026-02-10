// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIGITALSMSTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIGITALSMSTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateDigitalSmsTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDigitalSmsTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(TemplateContents, templateContents_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDigitalSmsTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(TemplateContents, templateContents_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    CreateDigitalSmsTemplateRequest() = default ;
    CreateDigitalSmsTemplateRequest(const CreateDigitalSmsTemplateRequest &) = default ;
    CreateDigitalSmsTemplateRequest(CreateDigitalSmsTemplateRequest &&) = default ;
    CreateDigitalSmsTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDigitalSmsTemplateRequest() = default ;
    CreateDigitalSmsTemplateRequest& operator=(const CreateDigitalSmsTemplateRequest &) = default ;
    CreateDigitalSmsTemplateRequest& operator=(CreateDigitalSmsTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateContents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateContents& obj) { 
        DARABONBA_PTR_TO_JSON(FileContents, fileContents_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(FileSuffix, fileSuffix_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateContents& obj) { 
        DARABONBA_PTR_FROM_JSON(FileContents, fileContents_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(FileSuffix, fileSuffix_);
      };
      TemplateContents() = default ;
      TemplateContents(const TemplateContents &) = default ;
      TemplateContents(TemplateContents &&) = default ;
      TemplateContents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateContents() = default ;
      TemplateContents& operator=(const TemplateContents &) = default ;
      TemplateContents& operator=(TemplateContents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileContents_ == nullptr
        && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->fileSuffix_ == nullptr; };
      // fileContents Field Functions 
      bool hasFileContents() const { return this->fileContents_ != nullptr;};
      void deleteFileContents() { this->fileContents_ = nullptr;};
      inline string getFileContents() const { DARABONBA_PTR_GET_DEFAULT(fileContents_, "") };
      inline TemplateContents& setFileContents(string fileContents) { DARABONBA_PTR_SET_VALUE(fileContents_, fileContents) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline TemplateContents& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int32_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0) };
      inline TemplateContents& setFileSize(int32_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // fileSuffix Field Functions 
      bool hasFileSuffix() const { return this->fileSuffix_ != nullptr;};
      void deleteFileSuffix() { this->fileSuffix_ = nullptr;};
      inline string getFileSuffix() const { DARABONBA_PTR_GET_DEFAULT(fileSuffix_, "") };
      inline TemplateContents& setFileSuffix(string fileSuffix) { DARABONBA_PTR_SET_VALUE(fileSuffix_, fileSuffix) };


    protected:
      shared_ptr<string> fileContents_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<int32_t> fileSize_ {};
      shared_ptr<string> fileSuffix_ {};
    };

    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->signName_ == nullptr && this->templateContents_ == nullptr
        && this->templateName_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDigitalSmsTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateDigitalSmsTemplateRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDigitalSmsTemplateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDigitalSmsTemplateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline CreateDigitalSmsTemplateRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // templateContents Field Functions 
    bool hasTemplateContents() const { return this->templateContents_ != nullptr;};
    void deleteTemplateContents() { this->templateContents_ = nullptr;};
    inline const vector<CreateDigitalSmsTemplateRequest::TemplateContents> & getTemplateContents() const { DARABONBA_PTR_GET_CONST(templateContents_, vector<CreateDigitalSmsTemplateRequest::TemplateContents>) };
    inline vector<CreateDigitalSmsTemplateRequest::TemplateContents> getTemplateContents() { DARABONBA_PTR_GET(templateContents_, vector<CreateDigitalSmsTemplateRequest::TemplateContents>) };
    inline CreateDigitalSmsTemplateRequest& setTemplateContents(const vector<CreateDigitalSmsTemplateRequest::TemplateContents> & templateContents) { DARABONBA_PTR_SET_VALUE(templateContents_, templateContents) };
    inline CreateDigitalSmsTemplateRequest& setTemplateContents(vector<CreateDigitalSmsTemplateRequest::TemplateContents> && templateContents) { DARABONBA_PTR_SET_RVALUE(templateContents_, templateContents) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateDigitalSmsTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> signName_ {};
    // This parameter is required.
    shared_ptr<vector<CreateDigitalSmsTemplateRequest::TemplateContents>> templateContents_ {};
    // This parameter is required.
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
