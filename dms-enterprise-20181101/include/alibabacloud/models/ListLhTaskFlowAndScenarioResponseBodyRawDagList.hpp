// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODYRAWDAGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODYRAWDAGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLhTaskFlowAndScenarioResponseBodyRawDAGListDag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLhTaskFlowAndScenarioResponseBodyRawDAGList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLhTaskFlowAndScenarioResponseBodyRawDAGList& obj) { 
      DARABONBA_PTR_TO_JSON(Dag, dag_);
    };
    friend void from_json(const Darabonba::Json& j, ListLhTaskFlowAndScenarioResponseBodyRawDAGList& obj) { 
      DARABONBA_PTR_FROM_JSON(Dag, dag_);
    };
    ListLhTaskFlowAndScenarioResponseBodyRawDAGList() = default ;
    ListLhTaskFlowAndScenarioResponseBodyRawDAGList(const ListLhTaskFlowAndScenarioResponseBodyRawDAGList &) = default ;
    ListLhTaskFlowAndScenarioResponseBodyRawDAGList(ListLhTaskFlowAndScenarioResponseBodyRawDAGList &&) = default ;
    ListLhTaskFlowAndScenarioResponseBodyRawDAGList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLhTaskFlowAndScenarioResponseBodyRawDAGList() = default ;
    ListLhTaskFlowAndScenarioResponseBodyRawDAGList& operator=(const ListLhTaskFlowAndScenarioResponseBodyRawDAGList &) = default ;
    ListLhTaskFlowAndScenarioResponseBodyRawDAGList& operator=(ListLhTaskFlowAndScenarioResponseBodyRawDAGList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dag_ == nullptr; };
    // dag Field Functions 
    bool hasDag() const { return this->dag_ != nullptr;};
    void deleteDag() { this->dag_ = nullptr;};
    inline const vector<Models::ListLhTaskFlowAndScenarioResponseBodyRawDAGListDag> & dag() const { DARABONBA_PTR_GET_CONST(dag_, vector<Models::ListLhTaskFlowAndScenarioResponseBodyRawDAGListDag>) };
    inline vector<Models::ListLhTaskFlowAndScenarioResponseBodyRawDAGListDag> dag() { DARABONBA_PTR_GET(dag_, vector<Models::ListLhTaskFlowAndScenarioResponseBodyRawDAGListDag>) };
    inline ListLhTaskFlowAndScenarioResponseBodyRawDAGList& setDag(const vector<Models::ListLhTaskFlowAndScenarioResponseBodyRawDAGListDag> & dag) { DARABONBA_PTR_SET_VALUE(dag_, dag) };
    inline ListLhTaskFlowAndScenarioResponseBodyRawDAGList& setDag(vector<Models::ListLhTaskFlowAndScenarioResponseBodyRawDAGListDag> && dag) { DARABONBA_PTR_SET_RVALUE(dag_, dag) };


  protected:
    std::shared_ptr<vector<Models::ListLhTaskFlowAndScenarioResponseBodyRawDAGListDag>> dag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
