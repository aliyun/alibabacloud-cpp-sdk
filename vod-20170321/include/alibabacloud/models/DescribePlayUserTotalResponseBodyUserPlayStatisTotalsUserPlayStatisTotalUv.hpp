// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERTOTALRESPONSEBODYUSERPLAYSTATISTOTALSUSERPLAYSTATISTOTALUV_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERTOTALRESPONSEBODYUSERPLAYSTATISTOTALSUSERPLAYSTATISTOTALUV_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV& obj) { 
      DARABONBA_PTR_TO_JSON(Android, android_);
      DARABONBA_PTR_TO_JSON(Flash, flash_);
      DARABONBA_PTR_TO_JSON(HTML5, HTML5_);
      DARABONBA_PTR_TO_JSON(iOS, iOS_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV& obj) { 
      DARABONBA_PTR_FROM_JSON(Android, android_);
      DARABONBA_PTR_FROM_JSON(Flash, flash_);
      DARABONBA_PTR_FROM_JSON(HTML5, HTML5_);
      DARABONBA_PTR_FROM_JSON(iOS, iOS_);
    };
    DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV() = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV(const DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV &) = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV(DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV &&) = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV() = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV& operator=(const DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV &) = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV& operator=(DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->android_ == nullptr
        && return this->flash_ == nullptr && return this->HTML5_ == nullptr && return this->iOS_ == nullptr; };
    // android Field Functions 
    bool hasAndroid() const { return this->android_ != nullptr;};
    void deleteAndroid() { this->android_ = nullptr;};
    inline string android() const { DARABONBA_PTR_GET_DEFAULT(android_, "") };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV& setAndroid(string android) { DARABONBA_PTR_SET_VALUE(android_, android) };


    // flash Field Functions 
    bool hasFlash() const { return this->flash_ != nullptr;};
    void deleteFlash() { this->flash_ = nullptr;};
    inline string flash() const { DARABONBA_PTR_GET_DEFAULT(flash_, "") };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV& setFlash(string flash) { DARABONBA_PTR_SET_VALUE(flash_, flash) };


    // HTML5 Field Functions 
    bool hasHTML5() const { return this->HTML5_ != nullptr;};
    void deleteHTML5() { this->HTML5_ = nullptr;};
    inline string HTML5() const { DARABONBA_PTR_GET_DEFAULT(HTML5_, "") };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV& setHTML5(string HTML5) { DARABONBA_PTR_SET_VALUE(HTML5_, HTML5) };


    // iOS Field Functions 
    bool hasIOS() const { return this->iOS_ != nullptr;};
    void deleteIOS() { this->iOS_ = nullptr;};
    inline string iOS() const { DARABONBA_PTR_GET_DEFAULT(iOS_, "") };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotalUV& setIOS(string iOS) { DARABONBA_PTR_SET_VALUE(iOS_, iOS) };


  protected:
    // The total number of unique visitors who use ApsaraVideo Player SDK for Android.
    std::shared_ptr<string> android_ = nullptr;
    // The total number of unique visitors who use the Flash player.
    std::shared_ptr<string> flash_ = nullptr;
    // The total number of unique visitors who use the HTML5 player.
    std::shared_ptr<string> HTML5_ = nullptr;
    // The total number of unique visitors who use ApsaraVideo Player SDK for iOS.
    std::shared_ptr<string> iOS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
