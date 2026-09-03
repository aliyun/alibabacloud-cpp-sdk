// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class VerifyCenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlocks, cidrBlocks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntries, routeEntries_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlocks, cidrBlocks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntries, routeEntries_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    VerifyCenResponseBody() = default ;
    VerifyCenResponseBody(const VerifyCenResponseBody &) = default ;
    VerifyCenResponseBody(VerifyCenResponseBody &&) = default ;
    VerifyCenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCenResponseBody() = default ;
    VerifyCenResponseBody& operator=(const VerifyCenResponseBody &) = default ;
    VerifyCenResponseBody& operator=(VerifyCenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteEntries& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(NextHopInstanceId, nextHopInstanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RouteEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(NextHopInstanceId, nextHopInstanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RouteEntries() = default ;
      RouteEntries(const RouteEntries &) = default ;
      RouteEntries(RouteEntries &&) = default ;
      RouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteEntries() = default ;
      RouteEntries& operator=(const RouteEntries &) = default ;
      RouteEntries& operator=(RouteEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && this->nextHopInstanceId_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
      inline RouteEntries& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


      // nextHopInstanceId Field Functions 
      bool hasNextHopInstanceId() const { return this->nextHopInstanceId_ != nullptr;};
      void deleteNextHopInstanceId() { this->nextHopInstanceId_ = nullptr;};
      inline string getNextHopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nextHopInstanceId_, "") };
      inline RouteEntries& setNextHopInstanceId(string nextHopInstanceId) { DARABONBA_PTR_SET_VALUE(nextHopInstanceId_, nextHopInstanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RouteEntries& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RouteEntries& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The destination CIDR block of the route.
      shared_ptr<string> destinationCidrBlock_ {};
      // The instance ID of the network instance associated with the routing entry.
      shared_ptr<string> nextHopInstanceId_ {};
      // The region ID of the route.
      shared_ptr<string> regionId_ {};
      // The route check result.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->cidrBlocks_ == nullptr
        && this->requestId_ == nullptr && this->routeEntries_ == nullptr && this->status_ == nullptr; };
    // cidrBlocks Field Functions 
    bool hasCidrBlocks() const { return this->cidrBlocks_ != nullptr;};
    void deleteCidrBlocks() { this->cidrBlocks_ = nullptr;};
    inline const vector<string> & getCidrBlocks() const { DARABONBA_PTR_GET_CONST(cidrBlocks_, vector<string>) };
    inline vector<string> getCidrBlocks() { DARABONBA_PTR_GET(cidrBlocks_, vector<string>) };
    inline VerifyCenResponseBody& setCidrBlocks(const vector<string> & cidrBlocks) { DARABONBA_PTR_SET_VALUE(cidrBlocks_, cidrBlocks) };
    inline VerifyCenResponseBody& setCidrBlocks(vector<string> && cidrBlocks) { DARABONBA_PTR_SET_RVALUE(cidrBlocks_, cidrBlocks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyCenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntries Field Functions 
    bool hasRouteEntries() const { return this->routeEntries_ != nullptr;};
    void deleteRouteEntries() { this->routeEntries_ = nullptr;};
    inline const vector<VerifyCenResponseBody::RouteEntries> & getRouteEntries() const { DARABONBA_PTR_GET_CONST(routeEntries_, vector<VerifyCenResponseBody::RouteEntries>) };
    inline vector<VerifyCenResponseBody::RouteEntries> getRouteEntries() { DARABONBA_PTR_GET(routeEntries_, vector<VerifyCenResponseBody::RouteEntries>) };
    inline VerifyCenResponseBody& setRouteEntries(const vector<VerifyCenResponseBody::RouteEntries> & routeEntries) { DARABONBA_PTR_SET_VALUE(routeEntries_, routeEntries) };
    inline VerifyCenResponseBody& setRouteEntries(vector<VerifyCenResponseBody::RouteEntries> && routeEntries) { DARABONBA_PTR_SET_RVALUE(routeEntries_, routeEntries) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline VerifyCenResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The recommended IPv4 CIDR blocks. Three CIDR blocks are randomly recommended. This parameter is returned when `Status` is `Conflict`.
    shared_ptr<vector<string>> cidrBlocks_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of route information contained in the CEN instance.
    shared_ptr<vector<VerifyCenResponseBody::RouteEntries>> routeEntries_ {};
    // The result of the CIDR block conflict check.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
