// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAppInfoResponseBodyAppInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class QueryAppInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfo, appInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfo, appInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAppInfoResponseBody() = default ;
    QueryAppInfoResponseBody(const QueryAppInfoResponseBody &) = default ;
    QueryAppInfoResponseBody(QueryAppInfoResponseBody &&) = default ;
    QueryAppInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppInfoResponseBody() = default ;
    QueryAppInfoResponseBody& operator=(const QueryAppInfoResponseBody &) = default ;
    QueryAppInfoResponseBody& operator=(QueryAppInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // appInfo Field Functions 
    bool hasAppInfo() const { return this->appInfo_ != nullptr;};
    void deleteAppInfo() { this->appInfo_ = nullptr;};
    inline const QueryAppInfoResponseBodyAppInfo & appInfo() const { DARABONBA_PTR_GET_CONST(appInfo_, QueryAppInfoResponseBodyAppInfo) };
    inline QueryAppInfoResponseBodyAppInfo appInfo() { DARABONBA_PTR_GET(appInfo_, QueryAppInfoResponseBodyAppInfo) };
    inline QueryAppInfoResponseBody& setAppInfo(const QueryAppInfoResponseBodyAppInfo & appInfo) { DARABONBA_PTR_SET_VALUE(appInfo_, appInfo) };
    inline QueryAppInfoResponseBody& setAppInfo(QueryAppInfoResponseBodyAppInfo && appInfo) { DARABONBA_PTR_SET_RVALUE(appInfo_, appInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAppInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryAppInfoResponseBodyAppInfo> appInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
