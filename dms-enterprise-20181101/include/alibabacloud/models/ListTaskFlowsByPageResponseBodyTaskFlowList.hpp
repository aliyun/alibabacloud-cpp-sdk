// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWSBYPAGERESPONSEBODYTASKFLOWLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWSBYPAGERESPONSEBODYTASKFLOWLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowsByPageResponseBodyTaskFlowList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowsByPageResponseBodyTaskFlowList& obj) { 
      DARABONBA_PTR_TO_JSON(TaskFlow, taskFlow_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowsByPageResponseBodyTaskFlowList& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskFlow, taskFlow_);
    };
    ListTaskFlowsByPageResponseBodyTaskFlowList() = default ;
    ListTaskFlowsByPageResponseBodyTaskFlowList(const ListTaskFlowsByPageResponseBodyTaskFlowList &) = default ;
    ListTaskFlowsByPageResponseBodyTaskFlowList(ListTaskFlowsByPageResponseBodyTaskFlowList &&) = default ;
    ListTaskFlowsByPageResponseBodyTaskFlowList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowsByPageResponseBodyTaskFlowList() = default ;
    ListTaskFlowsByPageResponseBodyTaskFlowList& operator=(const ListTaskFlowsByPageResponseBodyTaskFlowList &) = default ;
    ListTaskFlowsByPageResponseBodyTaskFlowList& operator=(ListTaskFlowsByPageResponseBodyTaskFlowList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskFlow_ != nullptr; };
    // taskFlow Field Functions 
    bool hasTaskFlow() const { return this->taskFlow_ != nullptr;};
    void deleteTaskFlow() { this->taskFlow_ = nullptr;};
    inline const vector<Models::ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow> & taskFlow() const { DARABONBA_PTR_GET_CONST(taskFlow_, vector<Models::ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow>) };
    inline vector<Models::ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow> taskFlow() { DARABONBA_PTR_GET(taskFlow_, vector<Models::ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow>) };
    inline ListTaskFlowsByPageResponseBodyTaskFlowList& setTaskFlow(const vector<Models::ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow> & taskFlow) { DARABONBA_PTR_SET_VALUE(taskFlow_, taskFlow) };
    inline ListTaskFlowsByPageResponseBodyTaskFlowList& setTaskFlow(vector<Models::ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow> && taskFlow) { DARABONBA_PTR_SET_RVALUE(taskFlow_, taskFlow) };


  protected:
    std::shared_ptr<vector<Models::ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow>> taskFlow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
