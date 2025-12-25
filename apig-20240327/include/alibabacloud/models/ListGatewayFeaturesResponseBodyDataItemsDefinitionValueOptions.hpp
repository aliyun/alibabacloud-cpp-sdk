// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYFEATURESRESPONSEBODYDATAITEMSDEFINITIONVALUEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYFEATURESRESPONSEBODYDATAITEMSDEFINITIONVALUEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(label, label_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(label, label_);
    };
    ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions() = default ;
    ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions(const ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions &) = default ;
    ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions(ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions &&) = default ;
    ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions() = default ;
    ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions& operator=(const ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions &) = default ;
    ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions& operator=(ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->label_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    // The key to pass the parameter.
    std::shared_ptr<string> key_ = nullptr;
    // The display value.
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
