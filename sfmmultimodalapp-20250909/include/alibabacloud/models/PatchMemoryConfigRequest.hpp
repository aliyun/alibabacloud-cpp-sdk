// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHMEMORYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PATCHMEMORYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class PatchMemoryConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchMemoryConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AutoUpdate, autoUpdate_);
      DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, PatchMemoryConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AutoUpdate, autoUpdate_);
      DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    PatchMemoryConfigRequest() = default ;
    PatchMemoryConfigRequest(const PatchMemoryConfigRequest &) = default ;
    PatchMemoryConfigRequest(PatchMemoryConfigRequest &&) = default ;
    PatchMemoryConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchMemoryConfigRequest() = default ;
    PatchMemoryConfigRequest& operator=(const PatchMemoryConfigRequest &) = default ;
    PatchMemoryConfigRequest& operator=(PatchMemoryConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->autoUpdate_ == nullptr && this->expirationTime_ == nullptr && this->prompt_ == nullptr && this->threshold_ == nullptr && this->topK_ == nullptr
        && this->userDefinedId_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PatchMemoryConfigRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // autoUpdate Field Functions 
    bool hasAutoUpdate() const { return this->autoUpdate_ != nullptr;};
    void deleteAutoUpdate() { this->autoUpdate_ = nullptr;};
    inline bool getAutoUpdate() const { DARABONBA_PTR_GET_DEFAULT(autoUpdate_, false) };
    inline PatchMemoryConfigRequest& setAutoUpdate(bool autoUpdate) { DARABONBA_PTR_SET_VALUE(autoUpdate_, autoUpdate) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int32_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0) };
    inline PatchMemoryConfigRequest& setExpirationTime(int32_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline PatchMemoryConfigRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline PatchMemoryConfigRequest& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline PatchMemoryConfigRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // userDefinedId Field Functions 
    bool hasUserDefinedId() const { return this->userDefinedId_ != nullptr;};
    void deleteUserDefinedId() { this->userDefinedId_ = nullptr;};
    inline string getUserDefinedId() const { DARABONBA_PTR_GET_DEFAULT(userDefinedId_, "") };
    inline PatchMemoryConfigRequest& setUserDefinedId(string userDefinedId) { DARABONBA_PTR_SET_VALUE(userDefinedId_, userDefinedId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline PatchMemoryConfigRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<bool> autoUpdate_ {};
    shared_ptr<int32_t> expirationTime_ {};
    shared_ptr<string> prompt_ {};
    shared_ptr<double> threshold_ {};
    shared_ptr<int32_t> topK_ {};
    shared_ptr<string> userDefinedId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
