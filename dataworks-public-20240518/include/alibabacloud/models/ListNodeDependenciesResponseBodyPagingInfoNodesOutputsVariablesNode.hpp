// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESOUTPUTSVARIABLESNODE_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESOUTPUTSVARIABLESNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
    };
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode(const ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode(ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode &&) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode& operator=(const ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode& operator=(ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


  protected:
    // The node output corresponding to the variable.
    std::shared_ptr<string> output_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
