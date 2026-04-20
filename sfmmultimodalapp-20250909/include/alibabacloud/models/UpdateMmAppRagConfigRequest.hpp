// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMAPPRAGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMAPPRAGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateMmAppRagConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmAppRagConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(PromptStrategy, promptStrategy_);
      DARABONBA_PTR_TO_JSON(RetrieveMaxLength, retrieveMaxLength_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmAppRagConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(PromptStrategy, promptStrategy_);
      DARABONBA_PTR_FROM_JSON(RetrieveMaxLength, retrieveMaxLength_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateMmAppRagConfigRequest() = default ;
    UpdateMmAppRagConfigRequest(const UpdateMmAppRagConfigRequest &) = default ;
    UpdateMmAppRagConfigRequest(UpdateMmAppRagConfigRequest &&) = default ;
    UpdateMmAppRagConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmAppRagConfigRequest() = default ;
    UpdateMmAppRagConfigRequest& operator=(const UpdateMmAppRagConfigRequest &) = default ;
    UpdateMmAppRagConfigRequest& operator=(UpdateMmAppRagConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->promptStrategy_ == nullptr && this->retrieveMaxLength_ == nullptr && this->topK_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMmAppRagConfigRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // promptStrategy Field Functions 
    bool hasPromptStrategy() const { return this->promptStrategy_ != nullptr;};
    void deletePromptStrategy() { this->promptStrategy_ = nullptr;};
    inline string getPromptStrategy() const { DARABONBA_PTR_GET_DEFAULT(promptStrategy_, "") };
    inline UpdateMmAppRagConfigRequest& setPromptStrategy(string promptStrategy) { DARABONBA_PTR_SET_VALUE(promptStrategy_, promptStrategy) };


    // retrieveMaxLength Field Functions 
    bool hasRetrieveMaxLength() const { return this->retrieveMaxLength_ != nullptr;};
    void deleteRetrieveMaxLength() { this->retrieveMaxLength_ = nullptr;};
    inline int32_t getRetrieveMaxLength() const { DARABONBA_PTR_GET_DEFAULT(retrieveMaxLength_, 0) };
    inline UpdateMmAppRagConfigRequest& setRetrieveMaxLength(int32_t retrieveMaxLength) { DARABONBA_PTR_SET_VALUE(retrieveMaxLength_, retrieveMaxLength) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline UpdateMmAppRagConfigRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateMmAppRagConfigRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> promptStrategy_ {};
    // This parameter is required.
    shared_ptr<int32_t> retrieveMaxLength_ {};
    shared_ptr<int32_t> topK_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
