// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMETRICBYPAGEREQUESTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMETRICBYPAGEREQUESTFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class QueryMetricByPageRequestFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMetricByPageRequestFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMetricByPageRequestFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    QueryMetricByPageRequestFilters() = default ;
    QueryMetricByPageRequestFilters(const QueryMetricByPageRequestFilters &) = default ;
    QueryMetricByPageRequestFilters(QueryMetricByPageRequestFilters &&) = default ;
    QueryMetricByPageRequestFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMetricByPageRequestFilters() = default ;
    QueryMetricByPageRequestFilters& operator=(const QueryMetricByPageRequestFilters &) = default ;
    QueryMetricByPageRequestFilters& operator=(QueryMetricByPageRequestFilters &&) = default ;
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
    inline QueryMetricByPageRequestFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline QueryMetricByPageRequestFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the filter condition. You must set the key to `pid` or `regionId`.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the filter condition. You must set the value of the `pid` or `regionId` condition. For information about how to obtain the `pid`, see the "Obtain the PID of an application" section.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
