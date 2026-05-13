// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKSPACECODEPUBLISHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WORKSPACECODEPUBLISHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class WorkspaceCodePublishRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WorkspaceCodePublishRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, WorkspaceCodePublishRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    WorkspaceCodePublishRequest() = default ;
    WorkspaceCodePublishRequest(const WorkspaceCodePublishRequest &) = default ;
    WorkspaceCodePublishRequest(WorkspaceCodePublishRequest &&) = default ;
    WorkspaceCodePublishRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WorkspaceCodePublishRequest() = default ;
    WorkspaceCodePublishRequest& operator=(const WorkspaceCodePublishRequest &) = default ;
    WorkspaceCodePublishRequest& operator=(WorkspaceCodePublishRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->workspaceId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline WorkspaceCodePublishRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline WorkspaceCodePublishRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> config_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
