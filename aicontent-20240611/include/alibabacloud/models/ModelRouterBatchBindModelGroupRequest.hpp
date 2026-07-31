// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERBATCHBINDMODELGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERBATCHBINDMODELGROUPREQUEST_HPP_
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
  class ModelRouterBatchBindModelGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterBatchBindModelGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(allowedModelGroupConfig, allowedModelGroupConfig_);
      DARABONBA_PTR_TO_JSON(clientIdList, clientIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterBatchBindModelGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(allowedModelGroupConfig, allowedModelGroupConfig_);
      DARABONBA_PTR_FROM_JSON(clientIdList, clientIdList_);
    };
    ModelRouterBatchBindModelGroupRequest() = default ;
    ModelRouterBatchBindModelGroupRequest(const ModelRouterBatchBindModelGroupRequest &) = default ;
    ModelRouterBatchBindModelGroupRequest(ModelRouterBatchBindModelGroupRequest &&) = default ;
    ModelRouterBatchBindModelGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterBatchBindModelGroupRequest() = default ;
    ModelRouterBatchBindModelGroupRequest& operator=(const ModelRouterBatchBindModelGroupRequest &) = default ;
    ModelRouterBatchBindModelGroupRequest& operator=(ModelRouterBatchBindModelGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedModelGroupConfig_ == nullptr
        && this->clientIdList_ == nullptr; };
    // allowedModelGroupConfig Field Functions 
    bool hasAllowedModelGroupConfig() const { return this->allowedModelGroupConfig_ != nullptr;};
    void deleteAllowedModelGroupConfig() { this->allowedModelGroupConfig_ = nullptr;};
    inline string getAllowedModelGroupConfig() const { DARABONBA_PTR_GET_DEFAULT(allowedModelGroupConfig_, "") };
    inline ModelRouterBatchBindModelGroupRequest& setAllowedModelGroupConfig(string allowedModelGroupConfig) { DARABONBA_PTR_SET_VALUE(allowedModelGroupConfig_, allowedModelGroupConfig) };


    // clientIdList Field Functions 
    bool hasClientIdList() const { return this->clientIdList_ != nullptr;};
    void deleteClientIdList() { this->clientIdList_ = nullptr;};
    inline const vector<int64_t> & getClientIdList() const { DARABONBA_PTR_GET_CONST(clientIdList_, vector<int64_t>) };
    inline vector<int64_t> getClientIdList() { DARABONBA_PTR_GET(clientIdList_, vector<int64_t>) };
    inline ModelRouterBatchBindModelGroupRequest& setClientIdList(const vector<int64_t> & clientIdList) { DARABONBA_PTR_SET_VALUE(clientIdList_, clientIdList) };
    inline ModelRouterBatchBindModelGroupRequest& setClientIdList(vector<int64_t> && clientIdList) { DARABONBA_PTR_SET_RVALUE(clientIdList_, clientIdList) };


  protected:
    // The authorization configuration (JSON string). Internal key names use a fixed underscore style: {"model_ids":[...],"group_ids":["mg_xxx"]}
    // 
    // This parameter is required.
    shared_ptr<string> allowedModelGroupConfig_ {};
    // The array of department IDs. You can specify 1 to 50 IDs. If more than 50, call this operation in batches.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> clientIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
