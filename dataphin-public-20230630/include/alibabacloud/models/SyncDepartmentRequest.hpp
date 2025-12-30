// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDEPARTMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCDEPARTMENTREQUEST_HPP_
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
  class SyncDepartmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncDepartmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SyncDepartmentCommand, syncDepartmentCommand_);
    };
    friend void from_json(const Darabonba::Json& j, SyncDepartmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SyncDepartmentCommand, syncDepartmentCommand_);
    };
    SyncDepartmentRequest() = default ;
    SyncDepartmentRequest(const SyncDepartmentRequest &) = default ;
    SyncDepartmentRequest(SyncDepartmentRequest &&) = default ;
    SyncDepartmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncDepartmentRequest() = default ;
    SyncDepartmentRequest& operator=(const SyncDepartmentRequest &) = default ;
    SyncDepartmentRequest& operator=(SyncDepartmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SyncDepartmentCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SyncDepartmentCommand& obj) { 
        DARABONBA_PTR_TO_JSON(DepartmentList, departmentList_);
      };
      friend void from_json(const Darabonba::Json& j, SyncDepartmentCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(DepartmentList, departmentList_);
      };
      SyncDepartmentCommand() = default ;
      SyncDepartmentCommand(const SyncDepartmentCommand &) = default ;
      SyncDepartmentCommand(SyncDepartmentCommand &&) = default ;
      SyncDepartmentCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SyncDepartmentCommand() = default ;
      SyncDepartmentCommand& operator=(const SyncDepartmentCommand &) = default ;
      SyncDepartmentCommand& operator=(SyncDepartmentCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DepartmentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DepartmentList& obj) { 
          DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
          DARABONBA_PTR_TO_JSON(DepartmentName, departmentName_);
          DARABONBA_PTR_TO_JSON(ParentDepartmentId, parentDepartmentId_);
        };
        friend void from_json(const Darabonba::Json& j, DepartmentList& obj) { 
          DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
          DARABONBA_PTR_FROM_JSON(DepartmentName, departmentName_);
          DARABONBA_PTR_FROM_JSON(ParentDepartmentId, parentDepartmentId_);
        };
        DepartmentList() = default ;
        DepartmentList(const DepartmentList &) = default ;
        DepartmentList(DepartmentList &&) = default ;
        DepartmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DepartmentList() = default ;
        DepartmentList& operator=(const DepartmentList &) = default ;
        DepartmentList& operator=(DepartmentList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->departmentId_ == nullptr
        && this->departmentName_ == nullptr && this->parentDepartmentId_ == nullptr; };
        // departmentId Field Functions 
        bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
        void deleteDepartmentId() { this->departmentId_ = nullptr;};
        inline string getDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
        inline DepartmentList& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


        // departmentName Field Functions 
        bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
        void deleteDepartmentName() { this->departmentName_ = nullptr;};
        inline string getDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
        inline DepartmentList& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


        // parentDepartmentId Field Functions 
        bool hasParentDepartmentId() const { return this->parentDepartmentId_ != nullptr;};
        void deleteParentDepartmentId() { this->parentDepartmentId_ = nullptr;};
        inline string getParentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(parentDepartmentId_, "") };
        inline DepartmentList& setParentDepartmentId(string parentDepartmentId) { DARABONBA_PTR_SET_VALUE(parentDepartmentId_, parentDepartmentId) };


      protected:
        // This parameter is required.
        shared_ptr<string> departmentId_ {};
        // This parameter is required.
        shared_ptr<string> departmentName_ {};
        shared_ptr<string> parentDepartmentId_ {};
      };

      virtual bool empty() const override { return this->departmentList_ == nullptr; };
      // departmentList Field Functions 
      bool hasDepartmentList() const { return this->departmentList_ != nullptr;};
      void deleteDepartmentList() { this->departmentList_ = nullptr;};
      inline const vector<SyncDepartmentCommand::DepartmentList> & getDepartmentList() const { DARABONBA_PTR_GET_CONST(departmentList_, vector<SyncDepartmentCommand::DepartmentList>) };
      inline vector<SyncDepartmentCommand::DepartmentList> getDepartmentList() { DARABONBA_PTR_GET(departmentList_, vector<SyncDepartmentCommand::DepartmentList>) };
      inline SyncDepartmentCommand& setDepartmentList(const vector<SyncDepartmentCommand::DepartmentList> & departmentList) { DARABONBA_PTR_SET_VALUE(departmentList_, departmentList) };
      inline SyncDepartmentCommand& setDepartmentList(vector<SyncDepartmentCommand::DepartmentList> && departmentList) { DARABONBA_PTR_SET_RVALUE(departmentList_, departmentList) };


    protected:
      // This parameter is required.
      shared_ptr<vector<SyncDepartmentCommand::DepartmentList>> departmentList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->syncDepartmentCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SyncDepartmentRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // syncDepartmentCommand Field Functions 
    bool hasSyncDepartmentCommand() const { return this->syncDepartmentCommand_ != nullptr;};
    void deleteSyncDepartmentCommand() { this->syncDepartmentCommand_ = nullptr;};
    inline const SyncDepartmentRequest::SyncDepartmentCommand & getSyncDepartmentCommand() const { DARABONBA_PTR_GET_CONST(syncDepartmentCommand_, SyncDepartmentRequest::SyncDepartmentCommand) };
    inline SyncDepartmentRequest::SyncDepartmentCommand getSyncDepartmentCommand() { DARABONBA_PTR_GET(syncDepartmentCommand_, SyncDepartmentRequest::SyncDepartmentCommand) };
    inline SyncDepartmentRequest& setSyncDepartmentCommand(const SyncDepartmentRequest::SyncDepartmentCommand & syncDepartmentCommand) { DARABONBA_PTR_SET_VALUE(syncDepartmentCommand_, syncDepartmentCommand) };
    inline SyncDepartmentRequest& setSyncDepartmentCommand(SyncDepartmentRequest::SyncDepartmentCommand && syncDepartmentCommand) { DARABONBA_PTR_SET_RVALUE(syncDepartmentCommand_, syncDepartmentCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<SyncDepartmentRequest::SyncDepartmentCommand> syncDepartmentCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
