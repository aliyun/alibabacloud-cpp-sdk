// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESINPUTSVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESINPUTSVARIABLES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesInputsVariablesNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodesResponseBodyPagingInfoNodesInputsVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyPagingInfoNodesInputsVariables& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Node, node_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyPagingInfoNodesInputsVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Node, node_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListNodesResponseBodyPagingInfoNodesInputsVariables() = default ;
    ListNodesResponseBodyPagingInfoNodesInputsVariables(const ListNodesResponseBodyPagingInfoNodesInputsVariables &) = default ;
    ListNodesResponseBodyPagingInfoNodesInputsVariables(ListNodesResponseBodyPagingInfoNodesInputsVariables &&) = default ;
    ListNodesResponseBodyPagingInfoNodesInputsVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyPagingInfoNodesInputsVariables() = default ;
    ListNodesResponseBodyPagingInfoNodesInputsVariables& operator=(const ListNodesResponseBodyPagingInfoNodesInputsVariables &) = default ;
    ListNodesResponseBodyPagingInfoNodesInputsVariables& operator=(ListNodesResponseBodyPagingInfoNodesInputsVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactType_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->node_ != nullptr && this->scope_ != nullptr && this->type_ != nullptr
        && this->value_ != nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline ListNodesResponseBodyPagingInfoNodesInputsVariables& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListNodesResponseBodyPagingInfoNodesInputsVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNodesResponseBodyPagingInfoNodesInputsVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline const Models::ListNodesResponseBodyPagingInfoNodesInputsVariablesNode & node() const { DARABONBA_PTR_GET_CONST(node_, Models::ListNodesResponseBodyPagingInfoNodesInputsVariablesNode) };
    inline Models::ListNodesResponseBodyPagingInfoNodesInputsVariablesNode node() { DARABONBA_PTR_GET(node_, Models::ListNodesResponseBodyPagingInfoNodesInputsVariablesNode) };
    inline ListNodesResponseBodyPagingInfoNodesInputsVariables& setNode(const Models::ListNodesResponseBodyPagingInfoNodesInputsVariablesNode & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
    inline ListNodesResponseBodyPagingInfoNodesInputsVariables& setNode(Models::ListNodesResponseBodyPagingInfoNodesInputsVariablesNode && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListNodesResponseBodyPagingInfoNodesInputsVariables& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListNodesResponseBodyPagingInfoNodesInputsVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListNodesResponseBodyPagingInfoNodesInputsVariables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The artifact type.
    std::shared_ptr<string> artifactType_ = nullptr;
    // The variable ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the variable.
    std::shared_ptr<string> name_ = nullptr;
    // The node to which the variable belongs.
    std::shared_ptr<Models::ListNodesResponseBodyPagingInfoNodesInputsVariablesNode> node_ = nullptr;
    // The scope of the variable. Valid values:
    // 
    // *   WorkSpace
    // *   NodeParameter
    // *   NodeContext
    // *   Workflow
    std::shared_ptr<string> scope_ = nullptr;
    // The type of the variable. Valid values:
    // 
    // *   NoKvVariableExpression
    // *   Constant
    // *   PassThrough
    // *   System
    // *   NodeOutput
    std::shared_ptr<string> type_ = nullptr;
    // The variable value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
