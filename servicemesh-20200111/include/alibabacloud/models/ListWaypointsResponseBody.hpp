// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAYPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAYPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWaypointsResponseBodyWaypoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class ListWaypointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaypointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Continue, continue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Waypoints, waypoints_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaypointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Continue, continue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Waypoints, waypoints_);
    };
    ListWaypointsResponseBody() = default ;
    ListWaypointsResponseBody(const ListWaypointsResponseBody &) = default ;
    ListWaypointsResponseBody(ListWaypointsResponseBody &&) = default ;
    ListWaypointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaypointsResponseBody() = default ;
    ListWaypointsResponseBody& operator=(const ListWaypointsResponseBody &) = default ;
    ListWaypointsResponseBody& operator=(ListWaypointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->continue_ == nullptr
        && return this->requestId_ == nullptr && return this->waypoints_ == nullptr; };
    // continue Field Functions 
    bool hasContinue() const { return this->continue_ != nullptr;};
    void deleteContinue() { this->continue_ = nullptr;};
    inline string _continue() const { DARABONBA_PTR_GET_DEFAULT(continue_, "") };
    inline ListWaypointsResponseBody& setContinue(string _continue) { DARABONBA_PTR_SET_VALUE(continue_, _continue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWaypointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waypoints Field Functions 
    bool hasWaypoints() const { return this->waypoints_ != nullptr;};
    void deleteWaypoints() { this->waypoints_ = nullptr;};
    inline const vector<ListWaypointsResponseBodyWaypoints> & waypoints() const { DARABONBA_PTR_GET_CONST(waypoints_, vector<ListWaypointsResponseBodyWaypoints>) };
    inline vector<ListWaypointsResponseBodyWaypoints> waypoints() { DARABONBA_PTR_GET(waypoints_, vector<ListWaypointsResponseBodyWaypoints>) };
    inline ListWaypointsResponseBody& setWaypoints(const vector<ListWaypointsResponseBodyWaypoints> & waypoints) { DARABONBA_PTR_SET_VALUE(waypoints_, waypoints) };
    inline ListWaypointsResponseBody& setWaypoints(vector<ListWaypointsResponseBodyWaypoints> && waypoints) { DARABONBA_PTR_SET_RVALUE(waypoints_, waypoints) };


  protected:
    // Base64 encoded string. If it is empty, it means that all waypoints have been obtained; if it is not empty, this value should be included in the next list, and you can continue to obtain it from the offset that ends this time.
    std::shared_ptr<string> continue_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The configurations of waypoint proxies.
    std::shared_ptr<vector<ListWaypointsResponseBodyWaypoints>> waypoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
