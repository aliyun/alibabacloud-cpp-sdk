// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSUBREQUESTADDSUBSCRIPTIONINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSUBREQUESTADDSUBSCRIPTIONINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddSubRequestAddSubscriptionInfoRequestScheduleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AddSubRequestAddSubscriptionInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSubRequestAddSubscriptionInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
      DARABONBA_PTR_TO_JSON(DailyStudyCnt, dailyStudyCnt_);
      DARABONBA_PTR_TO_JSON(PlayMode, playMode_);
      DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AddSubRequestAddSubscriptionInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
      DARABONBA_PTR_FROM_JSON(DailyStudyCnt, dailyStudyCnt_);
      DARABONBA_PTR_FROM_JSON(PlayMode, playMode_);
      DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfo_);
    };
    AddSubRequestAddSubscriptionInfoRequest() = default ;
    AddSubRequestAddSubscriptionInfoRequest(const AddSubRequestAddSubscriptionInfoRequest &) = default ;
    AddSubRequestAddSubscriptionInfoRequest(AddSubRequestAddSubscriptionInfoRequest &&) = default ;
    AddSubRequestAddSubscriptionInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSubRequestAddSubscriptionInfoRequest() = default ;
    AddSubRequestAddSubscriptionInfoRequest& operator=(const AddSubRequestAddSubscriptionInfoRequest &) = default ;
    AddSubRequestAddSubscriptionInfoRequest& operator=(AddSubRequestAddSubscriptionInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albumId_ != nullptr
        && this->dailyStudyCnt_ != nullptr && this->playMode_ != nullptr && this->scheduleInfo_ != nullptr; };
    // albumId Field Functions 
    bool hasAlbumId() const { return this->albumId_ != nullptr;};
    void deleteAlbumId() { this->albumId_ = nullptr;};
    inline string albumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
    inline AddSubRequestAddSubscriptionInfoRequest& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


    // dailyStudyCnt Field Functions 
    bool hasDailyStudyCnt() const { return this->dailyStudyCnt_ != nullptr;};
    void deleteDailyStudyCnt() { this->dailyStudyCnt_ = nullptr;};
    inline int32_t dailyStudyCnt() const { DARABONBA_PTR_GET_DEFAULT(dailyStudyCnt_, 0) };
    inline AddSubRequestAddSubscriptionInfoRequest& setDailyStudyCnt(int32_t dailyStudyCnt) { DARABONBA_PTR_SET_VALUE(dailyStudyCnt_, dailyStudyCnt) };


    // playMode Field Functions 
    bool hasPlayMode() const { return this->playMode_ != nullptr;};
    void deletePlayMode() { this->playMode_ = nullptr;};
    inline string playMode() const { DARABONBA_PTR_GET_DEFAULT(playMode_, "") };
    inline AddSubRequestAddSubscriptionInfoRequest& setPlayMode(string playMode) { DARABONBA_PTR_SET_VALUE(playMode_, playMode) };


    // scheduleInfo Field Functions 
    bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
    void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
    inline const Models::AddSubRequestAddSubscriptionInfoRequestScheduleInfo & scheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Models::AddSubRequestAddSubscriptionInfoRequestScheduleInfo) };
    inline Models::AddSubRequestAddSubscriptionInfoRequestScheduleInfo scheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Models::AddSubRequestAddSubscriptionInfoRequestScheduleInfo) };
    inline AddSubRequestAddSubscriptionInfoRequest& setScheduleInfo(const Models::AddSubRequestAddSubscriptionInfoRequestScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
    inline AddSubRequestAddSubscriptionInfoRequest& setScheduleInfo(Models::AddSubRequestAddSubscriptionInfoRequestScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


  protected:
    std::shared_ptr<string> albumId_ = nullptr;
    std::shared_ptr<int32_t> dailyStudyCnt_ = nullptr;
    std::shared_ptr<string> playMode_ = nullptr;
    std::shared_ptr<Models::AddSubRequestAddSubscriptionInfoRequestScheduleInfo> scheduleInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
