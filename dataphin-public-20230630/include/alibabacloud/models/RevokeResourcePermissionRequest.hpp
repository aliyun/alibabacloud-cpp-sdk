// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKERESOURCEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKERESOURCEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RevokeResourcePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeResourcePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RevokeCommand, revokeCommand_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeResourcePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RevokeCommand, revokeCommand_);
    };
    RevokeResourcePermissionRequest() = default ;
    RevokeResourcePermissionRequest(const RevokeResourcePermissionRequest &) = default ;
    RevokeResourcePermissionRequest(RevokeResourcePermissionRequest &&) = default ;
    RevokeResourcePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeResourcePermissionRequest() = default ;
    RevokeResourcePermissionRequest& operator=(const RevokeResourcePermissionRequest &) = default ;
    RevokeResourcePermissionRequest& operator=(RevokeResourcePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RevokeCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RevokeCommand& obj) { 
        DARABONBA_PTR_TO_JSON(OperateList, operateList_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, RevokeCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(OperateList, operateList_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      RevokeCommand() = default ;
      RevokeCommand(const RevokeCommand &) = default ;
      RevokeCommand(RevokeCommand &&) = default ;
      RevokeCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RevokeCommand() = default ;
      RevokeCommand& operator=(const RevokeCommand &) = default ;
      RevokeCommand& operator=(RevokeCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        };
        ResourceList() = default ;
        ResourceList(const ResourceList &) = default ;
        ResourceList(ResourceList &&) = default ;
        ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceList() = default ;
        ResourceList& operator=(const ResourceList &) = default ;
        ResourceList& operator=(ResourceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceId_ == nullptr; };
        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline ResourceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      protected:
        shared_ptr<string> resourceId_ {};
      };

      virtual bool empty() const override { return this->operateList_ == nullptr
        && this->reason_ == nullptr && this->resourceList_ == nullptr && this->resourceType_ == nullptr && this->userId_ == nullptr; };
      // operateList Field Functions 
      bool hasOperateList() const { return this->operateList_ != nullptr;};
      void deleteOperateList() { this->operateList_ = nullptr;};
      inline const vector<string> & getOperateList() const { DARABONBA_PTR_GET_CONST(operateList_, vector<string>) };
      inline vector<string> getOperateList() { DARABONBA_PTR_GET(operateList_, vector<string>) };
      inline RevokeCommand& setOperateList(const vector<string> & operateList) { DARABONBA_PTR_SET_VALUE(operateList_, operateList) };
      inline RevokeCommand& setOperateList(vector<string> && operateList) { DARABONBA_PTR_SET_RVALUE(operateList_, operateList) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline RevokeCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // resourceList Field Functions 
      bool hasResourceList() const { return this->resourceList_ != nullptr;};
      void deleteResourceList() { this->resourceList_ = nullptr;};
      inline const vector<RevokeCommand::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<RevokeCommand::ResourceList>) };
      inline vector<RevokeCommand::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<RevokeCommand::ResourceList>) };
      inline RevokeCommand& setResourceList(const vector<RevokeCommand::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
      inline RevokeCommand& setResourceList(vector<RevokeCommand::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline RevokeCommand& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline RevokeCommand& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<vector<string>> operateList_ {};
      shared_ptr<string> reason_ {};
      // This parameter is required.
      shared_ptr<vector<RevokeCommand::ResourceList>> resourceList_ {};
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
      // This parameter is required.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->revokeCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RevokeResourcePermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // revokeCommand Field Functions 
    bool hasRevokeCommand() const { return this->revokeCommand_ != nullptr;};
    void deleteRevokeCommand() { this->revokeCommand_ = nullptr;};
    inline const RevokeResourcePermissionRequest::RevokeCommand & getRevokeCommand() const { DARABONBA_PTR_GET_CONST(revokeCommand_, RevokeResourcePermissionRequest::RevokeCommand) };
    inline RevokeResourcePermissionRequest::RevokeCommand getRevokeCommand() { DARABONBA_PTR_GET(revokeCommand_, RevokeResourcePermissionRequest::RevokeCommand) };
    inline RevokeResourcePermissionRequest& setRevokeCommand(const RevokeResourcePermissionRequest::RevokeCommand & revokeCommand) { DARABONBA_PTR_SET_VALUE(revokeCommand_, revokeCommand) };
    inline RevokeResourcePermissionRequest& setRevokeCommand(RevokeResourcePermissionRequest::RevokeCommand && revokeCommand) { DARABONBA_PTR_SET_RVALUE(revokeCommand_, revokeCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<RevokeResourcePermissionRequest::RevokeCommand> revokeCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
