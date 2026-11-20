// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDBATCHAXGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDBATCHAXGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindBatchAxgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindBatchAxgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AxgBindList, axgBindList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, BindBatchAxgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AxgBindList, axgBindList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    BindBatchAxgRequest() = default ;
    BindBatchAxgRequest(const BindBatchAxgRequest &) = default ;
    BindBatchAxgRequest(BindBatchAxgRequest &&) = default ;
    BindBatchAxgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindBatchAxgRequest() = default ;
    BindBatchAxgRequest& operator=(const BindBatchAxgRequest &) = default ;
    BindBatchAxgRequest& operator=(BindBatchAxgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AxgBindList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AxgBindList& obj) { 
        DARABONBA_PTR_TO_JSON(ASRModelId, ASRModelId_);
        DARABONBA_PTR_TO_JSON(ASRStatus, ASRStatus_);
        DARABONBA_PTR_TO_JSON(CallDisplayType, callDisplayType_);
        DARABONBA_PTR_TO_JSON(CallRestrict, callRestrict_);
        DARABONBA_PTR_TO_JSON(ExpectCity, expectCity_);
        DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(IsRecordingEnabled, isRecordingEnabled_);
        DARABONBA_PTR_TO_JSON(OutId, outId_);
        DARABONBA_PTR_TO_JSON(OutOrderId, outOrderId_);
        DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
        DARABONBA_PTR_TO_JSON(PhoneNoB, phoneNoB_);
        DARABONBA_PTR_TO_JSON(PhoneNoX, phoneNoX_);
        DARABONBA_PTR_TO_JSON(RingConfig, ringConfig_);
      };
      friend void from_json(const Darabonba::Json& j, AxgBindList& obj) { 
        DARABONBA_PTR_FROM_JSON(ASRModelId, ASRModelId_);
        DARABONBA_PTR_FROM_JSON(ASRStatus, ASRStatus_);
        DARABONBA_PTR_FROM_JSON(CallDisplayType, callDisplayType_);
        DARABONBA_PTR_FROM_JSON(CallRestrict, callRestrict_);
        DARABONBA_PTR_FROM_JSON(ExpectCity, expectCity_);
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(IsRecordingEnabled, isRecordingEnabled_);
        DARABONBA_PTR_FROM_JSON(OutId, outId_);
        DARABONBA_PTR_FROM_JSON(OutOrderId, outOrderId_);
        DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
        DARABONBA_PTR_FROM_JSON(PhoneNoB, phoneNoB_);
        DARABONBA_PTR_FROM_JSON(PhoneNoX, phoneNoX_);
        DARABONBA_PTR_FROM_JSON(RingConfig, ringConfig_);
      };
      AxgBindList() = default ;
      AxgBindList(const AxgBindList &) = default ;
      AxgBindList(AxgBindList &&) = default ;
      AxgBindList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AxgBindList() = default ;
      AxgBindList& operator=(const AxgBindList &) = default ;
      AxgBindList& operator=(AxgBindList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ASRModelId_ == nullptr
        && this->ASRStatus_ == nullptr && this->callDisplayType_ == nullptr && this->callRestrict_ == nullptr && this->expectCity_ == nullptr && this->expiration_ == nullptr
        && this->groupId_ == nullptr && this->isRecordingEnabled_ == nullptr && this->outId_ == nullptr && this->outOrderId_ == nullptr && this->phoneNoA_ == nullptr
        && this->phoneNoB_ == nullptr && this->phoneNoX_ == nullptr && this->ringConfig_ == nullptr; };
      // ASRModelId Field Functions 
      bool hasASRModelId() const { return this->ASRModelId_ != nullptr;};
      void deleteASRModelId() { this->ASRModelId_ = nullptr;};
      inline string getASRModelId() const { DARABONBA_PTR_GET_DEFAULT(ASRModelId_, "") };
      inline AxgBindList& setASRModelId(string ASRModelId) { DARABONBA_PTR_SET_VALUE(ASRModelId_, ASRModelId) };


      // ASRStatus Field Functions 
      bool hasASRStatus() const { return this->ASRStatus_ != nullptr;};
      void deleteASRStatus() { this->ASRStatus_ = nullptr;};
      inline bool getASRStatus() const { DARABONBA_PTR_GET_DEFAULT(ASRStatus_, false) };
      inline AxgBindList& setASRStatus(bool ASRStatus) { DARABONBA_PTR_SET_VALUE(ASRStatus_, ASRStatus) };


      // callDisplayType Field Functions 
      bool hasCallDisplayType() const { return this->callDisplayType_ != nullptr;};
      void deleteCallDisplayType() { this->callDisplayType_ = nullptr;};
      inline int32_t getCallDisplayType() const { DARABONBA_PTR_GET_DEFAULT(callDisplayType_, 0) };
      inline AxgBindList& setCallDisplayType(int32_t callDisplayType) { DARABONBA_PTR_SET_VALUE(callDisplayType_, callDisplayType) };


      // callRestrict Field Functions 
      bool hasCallRestrict() const { return this->callRestrict_ != nullptr;};
      void deleteCallRestrict() { this->callRestrict_ = nullptr;};
      inline string getCallRestrict() const { DARABONBA_PTR_GET_DEFAULT(callRestrict_, "") };
      inline AxgBindList& setCallRestrict(string callRestrict) { DARABONBA_PTR_SET_VALUE(callRestrict_, callRestrict) };


      // expectCity Field Functions 
      bool hasExpectCity() const { return this->expectCity_ != nullptr;};
      void deleteExpectCity() { this->expectCity_ = nullptr;};
      inline string getExpectCity() const { DARABONBA_PTR_GET_DEFAULT(expectCity_, "") };
      inline AxgBindList& setExpectCity(string expectCity) { DARABONBA_PTR_SET_VALUE(expectCity_, expectCity) };


      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
      inline AxgBindList& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline AxgBindList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // isRecordingEnabled Field Functions 
      bool hasIsRecordingEnabled() const { return this->isRecordingEnabled_ != nullptr;};
      void deleteIsRecordingEnabled() { this->isRecordingEnabled_ = nullptr;};
      inline bool getIsRecordingEnabled() const { DARABONBA_PTR_GET_DEFAULT(isRecordingEnabled_, false) };
      inline AxgBindList& setIsRecordingEnabled(bool isRecordingEnabled) { DARABONBA_PTR_SET_VALUE(isRecordingEnabled_, isRecordingEnabled) };


      // outId Field Functions 
      bool hasOutId() const { return this->outId_ != nullptr;};
      void deleteOutId() { this->outId_ = nullptr;};
      inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
      inline AxgBindList& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


      // outOrderId Field Functions 
      bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
      void deleteOutOrderId() { this->outOrderId_ = nullptr;};
      inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
      inline AxgBindList& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


      // phoneNoA Field Functions 
      bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
      void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
      inline string getPhoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
      inline AxgBindList& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


      // phoneNoB Field Functions 
      bool hasPhoneNoB() const { return this->phoneNoB_ != nullptr;};
      void deletePhoneNoB() { this->phoneNoB_ = nullptr;};
      inline string getPhoneNoB() const { DARABONBA_PTR_GET_DEFAULT(phoneNoB_, "") };
      inline AxgBindList& setPhoneNoB(string phoneNoB) { DARABONBA_PTR_SET_VALUE(phoneNoB_, phoneNoB) };


      // phoneNoX Field Functions 
      bool hasPhoneNoX() const { return this->phoneNoX_ != nullptr;};
      void deletePhoneNoX() { this->phoneNoX_ = nullptr;};
      inline string getPhoneNoX() const { DARABONBA_PTR_GET_DEFAULT(phoneNoX_, "") };
      inline AxgBindList& setPhoneNoX(string phoneNoX) { DARABONBA_PTR_SET_VALUE(phoneNoX_, phoneNoX) };


      // ringConfig Field Functions 
      bool hasRingConfig() const { return this->ringConfig_ != nullptr;};
      void deleteRingConfig() { this->ringConfig_ = nullptr;};
      inline string getRingConfig() const { DARABONBA_PTR_GET_DEFAULT(ringConfig_, "") };
      inline AxgBindList& setRingConfig(string ringConfig) { DARABONBA_PTR_SET_VALUE(ringConfig_, ringConfig) };


    protected:
      // The ASR model ID. Valid values:
      // 
      // - The ID of the telephony model for Mandarin: 7ee372834d2f4cc7ac0d0ab2d0ae1aac
      // 
      // - The ID of the telephony model for Cantonese: 9b4afe3d224e4fa3bf963697113e2f77
      // 
      // - The ID of the telephony model for local accents: 3655a6cb94764145a1f9a38a3c3b3b4b
      shared_ptr<string> ASRModelId_ {};
      // The automatic speech recognition (ASR) status. Valid values:
      // 
      // - **false** (default): The ASR feature is disabled.
      // 
      // - **true**: The ASR feature is enabled.
      shared_ptr<bool> ASRStatus_ {};
      // Resets the number display logic for the binding. Set the value to **1**. This indicates that the intermediate number (Number X) is displayed to both the calling and called parties.
      // 
      // > Due to carrier regulations, the feature of displaying real numbers is not supported.
      shared_ptr<int32_t> callDisplayType_ {};
      // The one-way call restriction. Valid values:
      // 
      // - **CONTROL_AX_DISABLE**: Number A cannot call Number X.
      // 
      // - **CONTROL_BX_DISABLE**: Number B cannot call Number X.
      shared_ptr<string> callRestrict_ {};
      // The city to which Number X belongs.
      // 
      // > - If no numbers are available in the specified city, or if this parameter is not specified, a number from another city in the current number pool is randomly selected and used as Number X.
      // >
      // > - If **Number X Assignment Mode** is set to **Strict Match Mode** and no eligible number is found, an allocation error is reported.
      shared_ptr<string> expectCity_ {};
      // The expiration time of the binding. The value is accurate to seconds.
      // 
      // > - The expiration time must be more than 1 minute later than the current time.
      // >
      // > - This parameter is required.
      shared_ptr<string> expiration_ {};
      // The group ID (GID) in the AXG binding.
      // 
      // You can view the GID in the following ways:
      // 
      // - Log on to the Phone Number Protection console. On the [Number Pool Management](https://dyplsnext.console.aliyun.com/number-pool) page, select **AXG Privacy Number** and click **G Number Group Management** to view the GIDs of all G number groups.
      // 
      // - If you use the [CreateAxgGroup](https://help.aliyun.com/document_detail/110250.html) operation to create a G number group, the value of the **GroupId** parameter in the response is the GID.
      // 
      // > The G number group must contain at least one phone number.
      // 
      // This parameter is required.
      shared_ptr<string> groupId_ {};
      // Specifies whether to record all calls made in the binding. Valid values:
      // 
      // - **true**: Call recording is enabled.
      // 
      // - **false** (default): Call recording is disabled.
      shared_ptr<bool> isRecordingEnabled_ {};
      // The extension field. This parameter is carried in call record messages.
      shared_ptr<string> outId_ {};
      // The external business ID.
      shared_ptr<string> outOrderId_ {};
      // Number A in the AXG binding. Number A can be a mobile phone number or a landline number. If you use a landline number, add the area code, and do not add a hyphen between the area code and the landline number.
      // 
      // This parameter is required.
      shared_ptr<string> phoneNoA_ {};
      // Number B in the AXG binding.
      // 
      // Number B can be a mobile phone number or a landline number. If you use a landline number, add the area code, and do not add a hyphen between the area code and the landline number.
      // 
      // > - When Number A calls Number X, the call is transferred to Number B by default. If Number B is not specified, the call fails.
      // >
      // > - When Number A calls Number X, if **A Callback Mode** is set to **Default Mode**, the call is transferred to Number B. Otherwise, the call fails.
      // >
      // > - To modify **A Callback Mode**, on the [Number Pool Management](https://dyplsnext.console.aliyun.com/number-pool?resType=1) page, select **AXG Privacy Number** and choose **Pool Management** > **A Callback Mode** > **Adjust Configuration**.
      // >
      // > - To update Number B, call the [UpdateSubscription](https://help.aliyun.com/zh/pnp/developer-reference/api-dyplsapi-2017-05-25-updatesubscription?spm=a2c4g.11186623.0.i16) operation.
      shared_ptr<string> phoneNoB_ {};
      // Number X in the AXG binding.
      // 
      // Number X must be a [purchased privacy number](https://dyplsnext.console.aliyun.com/numberbuy?spm=a2c4g.11186623.0.0.7e6449bbtiHP8m). You can log on to the Phone Number Protection console, go to the [Number Management](https://dyplsnext.console.aliyun.com/number/list) page, and then select **AXG Privacy Number** to obtain Number X.
      // 
      // > If you do not specify Number X, a random number is selected from the number pool based on the **ExpectCity** parameter and used as Number X.
      shared_ptr<string> phoneNoX_ {};
      // The corporate ringback tone (CRBT) that is played when Number X in an AXG binding is called.
      // 
      // You must specify the **ringtone field** and the **CRBT code**.
      // 
      // Valid values for the **ringtone field**:
      // 
      // - `AXGRing_AB`: the ringtone for calls from Number A to Number X (with a callback number).
      // 
      // - `AXGRing_A`: the ringtone for calls from Number A to Number X (without a callback number).
      // 
      // - `AXGRing_G`: the ringtone for calls from a number in Group G to Number X.
      // 
      // **CRBT code**:
      // 
      // You can log on to the Phone Number Protection console and obtain the CRBT code on the [Corporate CRBT Management](https://dyplsnext.console.aliyun.com/number-pool/ringtone?resType=1) page.
      // 
      // **Example**:
      // 
      // To set the ringtone for calls from Number A to Number X (without a callback number), specify `"AXGRing_A": "1000****1"`.
      // 
      // > The CRBT that is set at the binding level takes precedence over the CRBT that is set at the number pool level.
      shared_ptr<string> ringConfig_ {};
    };

    virtual bool empty() const override { return this->axgBindList_ == nullptr
        && this->ownerId_ == nullptr && this->poolKey_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // axgBindList Field Functions 
    bool hasAxgBindList() const { return this->axgBindList_ != nullptr;};
    void deleteAxgBindList() { this->axgBindList_ = nullptr;};
    inline const vector<BindBatchAxgRequest::AxgBindList> & getAxgBindList() const { DARABONBA_PTR_GET_CONST(axgBindList_, vector<BindBatchAxgRequest::AxgBindList>) };
    inline vector<BindBatchAxgRequest::AxgBindList> getAxgBindList() { DARABONBA_PTR_GET(axgBindList_, vector<BindBatchAxgRequest::AxgBindList>) };
    inline BindBatchAxgRequest& setAxgBindList(const vector<BindBatchAxgRequest::AxgBindList> & axgBindList) { DARABONBA_PTR_SET_VALUE(axgBindList_, axgBindList) };
    inline BindBatchAxgRequest& setAxgBindList(vector<BindBatchAxgRequest::AxgBindList> && axgBindList) { DARABONBA_PTR_SET_RVALUE(axgBindList_, axgBindList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindBatchAxgRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string getPoolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline BindBatchAxgRequest& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindBatchAxgRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindBatchAxgRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The list of AXG bindings.
    // 
    // This parameter is required.
    shared_ptr<vector<BindBatchAxgRequest::AxgBindList>> axgBindList_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The key of the number pool.
    // 
    // You can log on to the Phone Number Protection console and obtain the key on the [Number Pool Management](https://dyplsnext.console.aliyun.com/number-pool) page.
    shared_ptr<string> poolKey_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
