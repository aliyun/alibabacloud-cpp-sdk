// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTARGETITEMREPORTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTARGETITEMREPORTDETAILRESPONSEBODY_HPP_
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
  class QueryTrafficControlTargetItemReportDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTrafficControlTargetItemReportDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficControlTargetItemReportDetail, trafficControlTargetItemReportDetail_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTrafficControlTargetItemReportDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTargetItemReportDetail, trafficControlTargetItemReportDetail_);
    };
    QueryTrafficControlTargetItemReportDetailResponseBody() = default ;
    QueryTrafficControlTargetItemReportDetailResponseBody(const QueryTrafficControlTargetItemReportDetailResponseBody &) = default ;
    QueryTrafficControlTargetItemReportDetailResponseBody(QueryTrafficControlTargetItemReportDetailResponseBody &&) = default ;
    QueryTrafficControlTargetItemReportDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTrafficControlTargetItemReportDetailResponseBody() = default ;
    QueryTrafficControlTargetItemReportDetailResponseBody& operator=(const QueryTrafficControlTargetItemReportDetailResponseBody &) = default ;
    QueryTrafficControlTargetItemReportDetailResponseBody& operator=(QueryTrafficControlTargetItemReportDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficControlTargetItemReportDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficControlTargetItemReportDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ItemControlTailReportDetails, itemControlTailReportDetails_);
        DARABONBA_PTR_TO_JSON(ItemControlTopReportDetails, itemControlTopReportDetails_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficControlTargetItemReportDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ItemControlTailReportDetails, itemControlTailReportDetails_);
        DARABONBA_PTR_FROM_JSON(ItemControlTopReportDetails, itemControlTopReportDetails_);
      };
      TrafficControlTargetItemReportDetail() = default ;
      TrafficControlTargetItemReportDetail(const TrafficControlTargetItemReportDetail &) = default ;
      TrafficControlTargetItemReportDetail(TrafficControlTargetItemReportDetail &&) = default ;
      TrafficControlTargetItemReportDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficControlTargetItemReportDetail() = default ;
      TrafficControlTargetItemReportDetail& operator=(const TrafficControlTargetItemReportDetail &) = default ;
      TrafficControlTargetItemReportDetail& operator=(TrafficControlTargetItemReportDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ItemControlTopReportDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItemControlTopReportDetails& obj) { 
          DARABONBA_ANY_TO_JSON(Features, features_);
          DARABONBA_PTR_TO_JSON(ItemId, itemId_);
          DARABONBA_PTR_TO_JSON(TargetProgress, targetProgress_);
          DARABONBA_PTR_TO_JSON(TargetTraffic, targetTraffic_);
        };
        friend void from_json(const Darabonba::Json& j, ItemControlTopReportDetails& obj) { 
          DARABONBA_ANY_FROM_JSON(Features, features_);
          DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
          DARABONBA_PTR_FROM_JSON(TargetProgress, targetProgress_);
          DARABONBA_PTR_FROM_JSON(TargetTraffic, targetTraffic_);
        };
        ItemControlTopReportDetails() = default ;
        ItemControlTopReportDetails(const ItemControlTopReportDetails &) = default ;
        ItemControlTopReportDetails(ItemControlTopReportDetails &&) = default ;
        ItemControlTopReportDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItemControlTopReportDetails() = default ;
        ItemControlTopReportDetails& operator=(const ItemControlTopReportDetails &) = default ;
        ItemControlTopReportDetails& operator=(ItemControlTopReportDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->features_ == nullptr
        && this->itemId_ == nullptr && this->targetProgress_ == nullptr && this->targetTraffic_ == nullptr; };
        // features Field Functions 
        bool hasFeatures() const { return this->features_ != nullptr;};
        void deleteFeatures() { this->features_ = nullptr;};
        inline         const Darabonba::Json & getFeatures() const { DARABONBA_GET(features_) };
        Darabonba::Json & getFeatures() { DARABONBA_GET(features_) };
        inline ItemControlTopReportDetails& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
        inline ItemControlTopReportDetails& setFeatures(Darabonba::Json && features) { DARABONBA_SET_RVALUE(features_, features) };


        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
        inline ItemControlTopReportDetails& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // targetProgress Field Functions 
        bool hasTargetProgress() const { return this->targetProgress_ != nullptr;};
        void deleteTargetProgress() { this->targetProgress_ = nullptr;};
        inline string getTargetProgress() const { DARABONBA_PTR_GET_DEFAULT(targetProgress_, "") };
        inline ItemControlTopReportDetails& setTargetProgress(string targetProgress) { DARABONBA_PTR_SET_VALUE(targetProgress_, targetProgress) };


        // targetTraffic Field Functions 
        bool hasTargetTraffic() const { return this->targetTraffic_ != nullptr;};
        void deleteTargetTraffic() { this->targetTraffic_ = nullptr;};
        inline int64_t getTargetTraffic() const { DARABONBA_PTR_GET_DEFAULT(targetTraffic_, 0L) };
        inline ItemControlTopReportDetails& setTargetTraffic(int64_t targetTraffic) { DARABONBA_PTR_SET_VALUE(targetTraffic_, targetTraffic) };


      protected:
        Darabonba::Json features_ {};
        shared_ptr<string> itemId_ {};
        shared_ptr<string> targetProgress_ {};
        shared_ptr<int64_t> targetTraffic_ {};
      };

      class ItemControlTailReportDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItemControlTailReportDetails& obj) { 
          DARABONBA_ANY_TO_JSON(Features, features_);
          DARABONBA_PTR_TO_JSON(ItemId, itemId_);
          DARABONBA_PTR_TO_JSON(TargetProgress, targetProgress_);
          DARABONBA_PTR_TO_JSON(TargetTraffic, targetTraffic_);
        };
        friend void from_json(const Darabonba::Json& j, ItemControlTailReportDetails& obj) { 
          DARABONBA_ANY_FROM_JSON(Features, features_);
          DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
          DARABONBA_PTR_FROM_JSON(TargetProgress, targetProgress_);
          DARABONBA_PTR_FROM_JSON(TargetTraffic, targetTraffic_);
        };
        ItemControlTailReportDetails() = default ;
        ItemControlTailReportDetails(const ItemControlTailReportDetails &) = default ;
        ItemControlTailReportDetails(ItemControlTailReportDetails &&) = default ;
        ItemControlTailReportDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItemControlTailReportDetails() = default ;
        ItemControlTailReportDetails& operator=(const ItemControlTailReportDetails &) = default ;
        ItemControlTailReportDetails& operator=(ItemControlTailReportDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->features_ == nullptr
        && this->itemId_ == nullptr && this->targetProgress_ == nullptr && this->targetTraffic_ == nullptr; };
        // features Field Functions 
        bool hasFeatures() const { return this->features_ != nullptr;};
        void deleteFeatures() { this->features_ = nullptr;};
        inline         const Darabonba::Json & getFeatures() const { DARABONBA_GET(features_) };
        Darabonba::Json & getFeatures() { DARABONBA_GET(features_) };
        inline ItemControlTailReportDetails& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
        inline ItemControlTailReportDetails& setFeatures(Darabonba::Json && features) { DARABONBA_SET_RVALUE(features_, features) };


        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
        inline ItemControlTailReportDetails& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // targetProgress Field Functions 
        bool hasTargetProgress() const { return this->targetProgress_ != nullptr;};
        void deleteTargetProgress() { this->targetProgress_ = nullptr;};
        inline string getTargetProgress() const { DARABONBA_PTR_GET_DEFAULT(targetProgress_, "") };
        inline ItemControlTailReportDetails& setTargetProgress(string targetProgress) { DARABONBA_PTR_SET_VALUE(targetProgress_, targetProgress) };


        // targetTraffic Field Functions 
        bool hasTargetTraffic() const { return this->targetTraffic_ != nullptr;};
        void deleteTargetTraffic() { this->targetTraffic_ = nullptr;};
        inline int64_t getTargetTraffic() const { DARABONBA_PTR_GET_DEFAULT(targetTraffic_, 0L) };
        inline ItemControlTailReportDetails& setTargetTraffic(int64_t targetTraffic) { DARABONBA_PTR_SET_VALUE(targetTraffic_, targetTraffic) };


      protected:
        Darabonba::Json features_ {};
        shared_ptr<string> itemId_ {};
        shared_ptr<string> targetProgress_ {};
        shared_ptr<int64_t> targetTraffic_ {};
      };

      virtual bool empty() const override { return this->itemControlTailReportDetails_ == nullptr
        && this->itemControlTopReportDetails_ == nullptr; };
      // itemControlTailReportDetails Field Functions 
      bool hasItemControlTailReportDetails() const { return this->itemControlTailReportDetails_ != nullptr;};
      void deleteItemControlTailReportDetails() { this->itemControlTailReportDetails_ = nullptr;};
      inline const vector<TrafficControlTargetItemReportDetail::ItemControlTailReportDetails> & getItemControlTailReportDetails() const { DARABONBA_PTR_GET_CONST(itemControlTailReportDetails_, vector<TrafficControlTargetItemReportDetail::ItemControlTailReportDetails>) };
      inline vector<TrafficControlTargetItemReportDetail::ItemControlTailReportDetails> getItemControlTailReportDetails() { DARABONBA_PTR_GET(itemControlTailReportDetails_, vector<TrafficControlTargetItemReportDetail::ItemControlTailReportDetails>) };
      inline TrafficControlTargetItemReportDetail& setItemControlTailReportDetails(const vector<TrafficControlTargetItemReportDetail::ItemControlTailReportDetails> & itemControlTailReportDetails) { DARABONBA_PTR_SET_VALUE(itemControlTailReportDetails_, itemControlTailReportDetails) };
      inline TrafficControlTargetItemReportDetail& setItemControlTailReportDetails(vector<TrafficControlTargetItemReportDetail::ItemControlTailReportDetails> && itemControlTailReportDetails) { DARABONBA_PTR_SET_RVALUE(itemControlTailReportDetails_, itemControlTailReportDetails) };


      // itemControlTopReportDetails Field Functions 
      bool hasItemControlTopReportDetails() const { return this->itemControlTopReportDetails_ != nullptr;};
      void deleteItemControlTopReportDetails() { this->itemControlTopReportDetails_ = nullptr;};
      inline const vector<TrafficControlTargetItemReportDetail::ItemControlTopReportDetails> & getItemControlTopReportDetails() const { DARABONBA_PTR_GET_CONST(itemControlTopReportDetails_, vector<TrafficControlTargetItemReportDetail::ItemControlTopReportDetails>) };
      inline vector<TrafficControlTargetItemReportDetail::ItemControlTopReportDetails> getItemControlTopReportDetails() { DARABONBA_PTR_GET(itemControlTopReportDetails_, vector<TrafficControlTargetItemReportDetail::ItemControlTopReportDetails>) };
      inline TrafficControlTargetItemReportDetail& setItemControlTopReportDetails(const vector<TrafficControlTargetItemReportDetail::ItemControlTopReportDetails> & itemControlTopReportDetails) { DARABONBA_PTR_SET_VALUE(itemControlTopReportDetails_, itemControlTopReportDetails) };
      inline TrafficControlTargetItemReportDetail& setItemControlTopReportDetails(vector<TrafficControlTargetItemReportDetail::ItemControlTopReportDetails> && itemControlTopReportDetails) { DARABONBA_PTR_SET_RVALUE(itemControlTopReportDetails_, itemControlTopReportDetails) };


    protected:
      shared_ptr<vector<TrafficControlTargetItemReportDetail::ItemControlTailReportDetails>> itemControlTailReportDetails_ {};
      shared_ptr<vector<TrafficControlTargetItemReportDetail::ItemControlTopReportDetails>> itemControlTopReportDetails_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trafficControlTargetItemReportDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTrafficControlTargetItemReportDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficControlTargetItemReportDetail Field Functions 
    bool hasTrafficControlTargetItemReportDetail() const { return this->trafficControlTargetItemReportDetail_ != nullptr;};
    void deleteTrafficControlTargetItemReportDetail() { this->trafficControlTargetItemReportDetail_ = nullptr;};
    inline const QueryTrafficControlTargetItemReportDetailResponseBody::TrafficControlTargetItemReportDetail & getTrafficControlTargetItemReportDetail() const { DARABONBA_PTR_GET_CONST(trafficControlTargetItemReportDetail_, QueryTrafficControlTargetItemReportDetailResponseBody::TrafficControlTargetItemReportDetail) };
    inline QueryTrafficControlTargetItemReportDetailResponseBody::TrafficControlTargetItemReportDetail getTrafficControlTargetItemReportDetail() { DARABONBA_PTR_GET(trafficControlTargetItemReportDetail_, QueryTrafficControlTargetItemReportDetailResponseBody::TrafficControlTargetItemReportDetail) };
    inline QueryTrafficControlTargetItemReportDetailResponseBody& setTrafficControlTargetItemReportDetail(const QueryTrafficControlTargetItemReportDetailResponseBody::TrafficControlTargetItemReportDetail & trafficControlTargetItemReportDetail) { DARABONBA_PTR_SET_VALUE(trafficControlTargetItemReportDetail_, trafficControlTargetItemReportDetail) };
    inline QueryTrafficControlTargetItemReportDetailResponseBody& setTrafficControlTargetItemReportDetail(QueryTrafficControlTargetItemReportDetailResponseBody::TrafficControlTargetItemReportDetail && trafficControlTargetItemReportDetail) { DARABONBA_PTR_SET_RVALUE(trafficControlTargetItemReportDetail_, trafficControlTargetItemReportDetail) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<QueryTrafficControlTargetItemReportDetailResponseBody::TrafficControlTargetItemReportDetail> trafficControlTargetItemReportDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
