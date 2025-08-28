// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHOTLINETRANSFERREGISTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHOTLINETRANSFERREGISTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos.hpp>
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
    virtual bool empty() const override { this->agreement_ != nullptr
        && this->hotlineNumber_ != nullptr && this->operatorIdentityCard_ != nullptr && this->operatorMail_ != nullptr && this->operatorMailVerifyCode_ != nullptr && this->operatorMobile_ != nullptr
        && this->operatorMobileVerifyCode_ != nullptr && this->operatorName_ != nullptr && this->ownerId_ != nullptr && this->qualificationId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->transferPhoneNumberInfos_ != nullptr; };
    // agreement Field Functions 
    bool hasAgreement() const { return this->agreement_ != nullptr;};
    void deleteAgreement() { this->agreement_ = nullptr;};
    inline string agreement() const { DARABONBA_PTR_GET_DEFAULT(agreement_, "") };
    inline SubmitHotlineTransferRegisterRequest& setAgreement(string agreement) { DARABONBA_PTR_SET_VALUE(agreement_, agreement) };


    // hotlineNumber Field Functions 
    bool hasHotlineNumber() const { return this->hotlineNumber_ != nullptr;};
    void deleteHotlineNumber() { this->hotlineNumber_ = nullptr;};
    inline string hotlineNumber() const { DARABONBA_PTR_GET_DEFAULT(hotlineNumber_, "") };
    inline SubmitHotlineTransferRegisterRequest& setHotlineNumber(string hotlineNumber) { DARABONBA_PTR_SET_VALUE(hotlineNumber_, hotlineNumber) };


    // operatorIdentityCard Field Functions 
    bool hasOperatorIdentityCard() const { return this->operatorIdentityCard_ != nullptr;};
    void deleteOperatorIdentityCard() { this->operatorIdentityCard_ = nullptr;};
    inline string operatorIdentityCard() const { DARABONBA_PTR_GET_DEFAULT(operatorIdentityCard_, "") };
    inline SubmitHotlineTransferRegisterRequest& setOperatorIdentityCard(string operatorIdentityCard) { DARABONBA_PTR_SET_VALUE(operatorIdentityCard_, operatorIdentityCard) };


    // operatorMail Field Functions 
    bool hasOperatorMail() const { return this->operatorMail_ != nullptr;};
    void deleteOperatorMail() { this->operatorMail_ = nullptr;};
    inline string operatorMail() const { DARABONBA_PTR_GET_DEFAULT(operatorMail_, "") };
    inline SubmitHotlineTransferRegisterRequest& setOperatorMail(string operatorMail) { DARABONBA_PTR_SET_VALUE(operatorMail_, operatorMail) };


    // operatorMailVerifyCode Field Functions 
    bool hasOperatorMailVerifyCode() const { return this->operatorMailVerifyCode_ != nullptr;};
    void deleteOperatorMailVerifyCode() { this->operatorMailVerifyCode_ = nullptr;};
    inline string operatorMailVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(operatorMailVerifyCode_, "") };
    inline SubmitHotlineTransferRegisterRequest& setOperatorMailVerifyCode(string operatorMailVerifyCode) { DARABONBA_PTR_SET_VALUE(operatorMailVerifyCode_, operatorMailVerifyCode) };


    // operatorMobile Field Functions 
    bool hasOperatorMobile() const { return this->operatorMobile_ != nullptr;};
    void deleteOperatorMobile() { this->operatorMobile_ = nullptr;};
    inline string operatorMobile() const { DARABONBA_PTR_GET_DEFAULT(operatorMobile_, "") };
    inline SubmitHotlineTransferRegisterRequest& setOperatorMobile(string operatorMobile) { DARABONBA_PTR_SET_VALUE(operatorMobile_, operatorMobile) };


    // operatorMobileVerifyCode Field Functions 
    bool hasOperatorMobileVerifyCode() const { return this->operatorMobileVerifyCode_ != nullptr;};
    void deleteOperatorMobileVerifyCode() { this->operatorMobileVerifyCode_ = nullptr;};
    inline string operatorMobileVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(operatorMobileVerifyCode_, "") };
    inline SubmitHotlineTransferRegisterRequest& setOperatorMobileVerifyCode(string operatorMobileVerifyCode) { DARABONBA_PTR_SET_VALUE(operatorMobileVerifyCode_, operatorMobileVerifyCode) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline SubmitHotlineTransferRegisterRequest& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SubmitHotlineTransferRegisterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline string qualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, "") };
    inline SubmitHotlineTransferRegisterRequest& setQualificationId(string qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitHotlineTransferRegisterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SubmitHotlineTransferRegisterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transferPhoneNumberInfos Field Functions 
    bool hasTransferPhoneNumberInfos() const { return this->transferPhoneNumberInfos_ != nullptr;};
    void deleteTransferPhoneNumberInfos() { this->transferPhoneNumberInfos_ = nullptr;};
    inline const vector<SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos> & transferPhoneNumberInfos() const { DARABONBA_PTR_GET_CONST(transferPhoneNumberInfos_, vector<SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos>) };
    inline vector<SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos> transferPhoneNumberInfos() { DARABONBA_PTR_GET(transferPhoneNumberInfos_, vector<SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos>) };
    inline SubmitHotlineTransferRegisterRequest& setTransferPhoneNumberInfos(const vector<SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos> & transferPhoneNumberInfos) { DARABONBA_PTR_SET_VALUE(transferPhoneNumberInfos_, transferPhoneNumberInfos) };
    inline SubmitHotlineTransferRegisterRequest& setTransferPhoneNumberInfos(vector<SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos> && transferPhoneNumberInfos) { DARABONBA_PTR_SET_RVALUE(transferPhoneNumberInfos_, transferPhoneNumberInfos) };


  protected:
    // The authenticity of the commitment. Valid values:
    // 
    // *   **true**: The commitment is authentic.
    // *   **false**: The commitment is not authentic.
    // 
    // This parameter is required.
    std::shared_ptr<string> agreement_ = nullptr;
    // The China 400 number.
    // 
    // This parameter is required.
    std::shared_ptr<string> hotlineNumber_ = nullptr;
    // The ID card number of the handler.
    // 
    // This parameter is required.
    std::shared_ptr<string> operatorIdentityCard_ = nullptr;
    // The email address of the handler.
    // 
    // This parameter is required.
    std::shared_ptr<string> operatorMail_ = nullptr;
    // The verification code that is received by the mailbox of the handler.
    std::shared_ptr<string> operatorMailVerifyCode_ = nullptr;
    // The mobile phone number of the handler.
    // 
    // This parameter is required.
    std::shared_ptr<string> operatorMobile_ = nullptr;
    // The verification code that is received by the mobile phone of the handler.
    // 
    // This parameter is required.
    std::shared_ptr<string> operatorMobileVerifyCode_ = nullptr;
    // The name of the handler.
    // 
    // This parameter is required.
    std::shared_ptr<string> operatorName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The qualification ID. You can call the [GetHotlineQualificationByOrder](https://help.aliyun.com/document_detail/393548.html) operation to obtain the qualification ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> qualificationId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The registration information about the China 400 number.
    // 
    // This parameter is required.
    std::shared_ptr<vector<SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos>> transferPhoneNumberInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
