// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYFEATURESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYFEATURESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayFeaturesResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayFeaturesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayFeaturesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayFeaturesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
    };
    ListGatewayFeaturesResponseBodyData() = default ;
    ListGatewayFeaturesResponseBodyData(const ListGatewayFeaturesResponseBodyData &) = default ;
    ListGatewayFeaturesResponseBodyData(ListGatewayFeaturesResponseBodyData &&) = default ;
    ListGatewayFeaturesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayFeaturesResponseBodyData() = default ;
    ListGatewayFeaturesResponseBodyData& operator=(const ListGatewayFeaturesResponseBodyData &) = default ;
    ListGatewayFeaturesResponseBodyData& operator=(ListGatewayFeaturesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::ListGatewayFeaturesResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::ListGatewayFeaturesResponseBodyDataItems>) };
    inline vector<Models::ListGatewayFeaturesResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::ListGatewayFeaturesResponseBodyDataItems>) };
    inline ListGatewayFeaturesResponseBodyData& setItems(const vector<Models::ListGatewayFeaturesResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListGatewayFeaturesResponseBodyData& setItems(vector<Models::ListGatewayFeaturesResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    // The list of parameter configurations.
    std::shared_ptr<vector<Models::ListGatewayFeaturesResponseBodyDataItems>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
