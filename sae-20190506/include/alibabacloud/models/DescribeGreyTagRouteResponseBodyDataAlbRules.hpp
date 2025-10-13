// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTERESPONSEBODYDATAALBRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTERESPONSEBODYDATAALBRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGreyTagRouteResponseBodyDataAlbRulesItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeGreyTagRouteResponseBodyDataAlbRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGreyTagRouteResponseBodyDataAlbRules& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(ingressId, ingressId_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGreyTagRouteResponseBodyDataAlbRules& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(ingressId, ingressId_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
    };
    DescribeGreyTagRouteResponseBodyDataAlbRules() = default ;
    DescribeGreyTagRouteResponseBodyDataAlbRules(const DescribeGreyTagRouteResponseBodyDataAlbRules &) = default ;
    DescribeGreyTagRouteResponseBodyDataAlbRules(DescribeGreyTagRouteResponseBodyDataAlbRules &&) = default ;
    DescribeGreyTagRouteResponseBodyDataAlbRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGreyTagRouteResponseBodyDataAlbRules() = default ;
    DescribeGreyTagRouteResponseBodyDataAlbRules& operator=(const DescribeGreyTagRouteResponseBodyDataAlbRules &) = default ;
    DescribeGreyTagRouteResponseBodyDataAlbRules& operator=(DescribeGreyTagRouteResponseBodyDataAlbRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->ingressId_ == nullptr && return this->items_ == nullptr && return this->serviceId_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline DescribeGreyTagRouteResponseBodyDataAlbRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // ingressId Field Functions 
    bool hasIngressId() const { return this->ingressId_ != nullptr;};
    void deleteIngressId() { this->ingressId_ = nullptr;};
    inline string ingressId() const { DARABONBA_PTR_GET_DEFAULT(ingressId_, "") };
    inline DescribeGreyTagRouteResponseBodyDataAlbRules& setIngressId(string ingressId) { DARABONBA_PTR_SET_VALUE(ingressId_, ingressId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRulesItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRulesItems>) };
    inline vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRulesItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRulesItems>) };
    inline DescribeGreyTagRouteResponseBodyDataAlbRules& setItems(const vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRulesItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeGreyTagRouteResponseBodyDataAlbRules& setItems(vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRulesItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DescribeGreyTagRouteResponseBodyDataAlbRules& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // The condition mode of the canary release rule. Valid value: AND. This value indicates that that all conditions must be met.
    std::shared_ptr<string> condition_ = nullptr;
    // The ID of the gateway routing rule.
    std::shared_ptr<string> ingressId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeGreyTagRouteResponseBodyDataAlbRulesItems>> items_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
