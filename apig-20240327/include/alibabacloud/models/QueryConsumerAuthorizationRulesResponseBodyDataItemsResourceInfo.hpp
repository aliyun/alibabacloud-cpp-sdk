// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONSUMERAUTHORIZATIONRULESRESPONSEBODYDATAITEMSRESOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONSUMERAUTHORIZATIONRULESRESPONSEBODYDATAITEMSRESOURCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiOperationInfo.hpp>
#include <alibabacloud/models/HttpRoute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(operationInfo, operationInfo_);
      DARABONBA_PTR_TO_JSON(route, route_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(operationInfo, operationInfo_);
      DARABONBA_PTR_FROM_JSON(route, route_);
    };
    QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo() = default ;
    QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo(const QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo &) = default ;
    QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo(QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo &&) = default ;
    QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo() = default ;
    QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo& operator=(const QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo &) = default ;
    QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo& operator=(QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operationInfo_ != nullptr
        && this->route_ != nullptr; };
    // operationInfo Field Functions 
    bool hasOperationInfo() const { return this->operationInfo_ != nullptr;};
    void deleteOperationInfo() { this->operationInfo_ = nullptr;};
    inline const Models::HttpApiOperationInfo & operationInfo() const { DARABONBA_PTR_GET_CONST(operationInfo_, Models::HttpApiOperationInfo) };
    inline Models::HttpApiOperationInfo operationInfo() { DARABONBA_PTR_GET(operationInfo_, Models::HttpApiOperationInfo) };
    inline QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo& setOperationInfo(const Models::HttpApiOperationInfo & operationInfo) { DARABONBA_PTR_SET_VALUE(operationInfo_, operationInfo) };
    inline QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo& setOperationInfo(Models::HttpApiOperationInfo && operationInfo) { DARABONBA_PTR_SET_RVALUE(operationInfo_, operationInfo) };


    // route Field Functions 
    bool hasRoute() const { return this->route_ != nullptr;};
    void deleteRoute() { this->route_ = nullptr;};
    inline const Models::HttpRoute & route() const { DARABONBA_PTR_GET_CONST(route_, Models::HttpRoute) };
    inline Models::HttpRoute route() { DARABONBA_PTR_GET(route_, Models::HttpRoute) };
    inline QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo& setRoute(const Models::HttpRoute & route) { DARABONBA_PTR_SET_VALUE(route_, route) };
    inline QueryConsumerAuthorizationRulesResponseBodyDataItemsResourceInfo& setRoute(Models::HttpRoute && route) { DARABONBA_PTR_SET_RVALUE(route_, route) };


  protected:
    // The operation information.
    std::shared_ptr<Models::HttpApiOperationInfo> operationInfo_ = nullptr;
    // The route.
    std::shared_ptr<Models::HttpRoute> route_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
