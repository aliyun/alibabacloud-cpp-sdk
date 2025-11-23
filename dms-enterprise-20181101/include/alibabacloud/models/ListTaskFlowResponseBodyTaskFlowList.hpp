// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWRESPONSEBODYTASKFLOWLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWRESPONSEBODYTASKFLOWLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskFlowResponseBodyTaskFlowListTaskFlow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowResponseBodyTaskFlowList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowResponseBodyTaskFlowList& obj) { 
      DARABONBA_PTR_TO_JSON(TaskFlow, taskFlow_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowResponseBodyTaskFlowList& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskFlow, taskFlow_);
    };
    ListTaskFlowResponseBodyTaskFlowList() = default ;
    ListTaskFlowResponseBodyTaskFlowList(const ListTaskFlowResponseBodyTaskFlowList &) = default ;
    ListTaskFlowResponseBodyTaskFlowList(ListTaskFlowResponseBodyTaskFlowList &&) = default ;
    ListTaskFlowResponseBodyTaskFlowList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowResponseBodyTaskFlowList() = default ;
    ListTaskFlowResponseBodyTaskFlowList& operator=(const ListTaskFlowResponseBodyTaskFlowList &) = default ;
    ListTaskFlowResponseBodyTaskFlowList& operator=(ListTaskFlowResponseBodyTaskFlowList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskFlow_ == nullptr; };
    // taskFlow Field Functions 
    bool hasTaskFlow() const { return this->taskFlow_ != nullptr;};
    void deleteTaskFlow() { this->taskFlow_ = nullptr;};
    inline const vector<Models::ListTaskFlowResponseBodyTaskFlowListTaskFlow> & taskFlow() const { DARABONBA_PTR_GET_CONST(taskFlow_, vector<Models::ListTaskFlowResponseBodyTaskFlowListTaskFlow>) };
    inline vector<Models::ListTaskFlowResponseBodyTaskFlowListTaskFlow> taskFlow() { DARABONBA_PTR_GET(taskFlow_, vector<Models::ListTaskFlowResponseBodyTaskFlowListTaskFlow>) };
    inline ListTaskFlowResponseBodyTaskFlowList& setTaskFlow(const vector<Models::ListTaskFlowResponseBodyTaskFlowListTaskFlow> & taskFlow) { DARABONBA_PTR_SET_VALUE(taskFlow_, taskFlow) };
    inline ListTaskFlowResponseBodyTaskFlowList& setTaskFlow(vector<Models::ListTaskFlowResponseBodyTaskFlowListTaskFlow> && taskFlow) { DARABONBA_PTR_SET_RVALUE(taskFlow_, taskFlow) };


  protected:
    std::shared_ptr<vector<Models::ListTaskFlowResponseBodyTaskFlowListTaskFlow>> taskFlow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
