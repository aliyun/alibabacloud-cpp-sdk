// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGIESRESPONSEBODYSTRATEGIESSTRATEGYLINESLINE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGIESRESPONSEBODYSTRATEGIESSTRATEGYLINESLINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& obj) { 
      DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
      DARABONBA_PTR_TO_JSON(LineName, lineName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
      DARABONBA_PTR_FROM_JSON(LineName, lineName_);
    };
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine() = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine(const DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine &) = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine(DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine &&) = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine() = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& operator=(const DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine &) = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& operator=(DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupCode_ != nullptr
        && this->groupName_ != nullptr && this->lineCode_ != nullptr && this->lineName_ != nullptr; };
    // groupCode Field Functions 
    bool hasGroupCode() const { return this->groupCode_ != nullptr;};
    void deleteGroupCode() { this->groupCode_ = nullptr;};
    inline string groupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // lineCode Field Functions 
    bool hasLineCode() const { return this->lineCode_ != nullptr;};
    void deleteLineCode() { this->lineCode_ = nullptr;};
    inline string lineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


    // lineName Field Functions 
    bool hasLineName() const { return this->lineName_ != nullptr;};
    void deleteLineName() { this->lineName_ = nullptr;};
    inline string lineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLinesLine& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


  protected:
    // The code of the source region group.
    std::shared_ptr<string> groupCode_ = nullptr;
    // The name of the source region group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The line code of the source region.
    std::shared_ptr<string> lineCode_ = nullptr;
    // The line name of the source region.
    std::shared_ptr<string> lineName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
