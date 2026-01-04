// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCROUTEENTRYSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPCROUTEENTRYSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVpcRouteEntrySummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcRouteEntrySummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntrySummarys, routeEntrySummarys_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcRouteEntrySummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntrySummarys, routeEntrySummarys_);
    };
    GetVpcRouteEntrySummaryResponseBody() = default ;
    GetVpcRouteEntrySummaryResponseBody(const GetVpcRouteEntrySummaryResponseBody &) = default ;
    GetVpcRouteEntrySummaryResponseBody(GetVpcRouteEntrySummaryResponseBody &&) = default ;
    GetVpcRouteEntrySummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcRouteEntrySummaryResponseBody() = default ;
    GetVpcRouteEntrySummaryResponseBody& operator=(const GetVpcRouteEntrySummaryResponseBody &) = default ;
    GetVpcRouteEntrySummaryResponseBody& operator=(GetVpcRouteEntrySummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteEntrySummarys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteEntrySummarys& obj) { 
        DARABONBA_PTR_TO_JSON(EntrySummarys, entrySummarys_);
        DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      };
      friend void from_json(const Darabonba::Json& j, RouteEntrySummarys& obj) { 
        DARABONBA_PTR_FROM_JSON(EntrySummarys, entrySummarys_);
        DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      };
      RouteEntrySummarys() = default ;
      RouteEntrySummarys(const RouteEntrySummarys &) = default ;
      RouteEntrySummarys(RouteEntrySummarys &&) = default ;
      RouteEntrySummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteEntrySummarys() = default ;
      RouteEntrySummarys& operator=(const RouteEntrySummarys &) = default ;
      RouteEntrySummarys& operator=(RouteEntrySummarys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EntrySummarys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntrySummarys& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(RouteEntryType, routeEntryType_);
        };
        friend void from_json(const Darabonba::Json& j, EntrySummarys& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(RouteEntryType, routeEntryType_);
        };
        EntrySummarys() = default ;
        EntrySummarys(const EntrySummarys &) = default ;
        EntrySummarys(EntrySummarys &&) = default ;
        EntrySummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntrySummarys() = default ;
        EntrySummarys& operator=(const EntrySummarys &) = default ;
        EntrySummarys& operator=(EntrySummarys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->routeEntryType_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline EntrySummarys& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // routeEntryType Field Functions 
        bool hasRouteEntryType() const { return this->routeEntryType_ != nullptr;};
        void deleteRouteEntryType() { this->routeEntryType_ = nullptr;};
        inline string getRouteEntryType() const { DARABONBA_PTR_GET_DEFAULT(routeEntryType_, "") };
        inline EntrySummarys& setRouteEntryType(string routeEntryType) { DARABONBA_PTR_SET_VALUE(routeEntryType_, routeEntryType) };


      protected:
        // The number of entries returned.
        shared_ptr<int32_t> count_ {};
        // The type of the route. Valid values:
        // 
        // *   **All**: all route types
        // *   **Custom**: a custom route
        // *   **System**: a system route
        // *   **BGP**: a BGP route
        // *   **CEN**: a CEN route
        shared_ptr<string> routeEntryType_ {};
      };

      virtual bool empty() const override { return this->entrySummarys_ == nullptr
        && this->routeTableId_ == nullptr; };
      // entrySummarys Field Functions 
      bool hasEntrySummarys() const { return this->entrySummarys_ != nullptr;};
      void deleteEntrySummarys() { this->entrySummarys_ = nullptr;};
      inline const vector<RouteEntrySummarys::EntrySummarys> & getEntrySummarys() const { DARABONBA_PTR_GET_CONST(entrySummarys_, vector<RouteEntrySummarys::EntrySummarys>) };
      inline vector<RouteEntrySummarys::EntrySummarys> getEntrySummarys() { DARABONBA_PTR_GET(entrySummarys_, vector<RouteEntrySummarys::EntrySummarys>) };
      inline RouteEntrySummarys& setEntrySummarys(const vector<RouteEntrySummarys::EntrySummarys> & entrySummarys) { DARABONBA_PTR_SET_VALUE(entrySummarys_, entrySummarys) };
      inline RouteEntrySummarys& setEntrySummarys(vector<RouteEntrySummarys::EntrySummarys> && entrySummarys) { DARABONBA_PTR_SET_RVALUE(entrySummarys_, entrySummarys) };


      // routeTableId Field Functions 
      bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
      void deleteRouteTableId() { this->routeTableId_ = nullptr;};
      inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
      inline RouteEntrySummarys& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    protected:
      // The information about the routes of different types in one route table.
      shared_ptr<vector<RouteEntrySummarys::EntrySummarys>> entrySummarys_ {};
      // The ID of the route table.
      shared_ptr<string> routeTableId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->routeEntrySummarys_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpcRouteEntrySummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntrySummarys Field Functions 
    bool hasRouteEntrySummarys() const { return this->routeEntrySummarys_ != nullptr;};
    void deleteRouteEntrySummarys() { this->routeEntrySummarys_ = nullptr;};
    inline const vector<GetVpcRouteEntrySummaryResponseBody::RouteEntrySummarys> & getRouteEntrySummarys() const { DARABONBA_PTR_GET_CONST(routeEntrySummarys_, vector<GetVpcRouteEntrySummaryResponseBody::RouteEntrySummarys>) };
    inline vector<GetVpcRouteEntrySummaryResponseBody::RouteEntrySummarys> getRouteEntrySummarys() { DARABONBA_PTR_GET(routeEntrySummarys_, vector<GetVpcRouteEntrySummaryResponseBody::RouteEntrySummarys>) };
    inline GetVpcRouteEntrySummaryResponseBody& setRouteEntrySummarys(const vector<GetVpcRouteEntrySummaryResponseBody::RouteEntrySummarys> & routeEntrySummarys) { DARABONBA_PTR_SET_VALUE(routeEntrySummarys_, routeEntrySummarys) };
    inline GetVpcRouteEntrySummaryResponseBody& setRouteEntrySummarys(vector<GetVpcRouteEntrySummaryResponseBody::RouteEntrySummarys> && routeEntrySummarys) { DARABONBA_PTR_SET_RVALUE(routeEntrySummarys_, routeEntrySummarys) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the routes in the route tables.
    shared_ptr<vector<GetVpcRouteEntrySummaryResponseBody::RouteEntrySummarys>> routeEntrySummarys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
