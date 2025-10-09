// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESOUTPUTSNODEOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESOUTPUTSNODEOUTPUTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs(const ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs(ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs &&) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs& operator=(const ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs& operator=(ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


  protected:
    // The output of the node.
    std::shared_ptr<string> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
