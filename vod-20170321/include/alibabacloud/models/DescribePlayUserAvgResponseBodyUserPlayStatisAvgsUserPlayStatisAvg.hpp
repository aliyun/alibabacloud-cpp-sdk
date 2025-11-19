// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERAVGRESPONSEBODYUSERPLAYSTATISAVGSUSERPLAYSTATISAVG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERAVGRESPONSEBODYUSERPLAYSTATISAVGSUSERPLAYSTATISAVG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg& obj) { 
      DARABONBA_PTR_TO_JSON(AvgPlayCount, avgPlayCount_);
      DARABONBA_PTR_TO_JSON(AvgPlayDuration, avgPlayDuration_);
      DARABONBA_PTR_TO_JSON(Date, date_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgPlayCount, avgPlayCount_);
      DARABONBA_PTR_FROM_JSON(AvgPlayDuration, avgPlayDuration_);
      DARABONBA_PTR_FROM_JSON(Date, date_);
    };
    DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg() = default ;
    DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg(const DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg &) = default ;
    DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg(DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg &&) = default ;
    DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg() = default ;
    DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg& operator=(const DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg &) = default ;
    DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg& operator=(DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgPlayCount_ == nullptr
        && return this->avgPlayDuration_ == nullptr && return this->date_ == nullptr; };
    // avgPlayCount Field Functions 
    bool hasAvgPlayCount() const { return this->avgPlayCount_ != nullptr;};
    void deleteAvgPlayCount() { this->avgPlayCount_ = nullptr;};
    inline string avgPlayCount() const { DARABONBA_PTR_GET_DEFAULT(avgPlayCount_, "") };
    inline DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg& setAvgPlayCount(string avgPlayCount) { DARABONBA_PTR_SET_VALUE(avgPlayCount_, avgPlayCount) };


    // avgPlayDuration Field Functions 
    bool hasAvgPlayDuration() const { return this->avgPlayDuration_ != nullptr;};
    void deleteAvgPlayDuration() { this->avgPlayDuration_ = nullptr;};
    inline string avgPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(avgPlayDuration_, "") };
    inline DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg& setAvgPlayDuration(string avgPlayDuration) { DARABONBA_PTR_SET_VALUE(avgPlayDuration_, avgPlayDuration) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


  protected:
    // The average number of video views.
    std::shared_ptr<string> avgPlayCount_ = nullptr;
    // The average playback duration. Unit: milliseconds.
    std::shared_ptr<string> avgPlayDuration_ = nullptr;
    // The date when the statistics were generated. The date follows the *yyyy-MM-dd* format.
    std::shared_ptr<string> date_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
