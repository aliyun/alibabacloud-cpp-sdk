// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSVIEWSRESPONSEBODYPROMETHEUSVIEWSTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSVIEWSRESPONSEBODYPROMETHEUSVIEWSTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusViewsResponseBodyPrometheusViewsTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusViewsResponseBodyPrometheusViewsTags& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusViewsResponseBodyPrometheusViewsTags& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListPrometheusViewsResponseBodyPrometheusViewsTags() = default ;
    ListPrometheusViewsResponseBodyPrometheusViewsTags(const ListPrometheusViewsResponseBodyPrometheusViewsTags &) = default ;
    ListPrometheusViewsResponseBodyPrometheusViewsTags(ListPrometheusViewsResponseBodyPrometheusViewsTags &&) = default ;
    ListPrometheusViewsResponseBodyPrometheusViewsTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusViewsResponseBodyPrometheusViewsTags() = default ;
    ListPrometheusViewsResponseBodyPrometheusViewsTags& operator=(const ListPrometheusViewsResponseBodyPrometheusViewsTags &) = default ;
    ListPrometheusViewsResponseBodyPrometheusViewsTags& operator=(ListPrometheusViewsResponseBodyPrometheusViewsTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViewsTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViewsTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
