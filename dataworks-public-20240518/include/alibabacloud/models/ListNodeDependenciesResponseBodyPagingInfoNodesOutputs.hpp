// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs.hpp>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables.hpp>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodeDependenciesResponseBodyPagingInfoNodesOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDependenciesResponseBodyPagingInfoNodesOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(NodeOutputs, nodeOutputs_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDependenciesResponseBodyPagingInfoNodesOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeOutputs, nodeOutputs_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputs() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputs(const ListNodeDependenciesResponseBodyPagingInfoNodesOutputs &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputs(ListNodeDependenciesResponseBodyPagingInfoNodesOutputs &&) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputs() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputs& operator=(const ListNodeDependenciesResponseBodyPagingInfoNodesOutputs &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputs& operator=(ListNodeDependenciesResponseBodyPagingInfoNodesOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeOutputs_ != nullptr
        && this->tables_ != nullptr && this->variables_ != nullptr; };
    // nodeOutputs Field Functions 
    bool hasNodeOutputs() const { return this->nodeOutputs_ != nullptr;};
    void deleteNodeOutputs() { this->nodeOutputs_ = nullptr;};
    inline const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs> & nodeOutputs() const { DARABONBA_PTR_GET_CONST(nodeOutputs_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs>) };
    inline vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs> nodeOutputs() { DARABONBA_PTR_GET(nodeOutputs_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs>) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesOutputs& setNodeOutputs(const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs> & nodeOutputs) { DARABONBA_PTR_SET_VALUE(nodeOutputs_, nodeOutputs) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesOutputs& setNodeOutputs(vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs> && nodeOutputs) { DARABONBA_PTR_SET_RVALUE(nodeOutputs_, nodeOutputs) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables>) };
    inline vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables>) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesOutputs& setTables(const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesOutputs& setTables(vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables>) };
    inline vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables>) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesOutputs& setVariables(const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesOutputs& setVariables(vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The list of node outputs.
    std::shared_ptr<vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs>> nodeOutputs_ = nullptr;
    // The table list.
    std::shared_ptr<vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables>> tables_ = nullptr;
    // The variable list.
    std::shared_ptr<vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
