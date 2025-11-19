// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERTOTALRESPONSEBODYUSERPLAYSTATISTOTALSUSERPLAYSTATISTOTAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERTOTALRESPONSEBODYUSERPLAYSTATISTOTALSUSERPLAYSTATISTOTAL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV.hpp>
#include <alibabacloud/models/DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalVV.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(PlayDuration, playDuration_);
      DARABONBA_PTR_TO_JSON(PlayRange, playRange_);
      DARABONBA_PTR_TO_JSON(UV, UV_);
      DARABONBA_PTR_TO_JSON(VV, VV_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(PlayDuration, playDuration_);
      DARABONBA_PTR_FROM_JSON(PlayRange, playRange_);
      DARABONBA_PTR_FROM_JSON(UV, UV_);
      DARABONBA_PTR_FROM_JSON(VV, VV_);
    };
    DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal() = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal(const DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal &) = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal(DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal &&) = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal() = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal& operator=(const DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal &) = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal& operator=(DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->playDuration_ == nullptr && return this->playRange_ == nullptr && return this->UV_ == nullptr && return this->VV_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // playDuration Field Functions 
    bool hasPlayDuration() const { return this->playDuration_ != nullptr;};
    void deletePlayDuration() { this->playDuration_ = nullptr;};
    inline string playDuration() const { DARABONBA_PTR_GET_DEFAULT(playDuration_, "") };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal& setPlayDuration(string playDuration) { DARABONBA_PTR_SET_VALUE(playDuration_, playDuration) };


    // playRange Field Functions 
    bool hasPlayRange() const { return this->playRange_ != nullptr;};
    void deletePlayRange() { this->playRange_ = nullptr;};
    inline string playRange() const { DARABONBA_PTR_GET_DEFAULT(playRange_, "") };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal& setPlayRange(string playRange) { DARABONBA_PTR_SET_VALUE(playRange_, playRange) };


    // UV Field Functions 
    bool hasUV() const { return this->UV_ != nullptr;};
    void deleteUV() { this->UV_ = nullptr;};
    inline const Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV & UV() const { DARABONBA_PTR_GET_CONST(UV_, Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV) };
    inline Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV UV() { DARABONBA_PTR_GET(UV_, Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV) };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal& setUV(const Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV & UV) { DARABONBA_PTR_SET_VALUE(UV_, UV) };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal& setUV(Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV && UV) { DARABONBA_PTR_SET_RVALUE(UV_, UV) };


    // VV Field Functions 
    bool hasVV() const { return this->VV_ != nullptr;};
    void deleteVV() { this->VV_ = nullptr;};
    inline const Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalVV & VV() const { DARABONBA_PTR_GET_CONST(VV_, Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalVV) };
    inline Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalVV VV() { DARABONBA_PTR_GET(VV_, Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalVV) };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal& setVV(const Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalVV & VV) { DARABONBA_PTR_SET_VALUE(VV_, VV) };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal& setVV(Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalVV && VV) { DARABONBA_PTR_SET_RVALUE(VV_, VV) };


  protected:
    // The date. The date is displayed in the yyyy-MM-dd format.
    std::shared_ptr<string> date_ = nullptr;
    // The total playback duration. Unit: milliseconds.
    std::shared_ptr<string> playDuration_ = nullptr;
    // The distribution of the playback duration.
    std::shared_ptr<string> playRange_ = nullptr;
    // The total number of unique visitors.
    std::shared_ptr<Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV> UV_ = nullptr;
    // The total number of video views.
    std::shared_ptr<Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalVV> VV_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
