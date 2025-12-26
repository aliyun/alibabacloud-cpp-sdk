// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateKnowledgeBaseRequestAutoUpdateConfig.hpp>
#include <alibabacloud/models/UpdateKnowledgeBaseRequestMetaDataConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class UpdateKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUpdateConfig, autoUpdateConfig_);
      DARABONBA_PTR_TO_JSON(BindRuntime, bindRuntime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MetaDataConfig, metaDataConfig_);
      DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUpdateConfig, autoUpdateConfig_);
      DARABONBA_PTR_FROM_JSON(BindRuntime, bindRuntime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MetaDataConfig, metaDataConfig_);
      DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateKnowledgeBaseRequest() = default ;
    UpdateKnowledgeBaseRequest(const UpdateKnowledgeBaseRequest &) = default ;
    UpdateKnowledgeBaseRequest(UpdateKnowledgeBaseRequest &&) = default ;
    UpdateKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseRequest() = default ;
    UpdateKnowledgeBaseRequest& operator=(const UpdateKnowledgeBaseRequest &) = default ;
    UpdateKnowledgeBaseRequest& operator=(UpdateKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUpdateConfig_ == nullptr
        && return this->bindRuntime_ == nullptr && return this->description_ == nullptr && return this->metaDataConfig_ == nullptr && return this->runtimeId_ == nullptr && return this->workspaceId_ == nullptr; };
    // autoUpdateConfig Field Functions 
    bool hasAutoUpdateConfig() const { return this->autoUpdateConfig_ != nullptr;};
    void deleteAutoUpdateConfig() { this->autoUpdateConfig_ = nullptr;};
    inline const UpdateKnowledgeBaseRequestAutoUpdateConfig & autoUpdateConfig() const { DARABONBA_PTR_GET_CONST(autoUpdateConfig_, UpdateKnowledgeBaseRequestAutoUpdateConfig) };
    inline UpdateKnowledgeBaseRequestAutoUpdateConfig autoUpdateConfig() { DARABONBA_PTR_GET(autoUpdateConfig_, UpdateKnowledgeBaseRequestAutoUpdateConfig) };
    inline UpdateKnowledgeBaseRequest& setAutoUpdateConfig(const UpdateKnowledgeBaseRequestAutoUpdateConfig & autoUpdateConfig) { DARABONBA_PTR_SET_VALUE(autoUpdateConfig_, autoUpdateConfig) };
    inline UpdateKnowledgeBaseRequest& setAutoUpdateConfig(UpdateKnowledgeBaseRequestAutoUpdateConfig && autoUpdateConfig) { DARABONBA_PTR_SET_RVALUE(autoUpdateConfig_, autoUpdateConfig) };


    // bindRuntime Field Functions 
    bool hasBindRuntime() const { return this->bindRuntime_ != nullptr;};
    void deleteBindRuntime() { this->bindRuntime_ = nullptr;};
    inline bool bindRuntime() const { DARABONBA_PTR_GET_DEFAULT(bindRuntime_, false) };
    inline UpdateKnowledgeBaseRequest& setBindRuntime(bool bindRuntime) { DARABONBA_PTR_SET_VALUE(bindRuntime_, bindRuntime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateKnowledgeBaseRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metaDataConfig Field Functions 
    bool hasMetaDataConfig() const { return this->metaDataConfig_ != nullptr;};
    void deleteMetaDataConfig() { this->metaDataConfig_ = nullptr;};
    inline const UpdateKnowledgeBaseRequestMetaDataConfig & metaDataConfig() const { DARABONBA_PTR_GET_CONST(metaDataConfig_, UpdateKnowledgeBaseRequestMetaDataConfig) };
    inline UpdateKnowledgeBaseRequestMetaDataConfig metaDataConfig() { DARABONBA_PTR_GET(metaDataConfig_, UpdateKnowledgeBaseRequestMetaDataConfig) };
    inline UpdateKnowledgeBaseRequest& setMetaDataConfig(const UpdateKnowledgeBaseRequestMetaDataConfig & metaDataConfig) { DARABONBA_PTR_SET_VALUE(metaDataConfig_, metaDataConfig) };
    inline UpdateKnowledgeBaseRequest& setMetaDataConfig(UpdateKnowledgeBaseRequestMetaDataConfig && metaDataConfig) { DARABONBA_PTR_SET_RVALUE(metaDataConfig_, metaDataConfig) };


    // runtimeId Field Functions 
    bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
    void deleteRuntimeId() { this->runtimeId_ = nullptr;};
    inline string runtimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
    inline UpdateKnowledgeBaseRequest& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateKnowledgeBaseRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<UpdateKnowledgeBaseRequestAutoUpdateConfig> autoUpdateConfig_ = nullptr;
    std::shared_ptr<bool> bindRuntime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<UpdateKnowledgeBaseRequestMetaDataConfig> metaDataConfig_ = nullptr;
    std::shared_ptr<string> runtimeId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
