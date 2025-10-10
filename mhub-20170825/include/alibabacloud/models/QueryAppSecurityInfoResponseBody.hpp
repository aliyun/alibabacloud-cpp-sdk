// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPSECURITYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPSECURITYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAppSecurityInfoResponseBodyAppSecurityInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class QueryAppSecurityInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppSecurityInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppSecurityInfo, appSecurityInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppSecurityInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppSecurityInfo, appSecurityInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAppSecurityInfoResponseBody() = default ;
    QueryAppSecurityInfoResponseBody(const QueryAppSecurityInfoResponseBody &) = default ;
    QueryAppSecurityInfoResponseBody(QueryAppSecurityInfoResponseBody &&) = default ;
    QueryAppSecurityInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppSecurityInfoResponseBody() = default ;
    QueryAppSecurityInfoResponseBody& operator=(const QueryAppSecurityInfoResponseBody &) = default ;
    QueryAppSecurityInfoResponseBody& operator=(QueryAppSecurityInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appSecurityInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // appSecurityInfo Field Functions 
    bool hasAppSecurityInfo() const { return this->appSecurityInfo_ != nullptr;};
    void deleteAppSecurityInfo() { this->appSecurityInfo_ = nullptr;};
    inline const QueryAppSecurityInfoResponseBodyAppSecurityInfo & appSecurityInfo() const { DARABONBA_PTR_GET_CONST(appSecurityInfo_, QueryAppSecurityInfoResponseBodyAppSecurityInfo) };
    inline QueryAppSecurityInfoResponseBodyAppSecurityInfo appSecurityInfo() { DARABONBA_PTR_GET(appSecurityInfo_, QueryAppSecurityInfoResponseBodyAppSecurityInfo) };
    inline QueryAppSecurityInfoResponseBody& setAppSecurityInfo(const QueryAppSecurityInfoResponseBodyAppSecurityInfo & appSecurityInfo) { DARABONBA_PTR_SET_VALUE(appSecurityInfo_, appSecurityInfo) };
    inline QueryAppSecurityInfoResponseBody& setAppSecurityInfo(QueryAppSecurityInfoResponseBodyAppSecurityInfo && appSecurityInfo) { DARABONBA_PTR_SET_RVALUE(appSecurityInfo_, appSecurityInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAppSecurityInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryAppSecurityInfoResponseBodyAppSecurityInfo> appSecurityInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
