// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MMAPPBINDINGMCPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MMAPPBINDINGMCPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class MmAppBindingMcpShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MmAppBindingMcpShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Mcps, mcpsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, MmAppBindingMcpShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Mcps, mcpsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    MmAppBindingMcpShrinkRequest() = default ;
    MmAppBindingMcpShrinkRequest(const MmAppBindingMcpShrinkRequest &) = default ;
    MmAppBindingMcpShrinkRequest(MmAppBindingMcpShrinkRequest &&) = default ;
    MmAppBindingMcpShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MmAppBindingMcpShrinkRequest() = default ;
    MmAppBindingMcpShrinkRequest& operator=(const MmAppBindingMcpShrinkRequest &) = default ;
    MmAppBindingMcpShrinkRequest& operator=(MmAppBindingMcpShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->mcpsShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline MmAppBindingMcpShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // mcpsShrink Field Functions 
    bool hasMcpsShrink() const { return this->mcpsShrink_ != nullptr;};
    void deleteMcpsShrink() { this->mcpsShrink_ = nullptr;};
    inline string getMcpsShrink() const { DARABONBA_PTR_GET_DEFAULT(mcpsShrink_, "") };
    inline MmAppBindingMcpShrinkRequest& setMcpsShrink(string mcpsShrink) { DARABONBA_PTR_SET_VALUE(mcpsShrink_, mcpsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline MmAppBindingMcpShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> mcpsShrink_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
