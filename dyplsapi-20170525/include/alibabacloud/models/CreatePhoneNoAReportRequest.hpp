// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPHONENOAREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPHONENOAREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePhoneNoAReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePhoneNoAReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ANoWhiteGroupId, ANoWhiteGroupId_);
      DARABONBA_PTR_TO_JSON(CustName, custName_);
      DARABONBA_PTR_TO_JSON(DocumentNumber, documentNumber_);
      DARABONBA_PTR_TO_JSON(DocumentType, documentType_);
      DARABONBA_PTR_TO_JSON(IdCardAlivePhoto, idCardAlivePhoto_);
      DARABONBA_PTR_TO_JSON(IdCardBackPhoto, idCardBackPhoto_);
      DARABONBA_PTR_TO_JSON(IdCardFrontPhoto, idCardFrontPhoto_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePhoneNoAReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ANoWhiteGroupId, ANoWhiteGroupId_);
      DARABONBA_PTR_FROM_JSON(CustName, custName_);
      DARABONBA_PTR_FROM_JSON(DocumentNumber, documentNumber_);
      DARABONBA_PTR_FROM_JSON(DocumentType, documentType_);
      DARABONBA_PTR_FROM_JSON(IdCardAlivePhoto, idCardAlivePhoto_);
      DARABONBA_PTR_FROM_JSON(IdCardBackPhoto, idCardBackPhoto_);
      DARABONBA_PTR_FROM_JSON(IdCardFrontPhoto, idCardFrontPhoto_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreatePhoneNoAReportRequest() = default ;
    CreatePhoneNoAReportRequest(const CreatePhoneNoAReportRequest &) = default ;
    CreatePhoneNoAReportRequest(CreatePhoneNoAReportRequest &&) = default ;
    CreatePhoneNoAReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePhoneNoAReportRequest() = default ;
    CreatePhoneNoAReportRequest& operator=(const CreatePhoneNoAReportRequest &) = default ;
    CreatePhoneNoAReportRequest& operator=(CreatePhoneNoAReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ANoWhiteGroupId_ == nullptr
        && return this->custName_ == nullptr && return this->documentNumber_ == nullptr && return this->documentType_ == nullptr && return this->idCardAlivePhoto_ == nullptr && return this->idCardBackPhoto_ == nullptr
        && return this->idCardFrontPhoto_ == nullptr && return this->ownerId_ == nullptr && return this->phoneNoA_ == nullptr && return this->remark_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr; };
    // ANoWhiteGroupId Field Functions 
    bool hasANoWhiteGroupId() const { return this->ANoWhiteGroupId_ != nullptr;};
    void deleteANoWhiteGroupId() { this->ANoWhiteGroupId_ = nullptr;};
    inline int64_t ANoWhiteGroupId() const { DARABONBA_PTR_GET_DEFAULT(ANoWhiteGroupId_, 0L) };
    inline CreatePhoneNoAReportRequest& setANoWhiteGroupId(int64_t ANoWhiteGroupId) { DARABONBA_PTR_SET_VALUE(ANoWhiteGroupId_, ANoWhiteGroupId) };


    // custName Field Functions 
    bool hasCustName() const { return this->custName_ != nullptr;};
    void deleteCustName() { this->custName_ = nullptr;};
    inline string custName() const { DARABONBA_PTR_GET_DEFAULT(custName_, "") };
    inline CreatePhoneNoAReportRequest& setCustName(string custName) { DARABONBA_PTR_SET_VALUE(custName_, custName) };


    // documentNumber Field Functions 
    bool hasDocumentNumber() const { return this->documentNumber_ != nullptr;};
    void deleteDocumentNumber() { this->documentNumber_ = nullptr;};
    inline string documentNumber() const { DARABONBA_PTR_GET_DEFAULT(documentNumber_, "") };
    inline CreatePhoneNoAReportRequest& setDocumentNumber(string documentNumber) { DARABONBA_PTR_SET_VALUE(documentNumber_, documentNumber) };


    // documentType Field Functions 
    bool hasDocumentType() const { return this->documentType_ != nullptr;};
    void deleteDocumentType() { this->documentType_ = nullptr;};
    inline int64_t documentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, 0L) };
    inline CreatePhoneNoAReportRequest& setDocumentType(int64_t documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


    // idCardAlivePhoto Field Functions 
    bool hasIdCardAlivePhoto() const { return this->idCardAlivePhoto_ != nullptr;};
    void deleteIdCardAlivePhoto() { this->idCardAlivePhoto_ = nullptr;};
    inline string idCardAlivePhoto() const { DARABONBA_PTR_GET_DEFAULT(idCardAlivePhoto_, "") };
    inline CreatePhoneNoAReportRequest& setIdCardAlivePhoto(string idCardAlivePhoto) { DARABONBA_PTR_SET_VALUE(idCardAlivePhoto_, idCardAlivePhoto) };


    // idCardBackPhoto Field Functions 
    bool hasIdCardBackPhoto() const { return this->idCardBackPhoto_ != nullptr;};
    void deleteIdCardBackPhoto() { this->idCardBackPhoto_ = nullptr;};
    inline string idCardBackPhoto() const { DARABONBA_PTR_GET_DEFAULT(idCardBackPhoto_, "") };
    inline CreatePhoneNoAReportRequest& setIdCardBackPhoto(string idCardBackPhoto) { DARABONBA_PTR_SET_VALUE(idCardBackPhoto_, idCardBackPhoto) };


    // idCardFrontPhoto Field Functions 
    bool hasIdCardFrontPhoto() const { return this->idCardFrontPhoto_ != nullptr;};
    void deleteIdCardFrontPhoto() { this->idCardFrontPhoto_ = nullptr;};
    inline string idCardFrontPhoto() const { DARABONBA_PTR_GET_DEFAULT(idCardFrontPhoto_, "") };
    inline CreatePhoneNoAReportRequest& setIdCardFrontPhoto(string idCardFrontPhoto) { DARABONBA_PTR_SET_VALUE(idCardFrontPhoto_, idCardFrontPhoto) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreatePhoneNoAReportRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNoA Field Functions 
    bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
    void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
    inline string phoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
    inline CreatePhoneNoAReportRequest& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreatePhoneNoAReportRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreatePhoneNoAReportRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreatePhoneNoAReportRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // 所属a号码组id
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ANoWhiteGroupId_ = nullptr;
    // 姓名
    // 
    // This parameter is required.
    std::shared_ptr<string> custName_ = nullptr;
    // 证件号码
    // 
    // This parameter is required.
    std::shared_ptr<string> documentNumber_ = nullptr;
    // 证件类型 填写1表示身份证
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> documentType_ = nullptr;
    // 半身照oss路径地址
    // 
    // This parameter is required.
    std::shared_ptr<string> idCardAlivePhoto_ = nullptr;
    // 身份证反面照片oss路径地址
    std::shared_ptr<string> idCardBackPhoto_ = nullptr;
    // 身份证正面照片oss路径地址
    std::shared_ptr<string> idCardFrontPhoto_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // 手机号
    // 
    // This parameter is required.
    std::shared_ptr<string> phoneNoA_ = nullptr;
    // 备注（客户自己的业务备注，可编辑）
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
