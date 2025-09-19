// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGSHIPPERREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGSHIPPERREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLogShipperRegionsResponseBodyLogShipperRegionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListLogShipperRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogShipperRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogShipperRegionList, logShipperRegionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogShipperRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogShipperRegionList, logShipperRegionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLogShipperRegionsResponseBody() = default ;
    ListLogShipperRegionsResponseBody(const ListLogShipperRegionsResponseBody &) = default ;
    ListLogShipperRegionsResponseBody(ListLogShipperRegionsResponseBody &&) = default ;
    ListLogShipperRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogShipperRegionsResponseBody() = default ;
    ListLogShipperRegionsResponseBody& operator=(const ListLogShipperRegionsResponseBody &) = default ;
    ListLogShipperRegionsResponseBody& operator=(ListLogShipperRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logShipperRegionList_ != nullptr
        && this->requestId_ != nullptr; };
    // logShipperRegionList Field Functions 
    bool hasLogShipperRegionList() const { return this->logShipperRegionList_ != nullptr;};
    void deleteLogShipperRegionList() { this->logShipperRegionList_ = nullptr;};
    inline const vector<ListLogShipperRegionsResponseBodyLogShipperRegionList> & logShipperRegionList() const { DARABONBA_PTR_GET_CONST(logShipperRegionList_, vector<ListLogShipperRegionsResponseBodyLogShipperRegionList>) };
    inline vector<ListLogShipperRegionsResponseBodyLogShipperRegionList> logShipperRegionList() { DARABONBA_PTR_GET(logShipperRegionList_, vector<ListLogShipperRegionsResponseBodyLogShipperRegionList>) };
    inline ListLogShipperRegionsResponseBody& setLogShipperRegionList(const vector<ListLogShipperRegionsResponseBodyLogShipperRegionList> & logShipperRegionList) { DARABONBA_PTR_SET_VALUE(logShipperRegionList_, logShipperRegionList) };
    inline ListLogShipperRegionsResponseBody& setLogShipperRegionList(vector<ListLogShipperRegionsResponseBodyLogShipperRegionList> && logShipperRegionList) { DARABONBA_PTR_SET_RVALUE(logShipperRegionList_, logShipperRegionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogShipperRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The regions supported by the log delivery feature.
    std::shared_ptr<vector<ListLogShipperRegionsResponseBodyLogShipperRegionList>> logShipperRegionList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
