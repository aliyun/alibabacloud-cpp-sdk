// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTPOLICY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy.hpp>
#include <alibabacloud/models/ModifyBrowserInstanceGroupRequestPolicyVideoPolicy.hpp>
#include <alibabacloud/models/ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyBrowserInstanceGroupRequestPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBrowserInstanceGroupRequestPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ClipboardPolicy, clipboardPolicy_);
      DARABONBA_PTR_TO_JSON(DisconnectKeepSession, disconnectKeepSession_);
      DARABONBA_PTR_TO_JSON(DisconnectKeepSessionTime, disconnectKeepSessionTime_);
      DARABONBA_PTR_TO_JSON(Html5FileTransfer, html5FileTransfer_);
      DARABONBA_PTR_TO_JSON(NoOperationDisconnect, noOperationDisconnect_);
      DARABONBA_PTR_TO_JSON(NoOperationDisconnectTime, noOperationDisconnectTime_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(VideoPolicy, videoPolicy_);
      DARABONBA_PTR_TO_JSON(WatermarkPolicy, watermarkPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBrowserInstanceGroupRequestPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ClipboardPolicy, clipboardPolicy_);
      DARABONBA_PTR_FROM_JSON(DisconnectKeepSession, disconnectKeepSession_);
      DARABONBA_PTR_FROM_JSON(DisconnectKeepSessionTime, disconnectKeepSessionTime_);
      DARABONBA_PTR_FROM_JSON(Html5FileTransfer, html5FileTransfer_);
      DARABONBA_PTR_FROM_JSON(NoOperationDisconnect, noOperationDisconnect_);
      DARABONBA_PTR_FROM_JSON(NoOperationDisconnectTime, noOperationDisconnectTime_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(VideoPolicy, videoPolicy_);
      DARABONBA_PTR_FROM_JSON(WatermarkPolicy, watermarkPolicy_);
    };
    ModifyBrowserInstanceGroupRequestPolicy() = default ;
    ModifyBrowserInstanceGroupRequestPolicy(const ModifyBrowserInstanceGroupRequestPolicy &) = default ;
    ModifyBrowserInstanceGroupRequestPolicy(ModifyBrowserInstanceGroupRequestPolicy &&) = default ;
    ModifyBrowserInstanceGroupRequestPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBrowserInstanceGroupRequestPolicy() = default ;
    ModifyBrowserInstanceGroupRequestPolicy& operator=(const ModifyBrowserInstanceGroupRequestPolicy &) = default ;
    ModifyBrowserInstanceGroupRequestPolicy& operator=(ModifyBrowserInstanceGroupRequestPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clipboardPolicy_ == nullptr
        && return this->disconnectKeepSession_ == nullptr && return this->disconnectKeepSessionTime_ == nullptr && return this->html5FileTransfer_ == nullptr && return this->noOperationDisconnect_ == nullptr && return this->noOperationDisconnectTime_ == nullptr
        && return this->policyId_ == nullptr && return this->policyVersion_ == nullptr && return this->videoPolicy_ == nullptr && return this->watermarkPolicy_ == nullptr; };
    // clipboardPolicy Field Functions 
    bool hasClipboardPolicy() const { return this->clipboardPolicy_ != nullptr;};
    void deleteClipboardPolicy() { this->clipboardPolicy_ = nullptr;};
    inline const Models::ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy & clipboardPolicy() const { DARABONBA_PTR_GET_CONST(clipboardPolicy_, Models::ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy) };
    inline Models::ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy clipboardPolicy() { DARABONBA_PTR_GET(clipboardPolicy_, Models::ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy) };
    inline ModifyBrowserInstanceGroupRequestPolicy& setClipboardPolicy(const Models::ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy & clipboardPolicy) { DARABONBA_PTR_SET_VALUE(clipboardPolicy_, clipboardPolicy) };
    inline ModifyBrowserInstanceGroupRequestPolicy& setClipboardPolicy(Models::ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy && clipboardPolicy) { DARABONBA_PTR_SET_RVALUE(clipboardPolicy_, clipboardPolicy) };


    // disconnectKeepSession Field Functions 
    bool hasDisconnectKeepSession() const { return this->disconnectKeepSession_ != nullptr;};
    void deleteDisconnectKeepSession() { this->disconnectKeepSession_ = nullptr;};
    inline string disconnectKeepSession() const { DARABONBA_PTR_GET_DEFAULT(disconnectKeepSession_, "") };
    inline ModifyBrowserInstanceGroupRequestPolicy& setDisconnectKeepSession(string disconnectKeepSession) { DARABONBA_PTR_SET_VALUE(disconnectKeepSession_, disconnectKeepSession) };


    // disconnectKeepSessionTime Field Functions 
    bool hasDisconnectKeepSessionTime() const { return this->disconnectKeepSessionTime_ != nullptr;};
    void deleteDisconnectKeepSessionTime() { this->disconnectKeepSessionTime_ = nullptr;};
    inline int32_t disconnectKeepSessionTime() const { DARABONBA_PTR_GET_DEFAULT(disconnectKeepSessionTime_, 0) };
    inline ModifyBrowserInstanceGroupRequestPolicy& setDisconnectKeepSessionTime(int32_t disconnectKeepSessionTime) { DARABONBA_PTR_SET_VALUE(disconnectKeepSessionTime_, disconnectKeepSessionTime) };


    // html5FileTransfer Field Functions 
    bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
    void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
    inline string html5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
    inline ModifyBrowserInstanceGroupRequestPolicy& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


    // noOperationDisconnect Field Functions 
    bool hasNoOperationDisconnect() const { return this->noOperationDisconnect_ != nullptr;};
    void deleteNoOperationDisconnect() { this->noOperationDisconnect_ = nullptr;};
    inline string noOperationDisconnect() const { DARABONBA_PTR_GET_DEFAULT(noOperationDisconnect_, "") };
    inline ModifyBrowserInstanceGroupRequestPolicy& setNoOperationDisconnect(string noOperationDisconnect) { DARABONBA_PTR_SET_VALUE(noOperationDisconnect_, noOperationDisconnect) };


    // noOperationDisconnectTime Field Functions 
    bool hasNoOperationDisconnectTime() const { return this->noOperationDisconnectTime_ != nullptr;};
    void deleteNoOperationDisconnectTime() { this->noOperationDisconnectTime_ = nullptr;};
    inline int32_t noOperationDisconnectTime() const { DARABONBA_PTR_GET_DEFAULT(noOperationDisconnectTime_, 0) };
    inline ModifyBrowserInstanceGroupRequestPolicy& setNoOperationDisconnectTime(int32_t noOperationDisconnectTime) { DARABONBA_PTR_SET_VALUE(noOperationDisconnectTime_, noOperationDisconnectTime) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ModifyBrowserInstanceGroupRequestPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline string policyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
    inline ModifyBrowserInstanceGroupRequestPolicy& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // videoPolicy Field Functions 
    bool hasVideoPolicy() const { return this->videoPolicy_ != nullptr;};
    void deleteVideoPolicy() { this->videoPolicy_ = nullptr;};
    inline const Models::ModifyBrowserInstanceGroupRequestPolicyVideoPolicy & videoPolicy() const { DARABONBA_PTR_GET_CONST(videoPolicy_, Models::ModifyBrowserInstanceGroupRequestPolicyVideoPolicy) };
    inline Models::ModifyBrowserInstanceGroupRequestPolicyVideoPolicy videoPolicy() { DARABONBA_PTR_GET(videoPolicy_, Models::ModifyBrowserInstanceGroupRequestPolicyVideoPolicy) };
    inline ModifyBrowserInstanceGroupRequestPolicy& setVideoPolicy(const Models::ModifyBrowserInstanceGroupRequestPolicyVideoPolicy & videoPolicy) { DARABONBA_PTR_SET_VALUE(videoPolicy_, videoPolicy) };
    inline ModifyBrowserInstanceGroupRequestPolicy& setVideoPolicy(Models::ModifyBrowserInstanceGroupRequestPolicyVideoPolicy && videoPolicy) { DARABONBA_PTR_SET_RVALUE(videoPolicy_, videoPolicy) };


    // watermarkPolicy Field Functions 
    bool hasWatermarkPolicy() const { return this->watermarkPolicy_ != nullptr;};
    void deleteWatermarkPolicy() { this->watermarkPolicy_ = nullptr;};
    inline const Models::ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy & watermarkPolicy() const { DARABONBA_PTR_GET_CONST(watermarkPolicy_, Models::ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy) };
    inline Models::ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy watermarkPolicy() { DARABONBA_PTR_GET(watermarkPolicy_, Models::ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy) };
    inline ModifyBrowserInstanceGroupRequestPolicy& setWatermarkPolicy(const Models::ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy & watermarkPolicy) { DARABONBA_PTR_SET_VALUE(watermarkPolicy_, watermarkPolicy) };
    inline ModifyBrowserInstanceGroupRequestPolicy& setWatermarkPolicy(Models::ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy && watermarkPolicy) { DARABONBA_PTR_SET_RVALUE(watermarkPolicy_, watermarkPolicy) };


  protected:
    std::shared_ptr<Models::ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy> clipboardPolicy_ = nullptr;
    std::shared_ptr<string> disconnectKeepSession_ = nullptr;
    std::shared_ptr<int32_t> disconnectKeepSessionTime_ = nullptr;
    std::shared_ptr<string> html5FileTransfer_ = nullptr;
    std::shared_ptr<string> noOperationDisconnect_ = nullptr;
    std::shared_ptr<int32_t> noOperationDisconnectTime_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> policyVersion_ = nullptr;
    std::shared_ptr<Models::ModifyBrowserInstanceGroupRequestPolicyVideoPolicy> videoPolicy_ = nullptr;
    std::shared_ptr<Models::ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy> watermarkPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
