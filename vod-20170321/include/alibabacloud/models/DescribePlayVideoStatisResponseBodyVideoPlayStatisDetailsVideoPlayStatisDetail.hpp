// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYVIDEOSTATISRESPONSEBODYVIDEOPLAYSTATISDETAILSVIDEOPLAYSTATISDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYVIDEOSTATISRESPONSEBODYVIDEOPLAYSTATISDETAILSVIDEOPLAYSTATISDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(PlayDuration, playDuration_);
      DARABONBA_PTR_TO_JSON(PlayRange, playRange_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UV, UV_);
      DARABONBA_PTR_TO_JSON(VV, VV_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(PlayDuration, playDuration_);
      DARABONBA_PTR_FROM_JSON(PlayRange, playRange_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UV, UV_);
      DARABONBA_PTR_FROM_JSON(VV, VV_);
    };
    DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail() = default ;
    DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail(const DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail &) = default ;
    DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail(DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail &&) = default ;
    DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail() = default ;
    DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail& operator=(const DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail &) = default ;
    DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail& operator=(DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->playDuration_ != nullptr && this->playRange_ != nullptr && this->title_ != nullptr && this->UV_ != nullptr && this->VV_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // playDuration Field Functions 
    bool hasPlayDuration() const { return this->playDuration_ != nullptr;};
    void deletePlayDuration() { this->playDuration_ = nullptr;};
    inline string playDuration() const { DARABONBA_PTR_GET_DEFAULT(playDuration_, "") };
    inline DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail& setPlayDuration(string playDuration) { DARABONBA_PTR_SET_VALUE(playDuration_, playDuration) };


    // playRange Field Functions 
    bool hasPlayRange() const { return this->playRange_ != nullptr;};
    void deletePlayRange() { this->playRange_ = nullptr;};
    inline string playRange() const { DARABONBA_PTR_GET_DEFAULT(playRange_, "") };
    inline DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail& setPlayRange(string playRange) { DARABONBA_PTR_SET_VALUE(playRange_, playRange) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // UV Field Functions 
    bool hasUV() const { return this->UV_ != nullptr;};
    void deleteUV() { this->UV_ = nullptr;};
    inline string UV() const { DARABONBA_PTR_GET_DEFAULT(UV_, "") };
    inline DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail& setUV(string UV) { DARABONBA_PTR_SET_VALUE(UV_, UV) };


    // VV Field Functions 
    bool hasVV() const { return this->VV_ != nullptr;};
    void deleteVV() { this->VV_ = nullptr;};
    inline string VV() const { DARABONBA_PTR_GET_DEFAULT(VV_, "") };
    inline DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail& setVV(string VV) { DARABONBA_PTR_SET_VALUE(VV_, VV) };


  protected:
    // The date. The time follows the ISO 8601 standard in the *YYYY-MM-DD*T*hh:mm:ss* format. The time is displayed in UTC.
    std::shared_ptr<string> date_ = nullptr;
    // The total playback duration. Unit: milliseconds.
    std::shared_ptr<string> playDuration_ = nullptr;
    // The distribution of the playback duration.
    std::shared_ptr<string> playRange_ = nullptr;
    // The video title.
    std::shared_ptr<string> title_ = nullptr;
    // The number of unique visitors.
    std::shared_ptr<string> UV_ = nullptr;
    // The number of video views.
    std::shared_ptr<string> VV_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
