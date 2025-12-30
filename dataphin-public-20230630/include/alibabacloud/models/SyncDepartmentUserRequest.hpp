// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDEPARTMENTUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCDEPARTMENTUSERREQUEST_HPP_
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
  class SyncDepartmentUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncDepartmentUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SyncDepartmentUserCommand, syncDepartmentUserCommand_);
    };
    friend void from_json(const Darabonba::Json& j, SyncDepartmentUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SyncDepartmentUserCommand, syncDepartmentUserCommand_);
    };
    SyncDepartmentUserRequest() = default ;
    SyncDepartmentUserRequest(const SyncDepartmentUserRequest &) = default ;
    SyncDepartmentUserRequest(SyncDepartmentUserRequest &&) = default ;
    SyncDepartmentUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncDepartmentUserRequest() = default ;
    SyncDepartmentUserRequest& operator=(const SyncDepartmentUserRequest &) = default ;
    SyncDepartmentUserRequest& operator=(SyncDepartmentUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SyncDepartmentUserCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SyncDepartmentUserCommand& obj) { 
        DARABONBA_PTR_TO_JSON(DeptUserMapping, deptUserMapping_);
      };
      friend void from_json(const Darabonba::Json& j, SyncDepartmentUserCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(DeptUserMapping, deptUserMapping_);
      };
      SyncDepartmentUserCommand() = default ;
      SyncDepartmentUserCommand(const SyncDepartmentUserCommand &) = default ;
      SyncDepartmentUserCommand(SyncDepartmentUserCommand &&) = default ;
      SyncDepartmentUserCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SyncDepartmentUserCommand() = default ;
      SyncDepartmentUserCommand& operator=(const SyncDepartmentUserCommand &) = default ;
      SyncDepartmentUserCommand& operator=(SyncDepartmentUserCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeptUserMapping : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeptUserMapping& obj) { 
          DARABONBA_PTR_TO_JSON(DepartmentIdList, departmentIdList_);
          DARABONBA_PTR_TO_JSON(SourceUserId, sourceUserId_);
        };
        friend void from_json(const Darabonba::Json& j, DeptUserMapping& obj) { 
          DARABONBA_PTR_FROM_JSON(DepartmentIdList, departmentIdList_);
          DARABONBA_PTR_FROM_JSON(SourceUserId, sourceUserId_);
        };
        DeptUserMapping() = default ;
        DeptUserMapping(const DeptUserMapping &) = default ;
        DeptUserMapping(DeptUserMapping &&) = default ;
        DeptUserMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeptUserMapping() = default ;
        DeptUserMapping& operator=(const DeptUserMapping &) = default ;
        DeptUserMapping& operator=(DeptUserMapping &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->departmentIdList_ == nullptr
        && this->sourceUserId_ == nullptr; };
        // departmentIdList Field Functions 
        bool hasDepartmentIdList() const { return this->departmentIdList_ != nullptr;};
        void deleteDepartmentIdList() { this->departmentIdList_ = nullptr;};
        inline const vector<string> & getDepartmentIdList() const { DARABONBA_PTR_GET_CONST(departmentIdList_, vector<string>) };
        inline vector<string> getDepartmentIdList() { DARABONBA_PTR_GET(departmentIdList_, vector<string>) };
        inline DeptUserMapping& setDepartmentIdList(const vector<string> & departmentIdList) { DARABONBA_PTR_SET_VALUE(departmentIdList_, departmentIdList) };
        inline DeptUserMapping& setDepartmentIdList(vector<string> && departmentIdList) { DARABONBA_PTR_SET_RVALUE(departmentIdList_, departmentIdList) };


        // sourceUserId Field Functions 
        bool hasSourceUserId() const { return this->sourceUserId_ != nullptr;};
        void deleteSourceUserId() { this->sourceUserId_ = nullptr;};
        inline string getSourceUserId() const { DARABONBA_PTR_GET_DEFAULT(sourceUserId_, "") };
        inline DeptUserMapping& setSourceUserId(string sourceUserId) { DARABONBA_PTR_SET_VALUE(sourceUserId_, sourceUserId) };


      protected:
        shared_ptr<vector<string>> departmentIdList_ {};
        // This parameter is required.
        shared_ptr<string> sourceUserId_ {};
      };

      virtual bool empty() const override { return this->deptUserMapping_ == nullptr; };
      // deptUserMapping Field Functions 
      bool hasDeptUserMapping() const { return this->deptUserMapping_ != nullptr;};
      void deleteDeptUserMapping() { this->deptUserMapping_ = nullptr;};
      inline const vector<SyncDepartmentUserCommand::DeptUserMapping> & getDeptUserMapping() const { DARABONBA_PTR_GET_CONST(deptUserMapping_, vector<SyncDepartmentUserCommand::DeptUserMapping>) };
      inline vector<SyncDepartmentUserCommand::DeptUserMapping> getDeptUserMapping() { DARABONBA_PTR_GET(deptUserMapping_, vector<SyncDepartmentUserCommand::DeptUserMapping>) };
      inline SyncDepartmentUserCommand& setDeptUserMapping(const vector<SyncDepartmentUserCommand::DeptUserMapping> & deptUserMapping) { DARABONBA_PTR_SET_VALUE(deptUserMapping_, deptUserMapping) };
      inline SyncDepartmentUserCommand& setDeptUserMapping(vector<SyncDepartmentUserCommand::DeptUserMapping> && deptUserMapping) { DARABONBA_PTR_SET_RVALUE(deptUserMapping_, deptUserMapping) };


    protected:
      // This parameter is required.
      shared_ptr<vector<SyncDepartmentUserCommand::DeptUserMapping>> deptUserMapping_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->syncDepartmentUserCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SyncDepartmentUserRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // syncDepartmentUserCommand Field Functions 
    bool hasSyncDepartmentUserCommand() const { return this->syncDepartmentUserCommand_ != nullptr;};
    void deleteSyncDepartmentUserCommand() { this->syncDepartmentUserCommand_ = nullptr;};
    inline const SyncDepartmentUserRequest::SyncDepartmentUserCommand & getSyncDepartmentUserCommand() const { DARABONBA_PTR_GET_CONST(syncDepartmentUserCommand_, SyncDepartmentUserRequest::SyncDepartmentUserCommand) };
    inline SyncDepartmentUserRequest::SyncDepartmentUserCommand getSyncDepartmentUserCommand() { DARABONBA_PTR_GET(syncDepartmentUserCommand_, SyncDepartmentUserRequest::SyncDepartmentUserCommand) };
    inline SyncDepartmentUserRequest& setSyncDepartmentUserCommand(const SyncDepartmentUserRequest::SyncDepartmentUserCommand & syncDepartmentUserCommand) { DARABONBA_PTR_SET_VALUE(syncDepartmentUserCommand_, syncDepartmentUserCommand) };
    inline SyncDepartmentUserRequest& setSyncDepartmentUserCommand(SyncDepartmentUserRequest::SyncDepartmentUserCommand && syncDepartmentUserCommand) { DARABONBA_PTR_SET_RVALUE(syncDepartmentUserCommand_, syncDepartmentUserCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<SyncDepartmentUserRequest::SyncDepartmentUserCommand> syncDepartmentUserCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
