// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESINPUTSVARIABLESNODE_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESINPUTSVARIABLESNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodesResponseBodyPagingInfoNodesInputsVariablesNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyPagingInfoNodesInputsVariablesNode& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyPagingInfoNodesInputsVariablesNode& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
    };
    ListNodesResponseBodyPagingInfoNodesInputsVariablesNode() = default ;
    ListNodesResponseBodyPagingInfoNodesInputsVariablesNode(const ListNodesResponseBodyPagingInfoNodesInputsVariablesNode &) = default ;
    ListNodesResponseBodyPagingInfoNodesInputsVariablesNode(ListNodesResponseBodyPagingInfoNodesInputsVariablesNode &&) = default ;
    ListNodesResponseBodyPagingInfoNodesInputsVariablesNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyPagingInfoNodesInputsVariablesNode() = default ;
    ListNodesResponseBodyPagingInfoNodesInputsVariablesNode& operator=(const ListNodesResponseBodyPagingInfoNodesInputsVariablesNode &) = default ;
    ListNodesResponseBodyPagingInfoNodesInputsVariablesNode& operator=(ListNodesResponseBodyPagingInfoNodesInputsVariablesNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline ListNodesResponseBodyPagingInfoNodesInputsVariablesNode& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


  protected:
    // The node output.
    std::shared_ptr<string> output_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
