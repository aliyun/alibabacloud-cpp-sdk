// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAuthSummaryResponseBodyMachine.hpp>
#include <vector>
#include <alibabacloud/models/GetAuthSummaryResponseBodyPostPaidVersionSummary.hpp>
#include <alibabacloud/models/GetAuthSummaryResponseBodyVersionSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAuthSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllowPartialBuy, allowPartialBuy_);
      DARABONBA_PTR_TO_JSON(AllowUpgradePartialBuy, allowUpgradePartialBuy_);
      DARABONBA_PTR_TO_JSON(AllowUserUnbind, allowUserUnbind_);
      DARABONBA_PTR_TO_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_TO_JSON(DefaultAuthToAll, defaultAuthToAll_);
      DARABONBA_PTR_TO_JSON(HasPreBindSetting, hasPreBindSetting_);
      DARABONBA_PTR_TO_JSON(HighestVersion, highestVersion_);
      DARABONBA_PTR_TO_JSON(InvalidBindStatus, invalidBindStatus_);
      DARABONBA_PTR_TO_JSON(IsMultiVersion, isMultiVersion_);
      DARABONBA_PTR_TO_JSON(Machine, machine_);
      DARABONBA_PTR_TO_JSON(PostPaidHighestVersion, postPaidHighestVersion_);
      DARABONBA_PTR_TO_JSON(PostPaidHostAutoBind, postPaidHostAutoBind_);
      DARABONBA_PTR_TO_JSON(PostPaidHostAutoBindVersion, postPaidHostAutoBindVersion_);
      DARABONBA_PTR_TO_JSON(PostPaidVersionSummary, postPaidVersionSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VersionSummary, versionSummary_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowPartialBuy, allowPartialBuy_);
      DARABONBA_PTR_FROM_JSON(AllowUpgradePartialBuy, allowUpgradePartialBuy_);
      DARABONBA_PTR_FROM_JSON(AllowUserUnbind, allowUserUnbind_);
      DARABONBA_PTR_FROM_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_FROM_JSON(DefaultAuthToAll, defaultAuthToAll_);
      DARABONBA_PTR_FROM_JSON(HasPreBindSetting, hasPreBindSetting_);
      DARABONBA_PTR_FROM_JSON(HighestVersion, highestVersion_);
      DARABONBA_PTR_FROM_JSON(InvalidBindStatus, invalidBindStatus_);
      DARABONBA_PTR_FROM_JSON(IsMultiVersion, isMultiVersion_);
      DARABONBA_PTR_FROM_JSON(Machine, machine_);
      DARABONBA_PTR_FROM_JSON(PostPaidHighestVersion, postPaidHighestVersion_);
      DARABONBA_PTR_FROM_JSON(PostPaidHostAutoBind, postPaidHostAutoBind_);
      DARABONBA_PTR_FROM_JSON(PostPaidHostAutoBindVersion, postPaidHostAutoBindVersion_);
      DARABONBA_PTR_FROM_JSON(PostPaidVersionSummary, postPaidVersionSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VersionSummary, versionSummary_);
    };
    GetAuthSummaryResponseBody() = default ;
    GetAuthSummaryResponseBody(const GetAuthSummaryResponseBody &) = default ;
    GetAuthSummaryResponseBody(GetAuthSummaryResponseBody &&) = default ;
    GetAuthSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthSummaryResponseBody() = default ;
    GetAuthSummaryResponseBody& operator=(const GetAuthSummaryResponseBody &) = default ;
    GetAuthSummaryResponseBody& operator=(GetAuthSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowPartialBuy_ != nullptr
        && this->allowUpgradePartialBuy_ != nullptr && this->allowUserUnbind_ != nullptr && this->autoBind_ != nullptr && this->defaultAuthToAll_ != nullptr && this->hasPreBindSetting_ != nullptr
        && this->highestVersion_ != nullptr && this->invalidBindStatus_ != nullptr && this->isMultiVersion_ != nullptr && this->machine_ != nullptr && this->postPaidHighestVersion_ != nullptr
        && this->postPaidHostAutoBind_ != nullptr && this->postPaidHostAutoBindVersion_ != nullptr && this->postPaidVersionSummary_ != nullptr && this->requestId_ != nullptr && this->versionSummary_ != nullptr; };
    // allowPartialBuy Field Functions 
    bool hasAllowPartialBuy() const { return this->allowPartialBuy_ != nullptr;};
    void deleteAllowPartialBuy() { this->allowPartialBuy_ = nullptr;};
    inline int32_t allowPartialBuy() const { DARABONBA_PTR_GET_DEFAULT(allowPartialBuy_, 0) };
    inline GetAuthSummaryResponseBody& setAllowPartialBuy(int32_t allowPartialBuy) { DARABONBA_PTR_SET_VALUE(allowPartialBuy_, allowPartialBuy) };


    // allowUpgradePartialBuy Field Functions 
    bool hasAllowUpgradePartialBuy() const { return this->allowUpgradePartialBuy_ != nullptr;};
    void deleteAllowUpgradePartialBuy() { this->allowUpgradePartialBuy_ = nullptr;};
    inline int32_t allowUpgradePartialBuy() const { DARABONBA_PTR_GET_DEFAULT(allowUpgradePartialBuy_, 0) };
    inline GetAuthSummaryResponseBody& setAllowUpgradePartialBuy(int32_t allowUpgradePartialBuy) { DARABONBA_PTR_SET_VALUE(allowUpgradePartialBuy_, allowUpgradePartialBuy) };


    // allowUserUnbind Field Functions 
    bool hasAllowUserUnbind() const { return this->allowUserUnbind_ != nullptr;};
    void deleteAllowUserUnbind() { this->allowUserUnbind_ = nullptr;};
    inline int32_t allowUserUnbind() const { DARABONBA_PTR_GET_DEFAULT(allowUserUnbind_, 0) };
    inline GetAuthSummaryResponseBody& setAllowUserUnbind(int32_t allowUserUnbind) { DARABONBA_PTR_SET_VALUE(allowUserUnbind_, allowUserUnbind) };


    // autoBind Field Functions 
    bool hasAutoBind() const { return this->autoBind_ != nullptr;};
    void deleteAutoBind() { this->autoBind_ = nullptr;};
    inline int32_t autoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
    inline GetAuthSummaryResponseBody& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


    // defaultAuthToAll Field Functions 
    bool hasDefaultAuthToAll() const { return this->defaultAuthToAll_ != nullptr;};
    void deleteDefaultAuthToAll() { this->defaultAuthToAll_ = nullptr;};
    inline int32_t defaultAuthToAll() const { DARABONBA_PTR_GET_DEFAULT(defaultAuthToAll_, 0) };
    inline GetAuthSummaryResponseBody& setDefaultAuthToAll(int32_t defaultAuthToAll) { DARABONBA_PTR_SET_VALUE(defaultAuthToAll_, defaultAuthToAll) };


    // hasPreBindSetting Field Functions 
    bool hasHasPreBindSetting() const { return this->hasPreBindSetting_ != nullptr;};
    void deleteHasPreBindSetting() { this->hasPreBindSetting_ = nullptr;};
    inline bool hasPreBindSetting() const { DARABONBA_PTR_GET_DEFAULT(hasPreBindSetting_, false) };
    inline GetAuthSummaryResponseBody& setHasPreBindSetting(bool hasPreBindSetting) { DARABONBA_PTR_SET_VALUE(hasPreBindSetting_, hasPreBindSetting) };


    // highestVersion Field Functions 
    bool hasHighestVersion() const { return this->highestVersion_ != nullptr;};
    void deleteHighestVersion() { this->highestVersion_ = nullptr;};
    inline int32_t highestVersion() const { DARABONBA_PTR_GET_DEFAULT(highestVersion_, 0) };
    inline GetAuthSummaryResponseBody& setHighestVersion(int32_t highestVersion) { DARABONBA_PTR_SET_VALUE(highestVersion_, highestVersion) };


    // invalidBindStatus Field Functions 
    bool hasInvalidBindStatus() const { return this->invalidBindStatus_ != nullptr;};
    void deleteInvalidBindStatus() { this->invalidBindStatus_ = nullptr;};
    inline string invalidBindStatus() const { DARABONBA_PTR_GET_DEFAULT(invalidBindStatus_, "") };
    inline GetAuthSummaryResponseBody& setInvalidBindStatus(string invalidBindStatus) { DARABONBA_PTR_SET_VALUE(invalidBindStatus_, invalidBindStatus) };


    // isMultiVersion Field Functions 
    bool hasIsMultiVersion() const { return this->isMultiVersion_ != nullptr;};
    void deleteIsMultiVersion() { this->isMultiVersion_ = nullptr;};
    inline int32_t isMultiVersion() const { DARABONBA_PTR_GET_DEFAULT(isMultiVersion_, 0) };
    inline GetAuthSummaryResponseBody& setIsMultiVersion(int32_t isMultiVersion) { DARABONBA_PTR_SET_VALUE(isMultiVersion_, isMultiVersion) };


    // machine Field Functions 
    bool hasMachine() const { return this->machine_ != nullptr;};
    void deleteMachine() { this->machine_ = nullptr;};
    inline const GetAuthSummaryResponseBodyMachine & machine() const { DARABONBA_PTR_GET_CONST(machine_, GetAuthSummaryResponseBodyMachine) };
    inline GetAuthSummaryResponseBodyMachine machine() { DARABONBA_PTR_GET(machine_, GetAuthSummaryResponseBodyMachine) };
    inline GetAuthSummaryResponseBody& setMachine(const GetAuthSummaryResponseBodyMachine & machine) { DARABONBA_PTR_SET_VALUE(machine_, machine) };
    inline GetAuthSummaryResponseBody& setMachine(GetAuthSummaryResponseBodyMachine && machine) { DARABONBA_PTR_SET_RVALUE(machine_, machine) };


    // postPaidHighestVersion Field Functions 
    bool hasPostPaidHighestVersion() const { return this->postPaidHighestVersion_ != nullptr;};
    void deletePostPaidHighestVersion() { this->postPaidHighestVersion_ = nullptr;};
    inline string postPaidHighestVersion() const { DARABONBA_PTR_GET_DEFAULT(postPaidHighestVersion_, "") };
    inline GetAuthSummaryResponseBody& setPostPaidHighestVersion(string postPaidHighestVersion) { DARABONBA_PTR_SET_VALUE(postPaidHighestVersion_, postPaidHighestVersion) };


    // postPaidHostAutoBind Field Functions 
    bool hasPostPaidHostAutoBind() const { return this->postPaidHostAutoBind_ != nullptr;};
    void deletePostPaidHostAutoBind() { this->postPaidHostAutoBind_ = nullptr;};
    inline string postPaidHostAutoBind() const { DARABONBA_PTR_GET_DEFAULT(postPaidHostAutoBind_, "") };
    inline GetAuthSummaryResponseBody& setPostPaidHostAutoBind(string postPaidHostAutoBind) { DARABONBA_PTR_SET_VALUE(postPaidHostAutoBind_, postPaidHostAutoBind) };


    // postPaidHostAutoBindVersion Field Functions 
    bool hasPostPaidHostAutoBindVersion() const { return this->postPaidHostAutoBindVersion_ != nullptr;};
    void deletePostPaidHostAutoBindVersion() { this->postPaidHostAutoBindVersion_ = nullptr;};
    inline string postPaidHostAutoBindVersion() const { DARABONBA_PTR_GET_DEFAULT(postPaidHostAutoBindVersion_, "") };
    inline GetAuthSummaryResponseBody& setPostPaidHostAutoBindVersion(string postPaidHostAutoBindVersion) { DARABONBA_PTR_SET_VALUE(postPaidHostAutoBindVersion_, postPaidHostAutoBindVersion) };


    // postPaidVersionSummary Field Functions 
    bool hasPostPaidVersionSummary() const { return this->postPaidVersionSummary_ != nullptr;};
    void deletePostPaidVersionSummary() { this->postPaidVersionSummary_ = nullptr;};
    inline const vector<GetAuthSummaryResponseBodyPostPaidVersionSummary> & postPaidVersionSummary() const { DARABONBA_PTR_GET_CONST(postPaidVersionSummary_, vector<GetAuthSummaryResponseBodyPostPaidVersionSummary>) };
    inline vector<GetAuthSummaryResponseBodyPostPaidVersionSummary> postPaidVersionSummary() { DARABONBA_PTR_GET(postPaidVersionSummary_, vector<GetAuthSummaryResponseBodyPostPaidVersionSummary>) };
    inline GetAuthSummaryResponseBody& setPostPaidVersionSummary(const vector<GetAuthSummaryResponseBodyPostPaidVersionSummary> & postPaidVersionSummary) { DARABONBA_PTR_SET_VALUE(postPaidVersionSummary_, postPaidVersionSummary) };
    inline GetAuthSummaryResponseBody& setPostPaidVersionSummary(vector<GetAuthSummaryResponseBodyPostPaidVersionSummary> && postPaidVersionSummary) { DARABONBA_PTR_SET_RVALUE(postPaidVersionSummary_, postPaidVersionSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // versionSummary Field Functions 
    bool hasVersionSummary() const { return this->versionSummary_ != nullptr;};
    void deleteVersionSummary() { this->versionSummary_ = nullptr;};
    inline const vector<GetAuthSummaryResponseBodyVersionSummary> & versionSummary() const { DARABONBA_PTR_GET_CONST(versionSummary_, vector<GetAuthSummaryResponseBodyVersionSummary>) };
    inline vector<GetAuthSummaryResponseBodyVersionSummary> versionSummary() { DARABONBA_PTR_GET(versionSummary_, vector<GetAuthSummaryResponseBodyVersionSummary>) };
    inline GetAuthSummaryResponseBody& setVersionSummary(const vector<GetAuthSummaryResponseBodyVersionSummary> & versionSummary) { DARABONBA_PTR_SET_VALUE(versionSummary_, versionSummary) };
    inline GetAuthSummaryResponseBody& setVersionSummary(vector<GetAuthSummaryResponseBodyVersionSummary> && versionSummary) { DARABONBA_PTR_SET_RVALUE(versionSummary_, versionSummary) };


  protected:
    // Indicates whether you can purchase protection quota on demand when you purchase Security Center. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> allowPartialBuy_ = nullptr;
    // Indicates whether you can purchase protection quota on demand after an upgrade. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> allowUpgradePartialBuy_ = nullptr;
    // Indicates whether all bound assets can be immediately unbound. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> allowUserUnbind_ = nullptr;
    // Indicates whether automatic binding is enabled. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    std::shared_ptr<int32_t> autoBind_ = nullptr;
    // Indicates whether the protection quota is supported for all assets. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> defaultAuthToAll_ = nullptr;
    // Indicates whether pre-bound assets exist. If you select assets to bind when you purchase Security Center, pre-bound assets exist. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<bool> hasPreBindSetting_ = nullptr;
    // The most advanced edition that is used. Valid values:
    // 
    // *   **1**: Basic edition
    // *   **3**: Enterprise edition
    // *   **5**: Advanced edition
    // *   **6**: Anti-virus edition
    // *   **7**: Ultimate edition
    // *   **10**: Value-added Plan edition
    // 
    // >  If you purchase Security Center Multi-edition, the value indicates the most advanced edition that is used. Otherwise, the value indicates the specific edition that is purchased.
    std::shared_ptr<int32_t> highestVersion_ = nullptr;
    std::shared_ptr<string> invalidBindStatus_ = nullptr;
    // Indicates whether Security Center Multi-edition is purchased. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> isMultiVersion_ = nullptr;
    // The statistics of the protection quota for assets.
    std::shared_ptr<GetAuthSummaryResponseBodyMachine> machine_ = nullptr;
    // Activate the pay-as-you-go service protection version for hosts and container security, which is the highest protection version among all bound hosts. Values:   - **1**: Free Edition  - **3**: Enterprise Edition - **5**: Advanced Edition - **6**: Antivirus Edition     - **7**: Flagship Edition
    std::shared_ptr<string> postPaidHighestVersion_ = nullptr;
    // The pay-as-you-go service for host and container security adds an automatic binding identifier for new hosts, with values: - **0**: Off - **1**: On
    std::shared_ptr<string> postPaidHostAutoBind_ = nullptr;
    // The version for the pay-as-you-go service of host and container security to automatically bind new assets, with values: - **1**: Free Edition - **3**: Enterprise Edition - **5**: Advanced Edition - **6**: Antivirus Edition - **7**: Flagship Edition
    std::shared_ptr<string> postPaidHostAutoBindVersion_ = nullptr;
    // Statistics on pay-as-you-go service authorization for host and container security.
    std::shared_ptr<vector<GetAuthSummaryResponseBodyPostPaidVersionSummary>> postPaidVersionSummary_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The quota consumption statistics.
    std::shared_ptr<vector<GetAuthSummaryResponseBodyVersionSummary>> versionSummary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
