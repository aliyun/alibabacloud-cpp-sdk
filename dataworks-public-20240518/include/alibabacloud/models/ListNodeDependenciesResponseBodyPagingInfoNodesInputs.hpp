// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESINPUTS_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESINPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs.hpp>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables.hpp>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodeDependenciesResponseBodyPagingInfoNodesInputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDependenciesResponseBodyPagingInfoNodesInputs& obj) { 
      DARABONBA_PTR_TO_JSON(NodeOutputs, nodeOutputs_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDependenciesResponseBodyPagingInfoNodesInputs& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeOutputs, nodeOutputs_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    ListNodeDependenciesResponseBodyPagingInfoNodesInputs() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesInputs(const ListNodeDependenciesResponseBodyPagingInfoNodesInputs &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesInputs(ListNodeDependenciesResponseBodyPagingInfoNodesInputs &&) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesInputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesInputs() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesInputs& operator=(const ListNodeDependenciesResponseBodyPagingInfoNodesInputs &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesInputs& operator=(ListNodeDependenciesResponseBodyPagingInfoNodesInputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeOutputs_ != nullptr
        && this->tables_ != nullptr && this->variables_ != nullptr; };
    // nodeOutputs Field Functions 
    bool hasNodeOutputs() const { return this->nodeOutputs_ != nullptr;};
    void deleteNodeOutputs() { this->nodeOutputs_ = nullptr;};
    inline const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs> & nodeOutputs() const { DARABONBA_PTR_GET_CONST(nodeOutputs_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs>) };
    inline vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs> nodeOutputs() { DARABONBA_PTR_GET(nodeOutputs_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs>) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesInputs& setNodeOutputs(const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs> & nodeOutputs) { DARABONBA_PTR_SET_VALUE(nodeOutputs_, nodeOutputs) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesInputs& setNodeOutputs(vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs> && nodeOutputs) { DARABONBA_PTR_SET_RVALUE(nodeOutputs_, nodeOutputs) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables>) };
    inline vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables>) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesInputs& setTables(const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesInputs& setTables(vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables>) };
    inline vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables>) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesInputs& setVariables(const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesInputs& setVariables(vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The list of node outputs.
    std::shared_ptr<vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs>> nodeOutputs_ = nullptr;
    // The table list.
    std::shared_ptr<vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables>> tables_ = nullptr;
    // The variable list.
    std::shared_ptr<vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
