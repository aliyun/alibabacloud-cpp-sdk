// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUSINESSACCESSPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBUSINESSACCESSPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBusinessAccessPointsResponseBodyBusinessAccessPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListBusinessAccessPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBusinessAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessAccessPoints, businessAccessPoints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBusinessAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessAccessPoints, businessAccessPoints_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBusinessAccessPointsResponseBody() = default ;
    ListBusinessAccessPointsResponseBody(const ListBusinessAccessPointsResponseBody &) = default ;
    ListBusinessAccessPointsResponseBody(ListBusinessAccessPointsResponseBody &&) = default ;
    ListBusinessAccessPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBusinessAccessPointsResponseBody() = default ;
    ListBusinessAccessPointsResponseBody& operator=(const ListBusinessAccessPointsResponseBody &) = default ;
    ListBusinessAccessPointsResponseBody& operator=(ListBusinessAccessPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessAccessPoints_ != nullptr
        && this->requestId_ != nullptr; };
    // businessAccessPoints Field Functions 
    bool hasBusinessAccessPoints() const { return this->businessAccessPoints_ != nullptr;};
    void deleteBusinessAccessPoints() { this->businessAccessPoints_ = nullptr;};
    inline const vector<ListBusinessAccessPointsResponseBodyBusinessAccessPoints> & businessAccessPoints() const { DARABONBA_PTR_GET_CONST(businessAccessPoints_, vector<ListBusinessAccessPointsResponseBodyBusinessAccessPoints>) };
    inline vector<ListBusinessAccessPointsResponseBodyBusinessAccessPoints> businessAccessPoints() { DARABONBA_PTR_GET(businessAccessPoints_, vector<ListBusinessAccessPointsResponseBodyBusinessAccessPoints>) };
    inline ListBusinessAccessPointsResponseBody& setBusinessAccessPoints(const vector<ListBusinessAccessPointsResponseBodyBusinessAccessPoints> & businessAccessPoints) { DARABONBA_PTR_SET_VALUE(businessAccessPoints_, businessAccessPoints) };
    inline ListBusinessAccessPointsResponseBody& setBusinessAccessPoints(vector<ListBusinessAccessPointsResponseBodyBusinessAccessPoints> && businessAccessPoints) { DARABONBA_PTR_SET_RVALUE(businessAccessPoints_, businessAccessPoints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBusinessAccessPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of access points.
    std::shared_ptr<vector<ListBusinessAccessPointsResponseBodyBusinessAccessPoints>> businessAccessPoints_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
