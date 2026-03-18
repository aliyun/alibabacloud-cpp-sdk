// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TIMESERIESPOINTDTO_HPP_
#define ALIBABACLOUD_MODELS_TIMESERIESPOINTDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class TimeSeriesPointDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TimeSeriesPointDTO& obj) { 
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_ANY_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, TimeSeriesPointDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_ANY_FROM_JSON(value, value_);
    };
    TimeSeriesPointDTO() = default ;
    TimeSeriesPointDTO(const TimeSeriesPointDTO &) = default ;
    TimeSeriesPointDTO(TimeSeriesPointDTO &&) = default ;
    TimeSeriesPointDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TimeSeriesPointDTO() = default ;
    TimeSeriesPointDTO& operator=(const TimeSeriesPointDTO &) = default ;
    TimeSeriesPointDTO& operator=(TimeSeriesPointDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && this->timestamp_ == nullptr && this->value_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline TimeSeriesPointDTO& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline TimeSeriesPointDTO& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
    Darabonba::Json & getValue() { DARABONBA_GET(value_) };
    inline TimeSeriesPointDTO& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline TimeSeriesPointDTO& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    shared_ptr<string> label_ {};
    shared_ptr<string> timestamp_ {};
    Darabonba::Json value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
