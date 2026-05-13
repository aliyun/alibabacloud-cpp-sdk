// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACECODEPUBLISHSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACECODEPUBLISHSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetWorkspaceCodePublishSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceCodePublishSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceCodePublishSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetWorkspaceCodePublishSettingRequest() = default ;
    GetWorkspaceCodePublishSettingRequest(const GetWorkspaceCodePublishSettingRequest &) = default ;
    GetWorkspaceCodePublishSettingRequest(GetWorkspaceCodePublishSettingRequest &&) = default ;
    GetWorkspaceCodePublishSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceCodePublishSettingRequest() = default ;
    GetWorkspaceCodePublishSettingRequest& operator=(const GetWorkspaceCodePublishSettingRequest &) = default ;
    GetWorkspaceCodePublishSettingRequest& operator=(GetWorkspaceCodePublishSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetWorkspaceCodePublishSettingRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
