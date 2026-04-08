// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTASKITEMREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTASKITEMREPORTRESPONSEBODY_HPP_
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
  class QueryTrafficControlTaskItemReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTrafficControlTaskItemReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficControlTaskItemReports, trafficControlTaskItemReports_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTrafficControlTaskItemReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTaskItemReports, trafficControlTaskItemReports_);
    };
    QueryTrafficControlTaskItemReportResponseBody() = default ;
    QueryTrafficControlTaskItemReportResponseBody(const QueryTrafficControlTaskItemReportResponseBody &) = default ;
    QueryTrafficControlTaskItemReportResponseBody(QueryTrafficControlTaskItemReportResponseBody &&) = default ;
    QueryTrafficControlTaskItemReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTrafficControlTaskItemReportResponseBody() = default ;
    QueryTrafficControlTaskItemReportResponseBody& operator=(const QueryTrafficControlTaskItemReportResponseBody &) = default ;
    QueryTrafficControlTaskItemReportResponseBody& operator=(QueryTrafficControlTaskItemReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficControlTaskItemReports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficControlTaskItemReports& obj) { 
        DARABONBA_PTR_TO_JSON(ActualItemControlNum, actualItemControlNum_);
        DARABONBA_PTR_TO_JSON(ActualItemControlTraffic, actualItemControlTraffic_);
        DARABONBA_PTR_TO_JSON(DoneItemControlNum, doneItemControlNum_);
        DARABONBA_PTR_TO_JSON(DoneItemControlPercentage, doneItemControlPercentage_);
        DARABONBA_PTR_TO_JSON(ItemControlNumPercentage, itemControlNumPercentage_);
        DARABONBA_PTR_TO_JSON(ItemControlTrafficPercentage, itemControlTrafficPercentage_);
        DARABONBA_PTR_TO_JSON(OughtItemControlNum, oughtItemControlNum_);
        DARABONBA_PTR_TO_JSON(OughtItemControlTraffic, oughtItemControlTraffic_);
        DARABONBA_PTR_TO_JSON(TrafficControlTargetId, trafficControlTargetId_);
        DARABONBA_PTR_TO_JSON(TrafficControlTargetName, trafficControlTargetName_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficControlTaskItemReports& obj) { 
        DARABONBA_PTR_FROM_JSON(ActualItemControlNum, actualItemControlNum_);
        DARABONBA_PTR_FROM_JSON(ActualItemControlTraffic, actualItemControlTraffic_);
        DARABONBA_PTR_FROM_JSON(DoneItemControlNum, doneItemControlNum_);
        DARABONBA_PTR_FROM_JSON(DoneItemControlPercentage, doneItemControlPercentage_);
        DARABONBA_PTR_FROM_JSON(ItemControlNumPercentage, itemControlNumPercentage_);
        DARABONBA_PTR_FROM_JSON(ItemControlTrafficPercentage, itemControlTrafficPercentage_);
        DARABONBA_PTR_FROM_JSON(OughtItemControlNum, oughtItemControlNum_);
        DARABONBA_PTR_FROM_JSON(OughtItemControlTraffic, oughtItemControlTraffic_);
        DARABONBA_PTR_FROM_JSON(TrafficControlTargetId, trafficControlTargetId_);
        DARABONBA_PTR_FROM_JSON(TrafficControlTargetName, trafficControlTargetName_);
      };
      TrafficControlTaskItemReports() = default ;
      TrafficControlTaskItemReports(const TrafficControlTaskItemReports &) = default ;
      TrafficControlTaskItemReports(TrafficControlTaskItemReports &&) = default ;
      TrafficControlTaskItemReports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficControlTaskItemReports() = default ;
      TrafficControlTaskItemReports& operator=(const TrafficControlTaskItemReports &) = default ;
      TrafficControlTaskItemReports& operator=(TrafficControlTaskItemReports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actualItemControlNum_ == nullptr
        && this->actualItemControlTraffic_ == nullptr && this->doneItemControlNum_ == nullptr && this->doneItemControlPercentage_ == nullptr && this->itemControlNumPercentage_ == nullptr && this->itemControlTrafficPercentage_ == nullptr
        && this->oughtItemControlNum_ == nullptr && this->oughtItemControlTraffic_ == nullptr && this->trafficControlTargetId_ == nullptr && this->trafficControlTargetName_ == nullptr; };
      // actualItemControlNum Field Functions 
      bool hasActualItemControlNum() const { return this->actualItemControlNum_ != nullptr;};
      void deleteActualItemControlNum() { this->actualItemControlNum_ = nullptr;};
      inline int64_t getActualItemControlNum() const { DARABONBA_PTR_GET_DEFAULT(actualItemControlNum_, 0L) };
      inline TrafficControlTaskItemReports& setActualItemControlNum(int64_t actualItemControlNum) { DARABONBA_PTR_SET_VALUE(actualItemControlNum_, actualItemControlNum) };


      // actualItemControlTraffic Field Functions 
      bool hasActualItemControlTraffic() const { return this->actualItemControlTraffic_ != nullptr;};
      void deleteActualItemControlTraffic() { this->actualItemControlTraffic_ = nullptr;};
      inline int64_t getActualItemControlTraffic() const { DARABONBA_PTR_GET_DEFAULT(actualItemControlTraffic_, 0L) };
      inline TrafficControlTaskItemReports& setActualItemControlTraffic(int64_t actualItemControlTraffic) { DARABONBA_PTR_SET_VALUE(actualItemControlTraffic_, actualItemControlTraffic) };


      // doneItemControlNum Field Functions 
      bool hasDoneItemControlNum() const { return this->doneItemControlNum_ != nullptr;};
      void deleteDoneItemControlNum() { this->doneItemControlNum_ = nullptr;};
      inline int64_t getDoneItemControlNum() const { DARABONBA_PTR_GET_DEFAULT(doneItemControlNum_, 0L) };
      inline TrafficControlTaskItemReports& setDoneItemControlNum(int64_t doneItemControlNum) { DARABONBA_PTR_SET_VALUE(doneItemControlNum_, doneItemControlNum) };


      // doneItemControlPercentage Field Functions 
      bool hasDoneItemControlPercentage() const { return this->doneItemControlPercentage_ != nullptr;};
      void deleteDoneItemControlPercentage() { this->doneItemControlPercentage_ = nullptr;};
      inline string getDoneItemControlPercentage() const { DARABONBA_PTR_GET_DEFAULT(doneItemControlPercentage_, "") };
      inline TrafficControlTaskItemReports& setDoneItemControlPercentage(string doneItemControlPercentage) { DARABONBA_PTR_SET_VALUE(doneItemControlPercentage_, doneItemControlPercentage) };


      // itemControlNumPercentage Field Functions 
      bool hasItemControlNumPercentage() const { return this->itemControlNumPercentage_ != nullptr;};
      void deleteItemControlNumPercentage() { this->itemControlNumPercentage_ = nullptr;};
      inline string getItemControlNumPercentage() const { DARABONBA_PTR_GET_DEFAULT(itemControlNumPercentage_, "") };
      inline TrafficControlTaskItemReports& setItemControlNumPercentage(string itemControlNumPercentage) { DARABONBA_PTR_SET_VALUE(itemControlNumPercentage_, itemControlNumPercentage) };


      // itemControlTrafficPercentage Field Functions 
      bool hasItemControlTrafficPercentage() const { return this->itemControlTrafficPercentage_ != nullptr;};
      void deleteItemControlTrafficPercentage() { this->itemControlTrafficPercentage_ = nullptr;};
      inline string getItemControlTrafficPercentage() const { DARABONBA_PTR_GET_DEFAULT(itemControlTrafficPercentage_, "") };
      inline TrafficControlTaskItemReports& setItemControlTrafficPercentage(string itemControlTrafficPercentage) { DARABONBA_PTR_SET_VALUE(itemControlTrafficPercentage_, itemControlTrafficPercentage) };


      // oughtItemControlNum Field Functions 
      bool hasOughtItemControlNum() const { return this->oughtItemControlNum_ != nullptr;};
      void deleteOughtItemControlNum() { this->oughtItemControlNum_ = nullptr;};
      inline int64_t getOughtItemControlNum() const { DARABONBA_PTR_GET_DEFAULT(oughtItemControlNum_, 0L) };
      inline TrafficControlTaskItemReports& setOughtItemControlNum(int64_t oughtItemControlNum) { DARABONBA_PTR_SET_VALUE(oughtItemControlNum_, oughtItemControlNum) };


      // oughtItemControlTraffic Field Functions 
      bool hasOughtItemControlTraffic() const { return this->oughtItemControlTraffic_ != nullptr;};
      void deleteOughtItemControlTraffic() { this->oughtItemControlTraffic_ = nullptr;};
      inline int64_t getOughtItemControlTraffic() const { DARABONBA_PTR_GET_DEFAULT(oughtItemControlTraffic_, 0L) };
      inline TrafficControlTaskItemReports& setOughtItemControlTraffic(int64_t oughtItemControlTraffic) { DARABONBA_PTR_SET_VALUE(oughtItemControlTraffic_, oughtItemControlTraffic) };


      // trafficControlTargetId Field Functions 
      bool hasTrafficControlTargetId() const { return this->trafficControlTargetId_ != nullptr;};
      void deleteTrafficControlTargetId() { this->trafficControlTargetId_ = nullptr;};
      inline string getTrafficControlTargetId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetId_, "") };
      inline TrafficControlTaskItemReports& setTrafficControlTargetId(string trafficControlTargetId) { DARABONBA_PTR_SET_VALUE(trafficControlTargetId_, trafficControlTargetId) };


      // trafficControlTargetName Field Functions 
      bool hasTrafficControlTargetName() const { return this->trafficControlTargetName_ != nullptr;};
      void deleteTrafficControlTargetName() { this->trafficControlTargetName_ = nullptr;};
      inline string getTrafficControlTargetName() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetName_, "") };
      inline TrafficControlTaskItemReports& setTrafficControlTargetName(string trafficControlTargetName) { DARABONBA_PTR_SET_VALUE(trafficControlTargetName_, trafficControlTargetName) };


    protected:
      shared_ptr<int64_t> actualItemControlNum_ {};
      shared_ptr<int64_t> actualItemControlTraffic_ {};
      shared_ptr<int64_t> doneItemControlNum_ {};
      shared_ptr<string> doneItemControlPercentage_ {};
      shared_ptr<string> itemControlNumPercentage_ {};
      shared_ptr<string> itemControlTrafficPercentage_ {};
      shared_ptr<int64_t> oughtItemControlNum_ {};
      shared_ptr<int64_t> oughtItemControlTraffic_ {};
      shared_ptr<string> trafficControlTargetId_ {};
      shared_ptr<string> trafficControlTargetName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trafficControlTaskItemReports_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTrafficControlTaskItemReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficControlTaskItemReports Field Functions 
    bool hasTrafficControlTaskItemReports() const { return this->trafficControlTaskItemReports_ != nullptr;};
    void deleteTrafficControlTaskItemReports() { this->trafficControlTaskItemReports_ = nullptr;};
    inline const vector<QueryTrafficControlTaskItemReportResponseBody::TrafficControlTaskItemReports> & getTrafficControlTaskItemReports() const { DARABONBA_PTR_GET_CONST(trafficControlTaskItemReports_, vector<QueryTrafficControlTaskItemReportResponseBody::TrafficControlTaskItemReports>) };
    inline vector<QueryTrafficControlTaskItemReportResponseBody::TrafficControlTaskItemReports> getTrafficControlTaskItemReports() { DARABONBA_PTR_GET(trafficControlTaskItemReports_, vector<QueryTrafficControlTaskItemReportResponseBody::TrafficControlTaskItemReports>) };
    inline QueryTrafficControlTaskItemReportResponseBody& setTrafficControlTaskItemReports(const vector<QueryTrafficControlTaskItemReportResponseBody::TrafficControlTaskItemReports> & trafficControlTaskItemReports) { DARABONBA_PTR_SET_VALUE(trafficControlTaskItemReports_, trafficControlTaskItemReports) };
    inline QueryTrafficControlTaskItemReportResponseBody& setTrafficControlTaskItemReports(vector<QueryTrafficControlTaskItemReportResponseBody::TrafficControlTaskItemReports> && trafficControlTaskItemReports) { DARABONBA_PTR_SET_RVALUE(trafficControlTaskItemReports_, trafficControlTaskItemReports) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<QueryTrafficControlTaskItemReportResponseBody::TrafficControlTaskItemReports>> trafficControlTaskItemReports_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
