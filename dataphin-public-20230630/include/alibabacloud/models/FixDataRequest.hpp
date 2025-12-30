// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIXDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FIXDATAREQUEST_HPP_
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
  class FixDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FixDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(FixDataCommand, fixDataCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, FixDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(FixDataCommand, fixDataCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    FixDataRequest() = default ;
    FixDataRequest(const FixDataRequest &) = default ;
    FixDataRequest(FixDataRequest &&) = default ;
    FixDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FixDataRequest() = default ;
    FixDataRequest& operator=(const FixDataRequest &) = default ;
    FixDataRequest& operator=(FixDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FixDataCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FixDataCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ContainRootInstance, containRootInstance_);
        DARABONBA_PTR_TO_JSON(DownStreamInstanceIdList, downStreamInstanceIdList_);
        DARABONBA_PTR_TO_JSON(DownstreamRange, downstreamRange_);
        DARABONBA_PTR_TO_JSON(ForceRerun, forceRerun_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(RootInstanceId, rootInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, FixDataCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ContainRootInstance, containRootInstance_);
        DARABONBA_PTR_FROM_JSON(DownStreamInstanceIdList, downStreamInstanceIdList_);
        DARABONBA_PTR_FROM_JSON(DownstreamRange, downstreamRange_);
        DARABONBA_PTR_FROM_JSON(ForceRerun, forceRerun_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(RootInstanceId, rootInstanceId_);
      };
      FixDataCommand() = default ;
      FixDataCommand(const FixDataCommand &) = default ;
      FixDataCommand(FixDataCommand &&) = default ;
      FixDataCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FixDataCommand() = default ;
      FixDataCommand& operator=(const FixDataCommand &) = default ;
      FixDataCommand& operator=(FixDataCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RootInstanceId : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RootInstanceId& obj) { 
          DARABONBA_PTR_TO_JSON(FieldInstanceIdList, fieldInstanceIdList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, RootInstanceId& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldInstanceIdList, fieldInstanceIdList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        RootInstanceId() = default ;
        RootInstanceId(const RootInstanceId &) = default ;
        RootInstanceId(RootInstanceId &&) = default ;
        RootInstanceId(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RootInstanceId() = default ;
        RootInstanceId& operator=(const RootInstanceId &) = default ;
        RootInstanceId& operator=(RootInstanceId &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldInstanceIdList_ == nullptr
        && this->id_ == nullptr; };
        // fieldInstanceIdList Field Functions 
        bool hasFieldInstanceIdList() const { return this->fieldInstanceIdList_ != nullptr;};
        void deleteFieldInstanceIdList() { this->fieldInstanceIdList_ = nullptr;};
        inline const vector<string> & getFieldInstanceIdList() const { DARABONBA_PTR_GET_CONST(fieldInstanceIdList_, vector<string>) };
        inline vector<string> getFieldInstanceIdList() { DARABONBA_PTR_GET(fieldInstanceIdList_, vector<string>) };
        inline RootInstanceId& setFieldInstanceIdList(const vector<string> & fieldInstanceIdList) { DARABONBA_PTR_SET_VALUE(fieldInstanceIdList_, fieldInstanceIdList) };
        inline RootInstanceId& setFieldInstanceIdList(vector<string> && fieldInstanceIdList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceIdList_, fieldInstanceIdList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline RootInstanceId& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<vector<string>> fieldInstanceIdList_ {};
        // This parameter is required.
        shared_ptr<string> id_ {};
      };

      class DownStreamInstanceIdList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DownStreamInstanceIdList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldInstanceIdList, fieldInstanceIdList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, DownStreamInstanceIdList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldInstanceIdList, fieldInstanceIdList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        DownStreamInstanceIdList() = default ;
        DownStreamInstanceIdList(const DownStreamInstanceIdList &) = default ;
        DownStreamInstanceIdList(DownStreamInstanceIdList &&) = default ;
        DownStreamInstanceIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DownStreamInstanceIdList() = default ;
        DownStreamInstanceIdList& operator=(const DownStreamInstanceIdList &) = default ;
        DownStreamInstanceIdList& operator=(DownStreamInstanceIdList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldInstanceIdList_ == nullptr
        && this->id_ == nullptr; };
        // fieldInstanceIdList Field Functions 
        bool hasFieldInstanceIdList() const { return this->fieldInstanceIdList_ != nullptr;};
        void deleteFieldInstanceIdList() { this->fieldInstanceIdList_ = nullptr;};
        inline const vector<string> & getFieldInstanceIdList() const { DARABONBA_PTR_GET_CONST(fieldInstanceIdList_, vector<string>) };
        inline vector<string> getFieldInstanceIdList() { DARABONBA_PTR_GET(fieldInstanceIdList_, vector<string>) };
        inline DownStreamInstanceIdList& setFieldInstanceIdList(const vector<string> & fieldInstanceIdList) { DARABONBA_PTR_SET_VALUE(fieldInstanceIdList_, fieldInstanceIdList) };
        inline DownStreamInstanceIdList& setFieldInstanceIdList(vector<string> && fieldInstanceIdList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceIdList_, fieldInstanceIdList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DownStreamInstanceIdList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<vector<string>> fieldInstanceIdList_ {};
        shared_ptr<string> id_ {};
      };

      virtual bool empty() const override { return this->containRootInstance_ == nullptr
        && this->downStreamInstanceIdList_ == nullptr && this->downstreamRange_ == nullptr && this->forceRerun_ == nullptr && this->projectId_ == nullptr && this->rootInstanceId_ == nullptr; };
      // containRootInstance Field Functions 
      bool hasContainRootInstance() const { return this->containRootInstance_ != nullptr;};
      void deleteContainRootInstance() { this->containRootInstance_ = nullptr;};
      inline bool getContainRootInstance() const { DARABONBA_PTR_GET_DEFAULT(containRootInstance_, false) };
      inline FixDataCommand& setContainRootInstance(bool containRootInstance) { DARABONBA_PTR_SET_VALUE(containRootInstance_, containRootInstance) };


      // downStreamInstanceIdList Field Functions 
      bool hasDownStreamInstanceIdList() const { return this->downStreamInstanceIdList_ != nullptr;};
      void deleteDownStreamInstanceIdList() { this->downStreamInstanceIdList_ = nullptr;};
      inline const vector<FixDataCommand::DownStreamInstanceIdList> & getDownStreamInstanceIdList() const { DARABONBA_PTR_GET_CONST(downStreamInstanceIdList_, vector<FixDataCommand::DownStreamInstanceIdList>) };
      inline vector<FixDataCommand::DownStreamInstanceIdList> getDownStreamInstanceIdList() { DARABONBA_PTR_GET(downStreamInstanceIdList_, vector<FixDataCommand::DownStreamInstanceIdList>) };
      inline FixDataCommand& setDownStreamInstanceIdList(const vector<FixDataCommand::DownStreamInstanceIdList> & downStreamInstanceIdList) { DARABONBA_PTR_SET_VALUE(downStreamInstanceIdList_, downStreamInstanceIdList) };
      inline FixDataCommand& setDownStreamInstanceIdList(vector<FixDataCommand::DownStreamInstanceIdList> && downStreamInstanceIdList) { DARABONBA_PTR_SET_RVALUE(downStreamInstanceIdList_, downStreamInstanceIdList) };


      // downstreamRange Field Functions 
      bool hasDownstreamRange() const { return this->downstreamRange_ != nullptr;};
      void deleteDownstreamRange() { this->downstreamRange_ = nullptr;};
      inline string getDownstreamRange() const { DARABONBA_PTR_GET_DEFAULT(downstreamRange_, "") };
      inline FixDataCommand& setDownstreamRange(string downstreamRange) { DARABONBA_PTR_SET_VALUE(downstreamRange_, downstreamRange) };


      // forceRerun Field Functions 
      bool hasForceRerun() const { return this->forceRerun_ != nullptr;};
      void deleteForceRerun() { this->forceRerun_ = nullptr;};
      inline bool getForceRerun() const { DARABONBA_PTR_GET_DEFAULT(forceRerun_, false) };
      inline FixDataCommand& setForceRerun(bool forceRerun) { DARABONBA_PTR_SET_VALUE(forceRerun_, forceRerun) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline FixDataCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // rootInstanceId Field Functions 
      bool hasRootInstanceId() const { return this->rootInstanceId_ != nullptr;};
      void deleteRootInstanceId() { this->rootInstanceId_ = nullptr;};
      inline const FixDataCommand::RootInstanceId & getRootInstanceId() const { DARABONBA_PTR_GET_CONST(rootInstanceId_, FixDataCommand::RootInstanceId) };
      inline FixDataCommand::RootInstanceId getRootInstanceId() { DARABONBA_PTR_GET(rootInstanceId_, FixDataCommand::RootInstanceId) };
      inline FixDataCommand& setRootInstanceId(const FixDataCommand::RootInstanceId & rootInstanceId) { DARABONBA_PTR_SET_VALUE(rootInstanceId_, rootInstanceId) };
      inline FixDataCommand& setRootInstanceId(FixDataCommand::RootInstanceId && rootInstanceId) { DARABONBA_PTR_SET_RVALUE(rootInstanceId_, rootInstanceId) };


    protected:
      shared_ptr<bool> containRootInstance_ {};
      shared_ptr<vector<FixDataCommand::DownStreamInstanceIdList>> downStreamInstanceIdList_ {};
      shared_ptr<string> downstreamRange_ {};
      shared_ptr<bool> forceRerun_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // This parameter is required.
      shared_ptr<FixDataCommand::RootInstanceId> rootInstanceId_ {};
    };

    virtual bool empty() const override { return this->env_ == nullptr
        && this->fixDataCommand_ == nullptr && this->opTenantId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline FixDataRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // fixDataCommand Field Functions 
    bool hasFixDataCommand() const { return this->fixDataCommand_ != nullptr;};
    void deleteFixDataCommand() { this->fixDataCommand_ = nullptr;};
    inline const FixDataRequest::FixDataCommand & getFixDataCommand() const { DARABONBA_PTR_GET_CONST(fixDataCommand_, FixDataRequest::FixDataCommand) };
    inline FixDataRequest::FixDataCommand getFixDataCommand() { DARABONBA_PTR_GET(fixDataCommand_, FixDataRequest::FixDataCommand) };
    inline FixDataRequest& setFixDataCommand(const FixDataRequest::FixDataCommand & fixDataCommand) { DARABONBA_PTR_SET_VALUE(fixDataCommand_, fixDataCommand) };
    inline FixDataRequest& setFixDataCommand(FixDataRequest::FixDataCommand && fixDataCommand) { DARABONBA_PTR_SET_RVALUE(fixDataCommand_, fixDataCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline FixDataRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<FixDataRequest::FixDataCommand> fixDataCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
