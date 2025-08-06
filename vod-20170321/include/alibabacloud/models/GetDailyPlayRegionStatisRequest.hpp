// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDAILYPLAYREGIONSTATISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDAILYPLAYREGIONSTATISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDailyPlayRegionStatisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDailyPlayRegionStatisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(MediaRegion, mediaRegion_);
    };
    friend void from_json(const Darabonba::Json& j, GetDailyPlayRegionStatisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(MediaRegion, mediaRegion_);
    };
    GetDailyPlayRegionStatisRequest() = default ;
    GetDailyPlayRegionStatisRequest(const GetDailyPlayRegionStatisRequest &) = default ;
    GetDailyPlayRegionStatisRequest(GetDailyPlayRegionStatisRequest &&) = default ;
    GetDailyPlayRegionStatisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDailyPlayRegionStatisRequest() = default ;
    GetDailyPlayRegionStatisRequest& operator=(const GetDailyPlayRegionStatisRequest &) = default ;
    GetDailyPlayRegionStatisRequest& operator=(GetDailyPlayRegionStatisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->mediaRegion_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetDailyPlayRegionStatisRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // mediaRegion Field Functions 
    bool hasMediaRegion() const { return this->mediaRegion_ != nullptr;};
    void deleteMediaRegion() { this->mediaRegion_ = nullptr;};
    inline string mediaRegion() const { DARABONBA_PTR_GET_DEFAULT(mediaRegion_, "") };
    inline GetDailyPlayRegionStatisRequest& setMediaRegion(string mediaRegion) { DARABONBA_PTR_SET_VALUE(mediaRegion_, mediaRegion) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> date_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mediaRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
