// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSMSSIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSMSSIGNREQUEST_HPP_
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
  class AddSmsSignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSmsSignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignFileList, signFileList_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(SignSource, signSource_);
      DARABONBA_PTR_TO_JSON(SignType, signType_);
    };
    friend void from_json(const Darabonba::Json& j, AddSmsSignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignFileList, signFileList_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(SignSource, signSource_);
      DARABONBA_PTR_FROM_JSON(SignType, signType_);
    };
    AddSmsSignRequest() = default ;
    AddSmsSignRequest(const AddSmsSignRequest &) = default ;
    AddSmsSignRequest(AddSmsSignRequest &&) = default ;
    AddSmsSignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSmsSignRequest() = default ;
    AddSmsSignRequest& operator=(const AddSmsSignRequest &) = default ;
    AddSmsSignRequest& operator=(AddSmsSignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SignFileList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SignFileList& obj) { 
        DARABONBA_PTR_TO_JSON(FileContents, fileContents_);
        DARABONBA_PTR_TO_JSON(FileSuffix, fileSuffix_);
      };
      friend void from_json(const Darabonba::Json& j, SignFileList& obj) { 
        DARABONBA_PTR_FROM_JSON(FileContents, fileContents_);
        DARABONBA_PTR_FROM_JSON(FileSuffix, fileSuffix_);
      };
      SignFileList() = default ;
      SignFileList(const SignFileList &) = default ;
      SignFileList(SignFileList &&) = default ;
      SignFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SignFileList() = default ;
      SignFileList& operator=(const SignFileList &) = default ;
      SignFileList& operator=(SignFileList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileContents_ == nullptr
        && this->fileSuffix_ == nullptr; };
      // fileContents Field Functions 
      bool hasFileContents() const { return this->fileContents_ != nullptr;};
      void deleteFileContents() { this->fileContents_ = nullptr;};
      inline string getFileContents() const { DARABONBA_PTR_GET_DEFAULT(fileContents_, "") };
      inline SignFileList& setFileContents(string fileContents) { DARABONBA_PTR_SET_VALUE(fileContents_, fileContents) };


      // fileSuffix Field Functions 
      bool hasFileSuffix() const { return this->fileSuffix_ != nullptr;};
      void deleteFileSuffix() { this->fileSuffix_ = nullptr;};
      inline string getFileSuffix() const { DARABONBA_PTR_GET_DEFAULT(fileSuffix_, "") };
      inline SignFileList& setFileSuffix(string fileSuffix) { DARABONBA_PTR_SET_VALUE(fileSuffix_, fileSuffix) };


    protected:
      // The Base64-encoded string of the qualification certificate file for the signature. The image size cannot exceed 2 MB. In some scenarios, you need to upload a certificate file when you apply for a signature.
      // 
      // For detailed specifications, see [File upload specifications](https://help.aliyun.com/document_detail/463316.html).
      // 
      // This parameter is required.
      shared_ptr<string> fileContents_ {};
      // The format of the signature certificate file. Multiple images can be uploaded. Currently, JPG, PNG, GIF, and JPEG formats are supported. In some scenarios, you need to upload a certificate file when you apply for a signature.
      // 
      // > If the signature is for third-party use or if you are an individual-certified user whose self-use signature source is an enterprise or public institution name, you also need to upload a certificate file and a power of attorney. For more information, see [Certificate file](https://help.aliyun.com/document_detail/108076.html) and [Power of attorney](https://help.aliyun.com/document_detail/56741.html).
      // 
      // This parameter is required.
      shared_ptr<string> fileSuffix_ {};
    };

    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->signFileList_ == nullptr && this->signName_ == nullptr
        && this->signSource_ == nullptr && this->signType_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddSmsSignRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddSmsSignRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddSmsSignRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddSmsSignRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signFileList Field Functions 
    bool hasSignFileList() const { return this->signFileList_ != nullptr;};
    void deleteSignFileList() { this->signFileList_ = nullptr;};
    inline const vector<AddSmsSignRequest::SignFileList> & getSignFileList() const { DARABONBA_PTR_GET_CONST(signFileList_, vector<AddSmsSignRequest::SignFileList>) };
    inline vector<AddSmsSignRequest::SignFileList> getSignFileList() { DARABONBA_PTR_GET(signFileList_, vector<AddSmsSignRequest::SignFileList>) };
    inline AddSmsSignRequest& setSignFileList(const vector<AddSmsSignRequest::SignFileList> & signFileList) { DARABONBA_PTR_SET_VALUE(signFileList_, signFileList) };
    inline AddSmsSignRequest& setSignFileList(vector<AddSmsSignRequest::SignFileList> && signFileList) { DARABONBA_PTR_SET_RVALUE(signFileList_, signFileList) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline AddSmsSignRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // signSource Field Functions 
    bool hasSignSource() const { return this->signSource_ != nullptr;};
    void deleteSignSource() { this->signSource_ = nullptr;};
    inline int32_t getSignSource() const { DARABONBA_PTR_GET_DEFAULT(signSource_, 0) };
    inline AddSmsSignRequest& setSignSource(int32_t signSource) { DARABONBA_PTR_SET_VALUE(signSource_, signSource) };


    // signType Field Functions 
    bool hasSignType() const { return this->signType_ != nullptr;};
    void deleteSignType() { this->signType_ = nullptr;};
    inline int32_t getSignType() const { DARABONBA_PTR_GET_DEFAULT(signType_, 0) };
    inline AddSmsSignRequest& setSignType(int32_t signType) { DARABONBA_PTR_SET_VALUE(signType_, signType) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    // The description of the SMS signature scenario. The description cannot exceed 200 characters in length.
    // 
    // This is reference information for signature review. Providing a complete application description helps reviewers understand your business scenario and improves review efficiency. Guidelines for filling in:
    // 
    // - You can provide the use cases of a business that has been launched.
    // 
    // - You can provide real-world SMS message examples to reflect your business scenarios.
    // 
    // - You can provide the parameter values passed to variables and describe the business use cases and the reasons for choosing these variable attributes in detail.
    // 
    // - You can provide the website links, registered domain names, or app store download links of your actual business.
    // 
    // - For login scenarios, you can provide a test account and password.
    // 
    // This parameter is required.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The list of signature files.
    // 
    // This parameter is required.
    shared_ptr<vector<AddSmsSignRequest::SignFileList>> signFileList_ {};
    // The signature name. The signature name must comply with the [Signature specifications](~~108076#section-0p8-qn8-mmy~~).
    // 
    // > - Signature names are case-insensitive. For example, [Aliyun Communication] and [aliyun communication] are considered the same name.
    // > - When your verification code signature and general-purpose signature have the same name, the system uses the general-purpose signature to send SMS messages by default.
    // 
    // This parameter is required.
    shared_ptr<string> signName_ {};
    // The source of the signature. Valid values:
    // 
    // -  **0**: Full name or abbreviation of an enterprise or public institution.
    // -  **1**: Full name or abbreviation of a website registered with the Ministry of Industry and Information Technology (MIIT).
    // -  **2**: Full name or abbreviation of an app.
    // -  **3**: Full name or abbreviation of an official account or mini program.
    // -  **4**: Full name or abbreviation of an e-commerce platform store name.
    // -  **5**: Full name or abbreviation of a trademark name.
    // 
    // For detailed descriptions of signature sources, see [Signature source](https://help.aliyun.com/en/sms/user-guide/signature-specifications-1?spm=a2c4g.11186623.0.0.4f9710fder2gR7#section-xup-k46-yi4).
    // 
    // >This API does not support applying for signatures whose signature source is **Test or learning** or **Online trial**. If you need to apply for signatures with these two sources, go to the [Short Message Service (SMS) console](https://dysms.console.aliyun.com/domestic/text/sign/add/qualification) to submit your application.
    // 
    // This parameter is required.
    shared_ptr<int32_t> signSource_ {};
    // The type of the signature.
    // 
    // - **0**: Verification code
    // - **1**: General-purpose
    shared_ptr<int32_t> signType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
