// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTRESOURCEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTRESOURCEPERMISSIONREQUEST_HPP_
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
  class GrantResourcePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantResourcePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GrantCommand, grantCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantResourcePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantCommand, grantCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GrantResourcePermissionRequest() = default ;
    GrantResourcePermissionRequest(const GrantResourcePermissionRequest &) = default ;
    GrantResourcePermissionRequest(GrantResourcePermissionRequest &&) = default ;
    GrantResourcePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantResourcePermissionRequest() = default ;
    GrantResourcePermissionRequest& operator=(const GrantResourcePermissionRequest &) = default ;
    GrantResourcePermissionRequest& operator=(GrantResourcePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GrantCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GrantCommand& obj) { 
        DARABONBA_PTR_TO_JSON(EffectiveEnd, effectiveEnd_);
        DARABONBA_PTR_TO_JSON(OperateList, operateList_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
      };
      friend void from_json(const Darabonba::Json& j, GrantCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(EffectiveEnd, effectiveEnd_);
        DARABONBA_PTR_FROM_JSON(OperateList, operateList_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
      };
      GrantCommand() = default ;
      GrantCommand(const GrantCommand &) = default ;
      GrantCommand(GrantCommand &&) = default ;
      GrantCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GrantCommand() = default ;
      GrantCommand& operator=(const GrantCommand &) = default ;
      GrantCommand& operator=(GrantCommand &&) = default ;
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

      virtual bool empty() const override { return this->effectiveEnd_ == nullptr
        && this->operateList_ == nullptr && this->reason_ == nullptr && this->resourceList_ == nullptr && this->resourceType_ == nullptr && this->userIdList_ == nullptr; };
      // effectiveEnd Field Functions 
      bool hasEffectiveEnd() const { return this->effectiveEnd_ != nullptr;};
      void deleteEffectiveEnd() { this->effectiveEnd_ = nullptr;};
      inline string getEffectiveEnd() const { DARABONBA_PTR_GET_DEFAULT(effectiveEnd_, "") };
      inline GrantCommand& setEffectiveEnd(string effectiveEnd) { DARABONBA_PTR_SET_VALUE(effectiveEnd_, effectiveEnd) };


      // operateList Field Functions 
      bool hasOperateList() const { return this->operateList_ != nullptr;};
      void deleteOperateList() { this->operateList_ = nullptr;};
      inline const vector<string> & getOperateList() const { DARABONBA_PTR_GET_CONST(operateList_, vector<string>) };
      inline vector<string> getOperateList() { DARABONBA_PTR_GET(operateList_, vector<string>) };
      inline GrantCommand& setOperateList(const vector<string> & operateList) { DARABONBA_PTR_SET_VALUE(operateList_, operateList) };
      inline GrantCommand& setOperateList(vector<string> && operateList) { DARABONBA_PTR_SET_RVALUE(operateList_, operateList) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline GrantCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // resourceList Field Functions 
      bool hasResourceList() const { return this->resourceList_ != nullptr;};
      void deleteResourceList() { this->resourceList_ = nullptr;};
      inline const vector<GrantCommand::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<GrantCommand::ResourceList>) };
      inline vector<GrantCommand::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<GrantCommand::ResourceList>) };
      inline GrantCommand& setResourceList(const vector<GrantCommand::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
      inline GrantCommand& setResourceList(vector<GrantCommand::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline GrantCommand& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // userIdList Field Functions 
      bool hasUserIdList() const { return this->userIdList_ != nullptr;};
      void deleteUserIdList() { this->userIdList_ = nullptr;};
      inline const vector<string> & getUserIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
      inline vector<string> getUserIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
      inline GrantCommand& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
      inline GrantCommand& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


    protected:
      // This parameter is required.
      shared_ptr<string> effectiveEnd_ {};
      // This parameter is required.
      shared_ptr<vector<string>> operateList_ {};
      shared_ptr<string> reason_ {};
      // This parameter is required.
      shared_ptr<vector<GrantCommand::ResourceList>> resourceList_ {};
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
      // This parameter is required.
      shared_ptr<vector<string>> userIdList_ {};
    };

    virtual bool empty() const override { return this->grantCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // grantCommand Field Functions 
    bool hasGrantCommand() const { return this->grantCommand_ != nullptr;};
    void deleteGrantCommand() { this->grantCommand_ = nullptr;};
    inline const GrantResourcePermissionRequest::GrantCommand & getGrantCommand() const { DARABONBA_PTR_GET_CONST(grantCommand_, GrantResourcePermissionRequest::GrantCommand) };
    inline GrantResourcePermissionRequest::GrantCommand getGrantCommand() { DARABONBA_PTR_GET(grantCommand_, GrantResourcePermissionRequest::GrantCommand) };
    inline GrantResourcePermissionRequest& setGrantCommand(const GrantResourcePermissionRequest::GrantCommand & grantCommand) { DARABONBA_PTR_SET_VALUE(grantCommand_, grantCommand) };
    inline GrantResourcePermissionRequest& setGrantCommand(GrantResourcePermissionRequest::GrantCommand && grantCommand) { DARABONBA_PTR_SET_RVALUE(grantCommand_, grantCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GrantResourcePermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<GrantResourcePermissionRequest::GrantCommand> grantCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
