// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSREQUESTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSREQUESTFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSqlLogRecordsRequestFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlLogRecordsRequestFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlLogRecordsRequestFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeSqlLogRecordsRequestFilters() = default ;
    DescribeSqlLogRecordsRequestFilters(const DescribeSqlLogRecordsRequestFilters &) = default ;
    DescribeSqlLogRecordsRequestFilters(DescribeSqlLogRecordsRequestFilters &&) = default ;
    DescribeSqlLogRecordsRequestFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlLogRecordsRequestFilters() = default ;
    DescribeSqlLogRecordsRequestFilters& operator=(const DescribeSqlLogRecordsRequestFilters &) = default ;
    DescribeSqlLogRecordsRequestFilters& operator=(DescribeSqlLogRecordsRequestFilters &&) = default ;
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
    inline DescribeSqlLogRecordsRequestFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeSqlLogRecordsRequestFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The filter parameter.
    // 
    // >  For more information about the supported filter parameters and their valid values, see the **Supported parameters and values for Key** section of this topic.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the filter parameter.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
