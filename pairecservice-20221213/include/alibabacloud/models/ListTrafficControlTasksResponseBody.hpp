// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrafficControlTasksResponseBodyTrafficControlTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListTrafficControlTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficControlTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficControlTasks, trafficControlTasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficControlTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTasks, trafficControlTasks_);
    };
    ListTrafficControlTasksResponseBody() = default ;
    ListTrafficControlTasksResponseBody(const ListTrafficControlTasksResponseBody &) = default ;
    ListTrafficControlTasksResponseBody(ListTrafficControlTasksResponseBody &&) = default ;
    ListTrafficControlTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficControlTasksResponseBody() = default ;
    ListTrafficControlTasksResponseBody& operator=(const ListTrafficControlTasksResponseBody &) = default ;
    ListTrafficControlTasksResponseBody& operator=(ListTrafficControlTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->totalCount_ != nullptr && this->trafficControlTasks_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrafficControlTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListTrafficControlTasksResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficControlTasks Field Functions 
    bool hasTrafficControlTasks() const { return this->trafficControlTasks_ != nullptr;};
    void deleteTrafficControlTasks() { this->trafficControlTasks_ = nullptr;};
    inline const vector<ListTrafficControlTasksResponseBodyTrafficControlTasks> & trafficControlTasks() const { DARABONBA_PTR_GET_CONST(trafficControlTasks_, vector<ListTrafficControlTasksResponseBodyTrafficControlTasks>) };
    inline vector<ListTrafficControlTasksResponseBodyTrafficControlTasks> trafficControlTasks() { DARABONBA_PTR_GET(trafficControlTasks_, vector<ListTrafficControlTasksResponseBodyTrafficControlTasks>) };
    inline ListTrafficControlTasksResponseBody& setTrafficControlTasks(const vector<ListTrafficControlTasksResponseBodyTrafficControlTasks> & trafficControlTasks) { DARABONBA_PTR_SET_VALUE(trafficControlTasks_, trafficControlTasks) };
    inline ListTrafficControlTasksResponseBody& setTrafficControlTasks(vector<ListTrafficControlTasksResponseBodyTrafficControlTasks> && trafficControlTasks) { DARABONBA_PTR_SET_RVALUE(trafficControlTasks_, trafficControlTasks) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
    std::shared_ptr<vector<ListTrafficControlTasksResponseBodyTrafficControlTasks>> trafficControlTasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
