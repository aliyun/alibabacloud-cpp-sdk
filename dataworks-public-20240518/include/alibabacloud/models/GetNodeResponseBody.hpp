// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Node, node_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Node, node_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNodeResponseBody() = default ;
    GetNodeResponseBody(const GetNodeResponseBody &) = default ;
    GetNodeResponseBody(GetNodeResponseBody &&) = default ;
    GetNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeResponseBody() = default ;
    GetNodeResponseBody& operator=(const GetNodeResponseBody &) = default ;
    GetNodeResponseBody& operator=(GetNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Node : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Node& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Node& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      Node() = default ;
      Node(const Node &) = default ;
      Node(Node &&) = default ;
      Node(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Node() = default ;
      Node& operator=(const Node &) = default ;
      Node& operator=(Node &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->id_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->projectId_ == nullptr
        && this->spec_ == nullptr && this->taskId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Node& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Node& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Node& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Node& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Node& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Node& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Node& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Node& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The time when the node was created. This value is a UNIX timestamp.
      shared_ptr<int64_t> createTime_ {};
      // The unique identifier of the Data Studio node.
      // 
      // >  This field is of type Long in SDK versions prior to 8.0.0, and of type String in SDK version 8.0.0 and later. This change does not affect the normal use of the SDK; parameters are still returned according to the type defined in the SDK. Compilation failures due to the type change may occur only when upgrading the SDK across version 8.0.0, in which case users need to manually correct the data type.
      shared_ptr<string> id_ {};
      // The time when the node was last modified. This value is a UNIX timestamp.
      shared_ptr<int64_t> modifyTime_ {};
      // The name of the node.
      shared_ptr<string> name_ {};
      // The owner of the node.
      shared_ptr<string> owner_ {};
      // The DataWorks workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The FlowSpec field information about this node. For more information, see [FlowSpec](https://github.com/aliyun/alibabacloud-dataworks-tool-dflow).
      shared_ptr<string> spec_ {};
      // The ID of the corresponding scheduling task after the node is published.
      shared_ptr<int64_t> taskId_ {};
    };

    virtual bool empty() const override { return this->node_ == nullptr
        && this->requestId_ == nullptr; };
    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline const GetNodeResponseBody::Node & getNode() const { DARABONBA_PTR_GET_CONST(node_, GetNodeResponseBody::Node) };
    inline GetNodeResponseBody::Node getNode() { DARABONBA_PTR_GET(node_, GetNodeResponseBody::Node) };
    inline GetNodeResponseBody& setNode(const GetNodeResponseBody::Node & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
    inline GetNodeResponseBody& setNode(GetNodeResponseBody::Node && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data Studio node details.
    shared_ptr<GetNodeResponseBody::Node> node_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
