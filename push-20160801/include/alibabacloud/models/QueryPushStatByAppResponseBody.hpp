// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHSTATBYAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHSTATBYAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryPushStatByAppResponseBodyAppPushStats.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryPushStatByAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushStatByAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppPushStats, appPushStats_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushStatByAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPushStats, appPushStats_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPushStatByAppResponseBody() = default ;
    QueryPushStatByAppResponseBody(const QueryPushStatByAppResponseBody &) = default ;
    QueryPushStatByAppResponseBody(QueryPushStatByAppResponseBody &&) = default ;
    QueryPushStatByAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushStatByAppResponseBody() = default ;
    QueryPushStatByAppResponseBody& operator=(const QueryPushStatByAppResponseBody &) = default ;
    QueryPushStatByAppResponseBody& operator=(QueryPushStatByAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appPushStats_ != nullptr
        && this->requestId_ != nullptr; };
    // appPushStats Field Functions 
    bool hasAppPushStats() const { return this->appPushStats_ != nullptr;};
    void deleteAppPushStats() { this->appPushStats_ = nullptr;};
    inline const QueryPushStatByAppResponseBodyAppPushStats & appPushStats() const { DARABONBA_PTR_GET_CONST(appPushStats_, QueryPushStatByAppResponseBodyAppPushStats) };
    inline QueryPushStatByAppResponseBodyAppPushStats appPushStats() { DARABONBA_PTR_GET(appPushStats_, QueryPushStatByAppResponseBodyAppPushStats) };
    inline QueryPushStatByAppResponseBody& setAppPushStats(const QueryPushStatByAppResponseBodyAppPushStats & appPushStats) { DARABONBA_PTR_SET_VALUE(appPushStats_, appPushStats) };
    inline QueryPushStatByAppResponseBody& setAppPushStats(QueryPushStatByAppResponseBodyAppPushStats && appPushStats) { DARABONBA_PTR_SET_RVALUE(appPushStats_, appPushStats) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPushStatByAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryPushStatByAppResponseBodyAppPushStats> appPushStats_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
