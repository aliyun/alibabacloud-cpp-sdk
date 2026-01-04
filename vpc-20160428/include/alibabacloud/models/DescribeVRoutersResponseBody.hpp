// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVROUTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVROUTERSRESPONSEBODY_HPP_
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
  class DescribeVRoutersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVRoutersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VRouters, VRouters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVRoutersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VRouters, VRouters_);
    };
    DescribeVRoutersResponseBody() = default ;
    DescribeVRoutersResponseBody(const DescribeVRoutersResponseBody &) = default ;
    DescribeVRoutersResponseBody(DescribeVRoutersResponseBody &&) = default ;
    DescribeVRoutersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVRoutersResponseBody() = default ;
    DescribeVRoutersResponseBody& operator=(const DescribeVRoutersResponseBody &) = default ;
    DescribeVRoutersResponseBody& operator=(DescribeVRoutersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VRouters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VRouters& obj) { 
        DARABONBA_PTR_TO_JSON(VRouter, VRouter_);
      };
      friend void from_json(const Darabonba::Json& j, VRouters& obj) { 
        DARABONBA_PTR_FROM_JSON(VRouter, VRouter_);
      };
      VRouters() = default ;
      VRouters(const VRouters &) = default ;
      VRouters(VRouters &&) = default ;
      VRouters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VRouters() = default ;
      VRouters& operator=(const VRouters &) = default ;
      VRouters& operator=(VRouters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VRouter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VRouter& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RouteTableIds, routeTableIds_);
          DARABONBA_PTR_TO_JSON(VRouterId, VRouterId_);
          DARABONBA_PTR_TO_JSON(VRouterName, VRouterName_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, VRouter& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RouteTableIds, routeTableIds_);
          DARABONBA_PTR_FROM_JSON(VRouterId, VRouterId_);
          DARABONBA_PTR_FROM_JSON(VRouterName, VRouterName_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        VRouter() = default ;
        VRouter(const VRouter &) = default ;
        VRouter(VRouter &&) = default ;
        VRouter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VRouter() = default ;
        VRouter& operator=(const VRouter &) = default ;
        VRouter& operator=(VRouter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RouteTableIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RouteTableIds& obj) { 
            DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
          };
          friend void from_json(const Darabonba::Json& j, RouteTableIds& obj) { 
            DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
          };
          RouteTableIds() = default ;
          RouteTableIds(const RouteTableIds &) = default ;
          RouteTableIds(RouteTableIds &&) = default ;
          RouteTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RouteTableIds() = default ;
          RouteTableIds& operator=(const RouteTableIds &) = default ;
          RouteTableIds& operator=(RouteTableIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->routeTableId_ == nullptr; };
          // routeTableId Field Functions 
          bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
          void deleteRouteTableId() { this->routeTableId_ = nullptr;};
          inline const vector<string> & getRouteTableId() const { DARABONBA_PTR_GET_CONST(routeTableId_, vector<string>) };
          inline vector<string> getRouteTableId() { DARABONBA_PTR_GET(routeTableId_, vector<string>) };
          inline RouteTableIds& setRouteTableId(const vector<string> & routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };
          inline RouteTableIds& setRouteTableId(vector<string> && routeTableId) { DARABONBA_PTR_SET_RVALUE(routeTableId_, routeTableId) };


        protected:
          shared_ptr<vector<string>> routeTableId_ {};
        };

        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->regionId_ == nullptr && this->routeTableIds_ == nullptr && this->VRouterId_ == nullptr && this->VRouterName_ == nullptr
        && this->vpcId_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline VRouter& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VRouter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline VRouter& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // routeTableIds Field Functions 
        bool hasRouteTableIds() const { return this->routeTableIds_ != nullptr;};
        void deleteRouteTableIds() { this->routeTableIds_ = nullptr;};
        inline const VRouter::RouteTableIds & getRouteTableIds() const { DARABONBA_PTR_GET_CONST(routeTableIds_, VRouter::RouteTableIds) };
        inline VRouter::RouteTableIds getRouteTableIds() { DARABONBA_PTR_GET(routeTableIds_, VRouter::RouteTableIds) };
        inline VRouter& setRouteTableIds(const VRouter::RouteTableIds & routeTableIds) { DARABONBA_PTR_SET_VALUE(routeTableIds_, routeTableIds) };
        inline VRouter& setRouteTableIds(VRouter::RouteTableIds && routeTableIds) { DARABONBA_PTR_SET_RVALUE(routeTableIds_, routeTableIds) };


        // VRouterId Field Functions 
        bool hasVRouterId() const { return this->VRouterId_ != nullptr;};
        void deleteVRouterId() { this->VRouterId_ = nullptr;};
        inline string getVRouterId() const { DARABONBA_PTR_GET_DEFAULT(VRouterId_, "") };
        inline VRouter& setVRouterId(string VRouterId) { DARABONBA_PTR_SET_VALUE(VRouterId_, VRouterId) };


        // VRouterName Field Functions 
        bool hasVRouterName() const { return this->VRouterName_ != nullptr;};
        void deleteVRouterName() { this->VRouterName_ = nullptr;};
        inline string getVRouterName() const { DARABONBA_PTR_GET_DEFAULT(VRouterName_, "") };
        inline VRouter& setVRouterName(string VRouterName) { DARABONBA_PTR_SET_VALUE(VRouterName_, VRouterName) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VRouter& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The time when the vRouter was created.
        shared_ptr<string> creationTime_ {};
        // The description of the vRouter.
        shared_ptr<string> description_ {};
        // The region to which the vRouter belongs.
        shared_ptr<string> regionId_ {};
        // The IDs of the route tables.
        shared_ptr<VRouter::RouteTableIds> routeTableIds_ {};
        // The ID of the vRouter.
        shared_ptr<string> VRouterId_ {};
        // The name of the vRouter.
        shared_ptr<string> VRouterName_ {};
        // The ID of the virtual private cloud (VPC) to which the vRouter belongs.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->VRouter_ == nullptr; };
      // VRouter Field Functions 
      bool hasVRouter() const { return this->VRouter_ != nullptr;};
      void deleteVRouter() { this->VRouter_ = nullptr;};
      inline const vector<VRouters::VRouter> & getVRouter() const { DARABONBA_PTR_GET_CONST(VRouter_, vector<VRouters::VRouter>) };
      inline vector<VRouters::VRouter> getVRouter() { DARABONBA_PTR_GET(VRouter_, vector<VRouters::VRouter>) };
      inline VRouters& setVRouter(const vector<VRouters::VRouter> & vRouter) { DARABONBA_PTR_SET_VALUE(VRouter_, vRouter) };
      inline VRouters& setVRouter(vector<VRouters::VRouter> && vRouter) { DARABONBA_PTR_SET_RVALUE(VRouter_, vRouter) };


    protected:
      shared_ptr<vector<VRouters::VRouter>> VRouter_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->VRouters_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVRoutersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVRoutersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVRoutersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVRoutersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // VRouters Field Functions 
    bool hasVRouters() const { return this->VRouters_ != nullptr;};
    void deleteVRouters() { this->VRouters_ = nullptr;};
    inline const DescribeVRoutersResponseBody::VRouters & getVRouters() const { DARABONBA_PTR_GET_CONST(VRouters_, DescribeVRoutersResponseBody::VRouters) };
    inline DescribeVRoutersResponseBody::VRouters getVRouters() { DARABONBA_PTR_GET(VRouters_, DescribeVRoutersResponseBody::VRouters) };
    inline DescribeVRoutersResponseBody& setVRouters(const DescribeVRoutersResponseBody::VRouters & vRouters) { DARABONBA_PTR_SET_VALUE(VRouters_, vRouters) };
    inline DescribeVRoutersResponseBody& setVRouters(DescribeVRoutersResponseBody::VRouters && vRouters) { DARABONBA_PTR_SET_RVALUE(VRouters_, vRouters) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The details about the vRouters.
    shared_ptr<DescribeVRoutersResponseBody::VRouters> VRouters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
