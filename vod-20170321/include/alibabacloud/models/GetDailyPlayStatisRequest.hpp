// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDAILYPLAYSTATISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDAILYPLAYSTATISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDailyPlayStatisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDailyPlayStatisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaRegion, mediaRegion_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetDailyPlayStatisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaRegion, mediaRegion_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    GetDailyPlayStatisRequest() = default ;
    GetDailyPlayStatisRequest(const GetDailyPlayStatisRequest &) = default ;
    GetDailyPlayStatisRequest(GetDailyPlayStatisRequest &&) = default ;
    GetDailyPlayStatisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDailyPlayStatisRequest() = default ;
    GetDailyPlayStatisRequest& operator=(const GetDailyPlayStatisRequest &) = default ;
    GetDailyPlayStatisRequest& operator=(GetDailyPlayStatisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->endDate_ != nullptr && this->mediaId_ != nullptr && this->mediaRegion_ != nullptr && this->startDate_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetDailyPlayStatisRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetDailyPlayStatisRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetDailyPlayStatisRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaRegion Field Functions 
    bool hasMediaRegion() const { return this->mediaRegion_ != nullptr;};
    void deleteMediaRegion() { this->mediaRegion_ = nullptr;};
    inline string mediaRegion() const { DARABONBA_PTR_GET_DEFAULT(mediaRegion_, "") };
    inline GetDailyPlayStatisRequest& setMediaRegion(string mediaRegion) { DARABONBA_PTR_SET_VALUE(mediaRegion_, mediaRegion) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetDailyPlayStatisRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> mediaRegion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
