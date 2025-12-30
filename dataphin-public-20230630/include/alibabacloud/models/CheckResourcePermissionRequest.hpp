// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRESOURCEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKRESOURCEPERMISSIONREQUEST_HPP_
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
  class CheckResourcePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckResourcePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCommand, checkCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckResourcePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCommand, checkCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CheckResourcePermissionRequest() = default ;
    CheckResourcePermissionRequest(const CheckResourcePermissionRequest &) = default ;
    CheckResourcePermissionRequest(CheckResourcePermissionRequest &&) = default ;
    CheckResourcePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckResourcePermissionRequest() = default ;
    CheckResourcePermissionRequest& operator=(const CheckResourcePermissionRequest &) = default ;
    CheckResourcePermissionRequest& operator=(CheckResourcePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Operate, operate_);
        DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, CheckCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Operate, operate_);
        DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      CheckCommand() = default ;
      CheckCommand(const CheckCommand &) = default ;
      CheckCommand(CheckCommand &&) = default ;
      CheckCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckCommand() = default ;
      CheckCommand& operator=(const CheckCommand &) = default ;
      CheckCommand& operator=(CheckCommand &&) = default ;
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
        // This parameter is required.
        shared_ptr<string> resourceId_ {};
      };

      virtual bool empty() const override { return this->operate_ == nullptr
        && this->resourceList_ == nullptr && this->resourceType_ == nullptr && this->userId_ == nullptr; };
      // operate Field Functions 
      bool hasOperate() const { return this->operate_ != nullptr;};
      void deleteOperate() { this->operate_ = nullptr;};
      inline string getOperate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
      inline CheckCommand& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


      // resourceList Field Functions 
      bool hasResourceList() const { return this->resourceList_ != nullptr;};
      void deleteResourceList() { this->resourceList_ = nullptr;};
      inline const vector<CheckCommand::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<CheckCommand::ResourceList>) };
      inline vector<CheckCommand::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<CheckCommand::ResourceList>) };
      inline CheckCommand& setResourceList(const vector<CheckCommand::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
      inline CheckCommand& setResourceList(vector<CheckCommand::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline CheckCommand& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline CheckCommand& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // This parameter is required.
      shared_ptr<string> operate_ {};
      // This parameter is required.
      shared_ptr<vector<CheckCommand::ResourceList>> resourceList_ {};
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
      // This parameter is required.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->checkCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // checkCommand Field Functions 
    bool hasCheckCommand() const { return this->checkCommand_ != nullptr;};
    void deleteCheckCommand() { this->checkCommand_ = nullptr;};
    inline const CheckResourcePermissionRequest::CheckCommand & getCheckCommand() const { DARABONBA_PTR_GET_CONST(checkCommand_, CheckResourcePermissionRequest::CheckCommand) };
    inline CheckResourcePermissionRequest::CheckCommand getCheckCommand() { DARABONBA_PTR_GET(checkCommand_, CheckResourcePermissionRequest::CheckCommand) };
    inline CheckResourcePermissionRequest& setCheckCommand(const CheckResourcePermissionRequest::CheckCommand & checkCommand) { DARABONBA_PTR_SET_VALUE(checkCommand_, checkCommand) };
    inline CheckResourcePermissionRequest& setCheckCommand(CheckResourcePermissionRequest::CheckCommand && checkCommand) { DARABONBA_PTR_SET_RVALUE(checkCommand_, checkCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CheckResourcePermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CheckResourcePermissionRequest::CheckCommand> checkCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
