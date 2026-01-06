// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DataValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataValue& obj) { 
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DataValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    DataValue() = default ;
    DataValue(const DataValue &) = default ;
    DataValue(DataValue &&) = default ;
    DataValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataValue() = default ;
    DataValue& operator=(const DataValue &) = default ;
    DataValue& operator=(DataValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timestamp_ == nullptr
        && this->value_ == nullptr; };
    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline DataValue& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
    Darabonba::Json & getValue() { DARABONBA_GET(value_) };
    inline DataValue& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline DataValue& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    // The timestamp. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<string> timestamp_ {};
    // The value of the metric.
    Darabonba::Json value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
