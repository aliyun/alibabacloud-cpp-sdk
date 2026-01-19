// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSBYAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSBYAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsByApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsByApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficControlItems, trafficControlItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsByApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlItems, trafficControlItems_);
    };
    DescribeTrafficControlsByApiResponseBody() = default ;
    DescribeTrafficControlsByApiResponseBody(const DescribeTrafficControlsByApiResponseBody &) = default ;
    DescribeTrafficControlsByApiResponseBody(DescribeTrafficControlsByApiResponseBody &&) = default ;
    DescribeTrafficControlsByApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsByApiResponseBody() = default ;
    DescribeTrafficControlsByApiResponseBody& operator=(const DescribeTrafficControlsByApiResponseBody &) = default ;
    DescribeTrafficControlsByApiResponseBody& operator=(DescribeTrafficControlsByApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficControlItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficControlItems& obj) { 
        DARABONBA_PTR_TO_JSON(TrafficControlItem, trafficControlItem_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficControlItems& obj) { 
        DARABONBA_PTR_FROM_JSON(TrafficControlItem, trafficControlItem_);
      };
      TrafficControlItems() = default ;
      TrafficControlItems(const TrafficControlItems &) = default ;
      TrafficControlItems(TrafficControlItems &&) = default ;
      TrafficControlItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficControlItems() = default ;
      TrafficControlItems& operator=(const TrafficControlItems &) = default ;
      TrafficControlItems& operator=(TrafficControlItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TrafficControlItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrafficControlItem& obj) { 
          DARABONBA_PTR_TO_JSON(BoundTime, boundTime_);
          DARABONBA_PTR_TO_JSON(TrafficControlItemId, trafficControlItemId_);
          DARABONBA_PTR_TO_JSON(TrafficControlItemName, trafficControlItemName_);
        };
        friend void from_json(const Darabonba::Json& j, TrafficControlItem& obj) { 
          DARABONBA_PTR_FROM_JSON(BoundTime, boundTime_);
          DARABONBA_PTR_FROM_JSON(TrafficControlItemId, trafficControlItemId_);
          DARABONBA_PTR_FROM_JSON(TrafficControlItemName, trafficControlItemName_);
        };
        TrafficControlItem() = default ;
        TrafficControlItem(const TrafficControlItem &) = default ;
        TrafficControlItem(TrafficControlItem &&) = default ;
        TrafficControlItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrafficControlItem() = default ;
        TrafficControlItem& operator=(const TrafficControlItem &) = default ;
        TrafficControlItem& operator=(TrafficControlItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->boundTime_ == nullptr
        && this->trafficControlItemId_ == nullptr && this->trafficControlItemName_ == nullptr; };
        // boundTime Field Functions 
        bool hasBoundTime() const { return this->boundTime_ != nullptr;};
        void deleteBoundTime() { this->boundTime_ = nullptr;};
        inline string getBoundTime() const { DARABONBA_PTR_GET_DEFAULT(boundTime_, "") };
        inline TrafficControlItem& setBoundTime(string boundTime) { DARABONBA_PTR_SET_VALUE(boundTime_, boundTime) };


        // trafficControlItemId Field Functions 
        bool hasTrafficControlItemId() const { return this->trafficControlItemId_ != nullptr;};
        void deleteTrafficControlItemId() { this->trafficControlItemId_ = nullptr;};
        inline string getTrafficControlItemId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlItemId_, "") };
        inline TrafficControlItem& setTrafficControlItemId(string trafficControlItemId) { DARABONBA_PTR_SET_VALUE(trafficControlItemId_, trafficControlItemId) };


        // trafficControlItemName Field Functions 
        bool hasTrafficControlItemName() const { return this->trafficControlItemName_ != nullptr;};
        void deleteTrafficControlItemName() { this->trafficControlItemName_ = nullptr;};
        inline string getTrafficControlItemName() const { DARABONBA_PTR_GET_DEFAULT(trafficControlItemName_, "") };
        inline TrafficControlItem& setTrafficControlItemName(string trafficControlItemName) { DARABONBA_PTR_SET_VALUE(trafficControlItemName_, trafficControlItemName) };


      protected:
        // The binding time of the policy.
        shared_ptr<string> boundTime_ {};
        // The ID of the throttling policy.
        shared_ptr<string> trafficControlItemId_ {};
        // The name of the throttling policy.
        shared_ptr<string> trafficControlItemName_ {};
      };

      virtual bool empty() const override { return this->trafficControlItem_ == nullptr; };
      // trafficControlItem Field Functions 
      bool hasTrafficControlItem() const { return this->trafficControlItem_ != nullptr;};
      void deleteTrafficControlItem() { this->trafficControlItem_ = nullptr;};
      inline const vector<TrafficControlItems::TrafficControlItem> & getTrafficControlItem() const { DARABONBA_PTR_GET_CONST(trafficControlItem_, vector<TrafficControlItems::TrafficControlItem>) };
      inline vector<TrafficControlItems::TrafficControlItem> getTrafficControlItem() { DARABONBA_PTR_GET(trafficControlItem_, vector<TrafficControlItems::TrafficControlItem>) };
      inline TrafficControlItems& setTrafficControlItem(const vector<TrafficControlItems::TrafficControlItem> & trafficControlItem) { DARABONBA_PTR_SET_VALUE(trafficControlItem_, trafficControlItem) };
      inline TrafficControlItems& setTrafficControlItem(vector<TrafficControlItems::TrafficControlItem> && trafficControlItem) { DARABONBA_PTR_SET_RVALUE(trafficControlItem_, trafficControlItem) };


    protected:
      shared_ptr<vector<TrafficControlItems::TrafficControlItem>> trafficControlItem_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trafficControlItems_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrafficControlsByApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficControlItems Field Functions 
    bool hasTrafficControlItems() const { return this->trafficControlItems_ != nullptr;};
    void deleteTrafficControlItems() { this->trafficControlItems_ = nullptr;};
    inline const DescribeTrafficControlsByApiResponseBody::TrafficControlItems & getTrafficControlItems() const { DARABONBA_PTR_GET_CONST(trafficControlItems_, DescribeTrafficControlsByApiResponseBody::TrafficControlItems) };
    inline DescribeTrafficControlsByApiResponseBody::TrafficControlItems getTrafficControlItems() { DARABONBA_PTR_GET(trafficControlItems_, DescribeTrafficControlsByApiResponseBody::TrafficControlItems) };
    inline DescribeTrafficControlsByApiResponseBody& setTrafficControlItems(const DescribeTrafficControlsByApiResponseBody::TrafficControlItems & trafficControlItems) { DARABONBA_PTR_SET_VALUE(trafficControlItems_, trafficControlItems) };
    inline DescribeTrafficControlsByApiResponseBody& setTrafficControlItems(DescribeTrafficControlsByApiResponseBody::TrafficControlItems && trafficControlItems) { DARABONBA_PTR_SET_RVALUE(trafficControlItems_, trafficControlItems) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned throttling policy information. It is an array consisting of TrafficControlItem data.
    shared_ptr<DescribeTrafficControlsByApiResponseBody::TrafficControlItems> trafficControlItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
