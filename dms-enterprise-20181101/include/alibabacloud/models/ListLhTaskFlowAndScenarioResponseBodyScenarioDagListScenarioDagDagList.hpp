// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODYSCENARIODAGLISTSCENARIODAGDAGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODYSCENARIODAGLISTSCENARIODAGDAGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList& obj) { 
      DARABONBA_PTR_TO_JSON(Dag, dag_);
    };
    friend void from_json(const Darabonba::Json& j, ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList& obj) { 
      DARABONBA_PTR_FROM_JSON(Dag, dag_);
    };
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList() = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList(const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList &) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList(ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList &&) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList() = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList& operator=(const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList &) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList& operator=(ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dag_ == nullptr; };
    // dag Field Functions 
    bool hasDag() const { return this->dag_ != nullptr;};
    void deleteDag() { this->dag_ = nullptr;};
    inline const vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag> & dag() const { DARABONBA_PTR_GET_CONST(dag_, vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag>) };
    inline vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag> dag() { DARABONBA_PTR_GET(dag_, vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag>) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList& setDag(const vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag> & dag) { DARABONBA_PTR_SET_VALUE(dag_, dag) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList& setDag(vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag> && dag) { DARABONBA_PTR_SET_RVALUE(dag_, dag) };


  protected:
    std::shared_ptr<vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag>> dag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
