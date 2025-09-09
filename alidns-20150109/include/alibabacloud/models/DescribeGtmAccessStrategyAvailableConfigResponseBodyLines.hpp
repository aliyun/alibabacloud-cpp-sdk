// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYLINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYLINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmAccessStrategyAvailableConfigResponseBodyLines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmAccessStrategyAvailableConfigResponseBodyLines& obj) { 
      DARABONBA_PTR_TO_JSON(Line, line_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmAccessStrategyAvailableConfigResponseBodyLines& obj) { 
      DARABONBA_PTR_FROM_JSON(Line, line_);
    };
    DescribeGtmAccessStrategyAvailableConfigResponseBodyLines() = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyLines(const DescribeGtmAccessStrategyAvailableConfigResponseBodyLines &) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyLines(DescribeGtmAccessStrategyAvailableConfigResponseBodyLines &&) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyLines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmAccessStrategyAvailableConfigResponseBodyLines() = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyLines& operator=(const DescribeGtmAccessStrategyAvailableConfigResponseBodyLines &) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyLines& operator=(DescribeGtmAccessStrategyAvailableConfigResponseBodyLines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->line_ != nullptr; };
    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline const vector<Models::DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine> & line() const { DARABONBA_PTR_GET_CONST(line_, vector<Models::DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine>) };
    inline vector<Models::DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine> line() { DARABONBA_PTR_GET(line_, vector<Models::DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine>) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBodyLines& setLine(const vector<Models::DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine> & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBodyLines& setLine(vector<Models::DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine> && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


  protected:
    std::shared_ptr<vector<Models::DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine>> line_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
