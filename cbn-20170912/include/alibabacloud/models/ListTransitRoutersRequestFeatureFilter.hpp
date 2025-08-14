// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERSREQUESTFEATUREFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERSREQUESTFEATUREFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRoutersRequestFeatureFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRoutersRequestFeatureFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRoutersRequestFeatureFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTransitRoutersRequestFeatureFilter() = default ;
    ListTransitRoutersRequestFeatureFilter(const ListTransitRoutersRequestFeatureFilter &) = default ;
    ListTransitRoutersRequestFeatureFilter(ListTransitRoutersRequestFeatureFilter &&) = default ;
    ListTransitRoutersRequestFeatureFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRoutersRequestFeatureFilter() = default ;
    ListTransitRoutersRequestFeatureFilter& operator=(const ListTransitRoutersRequestFeatureFilter &) = default ;
    ListTransitRoutersRequestFeatureFilter& operator=(ListTransitRoutersRequestFeatureFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListTransitRoutersRequestFeatureFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline ListTransitRoutersRequestFeatureFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListTransitRoutersRequestFeatureFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The value of the field that is used to enable or disable a feature of the transit router. Supported fields:
    // 
    // *   **Multicast**: the multicast feature.
    std::shared_ptr<string> key_ = nullptr;
    // The fields that are used to enable or disable the features of the transit router. The **Multicast** field supports only one value. Valid values:
    // 
    // *   **Enabled**: enables multicast.
    // *   **Disabled**: disables multicast.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
