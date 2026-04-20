// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMAPPRAGWEIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMAPPRAGWEIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateMmAppRagWeightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmAppRagWeightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(RankWeights, rankWeights_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmAppRagWeightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(RankWeights, rankWeights_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateMmAppRagWeightRequest() = default ;
    UpdateMmAppRagWeightRequest(const UpdateMmAppRagWeightRequest &) = default ;
    UpdateMmAppRagWeightRequest(UpdateMmAppRagWeightRequest &&) = default ;
    UpdateMmAppRagWeightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmAppRagWeightRequest() = default ;
    UpdateMmAppRagWeightRequest& operator=(const UpdateMmAppRagWeightRequest &) = default ;
    UpdateMmAppRagWeightRequest& operator=(UpdateMmAppRagWeightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->rankWeights_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMmAppRagWeightRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // rankWeights Field Functions 
    bool hasRankWeights() const { return this->rankWeights_ != nullptr;};
    void deleteRankWeights() { this->rankWeights_ = nullptr;};
    inline const map<string, double> & getRankWeights() const { DARABONBA_PTR_GET_CONST(rankWeights_, map<string, double>) };
    inline map<string, double> getRankWeights() { DARABONBA_PTR_GET(rankWeights_, map<string, double>) };
    inline UpdateMmAppRagWeightRequest& setRankWeights(const map<string, double> & rankWeights) { DARABONBA_PTR_SET_VALUE(rankWeights_, rankWeights) };
    inline UpdateMmAppRagWeightRequest& setRankWeights(map<string, double> && rankWeights) { DARABONBA_PTR_SET_RVALUE(rankWeights_, rankWeights) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateMmAppRagWeightRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<map<string, double>> rankWeights_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
