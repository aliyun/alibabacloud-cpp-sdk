// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALNODEBYOUTPUTNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALNODEBYOUTPUTNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalNodeByOutputNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalNodeByOutputNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalNodeByOutputNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPhysicalNodeByOutputNameResponseBody() = default ;
    GetPhysicalNodeByOutputNameResponseBody(const GetPhysicalNodeByOutputNameResponseBody &) = default ;
    GetPhysicalNodeByOutputNameResponseBody(GetPhysicalNodeByOutputNameResponseBody &&) = default ;
    GetPhysicalNodeByOutputNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalNodeByOutputNameResponseBody() = default ;
    GetPhysicalNodeByOutputNameResponseBody& operator=(const GetPhysicalNodeByOutputNameResponseBody &) = default ;
    GetPhysicalNodeByOutputNameResponseBody& operator=(GetPhysicalNodeByOutputNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(From, from_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_TO_JSON(Modifier, modifier_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ProjectInfo, projectInfo_);
        DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TriggerConfig, triggerConfig_);
      };
      friend void from_json(const Darabonba::Json& j, NodeInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(From, from_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ProjectInfo, projectInfo_);
        DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TriggerConfig, triggerConfig_);
      };
      NodeInfo() = default ;
      NodeInfo(const NodeInfo &) = default ;
      NodeInfo(NodeInfo &&) = default ;
      NodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeInfo() = default ;
      NodeInfo& operator=(const NodeInfo &) = default ;
      NodeInfo& operator=(NodeInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProjectInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProjectInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, ProjectInfo& obj) { 
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
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ProjectInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ProjectInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class Owner : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Owner& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Owner& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Owner() = default ;
        Owner(const Owner &) = default ;
        Owner(Owner &&) = default ;
        Owner(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Owner() = default ;
        Owner& operator=(const Owner &) = default ;
        Owner& operator=(Owner &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Owner& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Owner& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class Modifier : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Modifier& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Modifier& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Modifier() = default ;
        Modifier(const Modifier &) = default ;
        Modifier(Modifier &&) = default ;
        Modifier(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Modifier() = default ;
        Modifier& operator=(const Modifier &) = default ;
        Modifier& operator=(Modifier &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Modifier& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Modifier& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class Creator : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Creator& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Creator& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Creator() = default ;
        Creator(const Creator &) = default ;
        Creator(Creator &&) = default ;
        Creator(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Creator() = default ;
        Creator& operator=(const Creator &) = default ;
        Creator& operator=(Creator &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Creator& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Creator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->description_ == nullptr && this->from_ == nullptr && this->id_ == nullptr && this->lastModifiedTime_ == nullptr
        && this->modifier_ == nullptr && this->name_ == nullptr && this->operatorType_ == nullptr && this->owner_ == nullptr && this->priority_ == nullptr
        && this->projectInfo_ == nullptr && this->scheduleType_ == nullptr && this->status_ == nullptr && this->triggerConfig_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline NodeInfo& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline const NodeInfo::Creator & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, NodeInfo::Creator) };
      inline NodeInfo::Creator getCreator() { DARABONBA_PTR_GET(creator_, NodeInfo::Creator) };
      inline NodeInfo& setCreator(const NodeInfo::Creator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
      inline NodeInfo& setCreator(NodeInfo::Creator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline NodeInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // from Field Functions 
      bool hasFrom() const { return this->from_ != nullptr;};
      void deleteFrom() { this->from_ = nullptr;};
      inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
      inline NodeInfo& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline NodeInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastModifiedTime Field Functions 
      bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
      void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
      inline int64_t getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
      inline NodeInfo& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline const NodeInfo::Modifier & getModifier() const { DARABONBA_PTR_GET_CONST(modifier_, NodeInfo::Modifier) };
      inline NodeInfo::Modifier getModifier() { DARABONBA_PTR_GET(modifier_, NodeInfo::Modifier) };
      inline NodeInfo& setModifier(const NodeInfo::Modifier & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
      inline NodeInfo& setModifier(NodeInfo::Modifier && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NodeInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operatorType Field Functions 
      bool hasOperatorType() const { return this->operatorType_ != nullptr;};
      void deleteOperatorType() { this->operatorType_ = nullptr;};
      inline string getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
      inline NodeInfo& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline const NodeInfo::Owner & getOwner() const { DARABONBA_PTR_GET_CONST(owner_, NodeInfo::Owner) };
      inline NodeInfo::Owner getOwner() { DARABONBA_PTR_GET(owner_, NodeInfo::Owner) };
      inline NodeInfo& setOwner(const NodeInfo::Owner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
      inline NodeInfo& setOwner(NodeInfo::Owner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline NodeInfo& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // projectInfo Field Functions 
      bool hasProjectInfo() const { return this->projectInfo_ != nullptr;};
      void deleteProjectInfo() { this->projectInfo_ = nullptr;};
      inline const NodeInfo::ProjectInfo & getProjectInfo() const { DARABONBA_PTR_GET_CONST(projectInfo_, NodeInfo::ProjectInfo) };
      inline NodeInfo::ProjectInfo getProjectInfo() { DARABONBA_PTR_GET(projectInfo_, NodeInfo::ProjectInfo) };
      inline NodeInfo& setProjectInfo(const NodeInfo::ProjectInfo & projectInfo) { DARABONBA_PTR_SET_VALUE(projectInfo_, projectInfo) };
      inline NodeInfo& setProjectInfo(NodeInfo::ProjectInfo && projectInfo) { DARABONBA_PTR_SET_RVALUE(projectInfo_, projectInfo) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline NodeInfo& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NodeInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // triggerConfig Field Functions 
      bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
      void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
      inline string getTriggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
      inline NodeInfo& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<NodeInfo::Creator> creator_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> from_ {};
      shared_ptr<string> id_ {};
      shared_ptr<int64_t> lastModifiedTime_ {};
      shared_ptr<NodeInfo::Modifier> modifier_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> operatorType_ {};
      shared_ptr<NodeInfo::Owner> owner_ {};
      shared_ptr<string> priority_ {};
      shared_ptr<NodeInfo::ProjectInfo> projectInfo_ {};
      shared_ptr<string> scheduleType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> triggerConfig_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->nodeInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPhysicalNodeByOutputNameResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPhysicalNodeByOutputNameResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPhysicalNodeByOutputNameResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeInfo Field Functions 
    bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
    void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
    inline const GetPhysicalNodeByOutputNameResponseBody::NodeInfo & getNodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, GetPhysicalNodeByOutputNameResponseBody::NodeInfo) };
    inline GetPhysicalNodeByOutputNameResponseBody::NodeInfo getNodeInfo() { DARABONBA_PTR_GET(nodeInfo_, GetPhysicalNodeByOutputNameResponseBody::NodeInfo) };
    inline GetPhysicalNodeByOutputNameResponseBody& setNodeInfo(const GetPhysicalNodeByOutputNameResponseBody::NodeInfo & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
    inline GetPhysicalNodeByOutputNameResponseBody& setNodeInfo(GetPhysicalNodeByOutputNameResponseBody::NodeInfo && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPhysicalNodeByOutputNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPhysicalNodeByOutputNameResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetPhysicalNodeByOutputNameResponseBody::NodeInfo> nodeInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
