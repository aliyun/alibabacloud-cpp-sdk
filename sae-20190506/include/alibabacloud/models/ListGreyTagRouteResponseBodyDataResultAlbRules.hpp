// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODYDATARESULTALBRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODYDATARESULTALBRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGreyTagRouteResponseBodyDataResultAlbRulesItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListGreyTagRouteResponseBodyDataResultAlbRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGreyTagRouteResponseBodyDataResultAlbRules& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(ingressId, ingressId_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListGreyTagRouteResponseBodyDataResultAlbRules& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(ingressId, ingressId_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
    };
    ListGreyTagRouteResponseBodyDataResultAlbRules() = default ;
    ListGreyTagRouteResponseBodyDataResultAlbRules(const ListGreyTagRouteResponseBodyDataResultAlbRules &) = default ;
    ListGreyTagRouteResponseBodyDataResultAlbRules(ListGreyTagRouteResponseBodyDataResultAlbRules &&) = default ;
    ListGreyTagRouteResponseBodyDataResultAlbRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGreyTagRouteResponseBodyDataResultAlbRules() = default ;
    ListGreyTagRouteResponseBodyDataResultAlbRules& operator=(const ListGreyTagRouteResponseBodyDataResultAlbRules &) = default ;
    ListGreyTagRouteResponseBodyDataResultAlbRules& operator=(ListGreyTagRouteResponseBodyDataResultAlbRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->condition_ != nullptr
        && this->ingressId_ != nullptr && this->items_ != nullptr && this->serviceName_ != nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline ListGreyTagRouteResponseBodyDataResultAlbRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // ingressId Field Functions 
    bool hasIngressId() const { return this->ingressId_ != nullptr;};
    void deleteIngressId() { this->ingressId_ = nullptr;};
    inline string ingressId() const { DARABONBA_PTR_GET_DEFAULT(ingressId_, "") };
    inline ListGreyTagRouteResponseBodyDataResultAlbRules& setIngressId(string ingressId) { DARABONBA_PTR_SET_VALUE(ingressId_, ingressId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRulesItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRulesItems>) };
    inline vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRulesItems> items() { DARABONBA_PTR_GET(items_, vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRulesItems>) };
    inline ListGreyTagRouteResponseBodyDataResultAlbRules& setItems(const vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRulesItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListGreyTagRouteResponseBodyDataResultAlbRules& setItems(vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRulesItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListGreyTagRouteResponseBodyDataResultAlbRules& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    std::shared_ptr<string> condition_ = nullptr;
    std::shared_ptr<string> ingressId_ = nullptr;
    std::shared_ptr<vector<Models::ListGreyTagRouteResponseBodyDataResultAlbRulesItems>> items_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
