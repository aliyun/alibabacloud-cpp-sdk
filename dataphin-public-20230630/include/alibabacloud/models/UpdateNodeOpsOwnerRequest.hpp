// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENODEOPSOWNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENODEOPSOWNERREQUEST_HPP_
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
  class UpdateNodeOpsOwnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNodeOpsOwnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNodeOpsOwnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    UpdateNodeOpsOwnerRequest() = default ;
    UpdateNodeOpsOwnerRequest(const UpdateNodeOpsOwnerRequest &) = default ;
    UpdateNodeOpsOwnerRequest(UpdateNodeOpsOwnerRequest &&) = default ;
    UpdateNodeOpsOwnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNodeOpsOwnerRequest() = default ;
    UpdateNodeOpsOwnerRequest& operator=(const UpdateNodeOpsOwnerRequest &) = default ;
    UpdateNodeOpsOwnerRequest& operator=(UpdateNodeOpsOwnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Command : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Command& obj) { 
        DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdList_);
        DARABONBA_PTR_TO_JSON(OpsOwnerList, opsOwnerList_);
      };
      friend void from_json(const Darabonba::Json& j, Command& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdList_);
        DARABONBA_PTR_FROM_JSON(OpsOwnerList, opsOwnerList_);
      };
      Command() = default ;
      Command(const Command &) = default ;
      Command(Command &&) = default ;
      Command(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Command() = default ;
      Command& operator=(const Command &) = default ;
      Command& operator=(Command &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeIdList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeIdList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(NodeFromType, nodeFromType_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        };
        friend void from_json(const Darabonba::Json& j, NodeIdList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(NodeFromType, nodeFromType_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        };
        NodeIdList() = default ;
        NodeIdList(const NodeIdList &) = default ;
        NodeIdList(NodeIdList &&) = default ;
        NodeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeIdList() = default ;
        NodeIdList& operator=(const NodeIdList &) = default ;
        NodeIdList& operator=(NodeIdList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->nodeFromType_ == nullptr && this->nodeType_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline NodeIdList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // nodeFromType Field Functions 
        bool hasNodeFromType() const { return this->nodeFromType_ != nullptr;};
        void deleteNodeFromType() { this->nodeFromType_ = nullptr;};
        inline string getNodeFromType() const { DARABONBA_PTR_GET_DEFAULT(nodeFromType_, "") };
        inline NodeIdList& setNodeFromType(string nodeFromType) { DARABONBA_PTR_SET_VALUE(nodeFromType_, nodeFromType) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline NodeIdList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      protected:
        // The node ID.
        // 
        // This parameter is required.
        shared_ptr<string> id_ {};
        // The node source type. Only offline nodes are supported. Valid values:
        // - DATA_PROCESS: compute node.
        // - PIPELINE: integration node.
        // - BLACK_BOX: logical table.
        // 
        // This parameter is required.
        shared_ptr<string> nodeFromType_ {};
        // The node type. Valid values:
        // - DATA_PROCESS: compute node.
        // - PIPELINE_NODE: integration node.
        // - BBOX_LOGIC_TABLE_NODE: logical table.
        // 
        // This parameter is required.
        shared_ptr<string> nodeType_ {};
      };

      virtual bool empty() const override { return this->nodeIdList_ == nullptr
        && this->opsOwnerList_ == nullptr; };
      // nodeIdList Field Functions 
      bool hasNodeIdList() const { return this->nodeIdList_ != nullptr;};
      void deleteNodeIdList() { this->nodeIdList_ = nullptr;};
      inline const vector<Command::NodeIdList> & getNodeIdList() const { DARABONBA_PTR_GET_CONST(nodeIdList_, vector<Command::NodeIdList>) };
      inline vector<Command::NodeIdList> getNodeIdList() { DARABONBA_PTR_GET(nodeIdList_, vector<Command::NodeIdList>) };
      inline Command& setNodeIdList(const vector<Command::NodeIdList> & nodeIdList) { DARABONBA_PTR_SET_VALUE(nodeIdList_, nodeIdList) };
      inline Command& setNodeIdList(vector<Command::NodeIdList> && nodeIdList) { DARABONBA_PTR_SET_RVALUE(nodeIdList_, nodeIdList) };


      // opsOwnerList Field Functions 
      bool hasOpsOwnerList() const { return this->opsOwnerList_ != nullptr;};
      void deleteOpsOwnerList() { this->opsOwnerList_ = nullptr;};
      inline const vector<string> & getOpsOwnerList() const { DARABONBA_PTR_GET_CONST(opsOwnerList_, vector<string>) };
      inline vector<string> getOpsOwnerList() { DARABONBA_PTR_GET(opsOwnerList_, vector<string>) };
      inline Command& setOpsOwnerList(const vector<string> & opsOwnerList) { DARABONBA_PTR_SET_VALUE(opsOwnerList_, opsOwnerList) };
      inline Command& setOpsOwnerList(vector<string> && opsOwnerList) { DARABONBA_PTR_SET_RVALUE(opsOwnerList_, opsOwnerList) };


    protected:
      // The list of nodes. Only offline nodes are supported.
      // 
      // This parameter is required.
      shared_ptr<vector<Command::NodeIdList>> nodeIdList_ {};
      // The updated O&M owners. Specify a list of user account IDs. A maximum of 50 IDs are supported.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> opsOwnerList_ {};
    };

    virtual bool empty() const override { return this->command_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const UpdateNodeOpsOwnerRequest::Command & getCommand() const { DARABONBA_PTR_GET_CONST(command_, UpdateNodeOpsOwnerRequest::Command) };
    inline UpdateNodeOpsOwnerRequest::Command getCommand() { DARABONBA_PTR_GET(command_, UpdateNodeOpsOwnerRequest::Command) };
    inline UpdateNodeOpsOwnerRequest& setCommand(const UpdateNodeOpsOwnerRequest::Command & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline UpdateNodeOpsOwnerRequest& setCommand(UpdateNodeOpsOwnerRequest::Command && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateNodeOpsOwnerRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateNodeOpsOwnerRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The command for updating O&M owners.
    // 
    // This parameter is required.
    shared_ptr<UpdateNodeOpsOwnerRequest::Command> command_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
