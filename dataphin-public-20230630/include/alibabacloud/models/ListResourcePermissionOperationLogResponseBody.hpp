// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONOPERATIONLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONOPERATIONLOGRESPONSEBODY_HPP_
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
  class ListResourcePermissionOperationLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcePermissionOperationLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcePermissionOperationLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListResourcePermissionOperationLogResponseBody() = default ;
    ListResourcePermissionOperationLogResponseBody(const ListResourcePermissionOperationLogResponseBody &) = default ;
    ListResourcePermissionOperationLogResponseBody(ListResourcePermissionOperationLogResponseBody &&) = default ;
    ListResourcePermissionOperationLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcePermissionOperationLogResponseBody() = default ;
    ListResourcePermissionOperationLogResponseBody& operator=(const ListResourcePermissionOperationLogResponseBody &) = default ;
    ListResourcePermissionOperationLogResponseBody& operator=(ListResourcePermissionOperationLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Account, account_);
          DARABONBA_PTR_TO_JSON(AuthScope, authScope_);
          DARABONBA_PTR_TO_JSON(OperateId, operateId_);
          DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
          DARABONBA_PTR_TO_JSON(OperateType, operateType_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(ResourceInfo, resourceInfo_);
          DARABONBA_PTR_TO_JSON(TargetAccount, targetAccount_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Account, account_);
          DARABONBA_PTR_FROM_JSON(AuthScope, authScope_);
          DARABONBA_PTR_FROM_JSON(OperateId, operateId_);
          DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
          DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(ResourceInfo, resourceInfo_);
          DARABONBA_PTR_FROM_JSON(TargetAccount, targetAccount_);
        };
        Data() = default ;
        Data(const Data &) = default ;
        Data(Data &&) = default ;
        Data(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Data() = default ;
        Data& operator=(const Data &) = default ;
        Data& operator=(Data &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TargetAccount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TargetAccount& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, TargetAccount& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          TargetAccount() = default ;
          TargetAccount(const TargetAccount &) = default ;
          TargetAccount(TargetAccount &&) = default ;
          TargetAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TargetAccount() = default ;
          TargetAccount& operator=(const TargetAccount &) = default ;
          TargetAccount& operator=(TargetAccount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline TargetAccount& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TargetAccount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline TargetAccount& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> type_ {};
        };

        class ResourceInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceInfo& obj) { 
            DARABONBA_PTR_TO_JSON(BizUnitInfo, bizUnitInfo_);
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(Env, env_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ProjectInfo, projectInfo_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(BizUnitInfo, bizUnitInfo_);
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(Env, env_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ProjectInfo, projectInfo_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          ResourceInfo() = default ;
          ResourceInfo(const ResourceInfo &) = default ;
          ResourceInfo(ResourceInfo &&) = default ;
          ResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceInfo() = default ;
          ResourceInfo& operator=(const ResourceInfo &) = default ;
          ResourceInfo& operator=(ResourceInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ProjectInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ProjectInfo& obj) { 
              DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
              DARABONBA_PTR_TO_JSON(Env, env_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, ProjectInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
              DARABONBA_PTR_FROM_JSON(Env, env_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            ProjectInfo() = default ;
            ProjectInfo(const ProjectInfo &) = default ;
            ProjectInfo(ProjectInfo &&) = default ;
            ProjectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ProjectInfo() = default ;
            ProjectInfo& operator=(const ProjectInfo &) = default ;
            ProjectInfo& operator=(ProjectInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->displayName_ == nullptr
        && this->env_ == nullptr && this->id_ == nullptr && this->name_ == nullptr; };
            // displayName Field Functions 
            bool hasDisplayName() const { return this->displayName_ != nullptr;};
            void deleteDisplayName() { this->displayName_ = nullptr;};
            inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
            inline ProjectInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


            // env Field Functions 
            bool hasEnv() const { return this->env_ != nullptr;};
            void deleteEnv() { this->env_ = nullptr;};
            inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
            inline ProjectInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline ProjectInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline ProjectInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            shared_ptr<string> displayName_ {};
            shared_ptr<string> env_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> name_ {};
          };

          class BizUnitInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BizUnitInfo& obj) { 
              DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
              DARABONBA_PTR_TO_JSON(Env, env_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, BizUnitInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
              DARABONBA_PTR_FROM_JSON(Env, env_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            BizUnitInfo() = default ;
            BizUnitInfo(const BizUnitInfo &) = default ;
            BizUnitInfo(BizUnitInfo &&) = default ;
            BizUnitInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BizUnitInfo() = default ;
            BizUnitInfo& operator=(const BizUnitInfo &) = default ;
            BizUnitInfo& operator=(BizUnitInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->displayName_ == nullptr
        && this->env_ == nullptr && this->id_ == nullptr && this->name_ == nullptr; };
            // displayName Field Functions 
            bool hasDisplayName() const { return this->displayName_ != nullptr;};
            void deleteDisplayName() { this->displayName_ = nullptr;};
            inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
            inline BizUnitInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


            // env Field Functions 
            bool hasEnv() const { return this->env_ != nullptr;};
            void deleteEnv() { this->env_ = nullptr;};
            inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
            inline BizUnitInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline BizUnitInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline BizUnitInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            shared_ptr<string> displayName_ {};
            shared_ptr<string> env_ {};
            // Id
            shared_ptr<string> id_ {};
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->bizUnitInfo_ == nullptr
        && this->displayName_ == nullptr && this->env_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->projectInfo_ == nullptr
        && this->type_ == nullptr; };
          // bizUnitInfo Field Functions 
          bool hasBizUnitInfo() const { return this->bizUnitInfo_ != nullptr;};
          void deleteBizUnitInfo() { this->bizUnitInfo_ = nullptr;};
          inline const ResourceInfo::BizUnitInfo & getBizUnitInfo() const { DARABONBA_PTR_GET_CONST(bizUnitInfo_, ResourceInfo::BizUnitInfo) };
          inline ResourceInfo::BizUnitInfo getBizUnitInfo() { DARABONBA_PTR_GET(bizUnitInfo_, ResourceInfo::BizUnitInfo) };
          inline ResourceInfo& setBizUnitInfo(const ResourceInfo::BizUnitInfo & bizUnitInfo) { DARABONBA_PTR_SET_VALUE(bizUnitInfo_, bizUnitInfo) };
          inline ResourceInfo& setBizUnitInfo(ResourceInfo::BizUnitInfo && bizUnitInfo) { DARABONBA_PTR_SET_RVALUE(bizUnitInfo_, bizUnitInfo) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline ResourceInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // env Field Functions 
          bool hasEnv() const { return this->env_ != nullptr;};
          void deleteEnv() { this->env_ = nullptr;};
          inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
          inline ResourceInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline ResourceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ResourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // projectInfo Field Functions 
          bool hasProjectInfo() const { return this->projectInfo_ != nullptr;};
          void deleteProjectInfo() { this->projectInfo_ = nullptr;};
          inline const ResourceInfo::ProjectInfo & getProjectInfo() const { DARABONBA_PTR_GET_CONST(projectInfo_, ResourceInfo::ProjectInfo) };
          inline ResourceInfo::ProjectInfo getProjectInfo() { DARABONBA_PTR_GET(projectInfo_, ResourceInfo::ProjectInfo) };
          inline ResourceInfo& setProjectInfo(const ResourceInfo::ProjectInfo & projectInfo) { DARABONBA_PTR_SET_VALUE(projectInfo_, projectInfo) };
          inline ResourceInfo& setProjectInfo(ResourceInfo::ProjectInfo && projectInfo) { DARABONBA_PTR_SET_RVALUE(projectInfo_, projectInfo) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ResourceInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<ResourceInfo::BizUnitInfo> bizUnitInfo_ {};
          shared_ptr<string> displayName_ {};
          shared_ptr<string> env_ {};
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
          shared_ptr<ResourceInfo::ProjectInfo> projectInfo_ {};
          shared_ptr<string> type_ {};
        };

        class Period : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Period& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Period& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Period() = default ;
          Period(const Period &) = default ;
          Period(Period &&) = default ;
          Period(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Period() = default ;
          Period& operator=(const Period &) = default ;
          Period& operator=(Period &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->type_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline Period& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Period& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> endTime_ {};
          shared_ptr<string> type_ {};
        };

        class Account : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Account& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Account& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Account() = default ;
          Account(const Account &) = default ;
          Account(Account &&) = default ;
          Account(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Account() = default ;
          Account& operator=(const Account &) = default ;
          Account& operator=(Account &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Account& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Account& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Account& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->account_ == nullptr
        && this->authScope_ == nullptr && this->operateId_ == nullptr && this->operateTime_ == nullptr && this->operateType_ == nullptr && this->period_ == nullptr
        && this->reason_ == nullptr && this->resourceInfo_ == nullptr && this->targetAccount_ == nullptr; };
        // account Field Functions 
        bool hasAccount() const { return this->account_ != nullptr;};
        void deleteAccount() { this->account_ = nullptr;};
        inline const Data::Account & getAccount() const { DARABONBA_PTR_GET_CONST(account_, Data::Account) };
        inline Data::Account getAccount() { DARABONBA_PTR_GET(account_, Data::Account) };
        inline Data& setAccount(const Data::Account & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
        inline Data& setAccount(Data::Account && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


        // authScope Field Functions 
        bool hasAuthScope() const { return this->authScope_ != nullptr;};
        void deleteAuthScope() { this->authScope_ = nullptr;};
        inline string getAuthScope() const { DARABONBA_PTR_GET_DEFAULT(authScope_, "") };
        inline Data& setAuthScope(string authScope) { DARABONBA_PTR_SET_VALUE(authScope_, authScope) };


        // operateId Field Functions 
        bool hasOperateId() const { return this->operateId_ != nullptr;};
        void deleteOperateId() { this->operateId_ = nullptr;};
        inline int64_t getOperateId() const { DARABONBA_PTR_GET_DEFAULT(operateId_, 0L) };
        inline Data& setOperateId(int64_t operateId) { DARABONBA_PTR_SET_VALUE(operateId_, operateId) };


        // operateTime Field Functions 
        bool hasOperateTime() const { return this->operateTime_ != nullptr;};
        void deleteOperateTime() { this->operateTime_ = nullptr;};
        inline int64_t getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, 0L) };
        inline Data& setOperateTime(int64_t operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


        // operateType Field Functions 
        bool hasOperateType() const { return this->operateType_ != nullptr;};
        void deleteOperateType() { this->operateType_ = nullptr;};
        inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
        inline Data& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline const Data::Period & getPeriod() const { DARABONBA_PTR_GET_CONST(period_, Data::Period) };
        inline Data::Period getPeriod() { DARABONBA_PTR_GET(period_, Data::Period) };
        inline Data& setPeriod(const Data::Period & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
        inline Data& setPeriod(Data::Period && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // resourceInfo Field Functions 
        bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
        void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
        inline const Data::ResourceInfo & getResourceInfo() const { DARABONBA_PTR_GET_CONST(resourceInfo_, Data::ResourceInfo) };
        inline Data::ResourceInfo getResourceInfo() { DARABONBA_PTR_GET(resourceInfo_, Data::ResourceInfo) };
        inline Data& setResourceInfo(const Data::ResourceInfo & resourceInfo) { DARABONBA_PTR_SET_VALUE(resourceInfo_, resourceInfo) };
        inline Data& setResourceInfo(Data::ResourceInfo && resourceInfo) { DARABONBA_PTR_SET_RVALUE(resourceInfo_, resourceInfo) };


        // targetAccount Field Functions 
        bool hasTargetAccount() const { return this->targetAccount_ != nullptr;};
        void deleteTargetAccount() { this->targetAccount_ = nullptr;};
        inline const Data::TargetAccount & getTargetAccount() const { DARABONBA_PTR_GET_CONST(targetAccount_, Data::TargetAccount) };
        inline Data::TargetAccount getTargetAccount() { DARABONBA_PTR_GET(targetAccount_, Data::TargetAccount) };
        inline Data& setTargetAccount(const Data::TargetAccount & targetAccount) { DARABONBA_PTR_SET_VALUE(targetAccount_, targetAccount) };
        inline Data& setTargetAccount(Data::TargetAccount && targetAccount) { DARABONBA_PTR_SET_RVALUE(targetAccount_, targetAccount) };


      protected:
        shared_ptr<Data::Account> account_ {};
        shared_ptr<string> authScope_ {};
        shared_ptr<int64_t> operateId_ {};
        shared_ptr<int64_t> operateTime_ {};
        shared_ptr<string> operateType_ {};
        shared_ptr<Data::Period> period_ {};
        shared_ptr<string> reason_ {};
        shared_ptr<Data::ResourceInfo> resourceInfo_ {};
        shared_ptr<Data::TargetAccount> targetAccount_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->totalCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<PageResult::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PageResult::Data>) };
      inline vector<PageResult::Data> getData() { DARABONBA_PTR_GET(data_, vector<PageResult::Data>) };
      inline PageResult& setData(const vector<PageResult::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline PageResult& setData(vector<PageResult::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::Data>> data_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListResourcePermissionOperationLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListResourcePermissionOperationLogResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListResourcePermissionOperationLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListResourcePermissionOperationLogResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListResourcePermissionOperationLogResponseBody::PageResult) };
    inline ListResourcePermissionOperationLogResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListResourcePermissionOperationLogResponseBody::PageResult) };
    inline ListResourcePermissionOperationLogResponseBody& setPageResult(const ListResourcePermissionOperationLogResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListResourcePermissionOperationLogResponseBody& setPageResult(ListResourcePermissionOperationLogResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourcePermissionOperationLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListResourcePermissionOperationLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListResourcePermissionOperationLogResponseBody::PageResult> pageResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
