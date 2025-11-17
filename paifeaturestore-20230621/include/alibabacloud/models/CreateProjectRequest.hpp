// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CreateProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OfflineDatasourceId, offlineDatasourceId_);
      DARABONBA_PTR_TO_JSON(OfflineLifeCycle, offlineLifeCycle_);
      DARABONBA_PTR_TO_JSON(OnlineDatasourceId, onlineDatasourceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OfflineDatasourceId, offlineDatasourceId_);
      DARABONBA_PTR_FROM_JSON(OfflineLifeCycle, offlineLifeCycle_);
      DARABONBA_PTR_FROM_JSON(OnlineDatasourceId, onlineDatasourceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateProjectRequest() = default ;
    CreateProjectRequest(const CreateProjectRequest &) = default ;
    CreateProjectRequest(CreateProjectRequest &&) = default ;
    CreateProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectRequest() = default ;
    CreateProjectRequest& operator=(const CreateProjectRequest &) = default ;
    CreateProjectRequest& operator=(CreateProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->offlineDatasourceId_ == nullptr && return this->offlineLifeCycle_ == nullptr && return this->onlineDatasourceId_ == nullptr && return this->workspaceId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProjectRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProjectRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // offlineDatasourceId Field Functions 
    bool hasOfflineDatasourceId() const { return this->offlineDatasourceId_ != nullptr;};
    void deleteOfflineDatasourceId() { this->offlineDatasourceId_ = nullptr;};
    inline string offlineDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(offlineDatasourceId_, "") };
    inline CreateProjectRequest& setOfflineDatasourceId(string offlineDatasourceId) { DARABONBA_PTR_SET_VALUE(offlineDatasourceId_, offlineDatasourceId) };


    // offlineLifeCycle Field Functions 
    bool hasOfflineLifeCycle() const { return this->offlineLifeCycle_ != nullptr;};
    void deleteOfflineLifeCycle() { this->offlineLifeCycle_ = nullptr;};
    inline int32_t offlineLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(offlineLifeCycle_, 0) };
    inline CreateProjectRequest& setOfflineLifeCycle(int32_t offlineLifeCycle) { DARABONBA_PTR_SET_VALUE(offlineLifeCycle_, offlineLifeCycle) };


    // onlineDatasourceId Field Functions 
    bool hasOnlineDatasourceId() const { return this->onlineDatasourceId_ != nullptr;};
    void deleteOnlineDatasourceId() { this->onlineDatasourceId_ = nullptr;};
    inline string onlineDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(onlineDatasourceId_, "") };
    inline CreateProjectRequest& setOnlineDatasourceId(string onlineDatasourceId) { DARABONBA_PTR_SET_VALUE(onlineDatasourceId_, onlineDatasourceId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateProjectRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> offlineDatasourceId_ = nullptr;
    std::shared_ptr<int32_t> offlineLifeCycle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> onlineDatasourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
