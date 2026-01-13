// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTARGETTRAFFICHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTARGETTRAFFICHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class TrafficControlTaskTrafficHistories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficControlTaskTrafficHistories& obj) { 
        DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
        DARABONBA_PTR_TO_JSON(ItemId, itemId_);
        DARABONBA_PTR_TO_JSON(RecordTime, recordTime_);
        DARABONBA_PTR_TO_JSON(TrafficControlTargetAimTraffic, trafficControlTargetAimTraffic_);
        DARABONBA_PTR_TO_JSON(TrafficControlTargetTraffic, trafficControlTargetTraffic_);
        DARABONBA_PTR_TO_JSON(TrafficControlTaskTraffic, trafficControlTaskTraffic_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficControlTaskTrafficHistories& obj) { 
        DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
        DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
        DARABONBA_PTR_FROM_JSON(RecordTime, recordTime_);
        DARABONBA_PTR_FROM_JSON(TrafficControlTargetAimTraffic, trafficControlTargetAimTraffic_);
        DARABONBA_PTR_FROM_JSON(TrafficControlTargetTraffic, trafficControlTargetTraffic_);
        DARABONBA_PTR_FROM_JSON(TrafficControlTaskTraffic, trafficControlTaskTraffic_);
      };
      TrafficControlTaskTrafficHistories() = default ;
      TrafficControlTaskTrafficHistories(const TrafficControlTaskTrafficHistories &) = default ;
      TrafficControlTaskTrafficHistories(TrafficControlTaskTrafficHistories &&) = default ;
      TrafficControlTaskTrafficHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficControlTaskTrafficHistories() = default ;
      TrafficControlTaskTrafficHistories& operator=(const TrafficControlTaskTrafficHistories &) = default ;
      TrafficControlTaskTrafficHistories& operator=(TrafficControlTaskTrafficHistories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->experimentId_ == nullptr
        && this->itemId_ == nullptr && this->recordTime_ == nullptr && this->trafficControlTargetAimTraffic_ == nullptr && this->trafficControlTargetTraffic_ == nullptr && this->trafficControlTaskTraffic_ == nullptr; };
      // experimentId Field Functions 
      bool hasExperimentId() const { return this->experimentId_ != nullptr;};
      void deleteExperimentId() { this->experimentId_ = nullptr;};
      inline string getExperimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
      inline TrafficControlTaskTrafficHistories& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
      inline TrafficControlTaskTrafficHistories& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // recordTime Field Functions 
      bool hasRecordTime() const { return this->recordTime_ != nullptr;};
      void deleteRecordTime() { this->recordTime_ = nullptr;};
      inline string getRecordTime() const { DARABONBA_PTR_GET_DEFAULT(recordTime_, "") };
      inline TrafficControlTaskTrafficHistories& setRecordTime(string recordTime) { DARABONBA_PTR_SET_VALUE(recordTime_, recordTime) };


      // trafficControlTargetAimTraffic Field Functions 
      bool hasTrafficControlTargetAimTraffic() const { return this->trafficControlTargetAimTraffic_ != nullptr;};
      void deleteTrafficControlTargetAimTraffic() { this->trafficControlTargetAimTraffic_ = nullptr;};
      inline double getTrafficControlTargetAimTraffic() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetAimTraffic_, 0.0) };
      inline TrafficControlTaskTrafficHistories& setTrafficControlTargetAimTraffic(double trafficControlTargetAimTraffic) { DARABONBA_PTR_SET_VALUE(trafficControlTargetAimTraffic_, trafficControlTargetAimTraffic) };


      // trafficControlTargetTraffic Field Functions 
      bool hasTrafficControlTargetTraffic() const { return this->trafficControlTargetTraffic_ != nullptr;};
      void deleteTrafficControlTargetTraffic() { this->trafficControlTargetTraffic_ = nullptr;};
      inline double getTrafficControlTargetTraffic() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetTraffic_, 0.0) };
      inline TrafficControlTaskTrafficHistories& setTrafficControlTargetTraffic(double trafficControlTargetTraffic) { DARABONBA_PTR_SET_VALUE(trafficControlTargetTraffic_, trafficControlTargetTraffic) };


      // trafficControlTaskTraffic Field Functions 
      bool hasTrafficControlTaskTraffic() const { return this->trafficControlTaskTraffic_ != nullptr;};
      void deleteTrafficControlTaskTraffic() { this->trafficControlTaskTraffic_ = nullptr;};
      inline double getTrafficControlTaskTraffic() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTaskTraffic_, 0.0) };
      inline TrafficControlTaskTrafficHistories& setTrafficControlTaskTraffic(double trafficControlTaskTraffic) { DARABONBA_PTR_SET_VALUE(trafficControlTaskTraffic_, trafficControlTaskTraffic) };


    protected:
      shared_ptr<string> experimentId_ {};
      shared_ptr<string> itemId_ {};
      shared_ptr<string> recordTime_ {};
      shared_ptr<double> trafficControlTargetAimTraffic_ {};
      shared_ptr<double> trafficControlTargetTraffic_ {};
      shared_ptr<double> trafficControlTaskTraffic_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->trafficControlTaskTrafficHistories_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrafficControlTargetTrafficHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListTrafficControlTargetTrafficHistoryResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficControlTaskTrafficHistories Field Functions 
    bool hasTrafficControlTaskTrafficHistories() const { return this->trafficControlTaskTrafficHistories_ != nullptr;};
    void deleteTrafficControlTaskTrafficHistories() { this->trafficControlTaskTrafficHistories_ = nullptr;};
    inline const vector<ListTrafficControlTargetTrafficHistoryResponseBody::TrafficControlTaskTrafficHistories> & getTrafficControlTaskTrafficHistories() const { DARABONBA_PTR_GET_CONST(trafficControlTaskTrafficHistories_, vector<ListTrafficControlTargetTrafficHistoryResponseBody::TrafficControlTaskTrafficHistories>) };
    inline vector<ListTrafficControlTargetTrafficHistoryResponseBody::TrafficControlTaskTrafficHistories> getTrafficControlTaskTrafficHistories() { DARABONBA_PTR_GET(trafficControlTaskTrafficHistories_, vector<ListTrafficControlTargetTrafficHistoryResponseBody::TrafficControlTaskTrafficHistories>) };
    inline ListTrafficControlTargetTrafficHistoryResponseBody& setTrafficControlTaskTrafficHistories(const vector<ListTrafficControlTargetTrafficHistoryResponseBody::TrafficControlTaskTrafficHistories> & trafficControlTaskTrafficHistories) { DARABONBA_PTR_SET_VALUE(trafficControlTaskTrafficHistories_, trafficControlTaskTrafficHistories) };
    inline ListTrafficControlTargetTrafficHistoryResponseBody& setTrafficControlTaskTrafficHistories(vector<ListTrafficControlTargetTrafficHistoryResponseBody::TrafficControlTaskTrafficHistories> && trafficControlTaskTrafficHistories) { DARABONBA_PTR_SET_RVALUE(trafficControlTaskTrafficHistories_, trafficControlTaskTrafficHistories) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
    shared_ptr<vector<ListTrafficControlTargetTrafficHistoryResponseBody::TrafficControlTaskTrafficHistories>> trafficControlTaskTrafficHistories_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
