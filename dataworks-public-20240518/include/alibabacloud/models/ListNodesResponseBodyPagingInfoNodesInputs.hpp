// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESINPUTS_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESINPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesInputsTables.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesInputsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodesResponseBodyPagingInfoNodesInputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyPagingInfoNodesInputs& obj) { 
      DARABONBA_PTR_TO_JSON(NodeOutputs, nodeOutputs_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyPagingInfoNodesInputs& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeOutputs, nodeOutputs_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    ListNodesResponseBodyPagingInfoNodesInputs() = default ;
    ListNodesResponseBodyPagingInfoNodesInputs(const ListNodesResponseBodyPagingInfoNodesInputs &) = default ;
    ListNodesResponseBodyPagingInfoNodesInputs(ListNodesResponseBodyPagingInfoNodesInputs &&) = default ;
    ListNodesResponseBodyPagingInfoNodesInputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyPagingInfoNodesInputs() = default ;
    ListNodesResponseBodyPagingInfoNodesInputs& operator=(const ListNodesResponseBodyPagingInfoNodesInputs &) = default ;
    ListNodesResponseBodyPagingInfoNodesInputs& operator=(ListNodesResponseBodyPagingInfoNodesInputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeOutputs_ == nullptr
        && return this->tables_ == nullptr && return this->variables_ == nullptr; };
    // nodeOutputs Field Functions 
    bool hasNodeOutputs() const { return this->nodeOutputs_ != nullptr;};
    void deleteNodeOutputs() { this->nodeOutputs_ = nullptr;};
    inline const vector<Models::ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs> & nodeOutputs() const { DARABONBA_PTR_GET_CONST(nodeOutputs_, vector<Models::ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs>) };
    inline vector<Models::ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs> nodeOutputs() { DARABONBA_PTR_GET(nodeOutputs_, vector<Models::ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs>) };
    inline ListNodesResponseBodyPagingInfoNodesInputs& setNodeOutputs(const vector<Models::ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs> & nodeOutputs) { DARABONBA_PTR_SET_VALUE(nodeOutputs_, nodeOutputs) };
    inline ListNodesResponseBodyPagingInfoNodesInputs& setNodeOutputs(vector<Models::ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs> && nodeOutputs) { DARABONBA_PTR_SET_RVALUE(nodeOutputs_, nodeOutputs) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::ListNodesResponseBodyPagingInfoNodesInputsTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::ListNodesResponseBodyPagingInfoNodesInputsTables>) };
    inline vector<Models::ListNodesResponseBodyPagingInfoNodesInputsTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::ListNodesResponseBodyPagingInfoNodesInputsTables>) };
    inline ListNodesResponseBodyPagingInfoNodesInputs& setTables(const vector<Models::ListNodesResponseBodyPagingInfoNodesInputsTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline ListNodesResponseBodyPagingInfoNodesInputs& setTables(vector<Models::ListNodesResponseBodyPagingInfoNodesInputsTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::ListNodesResponseBodyPagingInfoNodesInputsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::ListNodesResponseBodyPagingInfoNodesInputsVariables>) };
    inline vector<Models::ListNodesResponseBodyPagingInfoNodesInputsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::ListNodesResponseBodyPagingInfoNodesInputsVariables>) };
    inline ListNodesResponseBodyPagingInfoNodesInputs& setVariables(const vector<Models::ListNodesResponseBodyPagingInfoNodesInputsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ListNodesResponseBodyPagingInfoNodesInputs& setVariables(vector<Models::ListNodesResponseBodyPagingInfoNodesInputsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The node output list.
    std::shared_ptr<vector<Models::ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs>> nodeOutputs_ = nullptr;
    // The table list.
    std::shared_ptr<vector<Models::ListNodesResponseBodyPagingInfoNodesInputsTables>> tables_ = nullptr;
    // The variable list.
    std::shared_ptr<vector<Models::ListNodesResponseBodyPagingInfoNodesInputsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
