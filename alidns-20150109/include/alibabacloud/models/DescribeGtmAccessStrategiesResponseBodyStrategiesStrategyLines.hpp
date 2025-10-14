// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGIESRESPONSEBODYSTRATEGIESSTRATEGYLINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGIESRESPONSEBODYSTRATEGIESSTRATEGYLINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines& obj) { 
      DARABONBA_PTR_TO_JSON(Line, line_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines& obj) { 
      DARABONBA_PTR_FROM_JSON(Line, line_);
    };
    DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines() = default ;
    DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines(const DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines &) = default ;
    DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines(DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines &&) = default ;
    DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines() = default ;
    DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines& operator=(const DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines &) = default ;
    DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines& operator=(DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->line_ == nullptr; };
    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline const vector<Models::DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine> & line() const { DARABONBA_PTR_GET_CONST(line_, vector<Models::DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine>) };
    inline vector<Models::DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine> line() { DARABONBA_PTR_GET(line_, vector<Models::DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine>) };
    inline DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines& setLine(const vector<Models::DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine> & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
    inline DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLines& setLine(vector<Models::DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine> && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


  protected:
    std::shared_ptr<vector<Models::DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine>> line_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
