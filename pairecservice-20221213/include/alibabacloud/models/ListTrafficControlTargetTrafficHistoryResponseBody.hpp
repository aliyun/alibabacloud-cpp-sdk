// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTARGETTRAFFICHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTARGETTRAFFICHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListTrafficControlTargetTrafficHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficControlTargetTrafficHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficControlTaskTrafficHistories, trafficControlTaskTrafficHistories_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficControlTargetTrafficHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTaskTrafficHistories, trafficControlTaskTrafficHistories_);
    };
    ListTrafficControlTargetTrafficHistoryResponseBody() = default ;
    ListTrafficControlTargetTrafficHistoryResponseBody(const ListTrafficControlTargetTrafficHistoryResponseBody &) = default ;
    ListTrafficControlTargetTrafficHistoryResponseBody(ListTrafficControlTargetTrafficHistoryResponseBody &&) = default ;
    ListTrafficControlTargetTrafficHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficControlTargetTrafficHistoryResponseBody() = default ;
    ListTrafficControlTargetTrafficHistoryResponseBody& operator=(const ListTrafficControlTargetTrafficHistoryResponseBody &) = default ;
    ListTrafficControlTargetTrafficHistoryResponseBody& operator=(ListTrafficControlTargetTrafficHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->totalCount_ != nullptr && this->trafficControlTaskTrafficHistories_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrafficControlTargetTrafficHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListTrafficControlTargetTrafficHistoryResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficControlTaskTrafficHistories Field Functions 
    bool hasTrafficControlTaskTrafficHistories() const { return this->trafficControlTaskTrafficHistories_ != nullptr;};
    void deleteTrafficControlTaskTrafficHistories() { this->trafficControlTaskTrafficHistories_ = nullptr;};
    inline const vector<ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories> & trafficControlTaskTrafficHistories() const { DARABONBA_PTR_GET_CONST(trafficControlTaskTrafficHistories_, vector<ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories>) };
    inline vector<ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories> trafficControlTaskTrafficHistories() { DARABONBA_PTR_GET(trafficControlTaskTrafficHistories_, vector<ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories>) };
    inline ListTrafficControlTargetTrafficHistoryResponseBody& setTrafficControlTaskTrafficHistories(const vector<ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories> & trafficControlTaskTrafficHistories) { DARABONBA_PTR_SET_VALUE(trafficControlTaskTrafficHistories_, trafficControlTaskTrafficHistories) };
    inline ListTrafficControlTargetTrafficHistoryResponseBody& setTrafficControlTaskTrafficHistories(vector<ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories> && trafficControlTaskTrafficHistories) { DARABONBA_PTR_SET_RVALUE(trafficControlTaskTrafficHistories_, trafficControlTaskTrafficHistories) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
    std::shared_ptr<vector<ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories>> trafficControlTaskTrafficHistories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
