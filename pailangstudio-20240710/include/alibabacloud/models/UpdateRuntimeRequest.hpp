// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERUNTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERUNTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class UpdateRuntimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuntimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(AutoUpdateImage, autoUpdateImage_);
      DARABONBA_PTR_TO_JSON(RunTimeout, runTimeout_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuntimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(AutoUpdateImage, autoUpdateImage_);
      DARABONBA_PTR_FROM_JSON(RunTimeout, runTimeout_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateRuntimeRequest() = default ;
    UpdateRuntimeRequest(const UpdateRuntimeRequest &) = default ;
    UpdateRuntimeRequest(UpdateRuntimeRequest &&) = default ;
    UpdateRuntimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuntimeRequest() = default ;
    UpdateRuntimeRequest& operator=(const UpdateRuntimeRequest &) = default ;
    UpdateRuntimeRequest& operator=(UpdateRuntimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->autoUpdateImage_ == nullptr && this->runTimeout_ == nullptr && this->version_ == nullptr && this->workspaceId_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline UpdateRuntimeRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // autoUpdateImage Field Functions 
    bool hasAutoUpdateImage() const { return this->autoUpdateImage_ != nullptr;};
    void deleteAutoUpdateImage() { this->autoUpdateImage_ = nullptr;};
    inline bool getAutoUpdateImage() const { DARABONBA_PTR_GET_DEFAULT(autoUpdateImage_, false) };
    inline UpdateRuntimeRequest& setAutoUpdateImage(bool autoUpdateImage) { DARABONBA_PTR_SET_VALUE(autoUpdateImage_, autoUpdateImage) };


    // runTimeout Field Functions 
    bool hasRunTimeout() const { return this->runTimeout_ != nullptr;};
    void deleteRunTimeout() { this->runTimeout_ = nullptr;};
    inline int32_t getRunTimeout() const { DARABONBA_PTR_GET_DEFAULT(runTimeout_, 0) };
    inline UpdateRuntimeRequest& setRunTimeout(int32_t runTimeout) { DARABONBA_PTR_SET_VALUE(runTimeout_, runTimeout) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpdateRuntimeRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateRuntimeRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Runtime operation. Valid values:
    // 
    // *   Start: Startup runtime
    // *   Stop: Stop runtime
    shared_ptr<string> action_ {};
    shared_ptr<bool> autoUpdateImage_ {};
    // Timeout in seconds for a single test executed on the runtime.
    shared_ptr<int32_t> runTimeout_ {};
    // Runtime image version.
    shared_ptr<string> version_ {};
    // The ID of the DataWorks workspace. To obtain the workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
