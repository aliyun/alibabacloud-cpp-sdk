// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYFLOWRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYFLOWRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayFlowRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayFlowRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(FilterParams, filterParams_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayFlowRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(FilterParams, filterParams_);
    };
    ListGatewayFlowRuleRequest() = default ;
    ListGatewayFlowRuleRequest(const ListGatewayFlowRuleRequest &) = default ;
    ListGatewayFlowRuleRequest(ListGatewayFlowRuleRequest &&) = default ;
    ListGatewayFlowRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayFlowRuleRequest() = default ;
    ListGatewayFlowRuleRequest& operator=(const ListGatewayFlowRuleRequest &) = default ;
    ListGatewayFlowRuleRequest& operator=(ListGatewayFlowRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->filterParams_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListGatewayFlowRuleRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // filterParams Field Functions 
    bool hasFilterParams() const { return this->filterParams_ != nullptr;};
    void deleteFilterParams() { this->filterParams_ = nullptr;};
    inline string filterParams() const { DARABONBA_PTR_GET_DEFAULT(filterParams_, "") };
    inline ListGatewayFlowRuleRequest& setFilterParams(string filterParams) { DARABONBA_PTR_SET_VALUE(filterParams_, filterParams) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // just for POP
    // 
    // This parameter is required.
    std::shared_ptr<string> filterParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
