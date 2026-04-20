// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMAPPRAGWEIGHTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMAPPRAGWEIGHTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateMmAppRagWeightShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmAppRagWeightShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(RankWeights, rankWeightsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmAppRagWeightShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(RankWeights, rankWeightsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateMmAppRagWeightShrinkRequest() = default ;
    UpdateMmAppRagWeightShrinkRequest(const UpdateMmAppRagWeightShrinkRequest &) = default ;
    UpdateMmAppRagWeightShrinkRequest(UpdateMmAppRagWeightShrinkRequest &&) = default ;
    UpdateMmAppRagWeightShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmAppRagWeightShrinkRequest() = default ;
    UpdateMmAppRagWeightShrinkRequest& operator=(const UpdateMmAppRagWeightShrinkRequest &) = default ;
    UpdateMmAppRagWeightShrinkRequest& operator=(UpdateMmAppRagWeightShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->rankWeightsShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMmAppRagWeightShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // rankWeightsShrink Field Functions 
    bool hasRankWeightsShrink() const { return this->rankWeightsShrink_ != nullptr;};
    void deleteRankWeightsShrink() { this->rankWeightsShrink_ = nullptr;};
    inline string getRankWeightsShrink() const { DARABONBA_PTR_GET_DEFAULT(rankWeightsShrink_, "") };
    inline UpdateMmAppRagWeightShrinkRequest& setRankWeightsShrink(string rankWeightsShrink) { DARABONBA_PTR_SET_VALUE(rankWeightsShrink_, rankWeightsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateMmAppRagWeightShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> rankWeightsShrink_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
