// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIXEDNOAREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIXEDNOAREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreateFixedNoAReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFixedNoAReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ANoWhiteGroupId, ANoWhiteGroupId_);
      DARABONBA_PTR_TO_JSON(CustName, custName_);
      DARABONBA_PTR_TO_JSON(CustPhoneNo, custPhoneNo_);
      DARABONBA_PTR_TO_JSON(CustType, custType_);
      DARABONBA_PTR_TO_JSON(DocumentNumber, documentNumber_);
      DARABONBA_PTR_TO_JSON(DocumentType, documentType_);
      DARABONBA_PTR_TO_JSON(FixedLineWorkId, fixedLineWorkId_);
      DARABONBA_PTR_TO_JSON(FixedNoA, fixedNoA_);
      DARABONBA_PTR_TO_JSON(IdCardAlivePhoto, idCardAlivePhoto_);
      DARABONBA_PTR_TO_JSON(IdCardBackPhoto, idCardBackPhoto_);
      DARABONBA_PTR_TO_JSON(IdCardFrontPhoto, idCardFrontPhoto_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFixedNoAReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ANoWhiteGroupId, ANoWhiteGroupId_);
      DARABONBA_PTR_FROM_JSON(CustName, custName_);
      DARABONBA_PTR_FROM_JSON(CustPhoneNo, custPhoneNo_);
      DARABONBA_PTR_FROM_JSON(CustType, custType_);
      DARABONBA_PTR_FROM_JSON(DocumentNumber, documentNumber_);
      DARABONBA_PTR_FROM_JSON(DocumentType, documentType_);
      DARABONBA_PTR_FROM_JSON(FixedLineWorkId, fixedLineWorkId_);
      DARABONBA_PTR_FROM_JSON(FixedNoA, fixedNoA_);
      DARABONBA_PTR_FROM_JSON(IdCardAlivePhoto, idCardAlivePhoto_);
      DARABONBA_PTR_FROM_JSON(IdCardBackPhoto, idCardBackPhoto_);
      DARABONBA_PTR_FROM_JSON(IdCardFrontPhoto, idCardFrontPhoto_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateFixedNoAReportRequest() = default ;
    CreateFixedNoAReportRequest(const CreateFixedNoAReportRequest &) = default ;
    CreateFixedNoAReportRequest(CreateFixedNoAReportRequest &&) = default ;
    CreateFixedNoAReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFixedNoAReportRequest() = default ;
    CreateFixedNoAReportRequest& operator=(const CreateFixedNoAReportRequest &) = default ;
    CreateFixedNoAReportRequest& operator=(CreateFixedNoAReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ANoWhiteGroupId_ == nullptr
        && this->custName_ == nullptr && this->custPhoneNo_ == nullptr && this->custType_ == nullptr && this->documentNumber_ == nullptr && this->documentType_ == nullptr
        && this->fixedLineWorkId_ == nullptr && this->fixedNoA_ == nullptr && this->idCardAlivePhoto_ == nullptr && this->idCardBackPhoto_ == nullptr && this->idCardFrontPhoto_ == nullptr
        && this->ownerId_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // ANoWhiteGroupId Field Functions 
    bool hasANoWhiteGroupId() const { return this->ANoWhiteGroupId_ != nullptr;};
    void deleteANoWhiteGroupId() { this->ANoWhiteGroupId_ = nullptr;};
    inline int64_t getANoWhiteGroupId() const { DARABONBA_PTR_GET_DEFAULT(ANoWhiteGroupId_, 0L) };
    inline CreateFixedNoAReportRequest& setANoWhiteGroupId(int64_t ANoWhiteGroupId) { DARABONBA_PTR_SET_VALUE(ANoWhiteGroupId_, ANoWhiteGroupId) };


    // custName Field Functions 
    bool hasCustName() const { return this->custName_ != nullptr;};
    void deleteCustName() { this->custName_ = nullptr;};
    inline string getCustName() const { DARABONBA_PTR_GET_DEFAULT(custName_, "") };
    inline CreateFixedNoAReportRequest& setCustName(string custName) { DARABONBA_PTR_SET_VALUE(custName_, custName) };


    // custPhoneNo Field Functions 
    bool hasCustPhoneNo() const { return this->custPhoneNo_ != nullptr;};
    void deleteCustPhoneNo() { this->custPhoneNo_ = nullptr;};
    inline string getCustPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(custPhoneNo_, "") };
    inline CreateFixedNoAReportRequest& setCustPhoneNo(string custPhoneNo) { DARABONBA_PTR_SET_VALUE(custPhoneNo_, custPhoneNo) };


    // custType Field Functions 
    bool hasCustType() const { return this->custType_ != nullptr;};
    void deleteCustType() { this->custType_ = nullptr;};
    inline int64_t getCustType() const { DARABONBA_PTR_GET_DEFAULT(custType_, 0L) };
    inline CreateFixedNoAReportRequest& setCustType(int64_t custType) { DARABONBA_PTR_SET_VALUE(custType_, custType) };


    // documentNumber Field Functions 
    bool hasDocumentNumber() const { return this->documentNumber_ != nullptr;};
    void deleteDocumentNumber() { this->documentNumber_ = nullptr;};
    inline string getDocumentNumber() const { DARABONBA_PTR_GET_DEFAULT(documentNumber_, "") };
    inline CreateFixedNoAReportRequest& setDocumentNumber(string documentNumber) { DARABONBA_PTR_SET_VALUE(documentNumber_, documentNumber) };


    // documentType Field Functions 
    bool hasDocumentType() const { return this->documentType_ != nullptr;};
    void deleteDocumentType() { this->documentType_ = nullptr;};
    inline int64_t getDocumentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, 0L) };
    inline CreateFixedNoAReportRequest& setDocumentType(int64_t documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


    // fixedLineWorkId Field Functions 
    bool hasFixedLineWorkId() const { return this->fixedLineWorkId_ != nullptr;};
    void deleteFixedLineWorkId() { this->fixedLineWorkId_ = nullptr;};
    inline string getFixedLineWorkId() const { DARABONBA_PTR_GET_DEFAULT(fixedLineWorkId_, "") };
    inline CreateFixedNoAReportRequest& setFixedLineWorkId(string fixedLineWorkId) { DARABONBA_PTR_SET_VALUE(fixedLineWorkId_, fixedLineWorkId) };


    // fixedNoA Field Functions 
    bool hasFixedNoA() const { return this->fixedNoA_ != nullptr;};
    void deleteFixedNoA() { this->fixedNoA_ = nullptr;};
    inline string getFixedNoA() const { DARABONBA_PTR_GET_DEFAULT(fixedNoA_, "") };
    inline CreateFixedNoAReportRequest& setFixedNoA(string fixedNoA) { DARABONBA_PTR_SET_VALUE(fixedNoA_, fixedNoA) };


    // idCardAlivePhoto Field Functions 
    bool hasIdCardAlivePhoto() const { return this->idCardAlivePhoto_ != nullptr;};
    void deleteIdCardAlivePhoto() { this->idCardAlivePhoto_ = nullptr;};
    inline string getIdCardAlivePhoto() const { DARABONBA_PTR_GET_DEFAULT(idCardAlivePhoto_, "") };
    inline CreateFixedNoAReportRequest& setIdCardAlivePhoto(string idCardAlivePhoto) { DARABONBA_PTR_SET_VALUE(idCardAlivePhoto_, idCardAlivePhoto) };


    // idCardBackPhoto Field Functions 
    bool hasIdCardBackPhoto() const { return this->idCardBackPhoto_ != nullptr;};
    void deleteIdCardBackPhoto() { this->idCardBackPhoto_ = nullptr;};
    inline string getIdCardBackPhoto() const { DARABONBA_PTR_GET_DEFAULT(idCardBackPhoto_, "") };
    inline CreateFixedNoAReportRequest& setIdCardBackPhoto(string idCardBackPhoto) { DARABONBA_PTR_SET_VALUE(idCardBackPhoto_, idCardBackPhoto) };


    // idCardFrontPhoto Field Functions 
    bool hasIdCardFrontPhoto() const { return this->idCardFrontPhoto_ != nullptr;};
    void deleteIdCardFrontPhoto() { this->idCardFrontPhoto_ = nullptr;};
    inline string getIdCardFrontPhoto() const { DARABONBA_PTR_GET_DEFAULT(idCardFrontPhoto_, "") };
    inline CreateFixedNoAReportRequest& setIdCardFrontPhoto(string idCardFrontPhoto) { DARABONBA_PTR_SET_VALUE(idCardFrontPhoto_, idCardFrontPhoto) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateFixedNoAReportRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateFixedNoAReportRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateFixedNoAReportRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateFixedNoAReportRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // ID of the group to which Number A belongs. On the [Qualification Management](https://dyplsnext.console.aliyun.com/qualification) Page, go to the A-number whitelist section of the relevant qualification and click View Details.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ANoWhiteGroupId_ {};
    // Name.
    // 
    // This parameter is required.
    shared_ptr<string> custName_ {};
    // Phone number of the legal representative or agent.  
    // >If this qualification includes a Mobile X number, this field is Required; otherwise, the Review will Fail.
    shared_ptr<string> custPhoneNo_ {};
    // Fixed-line customer type. Valid values:
    // 
    // - 1: Legal representative.
    // 
    // - 2: Agent.
    // 
    // This parameter is required.
    shared_ptr<int64_t> custType_ {};
    // Certificate number.
    // 
    // This parameter is required.
    shared_ptr<string> documentNumber_ {};
    // Certificate type. Enter 1 for ID card.
    // 
    // This parameter is required.
    shared_ptr<int64_t> documentType_ {};
    // Ticket number from the offline service hall when applying for a fixed-line number.
    shared_ptr<string> fixedLineWorkId_ {};
    // Number A (fixed-line number).
    // 
    // This parameter is required.
    shared_ptr<string> fixedNoA_ {};
    // OSS path of the front-facing portrait photo.
    // 
    // This parameter is required.
    shared_ptr<string> idCardAlivePhoto_ {};
    // OSS path of the photo of the back (portrait side) of the ID card.
    shared_ptr<string> idCardBackPhoto_ {};
    // OSS path of the photo of the front (national emblem side) of the ID card.
    shared_ptr<string> idCardFrontPhoto_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Remarks (user-defined business notes).
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
