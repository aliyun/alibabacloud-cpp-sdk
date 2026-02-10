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
    shared_ptr<string> extendMessage_ {};
    Darabonba::Json orderContext_ {};
    shared_ptr<string> orderType_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<int64_t> qualificationId_ {};
    shared_ptr<int64_t> qualificationVersion_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<int64_t> signId_ {};
    shared_ptr<int64_t> signIndustry_ {};
    shared_ptr<string> signName_ {};
    shared_ptr<int64_t> signSource_ {};
    shared_ptr<string> submitter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
