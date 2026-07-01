// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSMSSIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSMSSIGNREQUEST_HPP_
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
  class ModifySmsSignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySmsSignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignFileList, signFileList_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(SignSource, signSource_);
      DARABONBA_PTR_TO_JSON(SignType, signType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySmsSignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignFileList, signFileList_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(SignSource, signSource_);
      DARABONBA_PTR_FROM_JSON(SignType, signType_);
    };
    ModifySmsSignRequest() = default ;
    ModifySmsSignRequest(const ModifySmsSignRequest &) = default ;
    ModifySmsSignRequest(ModifySmsSignRequest &&) = default ;
    ModifySmsSignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySmsSignRequest() = default ;
    ModifySmsSignRequest& operator=(const ModifySmsSignRequest &) = default ;
    ModifySmsSignRequest& operator=(ModifySmsSignRequest &&) = default ;
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
      // 签名的纸质证明文件经base64编码后的字符串。图片不超过2 MB。
      // 
      // 个别场景下，申请签名需要上传证明文件。详细说明，请参见[短信签名规范](https://help.aliyun.com/document_detail/108076.html)。
      // 
      // This parameter is required.
      shared_ptr<string> fileContents_ {};
      // 签名的证明文件格式，支持上传多张图片。当前支持JPG、PNG、GIF或JPEG格式的图片。
      // 
      // 个别场景下，申请签名需要上传证明文件。详细说明，请参见[短信签名规范](https://help.aliyun.com/document_detail/108076.html)。
      // > 如果签名用途为他用或个人认证用户的自用签名来源为企事业单位名时，还需上传证明文件和委托授权书，详情请参见[证明文件](https://help.aliyun.com/document_detail/108076.html)和[授权委托书](https://help.aliyun.com/document_detail/56741.html)。
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
    inline ModifySmsSignRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModifySmsSignRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySmsSignRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySmsSignRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signFileList Field Functions 
    bool hasSignFileList() const { return this->signFileList_ != nullptr;};
    void deleteSignFileList() { this->signFileList_ = nullptr;};
    inline const vector<ModifySmsSignRequest::SignFileList> & getSignFileList() const { DARABONBA_PTR_GET_CONST(signFileList_, vector<ModifySmsSignRequest::SignFileList>) };
    inline vector<ModifySmsSignRequest::SignFileList> getSignFileList() { DARABONBA_PTR_GET(signFileList_, vector<ModifySmsSignRequest::SignFileList>) };
    inline ModifySmsSignRequest& setSignFileList(const vector<ModifySmsSignRequest::SignFileList> & signFileList) { DARABONBA_PTR_SET_VALUE(signFileList_, signFileList) };
    inline ModifySmsSignRequest& setSignFileList(vector<ModifySmsSignRequest::SignFileList> && signFileList) { DARABONBA_PTR_SET_RVALUE(signFileList_, signFileList) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline ModifySmsSignRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // signSource Field Functions 
    bool hasSignSource() const { return this->signSource_ != nullptr;};
    void deleteSignSource() { this->signSource_ = nullptr;};
    inline int32_t getSignSource() const { DARABONBA_PTR_GET_DEFAULT(signSource_, 0) };
    inline ModifySmsSignRequest& setSignSource(int32_t signSource) { DARABONBA_PTR_SET_VALUE(signSource_, signSource) };


    // signType Field Functions 
    bool hasSignType() const { return this->signType_ != nullptr;};
    void deleteSignType() { this->signType_ = nullptr;};
    inline int32_t getSignType() const { DARABONBA_PTR_GET_DEFAULT(signType_, 0) };
    inline ModifySmsSignRequest& setSignType(int32_t signType) { DARABONBA_PTR_SET_VALUE(signType_, signType) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    // The description of the SMS signature application. The description cannot exceed 200 characters in length.
    // 
    // The description is used as a reference for signature review. A complete description helps reviewers understand your business scenario and improves review efficiency. Guidelines:
    // 
    // - Provide the use case of a service that is already online.
    // - Provide an SMS example from a real scenario to illustrate your business scenario.
    // - Provide the values passed for variables, and describe the business scenario in detail and the reason for choosing the variable attributes.
    // - Provide the website URL of the actual service, a filed domain name, or an app store download link.
    // - For logon scenarios, provide a test account and password.
    // 
    // This parameter is required.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The list of signature files.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifySmsSignRequest::SignFileList>> signFileList_ {};
    // The signature name.
    // 
    // > You can modify a signature that has been approved, but you cannot change its name. The modified signature must be reviewed and approved before it can be used. The original signature cannot be used until the review is complete.
    // 
    // This parameter is required.
    shared_ptr<string> signName_ {};
    // The signature source. Valid values:
    // 
    // - **0**: full name or abbreviation of an enterprise or public institution.
    // - **1**: full name or abbreviation of a website filed with the Ministry of Industry and Information Technology (MIIT).
    // - **2**: full name or abbreviation of an app.
    // - **3**: full name or abbreviation of an official account or mini program.
    // - **4**: full name or abbreviation of a store on an e-commerce platform.
    // - **5**: full name or abbreviation of a trademark.
    // 
    // This parameter is required.
    shared_ptr<int32_t> signSource_ {};
    // The signature type. Valid values:
    // 
    // - **0**: verification code.
    // 
    // - **1**: general.
    shared_ptr<int32_t> signType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
