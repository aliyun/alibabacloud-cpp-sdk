// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALECLUSTERNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALECLUSTERNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ScaleClusterNodePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
    };
    ScaleClusterNodePoolRequest() = default ;
    ScaleClusterNodePoolRequest(const ScaleClusterNodePoolRequest &) = default ;
    ScaleClusterNodePoolRequest(ScaleClusterNodePoolRequest &&) = default ;
    ScaleClusterNodePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleClusterNodePoolRequest() = default ;
    ScaleClusterNodePoolRequest& operator=(const ScaleClusterNodePoolRequest &) = default ;
    ScaleClusterNodePoolRequest& operator=(ScaleClusterNodePoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ScaleClusterNodePoolRequest& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The number of nodes to add. For example, if the node pool currently has 2 nodes and you add 2 more, the node pool will have 4 nodes. Due to the node quota limit of the current cluster, you can add up to 500 nodes in a single operation.
    shared_ptr<int64_t> count_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
