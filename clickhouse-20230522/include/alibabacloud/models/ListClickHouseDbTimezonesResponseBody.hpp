// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLICKHOUSEDBTIMEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLICKHOUSEDBTIMEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClickHouseDBTimezonesResponseBodyTimeZones.hpp>
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
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->timeZones_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClickHouseDBTimezonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeZones Field Functions 
    bool hasTimeZones() const { return this->timeZones_ != nullptr;};
    void deleteTimeZones() { this->timeZones_ = nullptr;};
    inline const vector<ListClickHouseDBTimezonesResponseBodyTimeZones> & timeZones() const { DARABONBA_PTR_GET_CONST(timeZones_, vector<ListClickHouseDBTimezonesResponseBodyTimeZones>) };
    inline vector<ListClickHouseDBTimezonesResponseBodyTimeZones> timeZones() { DARABONBA_PTR_GET(timeZones_, vector<ListClickHouseDBTimezonesResponseBodyTimeZones>) };
    inline ListClickHouseDBTimezonesResponseBody& setTimeZones(const vector<ListClickHouseDBTimezonesResponseBodyTimeZones> & timeZones) { DARABONBA_PTR_SET_VALUE(timeZones_, timeZones) };
    inline ListClickHouseDBTimezonesResponseBody& setTimeZones(vector<ListClickHouseDBTimezonesResponseBodyTimeZones> && timeZones) { DARABONBA_PTR_SET_RVALUE(timeZones_, timeZones) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListClickHouseDBTimezonesResponseBodyTimeZones>> timeZones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
