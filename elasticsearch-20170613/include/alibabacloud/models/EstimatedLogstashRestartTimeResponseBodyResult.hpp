// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTIMATEDLOGSTASHRESTARTTIMERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_ESTIMATEDLOGSTASHRESTARTTIMERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class EstimatedLogstashRestartTimeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstimatedLogstashRestartTimeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(unit, unit_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, EstimatedLogstashRestartTimeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(unit, unit_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    EstimatedLogstashRestartTimeResponseBodyResult() = default ;
    EstimatedLogstashRestartTimeResponseBodyResult(const EstimatedLogstashRestartTimeResponseBodyResult &) = default ;
    EstimatedLogstashRestartTimeResponseBodyResult(EstimatedLogstashRestartTimeResponseBodyResult &&) = default ;
    EstimatedLogstashRestartTimeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstimatedLogstashRestartTimeResponseBodyResult() = default ;
    EstimatedLogstashRestartTimeResponseBodyResult& operator=(const EstimatedLogstashRestartTimeResponseBodyResult &) = default ;
    EstimatedLogstashRestartTimeResponseBodyResult& operator=(EstimatedLogstashRestartTimeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->unit_ != nullptr
        && this->value_ != nullptr; };
    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline EstimatedLogstashRestartTimeResponseBodyResult& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline EstimatedLogstashRestartTimeResponseBodyResult& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The unit.
    std::shared_ptr<string> unit_ = nullptr;
    // The estimated restart time.
    std::shared_ptr<int64_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
