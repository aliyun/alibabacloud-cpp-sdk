// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGIESRESPONSEBODYSTRATEGIESSTRATEGYLINESLINE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGIESRESPONSEBODYSTRATEGIESSTRATEGYLINESLINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& obj) { 
      DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
      DARABONBA_PTR_TO_JSON(LineName, lineName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
      DARABONBA_PTR_FROM_JSON(LineName, lineName_);
    };
    DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine() = default ;
    DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine(const DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine &) = default ;
    DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine(DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine &&) = default ;
    DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine() = default ;
    DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& operator=(const DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine &) = default ;
    DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& operator=(DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupCode_ == nullptr
        && return this->groupName_ == nullptr && return this->lineCode_ == nullptr && return this->lineName_ == nullptr; };
    // groupCode Field Functions 
    bool hasGroupCode() const { return this->groupCode_ != nullptr;};
    void deleteGroupCode() { this->groupCode_ = nullptr;};
    inline string groupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
    inline DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // lineCode Field Functions 
    bool hasLineCode() const { return this->lineCode_ != nullptr;};
    void deleteLineCode() { this->lineCode_ = nullptr;};
    inline string lineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
    inline DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


    // lineName Field Functions 
    bool hasLineName() const { return this->lineName_ != nullptr;};
    void deleteLineName() { this->lineName_ = nullptr;};
    inline string lineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
    inline DescribeGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


  protected:
    // The code of the access region group.
    std::shared_ptr<string> groupCode_ = nullptr;
    // The name of the access region group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The code for the line of the access region.
    std::shared_ptr<string> lineCode_ = nullptr;
    // The name for the line of the access region.
    std::shared_ptr<string> lineName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
