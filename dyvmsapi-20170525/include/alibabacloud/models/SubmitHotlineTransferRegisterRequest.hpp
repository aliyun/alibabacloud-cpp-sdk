// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHOTLINETRANSFERREGISTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHOTLINETRANSFERREGISTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class SubmitHotlineTransferRegisterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHotlineTransferRegisterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Agreement, agreement_);
      DARABONBA_PTR_TO_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_TO_JSON(OperatorIdentityCard, operatorIdentityCard_);
      DARABONBA_PTR_TO_JSON(OperatorMail, operatorMail_);
      DARABONBA_PTR_TO_JSON(OperatorMailVerifyCode, operatorMailVerifyCode_);
      DARABONBA_PTR_TO_JSON(OperatorMobile, operatorMobile_);
      DARABONBA_PTR_TO_JSON(OperatorMobileVerifyCode, operatorMobileVerifyCode_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransferPhoneNumberInfos, transferPhoneNumberInfos_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHotlineTransferRegisterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Agreement, agreement_);
      DARABONBA_PTR_FROM_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_FROM_JSON(OperatorIdentityCard, operatorIdentityCard_);
      DARABONBA_PTR_FROM_JSON(OperatorMail, operatorMail_);
      DARABONBA_PTR_FROM_JSON(OperatorMailVerifyCode, operatorMailVerifyCode_);
      DARABONBA_PTR_FROM_JSON(OperatorMobile, operatorMobile_);
      DARABONBA_PTR_FROM_JSON(OperatorMobileVerifyCode, operatorMobileVerifyCode_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransferPhoneNumberInfos, transferPhoneNumberInfos_);
    };
    SubmitHotlineTransferRegisterRequest() = default ;
    SubmitHotlineTransferRegisterRequest(const SubmitHotlineTransferRegisterRequest &) = default ;
    SubmitHotlineTransferRegisterRequest(SubmitHotlineTransferRegisterRequest &&) = default ;
    SubmitHotlineTransferRegisterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHotlineTransferRegisterRequest() = default ;
    SubmitHotlineTransferRegisterRequest& operator=(const SubmitHotlineTransferRegisterRequest &) = default ;
    SubmitHotlineTransferRegisterRequest& operator=(SubmitHotlineTransferRegisterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransferPhoneNumberInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransferPhoneNumberInfos& obj) { 
        DARABONBA_PTR_TO_JSON(IdentityCard, identityCard_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(PhoneNumberOwnerName, phoneNumberOwnerName_);
      };
      friend void from_json(const Darabonba::Json& j, TransferPhoneNumberInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(IdentityCard, identityCard_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(PhoneNumberOwnerName, phoneNumberOwnerName_);
      };
      TransferPhoneNumberInfos() = default ;
      TransferPhoneNumberInfos(const TransferPhoneNumberInfos &) = default ;
      TransferPhoneNumberInfos(TransferPhoneNumberInfos &&) = default ;
      TransferPhoneNumberInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransferPhoneNumberInfos() = default ;
      TransferPhoneNumberInfos& operator=(const TransferPhoneNumberInfos &) = default ;
      TransferPhoneNumberInfos& operator=(TransferPhoneNumberInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->identityCard_ == nullptr
        && this->phoneNumber_ == nullptr && this->phoneNumberOwnerName_ == nullptr; };
      // identityCard Field Functions 
      bool hasIdentityCard() const { return this->identityCard_ != nullptr;};
      void deleteIdentityCard() { this->identityCard_ = nullptr;};
      inline string getIdentityCard() const { DARABONBA_PTR_GET_DEFAULT(identityCard_, "") };
      inline TransferPhoneNumberInfos& setIdentityCard(string identityCard) { DARABONBA_PTR_SET_VALUE(identityCard_, identityCard) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline TransferPhoneNumberInfos& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // phoneNumberOwnerName Field Functions 
      bool hasPhoneNumberOwnerName() const { return this->phoneNumberOwnerName_ != nullptr;};
      void deletePhoneNumberOwnerName() { this->phoneNumberOwnerName_ = nullptr;};
      inline string getPhoneNumberOwnerName() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberOwnerName_, "") };
      inline TransferPhoneNumberInfos& setPhoneNumberOwnerName(string phoneNumberOwnerName) { DARABONBA_PTR_SET_VALUE(phoneNumberOwnerName_, phoneNumberOwnerName) };


    protected:
      // The ID card number of the number owner.
      // 
      // This parameter is required.
      shared_ptr<string> identityCard_ {};
      // The China 400 number that you want to submit for registration.
      // 
      // This parameter is required.
      shared_ptr<string> phoneNumber_ {};
      // The real name or company name of the number owner.
      // 
      // This parameter is required.
      shared_ptr<string> phoneNumberOwnerName_ {};
    };

    virtual bool empty() const override { return this->agreement_ == nullptr
        && this->hotlineNumber_ == nullptr && this->operatorIdentityCard_ == nullptr && this->operatorMail_ == nullptr && this->operatorMailVerifyCode_ == nullptr && this->operatorMobile_ == nullptr
        && this->operatorMobileVerifyCode_ == nullptr && this->operatorName_ == nullptr && this->ownerId_ == nullptr && this->qualificationId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->transferPhoneNumberInfos_ == nullptr; };
    // agreement Field Functions 
    bool hasAgreement() const { return this->agreement_ != nullptr;};
    void deleteAgreement() { this->agreement_ = nullptr;};
    inline string getAgreement() const { DARABONBA_PTR_GET_DEFAULT(agreement_, "") };
    inline SubmitHotlineTransferRegisterRequest& setAgreement(string agreement) { DARABONBA_PTR_SET_VALUE(agreement_, agreement) };


    // hotlineNumber Field Functions 
    bool hasHotlineNumber() const { return this->hotlineNumber_ != nullptr;};
    void deleteHotlineNumber() { this->hotlineNumber_ = nullptr;};
    inline string getHotlineNumber() const { DARABONBA_PTR_GET_DEFAULT(hotlineNumber_, "") };
    inline SubmitHotlineTransferRegisterRequest& setHotlineNumber(string hotlineNumber) { DARABONBA_PTR_SET_VALUE(hotlineNumber_, hotlineNumber) };


    // operatorIdentityCard Field Functions 
    bool hasOperatorIdentityCard() const { return this->operatorIdentityCard_ != nullptr;};
    void deleteOperatorIdentityCard() { this->operatorIdentityCard_ = nullptr;};
    inline string getOperatorIdentityCard() const { DARABONBA_PTR_GET_DEFAULT(operatorIdentityCard_, "") };
    inline SubmitHotlineTransferRegisterRequest& setOperatorIdentityCard(string operatorIdentityCard) { DARABONBA_PTR_SET_VALUE(operatorIdentityCard_, operatorIdentityCard) };


    // operatorMail Field Functions 
    bool hasOperatorMail() const { return this->operatorMail_ != nullptr;};
    void deleteOperatorMail() { this->operatorMail_ = nullptr;};
    inline string getOperatorMail() const { DARABONBA_PTR_GET_DEFAULT(operatorMail_, "") };
    inline SubmitHotlineTransferRegisterRequest& setOperatorMail(string operatorMail) { DARABONBA_PTR_SET_VALUE(operatorMail_, operatorMail) };


    // operatorMailVerifyCode Field Functions 
    bool hasOperatorMailVerifyCode() const { return this->operatorMailVerifyCode_ != nullptr;};
    void deleteOperatorMailVerifyCode() { this->operatorMailVerifyCode_ = nullptr;};
    inline string getOperatorMailVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(operatorMailVerifyCode_, "") };
    inline SubmitHotlineTransferRegisterRequest& setOperatorMailVerifyCode(string operatorMailVerifyCode) { DARABONBA_PTR_SET_VALUE(operatorMailVerifyCode_, operatorMailVerifyCode) };


    // operatorMobile Field Functions 
    bool hasOperatorMobile() const { return this->operatorMobile_ != nullptr;};
    void deleteOperatorMobile() { this->operatorMobile_ = nullptr;};
    inline string getOperatorMobile() const { DARABONBA_PTR_GET_DEFAULT(operatorMobile_, "") };
    inline SubmitHotlineTransferRegisterRequest& setOperatorMobile(string operatorMobile) { DARABONBA_PTR_SET_VALUE(operatorMobile_, operatorMobile) };


    // operatorMobileVerifyCode Field Functions 
    bool hasOperatorMobileVerifyCode() const { return this->operatorMobileVerifyCode_ != nullptr;};
    void deleteOperatorMobileVerifyCode() { this->operatorMobileVerifyCode_ = nullptr;};
    inline string getOperatorMobileVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(operatorMobileVerifyCode_, "") };
    inline SubmitHotlineTransferRegisterRequest& setOperatorMobileVerifyCode(string operatorMobileVerifyCode) { DARABONBA_PTR_SET_VALUE(operatorMobileVerifyCode_, operatorMobileVerifyCode) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline SubmitHotlineTransferRegisterRequest& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SubmitHotlineTransferRegisterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline string getQualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, "") };
    inline SubmitHotlineTransferRegisterRequest& setQualificationId(string qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitHotlineTransferRegisterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SubmitHotlineTransferRegisterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transferPhoneNumberInfos Field Functions 
    bool hasTransferPhoneNumberInfos() const { return this->transferPhoneNumberInfos_ != nullptr;};
    void deleteTransferPhoneNumberInfos() { this->transferPhoneNumberInfos_ = nullptr;};
    inline const vector<SubmitHotlineTransferRegisterRequest::TransferPhoneNumberInfos> & getTransferPhoneNumberInfos() const { DARABONBA_PTR_GET_CONST(transferPhoneNumberInfos_, vector<SubmitHotlineTransferRegisterRequest::TransferPhoneNumberInfos>) };
    inline vector<SubmitHotlineTransferRegisterRequest::TransferPhoneNumberInfos> getTransferPhoneNumberInfos() { DARABONBA_PTR_GET(transferPhoneNumberInfos_, vector<SubmitHotlineTransferRegisterRequest::TransferPhoneNumberInfos>) };
    inline SubmitHotlineTransferRegisterRequest& setTransferPhoneNumberInfos(const vector<SubmitHotlineTransferRegisterRequest::TransferPhoneNumberInfos> & transferPhoneNumberInfos) { DARABONBA_PTR_SET_VALUE(transferPhoneNumberInfos_, transferPhoneNumberInfos) };
    inline SubmitHotlineTransferRegisterRequest& setTransferPhoneNumberInfos(vector<SubmitHotlineTransferRegisterRequest::TransferPhoneNumberInfos> && transferPhoneNumberInfos) { DARABONBA_PTR_SET_RVALUE(transferPhoneNumberInfos_, transferPhoneNumberInfos) };


  protected:
    // The authenticity of the commitment. Valid values:
    // 
    // *   **true**: The commitment is authentic.
    // *   **false**: The commitment is not authentic.
    // 
    // This parameter is required.
    shared_ptr<string> agreement_ {};
    // The China 400 number.
    // 
    // This parameter is required.
    shared_ptr<string> hotlineNumber_ {};
    // The ID card number of the handler.
    // 
    // This parameter is required.
    shared_ptr<string> operatorIdentityCard_ {};
    // The email address of the handler.
    // 
    // This parameter is required.
    shared_ptr<string> operatorMail_ {};
    // The verification code that is received by the mailbox of the handler.
    shared_ptr<string> operatorMailVerifyCode_ {};
    // The mobile phone number of the handler.
    // 
    // This parameter is required.
    shared_ptr<string> operatorMobile_ {};
    // The verification code that is received by the mobile phone of the handler.
    // 
    // This parameter is required.
    shared_ptr<string> operatorMobileVerifyCode_ {};
    // The name of the handler.
    // 
    // This parameter is required.
    shared_ptr<string> operatorName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The qualification ID. You can call the [GetHotlineQualificationByOrder](https://help.aliyun.com/document_detail/393548.html) operation to obtain the qualification ID.
    // 
    // This parameter is required.
    shared_ptr<string> qualificationId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The registration information about the China 400 number.
    // 
    // This parameter is required.
    shared_ptr<vector<SubmitHotlineTransferRegisterRequest::TransferPhoneNumberInfos>> transferPhoneNumberInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
