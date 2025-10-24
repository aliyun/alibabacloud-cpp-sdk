// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAWORKFLOWEXECUTIONSRESPONSEBODYMEDIAWORKFLOWEXECUTIONLISTMEDIAWORKFLOWEXECUTIONACTIVITYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAWORKFLOWEXECUTIONSRESPONSEBODYMEDIAWORKFLOWEXECUTIONLISTMEDIAWORKFLOWEXECUTIONACTIVITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList& obj) { 
      DARABONBA_PTR_TO_JSON(Activity, activity_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList& obj) { 
      DARABONBA_PTR_FROM_JSON(Activity, activity_);
    };
    ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList() = default ;
    ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList(const ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList &) = default ;
    ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList(ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList &&) = default ;
    ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList() = default ;
    ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList& operator=(const ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList &) = default ;
    ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList& operator=(ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activity_ == nullptr; };
    // activity Field Functions 
    bool hasActivity() const { return this->activity_ != nullptr;};
    void deleteActivity() { this->activity_ = nullptr;};
    inline const vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity> & activity() const { DARABONBA_PTR_GET_CONST(activity_, vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity>) };
    inline vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity> activity() { DARABONBA_PTR_GET(activity_, vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity>) };
    inline ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList& setActivity(const vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity> & activity) { DARABONBA_PTR_SET_VALUE(activity_, activity) };
    inline ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityList& setActivity(vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity> && activity) { DARABONBA_PTR_SET_RVALUE(activity_, activity) };


  protected:
    std::shared_ptr<vector<Models::ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity>> activity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
