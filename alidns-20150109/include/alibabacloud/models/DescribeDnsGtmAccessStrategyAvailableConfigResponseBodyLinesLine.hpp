// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYLINESLINE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYLINESLINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine& obj) { 
      DARABONBA_PTR_TO_JSON(FatherCode, fatherCode_);
      DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
      DARABONBA_PTR_TO_JSON(LineName, lineName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine& obj) { 
      DARABONBA_PTR_FROM_JSON(FatherCode, fatherCode_);
      DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
      DARABONBA_PTR_FROM_JSON(LineName, lineName_);
    };
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine &&) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine& operator=(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine& operator=(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fatherCode_ == nullptr
        && return this->groupCode_ == nullptr && return this->groupName_ == nullptr && return this->lineCode_ == nullptr && return this->lineName_ == nullptr; };
    // fatherCode Field Functions 
    bool hasFatherCode() const { return this->fatherCode_ != nullptr;};
    void deleteFatherCode() { this->fatherCode_ = nullptr;};
    inline string fatherCode() const { DARABONBA_PTR_GET_DEFAULT(fatherCode_, "") };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine& setFatherCode(string fatherCode) { DARABONBA_PTR_SET_VALUE(fatherCode_, fatherCode) };


    // groupCode Field Functions 
    bool hasGroupCode() const { return this->groupCode_ != nullptr;};
    void deleteGroupCode() { this->groupCode_ = nullptr;};
    inline string groupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // lineCode Field Functions 
    bool hasLineCode() const { return this->lineCode_ != nullptr;};
    void deleteLineCode() { this->lineCode_ = nullptr;};
    inline string lineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


    // lineName Field Functions 
    bool hasLineName() const { return this->lineName_ != nullptr;};
    void deleteLineName() { this->lineName_ = nullptr;};
    inline string lineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLinesLine& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


  protected:
    // The parent line code of the source region. Leave it blank if no parent line exists.
    std::shared_ptr<string> fatherCode_ = nullptr;
    // The line name of the source region.
    std::shared_ptr<string> groupCode_ = nullptr;
    // The name of the source region group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The line code of the source region.
    std::shared_ptr<string> lineCode_ = nullptr;
    // The code of the source region group.
    std::shared_ptr<string> lineName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
