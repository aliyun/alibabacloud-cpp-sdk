// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesOutputsTables.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesOutputsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodesResponseBodyPagingInfoNodesOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyPagingInfoNodesOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(NodeOutputs, nodeOutputs_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyPagingInfoNodesOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeOutputs, nodeOutputs_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    ListNodesResponseBodyPagingInfoNodesOutputs() = default ;
    ListNodesResponseBodyPagingInfoNodesOutputs(const ListNodesResponseBodyPagingInfoNodesOutputs &) = default ;
    ListNodesResponseBodyPagingInfoNodesOutputs(ListNodesResponseBodyPagingInfoNodesOutputs &&) = default ;
    ListNodesResponseBodyPagingInfoNodesOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyPagingInfoNodesOutputs() = default ;
    ListNodesResponseBodyPagingInfoNodesOutputs& operator=(const ListNodesResponseBodyPagingInfoNodesOutputs &) = default ;
    ListNodesResponseBodyPagingInfoNodesOutputs& operator=(ListNodesResponseBodyPagingInfoNodesOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeOutputs_ != nullptr
        && this->tables_ != nullptr && this->variables_ != nullptr; };
    // nodeOutputs Field Functions 
    bool hasNodeOutputs() const { return this->nodeOutputs_ != nullptr;};
    void deleteNodeOutputs() { this->nodeOutputs_ = nullptr;};
    inline const vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs> & nodeOutputs() const { DARABONBA_PTR_GET_CONST(nodeOutputs_, vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs>) };
    inline vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs> nodeOutputs() { DARABONBA_PTR_GET(nodeOutputs_, vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs>) };
    inline ListNodesResponseBodyPagingInfoNodesOutputs& setNodeOutputs(const vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs> & nodeOutputs) { DARABONBA_PTR_SET_VALUE(nodeOutputs_, nodeOutputs) };
    inline ListNodesResponseBodyPagingInfoNodesOutputs& setNodeOutputs(vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs> && nodeOutputs) { DARABONBA_PTR_SET_RVALUE(nodeOutputs_, nodeOutputs) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsTables>) };
    inline vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsTables>) };
    inline ListNodesResponseBodyPagingInfoNodesOutputs& setTables(const vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline ListNodesResponseBodyPagingInfoNodesOutputs& setTables(vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsVariables>) };
    inline vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsVariables>) };
    inline ListNodesResponseBodyPagingInfoNodesOutputs& setVariables(const vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ListNodesResponseBodyPagingInfoNodesOutputs& setVariables(vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The node output list.
    std::shared_ptr<vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs>> nodeOutputs_ = nullptr;
    // The table list.
    std::shared_ptr<vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsTables>> tables_ = nullptr;
    // The variable list.
    std::shared_ptr<vector<Models::ListNodesResponseBodyPagingInfoNodesOutputsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
