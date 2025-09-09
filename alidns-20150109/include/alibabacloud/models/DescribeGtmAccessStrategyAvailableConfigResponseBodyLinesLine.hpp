// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYLINESLINE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYLINESLINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine& obj) { 
      DARABONBA_PTR_TO_JSON(FatherCode, fatherCode_);
      DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
      DARABONBA_PTR_TO_JSON(LineName, lineName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine& obj) { 
      DARABONBA_PTR_FROM_JSON(FatherCode, fatherCode_);
      DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
      DARABONBA_PTR_FROM_JSON(LineName, lineName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine() = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine(const DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine &) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine(DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine &&) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine() = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine& operator=(const DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine &) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine& operator=(DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fatherCode_ != nullptr
        && this->groupCode_ != nullptr && this->groupName_ != nullptr && this->lineCode_ != nullptr && this->lineName_ != nullptr && this->status_ != nullptr; };
    // fatherCode Field Functions 
    bool hasFatherCode() const { return this->fatherCode_ != nullptr;};
    void deleteFatherCode() { this->fatherCode_ = nullptr;};
    inline string fatherCode() const { DARABONBA_PTR_GET_DEFAULT(fatherCode_, "") };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine& setFatherCode(string fatherCode) { DARABONBA_PTR_SET_VALUE(fatherCode_, fatherCode) };


    // groupCode Field Functions 
    bool hasGroupCode() const { return this->groupCode_ != nullptr;};
    void deleteGroupCode() { this->groupCode_ = nullptr;};
    inline string groupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // lineCode Field Functions 
    bool hasLineCode() const { return this->lineCode_ != nullptr;};
    void deleteLineCode() { this->lineCode_ = nullptr;};
    inline string lineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


    // lineName Field Functions 
    bool hasLineName() const { return this->lineName_ != nullptr;};
    void deleteLineName() { this->lineName_ = nullptr;};
    inline string lineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBodyLinesLine& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The code of the parent line. No value is returned if no parent line exists.
    std::shared_ptr<string> fatherCode_ = nullptr;
    // The group number of the DNS request source.
    std::shared_ptr<string> groupCode_ = nullptr;
    // The group name of the DNS request source.
    std::shared_ptr<string> groupName_ = nullptr;
    // The code of the DNS request source.
    std::shared_ptr<string> lineCode_ = nullptr;
    // The name of the DNS request source.
    std::shared_ptr<string> lineName_ = nullptr;
    // The state of the line. Valid values:
    // 
    // *   **FORBIDDEN**: The line is unavailable.
    // *   **OPTIONAL**: The line is available.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
