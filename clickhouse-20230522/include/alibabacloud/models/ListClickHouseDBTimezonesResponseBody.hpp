// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLICKHOUSEDBTIMEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLICKHOUSEDBTIMEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ListClickHouseDBTimezonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClickHouseDBTimezonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeZones, timeZones_);
    };
    friend void from_json(const Darabonba::Json& j, ListClickHouseDBTimezonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeZones, timeZones_);
    };
    ListClickHouseDBTimezonesResponseBody() = default ;
    ListClickHouseDBTimezonesResponseBody(const ListClickHouseDBTimezonesResponseBody &) = default ;
    ListClickHouseDBTimezonesResponseBody(ListClickHouseDBTimezonesResponseBody &&) = default ;
    ListClickHouseDBTimezonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClickHouseDBTimezonesResponseBody() = default ;
    ListClickHouseDBTimezonesResponseBody& operator=(const ListClickHouseDBTimezonesResponseBody &) = default ;
    ListClickHouseDBTimezonesResponseBody& operator=(ListClickHouseDBTimezonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeZones& obj) { 
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, TimeZones& obj) { 
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      TimeZones() = default ;
      TimeZones(const TimeZones &) = default ;
      TimeZones(TimeZones &&) = default ;
      TimeZones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeZones() = default ;
      TimeZones& operator=(const TimeZones &) = default ;
      TimeZones& operator=(TimeZones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->zoneId_ == nullptr; };
      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline TimeZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->timeZones_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClickHouseDBTimezonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeZones Field Functions 
    bool hasTimeZones() const { return this->timeZones_ != nullptr;};
    void deleteTimeZones() { this->timeZones_ = nullptr;};
    inline const vector<ListClickHouseDBTimezonesResponseBody::TimeZones> & getTimeZones() const { DARABONBA_PTR_GET_CONST(timeZones_, vector<ListClickHouseDBTimezonesResponseBody::TimeZones>) };
    inline vector<ListClickHouseDBTimezonesResponseBody::TimeZones> getTimeZones() { DARABONBA_PTR_GET(timeZones_, vector<ListClickHouseDBTimezonesResponseBody::TimeZones>) };
    inline ListClickHouseDBTimezonesResponseBody& setTimeZones(const vector<ListClickHouseDBTimezonesResponseBody::TimeZones> & timeZones) { DARABONBA_PTR_SET_VALUE(timeZones_, timeZones) };
    inline ListClickHouseDBTimezonesResponseBody& setTimeZones(vector<ListClickHouseDBTimezonesResponseBody::TimeZones> && timeZones) { DARABONBA_PTR_SET_RVALUE(timeZones_, timeZones) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListClickHouseDBTimezonesResponseBody::TimeZones>> timeZones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
