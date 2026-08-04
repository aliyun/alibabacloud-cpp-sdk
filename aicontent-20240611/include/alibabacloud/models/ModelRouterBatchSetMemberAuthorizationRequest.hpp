// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERBATCHSETMEMBERAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERBATCHSETMEMBERAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterBatchSetMemberAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterBatchSetMemberAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(allowedModelGroupConfig, allowedModelGroupConfig_);
      DARABONBA_PTR_TO_JSON(userIdList, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterBatchSetMemberAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(allowedModelGroupConfig, allowedModelGroupConfig_);
      DARABONBA_PTR_FROM_JSON(userIdList, userIdList_);
    };
    ModelRouterBatchSetMemberAuthorizationRequest() = default ;
    ModelRouterBatchSetMemberAuthorizationRequest(const ModelRouterBatchSetMemberAuthorizationRequest &) = default ;
    ModelRouterBatchSetMemberAuthorizationRequest(ModelRouterBatchSetMemberAuthorizationRequest &&) = default ;
    ModelRouterBatchSetMemberAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterBatchSetMemberAuthorizationRequest() = default ;
    ModelRouterBatchSetMemberAuthorizationRequest& operator=(const ModelRouterBatchSetMemberAuthorizationRequest &) = default ;
    ModelRouterBatchSetMemberAuthorizationRequest& operator=(ModelRouterBatchSetMemberAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedModelGroupConfig_ == nullptr
        && this->userIdList_ == nullptr; };
    // allowedModelGroupConfig Field Functions 
    bool hasAllowedModelGroupConfig() const { return this->allowedModelGroupConfig_ != nullptr;};
    void deleteAllowedModelGroupConfig() { this->allowedModelGroupConfig_ = nullptr;};
    inline string getAllowedModelGroupConfig() const { DARABONBA_PTR_GET_DEFAULT(allowedModelGroupConfig_, "") };
    inline ModelRouterBatchSetMemberAuthorizationRequest& setAllowedModelGroupConfig(string allowedModelGroupConfig) { DARABONBA_PTR_SET_VALUE(allowedModelGroupConfig_, allowedModelGroupConfig) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<int64_t> & getUserIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<int64_t>) };
    inline vector<int64_t> getUserIdList() { DARABONBA_PTR_GET(userIdList_, vector<int64_t>) };
    inline ModelRouterBatchSetMemberAuthorizationRequest& setUserIdList(const vector<int64_t> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline ModelRouterBatchSetMemberAuthorizationRequest& setUserIdList(vector<int64_t> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


  protected:
    // The authorization configuration. This parameter is a required JSON string that uses overwrite mode: {"model_ids":[...],"group_ids":["mg_xxx"]}. Internal key names use a fixed underscore style and are not converted to the camelCase convention of the API.
    shared_ptr<string> allowedModelGroupConfig_ {};
    // The list of user IDs. This parameter is required. You can specify 1 to 50 user IDs. If more than 50 user IDs are required, call this operation in batches. All users must be direct members of the specified department.
    shared_ptr<vector<int64_t>> userIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
