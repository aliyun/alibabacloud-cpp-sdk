// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYFEATURESRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYFEATURESRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGatewayFeaturesResponseBodyDataItemsDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayFeaturesResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayFeaturesResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(definition, definition_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayFeaturesResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(definition, definition_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListGatewayFeaturesResponseBodyDataItems() = default ;
    ListGatewayFeaturesResponseBodyDataItems(const ListGatewayFeaturesResponseBodyDataItems &) = default ;
    ListGatewayFeaturesResponseBodyDataItems(ListGatewayFeaturesResponseBodyDataItems &&) = default ;
    ListGatewayFeaturesResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayFeaturesResponseBodyDataItems() = default ;
    ListGatewayFeaturesResponseBodyDataItems& operator=(const ListGatewayFeaturesResponseBodyDataItems &) = default ;
    ListGatewayFeaturesResponseBodyDataItems& operator=(ListGatewayFeaturesResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->definition_ == nullptr
        && return this->value_ == nullptr; };
    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline const Models::ListGatewayFeaturesResponseBodyDataItemsDefinition & definition() const { DARABONBA_PTR_GET_CONST(definition_, Models::ListGatewayFeaturesResponseBodyDataItemsDefinition) };
    inline Models::ListGatewayFeaturesResponseBodyDataItemsDefinition definition() { DARABONBA_PTR_GET(definition_, Models::ListGatewayFeaturesResponseBodyDataItemsDefinition) };
    inline ListGatewayFeaturesResponseBodyDataItems& setDefinition(const Models::ListGatewayFeaturesResponseBodyDataItemsDefinition & definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };
    inline ListGatewayFeaturesResponseBodyDataItems& setDefinition(Models::ListGatewayFeaturesResponseBodyDataItemsDefinition && definition) { DARABONBA_PTR_SET_RVALUE(definition_, definition) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListGatewayFeaturesResponseBodyDataItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The parameter definition.
    std::shared_ptr<Models::ListGatewayFeaturesResponseBodyDataItemsDefinition> definition_ = nullptr;
    // The parameter value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
