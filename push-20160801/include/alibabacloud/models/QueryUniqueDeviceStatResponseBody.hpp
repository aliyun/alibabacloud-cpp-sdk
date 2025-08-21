// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUNIQUEDEVICESTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUNIQUEDEVICESTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryUniqueDeviceStatResponseBodyAppDeviceStats.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryUniqueDeviceStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUniqueDeviceStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppDeviceStats, appDeviceStats_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUniqueDeviceStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDeviceStats, appDeviceStats_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryUniqueDeviceStatResponseBody() = default ;
    QueryUniqueDeviceStatResponseBody(const QueryUniqueDeviceStatResponseBody &) = default ;
    QueryUniqueDeviceStatResponseBody(QueryUniqueDeviceStatResponseBody &&) = default ;
    QueryUniqueDeviceStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUniqueDeviceStatResponseBody() = default ;
    QueryUniqueDeviceStatResponseBody& operator=(const QueryUniqueDeviceStatResponseBody &) = default ;
    QueryUniqueDeviceStatResponseBody& operator=(QueryUniqueDeviceStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appDeviceStats_ != nullptr
        && this->requestId_ != nullptr; };
    // appDeviceStats Field Functions 
    bool hasAppDeviceStats() const { return this->appDeviceStats_ != nullptr;};
    void deleteAppDeviceStats() { this->appDeviceStats_ = nullptr;};
    inline const QueryUniqueDeviceStatResponseBodyAppDeviceStats & appDeviceStats() const { DARABONBA_PTR_GET_CONST(appDeviceStats_, QueryUniqueDeviceStatResponseBodyAppDeviceStats) };
    inline QueryUniqueDeviceStatResponseBodyAppDeviceStats appDeviceStats() { DARABONBA_PTR_GET(appDeviceStats_, QueryUniqueDeviceStatResponseBodyAppDeviceStats) };
    inline QueryUniqueDeviceStatResponseBody& setAppDeviceStats(const QueryUniqueDeviceStatResponseBodyAppDeviceStats & appDeviceStats) { DARABONBA_PTR_SET_VALUE(appDeviceStats_, appDeviceStats) };
    inline QueryUniqueDeviceStatResponseBody& setAppDeviceStats(QueryUniqueDeviceStatResponseBodyAppDeviceStats && appDeviceStats) { DARABONBA_PTR_SET_RVALUE(appDeviceStats_, appDeviceStats) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUniqueDeviceStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryUniqueDeviceStatResponseBodyAppDeviceStats> appDeviceStats_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
