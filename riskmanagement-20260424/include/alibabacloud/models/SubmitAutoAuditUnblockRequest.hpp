// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAUTOAUDITUNBLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAUTOAUDITUNBLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class SubmitAutoAuditUnblockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAutoAuditUnblockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetList, assetList_);
      DARABONBA_PTR_TO_JSON(Auditor, auditor_);
      DARABONBA_PTR_TO_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_TO_JSON(EmailType, emailType_);
      DARABONBA_PTR_TO_JSON(HasUnsubscribe, hasUnsubscribe_);
      DARABONBA_PTR_TO_JSON(SendCount, sendCount_);
      DARABONBA_PTR_TO_JSON(UseDesc, useDesc_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAutoAuditUnblockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
      DARABONBA_PTR_FROM_JSON(Auditor, auditor_);
      DARABONBA_PTR_FROM_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_FROM_JSON(EmailType, emailType_);
      DARABONBA_PTR_FROM_JSON(HasUnsubscribe, hasUnsubscribe_);
      DARABONBA_PTR_FROM_JSON(SendCount, sendCount_);
      DARABONBA_PTR_FROM_JSON(UseDesc, useDesc_);
    };
    SubmitAutoAuditUnblockRequest() = default ;
    SubmitAutoAuditUnblockRequest(const SubmitAutoAuditUnblockRequest &) = default ;
    SubmitAutoAuditUnblockRequest(SubmitAutoAuditUnblockRequest &&) = default ;
    SubmitAutoAuditUnblockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAutoAuditUnblockRequest() = default ;
    SubmitAutoAuditUnblockRequest& operator=(const SubmitAutoAuditUnblockRequest &) = default ;
    SubmitAutoAuditUnblockRequest& operator=(SubmitAutoAuditUnblockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetList_ == nullptr
        && this->auditor_ == nullptr && this->customerUid_ == nullptr && this->emailType_ == nullptr && this->hasUnsubscribe_ == nullptr && this->sendCount_ == nullptr
        && this->useDesc_ == nullptr; };
    // assetList Field Functions 
    bool hasAssetList() const { return this->assetList_ != nullptr;};
    void deleteAssetList() { this->assetList_ = nullptr;};
    inline string getAssetList() const { DARABONBA_PTR_GET_DEFAULT(assetList_, "") };
    inline SubmitAutoAuditUnblockRequest& setAssetList(string assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };


    // auditor Field Functions 
    bool hasAuditor() const { return this->auditor_ != nullptr;};
    void deleteAuditor() { this->auditor_ = nullptr;};
    inline string getAuditor() const { DARABONBA_PTR_GET_DEFAULT(auditor_, "") };
    inline SubmitAutoAuditUnblockRequest& setAuditor(string auditor) { DARABONBA_PTR_SET_VALUE(auditor_, auditor) };


    // customerUid Field Functions 
    bool hasCustomerUid() const { return this->customerUid_ != nullptr;};
    void deleteCustomerUid() { this->customerUid_ = nullptr;};
    inline string getCustomerUid() const { DARABONBA_PTR_GET_DEFAULT(customerUid_, "") };
    inline SubmitAutoAuditUnblockRequest& setCustomerUid(string customerUid) { DARABONBA_PTR_SET_VALUE(customerUid_, customerUid) };


    // emailType Field Functions 
    bool hasEmailType() const { return this->emailType_ != nullptr;};
    void deleteEmailType() { this->emailType_ = nullptr;};
    inline string getEmailType() const { DARABONBA_PTR_GET_DEFAULT(emailType_, "") };
    inline SubmitAutoAuditUnblockRequest& setEmailType(string emailType) { DARABONBA_PTR_SET_VALUE(emailType_, emailType) };


    // hasUnsubscribe Field Functions 
    bool hasHasUnsubscribe() const { return this->hasUnsubscribe_ != nullptr;};
    void deleteHasUnsubscribe() { this->hasUnsubscribe_ = nullptr;};
    inline bool getHasUnsubscribe() const { DARABONBA_PTR_GET_DEFAULT(hasUnsubscribe_, false) };
    inline SubmitAutoAuditUnblockRequest& setHasUnsubscribe(bool hasUnsubscribe) { DARABONBA_PTR_SET_VALUE(hasUnsubscribe_, hasUnsubscribe) };


    // sendCount Field Functions 
    bool hasSendCount() const { return this->sendCount_ != nullptr;};
    void deleteSendCount() { this->sendCount_ = nullptr;};
    inline string getSendCount() const { DARABONBA_PTR_GET_DEFAULT(sendCount_, "") };
    inline SubmitAutoAuditUnblockRequest& setSendCount(string sendCount) { DARABONBA_PTR_SET_VALUE(sendCount_, sendCount) };


    // useDesc Field Functions 
    bool hasUseDesc() const { return this->useDesc_ != nullptr;};
    void deleteUseDesc() { this->useDesc_ = nullptr;};
    inline string getUseDesc() const { DARABONBA_PTR_GET_DEFAULT(useDesc_, "") };
    inline SubmitAutoAuditUnblockRequest& setUseDesc(string useDesc) { DARABONBA_PTR_SET_VALUE(useDesc_, useDesc) };


  protected:
    // The list of assets.
    // 
    // > The array supports up to 50 IP addresses.
    shared_ptr<string> assetList_ {};
    // The auditor.
    // 
    // > You do not need to specify this parameter. It does not take effect.
    shared_ptr<string> auditor_ {};
    // The customer UID.
    shared_ptr<string> customerUid_ {};
    // The type of the email to send.
    shared_ptr<string> emailType_ {};
    // Specifies whether the email includes an unsubscribe option.
    // 
    // - **true**: Included.
    // - **false**: Not included.
    shared_ptr<bool> hasUnsubscribe_ {};
    // The description of the number of emails to send.
    shared_ptr<string> sendCount_ {};
    // The description.
    shared_ptr<string> useDesc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
