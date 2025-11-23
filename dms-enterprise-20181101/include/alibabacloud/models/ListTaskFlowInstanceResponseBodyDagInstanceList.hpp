// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWINSTANCERESPONSEBODYDAGINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWINSTANCERESPONSEBODYDAGINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowInstanceResponseBodyDAGInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowInstanceResponseBodyDAGInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(DAGInstance, DAGInstance_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowInstanceResponseBodyDAGInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(DAGInstance, DAGInstance_);
    };
    ListTaskFlowInstanceResponseBodyDAGInstanceList() = default ;
    ListTaskFlowInstanceResponseBodyDAGInstanceList(const ListTaskFlowInstanceResponseBodyDAGInstanceList &) = default ;
    ListTaskFlowInstanceResponseBodyDAGInstanceList(ListTaskFlowInstanceResponseBodyDAGInstanceList &&) = default ;
    ListTaskFlowInstanceResponseBodyDAGInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowInstanceResponseBodyDAGInstanceList() = default ;
    ListTaskFlowInstanceResponseBodyDAGInstanceList& operator=(const ListTaskFlowInstanceResponseBodyDAGInstanceList &) = default ;
    ListTaskFlowInstanceResponseBodyDAGInstanceList& operator=(ListTaskFlowInstanceResponseBodyDAGInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DAGInstance_ == nullptr; };
    // DAGInstance Field Functions 
    bool hasDAGInstance() const { return this->DAGInstance_ != nullptr;};
    void deleteDAGInstance() { this->DAGInstance_ = nullptr;};
    inline const vector<Models::ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance> & DAGInstance() const { DARABONBA_PTR_GET_CONST(DAGInstance_, vector<Models::ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance>) };
    inline vector<Models::ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance> DAGInstance() { DARABONBA_PTR_GET(DAGInstance_, vector<Models::ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance>) };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceList& setDAGInstance(const vector<Models::ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance> & DAGInstance) { DARABONBA_PTR_SET_VALUE(DAGInstance_, DAGInstance) };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceList& setDAGInstance(vector<Models::ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance> && DAGInstance) { DARABONBA_PTR_SET_RVALUE(DAGInstance_, DAGInstance) };


  protected:
    std::shared_ptr<vector<Models::ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance>> DAGInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
