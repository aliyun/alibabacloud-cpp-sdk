// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIGITALSIGNORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIGITALSIGNORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateDigitalSignOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDigitalSignOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendMessage, extendMessage_);
      DARABONBA_ANY_TO_JSON(OrderContext, orderContext_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_TO_JSON(QualificationVersion, qualificationVersion_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignId, signId_);
      DARABONBA_PTR_TO_JSON(SignIndustry, signIndustry_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(SignSource, signSource_);
      DARABONBA_PTR_TO_JSON(Submitter, submitter_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDigitalSignOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendMessage, extendMessage_);
      DARABONBA_ANY_FROM_JSON(OrderContext, orderContext_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_FROM_JSON(QualificationVersion, qualificationVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignId, signId_);
      DARABONBA_PTR_FROM_JSON(SignIndustry, signIndustry_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(SignSource, signSource_);
      DARABONBA_PTR_FROM_JSON(Submitter, submitter_);
    };
    CreateDigitalSignOrderRequest() = default ;
    CreateDigitalSignOrderRequest(const CreateDigitalSignOrderRequest &) = default ;
    CreateDigitalSignOrderRequest(CreateDigitalSignOrderRequest &&) = default ;
    CreateDigitalSignOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDigitalSignOrderRequest() = default ;
    CreateDigitalSignOrderRequest& operator=(const CreateDigitalSignOrderRequest &) = default ;
    CreateDigitalSignOrderRequest& operator=(CreateDigitalSignOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extendMessage_ == nullptr
        && this->orderContext_ == nullptr && this->orderType_ == nullptr && this->ownerId_ == nullptr && this->qualificationId_ == nullptr && this->qualificationVersion_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->signId_ == nullptr && this->signIndustry_ == nullptr && this->signName_ == nullptr
        && this->signSource_ == nullptr && this->submitter_ == nullptr; };
    // extendMessage Field Functions 
    bool hasExtendMessage() const { return this->extendMessage_ != nullptr;};
    void deleteExtendMessage() { this->extendMessage_ = nullptr;};
    inline string getExtendMessage() const { DARABONBA_PTR_GET_DEFAULT(extendMessage_, "") };
    inline CreateDigitalSignOrderRequest& setExtendMessage(string extendMessage) { DARABONBA_PTR_SET_VALUE(extendMessage_, extendMessage) };


    // orderContext Field Functions 
    bool hasOrderContext() const { return this->orderContext_ != nullptr;};
    void deleteOrderContext() { this->orderContext_ = nullptr;};
    inline     const Darabonba::Json & getOrderContext() const { DARABONBA_GET(orderContext_) };
    Darabonba::Json & getOrderContext() { DARABONBA_GET(orderContext_) };
    inline CreateDigitalSignOrderRequest& setOrderContext(const Darabonba::Json & orderContext) { DARABONBA_SET_VALUE(orderContext_, orderContext) };
    inline CreateDigitalSignOrderRequest& setOrderContext(Darabonba::Json && orderContext) { DARABONBA_SET_RVALUE(orderContext_, orderContext) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline CreateDigitalSignOrderRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDigitalSignOrderRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline int64_t getQualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, 0L) };
    inline CreateDigitalSignOrderRequest& setQualificationId(int64_t qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // qualificationVersion Field Functions 
    bool hasQualificationVersion() const { return this->qualificationVersion_ != nullptr;};
    void deleteQualificationVersion() { this->qualificationVersion_ = nullptr;};
    inline int64_t getQualificationVersion() const { DARABONBA_PTR_GET_DEFAULT(qualificationVersion_, 0L) };
    inline CreateDigitalSignOrderRequest& setQualificationVersion(int64_t qualificationVersion) { DARABONBA_PTR_SET_VALUE(qualificationVersion_, qualificationVersion) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDigitalSignOrderRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDigitalSignOrderRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signId Field Functions 
    bool hasSignId() const { return this->signId_ != nullptr;};
    void deleteSignId() { this->signId_ = nullptr;};
    inline int64_t getSignId() const { DARABONBA_PTR_GET_DEFAULT(signId_, 0L) };
    inline CreateDigitalSignOrderRequest& setSignId(int64_t signId) { DARABONBA_PTR_SET_VALUE(signId_, signId) };


    // signIndustry Field Functions 
    bool hasSignIndustry() const { return this->signIndustry_ != nullptr;};
    void deleteSignIndustry() { this->signIndustry_ = nullptr;};
    inline int64_t getSignIndustry() const { DARABONBA_PTR_GET_DEFAULT(signIndustry_, 0L) };
    inline CreateDigitalSignOrderRequest& setSignIndustry(int64_t signIndustry) { DARABONBA_PTR_SET_VALUE(signIndustry_, signIndustry) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline CreateDigitalSignOrderRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // signSource Field Functions 
    bool hasSignSource() const { return this->signSource_ != nullptr;};
    void deleteSignSource() { this->signSource_ = nullptr;};
    inline int64_t getSignSource() const { DARABONBA_PTR_GET_DEFAULT(signSource_, 0L) };
    inline CreateDigitalSignOrderRequest& setSignSource(int64_t signSource) { DARABONBA_PTR_SET_VALUE(signSource_, signSource) };


    // submitter Field Functions 
    bool hasSubmitter() const { return this->submitter_ != nullptr;};
    void deleteSubmitter() { this->submitter_ = nullptr;};
    inline string getSubmitter() const { DARABONBA_PTR_GET_DEFAULT(submitter_, "") };
    inline CreateDigitalSignOrderRequest& setSubmitter(string submitter) { DARABONBA_PTR_SET_VALUE(submitter_, submitter) };


  protected:
    // Reserved for future use.
    shared_ptr<string> extendMessage_ {};
    // The qualification information. This object is required when you create a signature, or when you update a signature\\"s qualification information.
    // 
    // - qualificationCompanyName: Company name. The name can be up to 150 characters long. It cannot consist of only digits or contain symbols other than the middle dot (·), Chinese brackets (【】), Chinese parentheses (（）), English parentheses (()), and spaces.
    // 
    // - `qualificationOrganizationCode`: The 18-character Unified Social Credit Identifier (USCI). It must be an 18-digit code or a code that consists of 18 uppercase or lowercase letters and digits.
    // 
    // - `qualificationAdminName`: The name of the agent or legal representative. The name must be in Chinese.
    // 
    // - `qualificationAdminIDCard`: The 18-digit ID card number of the agent. Only PRC ID cards are supported.
    // 
    // - `qualificationLegalPersonName`: The name of the legal representative or agent.
    // 
    // - `qualificationLegalPersonIDCard`: The 18-digit ID card number of the legal representative. Only PRC ID cards are supported.
    Darabonba::Json orderContext_ {};
    // The operation to perform on the signature. Valid values:
    // 
    // - `UPDATE_DIGITALSMS_SIGN`: Update a signature.
    // 
    // - `DELETE_DIGITALSMS_SIGN`: Delete a signature.
    // 
    // - `CREATE_DIGITALSMS_SIGN`: Create a signature.
    shared_ptr<string> orderType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the qualification.
    shared_ptr<int64_t> qualificationId_ {};
    // The version of the qualification.
    shared_ptr<int64_t> qualificationVersion_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The unique ID of the signature.
    shared_ptr<int64_t> signId_ {};
    // The industry type. This parameter is required when you create or update a signature. It is optional when you delete a signature. Valid values:
    // 
    // - `0`: General (GENERAL)
    // 
    // - `1`: E-commerce and retail (ECOMMERCE)
    shared_ptr<int64_t> signIndustry_ {};
    // The signature name. This parameter is required for creating, updating, and deleting signatures.
    // 
    // 1. The name must be 2 to 16 characters in length.
    // 
    // 2. The name can contain Chinese characters, letters, and digits.
    // 
    // - Special characters are not allowed, including $, &, %, #, @, !, ^, \\*, (, ), _, +, -, =, {, }, [, ], |, ;, :, \\", ", <, >, ,, ., /, ?, \\~, and .
    // 
    // - The name cannot be only letters.
    // 
    // - The name cannot be only digits. Spaces are not allowed.
    // 
    // - Emojis are not allowed.
    shared_ptr<string> signName_ {};
    // The signature source. This parameter is required when you create or update a signature. It is optional when you delete a signature. Valid values:
    // 
    // - `0`: Enterprises and public institutions
    // 
    // - `2`: App
    shared_ptr<int64_t> signSource_ {};
    // The ID of the user who submits the order.
    shared_ptr<string> submitter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
