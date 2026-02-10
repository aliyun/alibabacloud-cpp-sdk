// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGSHIPPERREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGSHIPPERREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class LogShipperRegionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogShipperRegionList& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, LogShipperRegionList& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      LogShipperRegionList() = default ;
      LogShipperRegionList(const LogShipperRegionList &) = default ;
      LogShipperRegionList(LogShipperRegionList &&) = default ;
      LogShipperRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogShipperRegionList() = default ;
      LogShipperRegionList& operator=(const LogShipperRegionList &) = default ;
      LogShipperRegionList& operator=(LogShipperRegionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline LogShipperRegionList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The ID of the region.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->logShipperRegionList_ == nullptr
        && this->requestId_ == nullptr; };
    // logShipperRegionList Field Functions 
    bool hasLogShipperRegionList() const { return this->logShipperRegionList_ != nullptr;};
    void deleteLogShipperRegionList() { this->logShipperRegionList_ = nullptr;};
    inline const vector<ListLogShipperRegionsResponseBody::LogShipperRegionList> & getLogShipperRegionList() const { DARABONBA_PTR_GET_CONST(logShipperRegionList_, vector<ListLogShipperRegionsResponseBody::LogShipperRegionList>) };
    inline vector<ListLogShipperRegionsResponseBody::LogShipperRegionList> getLogShipperRegionList() { DARABONBA_PTR_GET(logShipperRegionList_, vector<ListLogShipperRegionsResponseBody::LogShipperRegionList>) };
    inline ListLogShipperRegionsResponseBody& setLogShipperRegionList(const vector<ListLogShipperRegionsResponseBody::LogShipperRegionList> & logShipperRegionList) { DARABONBA_PTR_SET_VALUE(logShipperRegionList_, logShipperRegionList) };
    inline ListLogShipperRegionsResponseBody& setLogShipperRegionList(vector<ListLogShipperRegionsResponseBody::LogShipperRegionList> && logShipperRegionList) { DARABONBA_PTR_SET_RVALUE(logShipperRegionList_, logShipperRegionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogShipperRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The regions supported by the log delivery feature.
    shared_ptr<vector<ListLogShipperRegionsResponseBody::LogShipperRegionList>> logShipperRegionList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
