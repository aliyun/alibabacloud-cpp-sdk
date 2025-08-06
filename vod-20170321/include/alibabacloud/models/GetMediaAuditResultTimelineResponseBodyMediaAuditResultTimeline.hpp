// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTTIMELINERESPONSEBODYMEDIAAUDITRESULTTIMELINE_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTTIMELINERESPONSEBODYMEDIAAUDITRESULTTIMELINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd.hpp>
#include <alibabacloud/models/GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLive.hpp>
#include <alibabacloud/models/GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLogo.hpp>
#include <alibabacloud/models/GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelinePorn.hpp>
#include <alibabacloud/models/GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineTerrorism.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& obj) { 
      DARABONBA_PTR_TO_JSON(Ad, ad_);
      DARABONBA_PTR_TO_JSON(Live, live_);
      DARABONBA_PTR_TO_JSON(Logo, logo_);
      DARABONBA_PTR_TO_JSON(Porn, porn_);
      DARABONBA_PTR_TO_JSON(Terrorism, terrorism_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& obj) { 
      DARABONBA_PTR_FROM_JSON(Ad, ad_);
      DARABONBA_PTR_FROM_JSON(Live, live_);
      DARABONBA_PTR_FROM_JSON(Logo, logo_);
      DARABONBA_PTR_FROM_JSON(Porn, porn_);
      DARABONBA_PTR_FROM_JSON(Terrorism, terrorism_);
    };
    GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline() = default ;
    GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline(const GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline &) = default ;
    GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline(GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline &&) = default ;
    GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline() = default ;
    GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& operator=(const GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline &) = default ;
    GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& operator=(GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ad_ != nullptr
        && this->live_ != nullptr && this->logo_ != nullptr && this->porn_ != nullptr && this->terrorism_ != nullptr; };
    // ad Field Functions 
    bool hasAd() const { return this->ad_ != nullptr;};
    void deleteAd() { this->ad_ = nullptr;};
    inline const vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd> & ad() const { DARABONBA_PTR_GET_CONST(ad_, vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd>) };
    inline vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd> ad() { DARABONBA_PTR_GET(ad_, vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd>) };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& setAd(const vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd> & ad) { DARABONBA_PTR_SET_VALUE(ad_, ad) };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& setAd(vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd> && ad) { DARABONBA_PTR_SET_RVALUE(ad_, ad) };


    // live Field Functions 
    bool hasLive() const { return this->live_ != nullptr;};
    void deleteLive() { this->live_ = nullptr;};
    inline const vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLive> & live() const { DARABONBA_PTR_GET_CONST(live_, vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLive>) };
    inline vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLive> live() { DARABONBA_PTR_GET(live_, vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLive>) };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& setLive(const vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLive> & live) { DARABONBA_PTR_SET_VALUE(live_, live) };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& setLive(vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLive> && live) { DARABONBA_PTR_SET_RVALUE(live_, live) };


    // logo Field Functions 
    bool hasLogo() const { return this->logo_ != nullptr;};
    void deleteLogo() { this->logo_ = nullptr;};
    inline const vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLogo> & logo() const { DARABONBA_PTR_GET_CONST(logo_, vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLogo>) };
    inline vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLogo> logo() { DARABONBA_PTR_GET(logo_, vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLogo>) };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& setLogo(const vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLogo> & logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& setLogo(vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLogo> && logo) { DARABONBA_PTR_SET_RVALUE(logo_, logo) };


    // porn Field Functions 
    bool hasPorn() const { return this->porn_ != nullptr;};
    void deletePorn() { this->porn_ = nullptr;};
    inline const vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelinePorn> & porn() const { DARABONBA_PTR_GET_CONST(porn_, vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelinePorn>) };
    inline vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelinePorn> porn() { DARABONBA_PTR_GET(porn_, vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelinePorn>) };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& setPorn(const vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelinePorn> & porn) { DARABONBA_PTR_SET_VALUE(porn_, porn) };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& setPorn(vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelinePorn> && porn) { DARABONBA_PTR_SET_RVALUE(porn_, porn) };


    // terrorism Field Functions 
    bool hasTerrorism() const { return this->terrorism_ != nullptr;};
    void deleteTerrorism() { this->terrorism_ = nullptr;};
    inline const vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineTerrorism> & terrorism() const { DARABONBA_PTR_GET_CONST(terrorism_, vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineTerrorism>) };
    inline vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineTerrorism> terrorism() { DARABONBA_PTR_GET(terrorism_, vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineTerrorism>) };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& setTerrorism(const vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineTerrorism> & terrorism) { DARABONBA_PTR_SET_VALUE(terrorism_, terrorism) };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline& setTerrorism(vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineTerrorism> && terrorism) { DARABONBA_PTR_SET_RVALUE(terrorism_, terrorism) };


  protected:
    // The collection of ad timelines.
    std::shared_ptr<vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd>> ad_ = nullptr;
    // The collection of undesirable content timelines.
    std::shared_ptr<vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLive>> live_ = nullptr;
    // The collection of logo timelines.
    std::shared_ptr<vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineLogo>> logo_ = nullptr;
    // The collection of pornographic content timelines.
    std::shared_ptr<vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelinePorn>> porn_ = nullptr;
    // The collection of terrorist content timelines.
    std::shared_ptr<vector<Models::GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineTerrorism>> terrorism_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
