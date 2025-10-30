// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSUBSCRIPTIONDETAILRESPONSEBODYSECRETBINDDETAILDTO_HPP_
#define ALIBABACLOUD_MODELS_QUERYSUBSCRIPTIONDETAILRESPONSEBODYSECRETBINDDETAILDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySubscriptionDetailResponseBodySecretBindDetailDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySubscriptionDetailResponseBodySecretBindDetailDTO& obj) { 
      DARABONBA_PTR_TO_JSON(ASRModelId, ASRModelId_);
      DARABONBA_PTR_TO_JSON(ASRStatus, ASRStatus_);
      DARABONBA_PTR_TO_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(NeedRecord, needRecord_);
      DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_TO_JSON(PhoneNoB, phoneNoB_);
      DARABONBA_PTR_TO_JSON(PhoneNoX, phoneNoX_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubsId, subsId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySubscriptionDetailResponseBodySecretBindDetailDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(ASRModelId, ASRModelId_);
      DARABONBA_PTR_FROM_JSON(ASRStatus, ASRStatus_);
      DARABONBA_PTR_FROM_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(NeedRecord, needRecord_);
      DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_FROM_JSON(PhoneNoB, phoneNoB_);
      DARABONBA_PTR_FROM_JSON(PhoneNoX, phoneNoX_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubsId, subsId_);
    };
    QuerySubscriptionDetailResponseBodySecretBindDetailDTO() = default ;
    QuerySubscriptionDetailResponseBodySecretBindDetailDTO(const QuerySubscriptionDetailResponseBodySecretBindDetailDTO &) = default ;
    QuerySubscriptionDetailResponseBodySecretBindDetailDTO(QuerySubscriptionDetailResponseBodySecretBindDetailDTO &&) = default ;
    QuerySubscriptionDetailResponseBodySecretBindDetailDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySubscriptionDetailResponseBodySecretBindDetailDTO() = default ;
    QuerySubscriptionDetailResponseBodySecretBindDetailDTO& operator=(const QuerySubscriptionDetailResponseBodySecretBindDetailDTO &) = default ;
    QuerySubscriptionDetailResponseBodySecretBindDetailDTO& operator=(QuerySubscriptionDetailResponseBodySecretBindDetailDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ASRModelId_ == nullptr
        && return this->ASRStatus_ == nullptr && return this->callRestrict_ == nullptr && return this->expireDate_ == nullptr && return this->extension_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->groupId_ == nullptr && return this->needRecord_ == nullptr && return this->phoneNoA_ == nullptr && return this->phoneNoB_ == nullptr && return this->phoneNoX_ == nullptr
        && return this->status_ == nullptr && return this->subsId_ == nullptr; };
    // ASRModelId Field Functions 
    bool hasASRModelId() const { return this->ASRModelId_ != nullptr;};
    void deleteASRModelId() { this->ASRModelId_ = nullptr;};
    inline string ASRModelId() const { DARABONBA_PTR_GET_DEFAULT(ASRModelId_, "") };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setASRModelId(string ASRModelId) { DARABONBA_PTR_SET_VALUE(ASRModelId_, ASRModelId) };


    // ASRStatus Field Functions 
    bool hasASRStatus() const { return this->ASRStatus_ != nullptr;};
    void deleteASRStatus() { this->ASRStatus_ = nullptr;};
    inline bool ASRStatus() const { DARABONBA_PTR_GET_DEFAULT(ASRStatus_, false) };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setASRStatus(bool ASRStatus) { DARABONBA_PTR_SET_VALUE(ASRStatus_, ASRStatus) };


    // callRestrict Field Functions 
    bool hasCallRestrict() const { return this->callRestrict_ != nullptr;};
    void deleteCallRestrict() { this->callRestrict_ = nullptr;};
    inline string callRestrict() const { DARABONBA_PTR_GET_DEFAULT(callRestrict_, "") };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setCallRestrict(string callRestrict) { DARABONBA_PTR_SET_VALUE(callRestrict_, callRestrict) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // needRecord Field Functions 
    bool hasNeedRecord() const { return this->needRecord_ != nullptr;};
    void deleteNeedRecord() { this->needRecord_ = nullptr;};
    inline bool needRecord() const { DARABONBA_PTR_GET_DEFAULT(needRecord_, false) };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setNeedRecord(bool needRecord) { DARABONBA_PTR_SET_VALUE(needRecord_, needRecord) };


    // phoneNoA Field Functions 
    bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
    void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
    inline string phoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


    // phoneNoB Field Functions 
    bool hasPhoneNoB() const { return this->phoneNoB_ != nullptr;};
    void deletePhoneNoB() { this->phoneNoB_ = nullptr;};
    inline string phoneNoB() const { DARABONBA_PTR_GET_DEFAULT(phoneNoB_, "") };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setPhoneNoB(string phoneNoB) { DARABONBA_PTR_SET_VALUE(phoneNoB_, phoneNoB) };


    // phoneNoX Field Functions 
    bool hasPhoneNoX() const { return this->phoneNoX_ != nullptr;};
    void deletePhoneNoX() { this->phoneNoX_ = nullptr;};
    inline string phoneNoX() const { DARABONBA_PTR_GET_DEFAULT(phoneNoX_, "") };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setPhoneNoX(string phoneNoX) { DARABONBA_PTR_SET_VALUE(phoneNoX_, phoneNoX) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subsId Field Functions 
    bool hasSubsId() const { return this->subsId_ != nullptr;};
    void deleteSubsId() { this->subsId_ = nullptr;};
    inline string subsId() const { DARABONBA_PTR_GET_DEFAULT(subsId_, "") };
    inline QuerySubscriptionDetailResponseBodySecretBindDetailDTO& setSubsId(string subsId) { DARABONBA_PTR_SET_VALUE(subsId_, subsId) };


  protected:
    // The ID of the ASR model.
    std::shared_ptr<string> ASRModelId_ = nullptr;
    // Indicates whether automatic speech recognition (ASR) is enabled. Valid values:
    // 
    // *   **false**: ASR is disabled.
    // *   **true**: ASR is enabled.
    std::shared_ptr<bool> ASRStatus_ = nullptr;
    // The status of one-way call restrictions. No value is returned for this parameter if one-way call restrictions are not set. Valid values:
    // 
    // *   **CONTROL_AX_DISABLE**: Phone number A cannot be used to call phone number X.
    // *   **CONTROL_BX_DISABLE**: Phone number B cannot be used to call phone number X.
    std::shared_ptr<string> callRestrict_ = nullptr;
    // The expiration time of the binding.
    std::shared_ptr<string> expireDate_ = nullptr;
    // The extension in the AXG extension binding.
    std::shared_ptr<string> extension_ = nullptr;
    // The creation time of the binding.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The ID of number group G in the binding.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // Indicates whether all calls made by the bound phone numbers are recorded. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> needRecord_ = nullptr;
    // Phone number A in the binding.
    std::shared_ptr<string> phoneNoA_ = nullptr;
    // Phone number B in the binding.
    std::shared_ptr<string> phoneNoB_ = nullptr;
    // The private number in the binding, that is, phone number X.
    std::shared_ptr<string> phoneNoX_ = nullptr;
    // The binding status. Valid values:
    // 
    // *   **0**: The binding expired.
    // *   **1**: The binding is in effect.
    std::shared_ptr<int64_t> status_ = nullptr;
    // The binding ID.
    std::shared_ptr<string> subsId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
