// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIPSBUILDINRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLIPSBUILDINRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetClipsBuildInResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClipsBuildInResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClipsBuildInResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetClipsBuildInResourceRequest() = default ;
    GetClipsBuildInResourceRequest(const GetClipsBuildInResourceRequest &) = default ;
    GetClipsBuildInResourceRequest(GetClipsBuildInResourceRequest &&) = default ;
    GetClipsBuildInResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClipsBuildInResourceRequest() = default ;
    GetClipsBuildInResourceRequest& operator=(const GetClipsBuildInResourceRequest &) = default ;
    GetClipsBuildInResourceRequest& operator=(GetClipsBuildInResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr
        && this->workspaceId_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline GetClipsBuildInResourceRequest& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetClipsBuildInResourceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int32_t> resourceType_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
