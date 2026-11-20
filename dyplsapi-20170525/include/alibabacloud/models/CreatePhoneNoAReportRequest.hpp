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
        && this->custName_ == nullptr && this->documentNumber_ == nullptr && this->documentType_ == nullptr && this->idCardAlivePhoto_ == nullptr && this->idCardBackPhoto_ == nullptr
        && this->idCardFrontPhoto_ == nullptr && this->ownerId_ == nullptr && this->phoneNoA_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // ANoWhiteGroupId Field Functions 
    bool hasANoWhiteGroupId() const { return this->ANoWhiteGroupId_ != nullptr;};
    void deleteANoWhiteGroupId() { this->ANoWhiteGroupId_ = nullptr;};
    inline int64_t getANoWhiteGroupId() const { DARABONBA_PTR_GET_DEFAULT(ANoWhiteGroupId_, 0L) };
    inline CreatePhoneNoAReportRequest& setANoWhiteGroupId(int64_t ANoWhiteGroupId) { DARABONBA_PTR_SET_VALUE(ANoWhiteGroupId_, ANoWhiteGroupId) };


    // custName Field Functions 
    bool hasCustName() const { return this->custName_ != nullptr;};
    void deleteCustName() { this->custName_ = nullptr;};
    inline string getCustName() const { DARABONBA_PTR_GET_DEFAULT(custName_, "") };
    inline CreatePhoneNoAReportRequest& setCustName(string custName) { DARABONBA_PTR_SET_VALUE(custName_, custName) };


    // documentNumber Field Functions 
    bool hasDocumentNumber() const { return this->documentNumber_ != nullptr;};
    void deleteDocumentNumber() { this->documentNumber_ = nullptr;};
    inline string getDocumentNumber() const { DARABONBA_PTR_GET_DEFAULT(documentNumber_, "") };
    inline CreatePhoneNoAReportRequest& setDocumentNumber(string documentNumber) { DARABONBA_PTR_SET_VALUE(documentNumber_, documentNumber) };


    // documentType Field Functions 
    bool hasDocumentType() const { return this->documentType_ != nullptr;};
    void deleteDocumentType() { this->documentType_ = nullptr;};
    inline int64_t getDocumentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, 0L) };
    inline CreatePhoneNoAReportRequest& setDocumentType(int64_t documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


    // idCardAlivePhoto Field Functions 
    bool hasIdCardAlivePhoto() const { return this->idCardAlivePhoto_ != nullptr;};
    void deleteIdCardAlivePhoto() { this->idCardAlivePhoto_ = nullptr;};
    inline string getIdCardAlivePhoto() const { DARABONBA_PTR_GET_DEFAULT(idCardAlivePhoto_, "") };
    inline CreatePhoneNoAReportRequest& setIdCardAlivePhoto(string idCardAlivePhoto) { DARABONBA_PTR_SET_VALUE(idCardAlivePhoto_, idCardAlivePhoto) };


    // idCardBackPhoto Field Functions 
    bool hasIdCardBackPhoto() const { return this->idCardBackPhoto_ != nullptr;};
    void deleteIdCardBackPhoto() { this->idCardBackPhoto_ = nullptr;};
    inline string getIdCardBackPhoto() const { DARABONBA_PTR_GET_DEFAULT(idCardBackPhoto_, "") };
    inline CreatePhoneNoAReportRequest& setIdCardBackPhoto(string idCardBackPhoto) { DARABONBA_PTR_SET_VALUE(idCardBackPhoto_, idCardBackPhoto) };


    // idCardFrontPhoto Field Functions 
    bool hasIdCardFrontPhoto() const { return this->idCardFrontPhoto_ != nullptr;};
    void deleteIdCardFrontPhoto() { this->idCardFrontPhoto_ = nullptr;};
    inline string getIdCardFrontPhoto() const { DARABONBA_PTR_GET_DEFAULT(idCardFrontPhoto_, "") };
    inline CreatePhoneNoAReportRequest& setIdCardFrontPhoto(string idCardFrontPhoto) { DARABONBA_PTR_SET_VALUE(idCardFrontPhoto_, idCardFrontPhoto) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreatePhoneNoAReportRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNoA Field Functions 
    bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
    void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
    inline string getPhoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
    inline CreatePhoneNoAReportRequest& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreatePhoneNoAReportRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreatePhoneNoAReportRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreatePhoneNoAReportRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // ID of the A-number group. On the [Qualification Management](https://dyplsnext.console.aliyun.com/qualification) page, click View Details in the A-number whitelist section of the relevant qualification.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ANoWhiteGroupId_ {};
    // Name.
    // 
    // This parameter is required.
    shared_ptr<string> custName_ {};
    // Certificate number.
    // 
    // This parameter is required.
    shared_ptr<string> documentNumber_ {};
    // Certificate type. Enter 1 for an ID card.
    // 
    // This parameter is required.
    shared_ptr<int64_t> documentType_ {};
    // OSS path of the front-facing portrait photo.
    // 
    // This parameter is required.
    shared_ptr<string> idCardAlivePhoto_ {};
    // OSS path of the photo of the back side (portrait side) of the ID card.
    shared_ptr<string> idCardBackPhoto_ {};
    // OSS path of the photo of the front side (national emblem side) of the ID card.
    shared_ptr<string> idCardFrontPhoto_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Phone number.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNoA_ {};
    // Remark (business remark added by the user).
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
