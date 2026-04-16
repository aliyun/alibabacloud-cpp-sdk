// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRENDPOINTDTO_HPP_
#define ALIBABACLOUD_MODELS_TRENDPOINTDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class TrendPointDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrendPointDTO& obj) { 
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, TrendPointDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    TrendPointDTO() = default ;
    TrendPointDTO(const TrendPointDTO &) = default ;
    TrendPointDTO(TrendPointDTO &&) = default ;
    TrendPointDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrendPointDTO() = default ;
    TrendPointDTO& operator=(const TrendPointDTO &) = default ;
    TrendPointDTO& operator=(TrendPointDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timestamp_ == nullptr
        && this->values_ == nullptr; };
    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline TrendPointDTO& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline TrendPointDTO& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    shared_ptr<int64_t> timestamp_ {};
    shared_ptr<string> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
