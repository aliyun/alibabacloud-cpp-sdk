// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOAPPREPORTREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_VIDEOAPPREPORTREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class VideoAppReportRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoAppReportRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(isLogin, isLogin_);
      DARABONBA_PTR_TO_JSON(isVip, isVip_);
      DARABONBA_PTR_TO_JSON(loginNick, loginNick_);
      DARABONBA_PTR_TO_JSON(originUuid, originUuid_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(pkgName, pkgName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, VideoAppReportRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(isLogin, isLogin_);
      DARABONBA_PTR_FROM_JSON(isVip, isVip_);
      DARABONBA_PTR_FROM_JSON(loginNick, loginNick_);
      DARABONBA_PTR_FROM_JSON(originUuid, originUuid_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(pkgName, pkgName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    VideoAppReportRequestPayload() = default ;
    VideoAppReportRequestPayload(const VideoAppReportRequestPayload &) = default ;
    VideoAppReportRequestPayload(VideoAppReportRequestPayload &&) = default ;
    VideoAppReportRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoAppReportRequestPayload() = default ;
    VideoAppReportRequestPayload& operator=(const VideoAppReportRequestPayload &) = default ;
    VideoAppReportRequestPayload& operator=(VideoAppReportRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->isLogin_ != nullptr && this->isVip_ != nullptr && this->loginNick_ != nullptr && this->originUuid_ != nullptr && this->phone_ != nullptr
        && this->pkgName_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline VideoAppReportRequestPayload& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isLogin Field Functions 
    bool hasIsLogin() const { return this->isLogin_ != nullptr;};
    void deleteIsLogin() { this->isLogin_ = nullptr;};
    inline bool isLogin() const { DARABONBA_PTR_GET_DEFAULT(isLogin_, false) };
    inline VideoAppReportRequestPayload& setIsLogin(bool isLogin) { DARABONBA_PTR_SET_VALUE(isLogin_, isLogin) };


    // isVip Field Functions 
    bool hasIsVip() const { return this->isVip_ != nullptr;};
    void deleteIsVip() { this->isVip_ = nullptr;};
    inline bool isVip() const { DARABONBA_PTR_GET_DEFAULT(isVip_, false) };
    inline VideoAppReportRequestPayload& setIsVip(bool isVip) { DARABONBA_PTR_SET_VALUE(isVip_, isVip) };


    // loginNick Field Functions 
    bool hasLoginNick() const { return this->loginNick_ != nullptr;};
    void deleteLoginNick() { this->loginNick_ = nullptr;};
    inline string loginNick() const { DARABONBA_PTR_GET_DEFAULT(loginNick_, "") };
    inline VideoAppReportRequestPayload& setLoginNick(string loginNick) { DARABONBA_PTR_SET_VALUE(loginNick_, loginNick) };


    // originUuid Field Functions 
    bool hasOriginUuid() const { return this->originUuid_ != nullptr;};
    void deleteOriginUuid() { this->originUuid_ = nullptr;};
    inline string originUuid() const { DARABONBA_PTR_GET_DEFAULT(originUuid_, "") };
    inline VideoAppReportRequestPayload& setOriginUuid(string originUuid) { DARABONBA_PTR_SET_VALUE(originUuid_, originUuid) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline VideoAppReportRequestPayload& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // pkgName Field Functions 
    bool hasPkgName() const { return this->pkgName_ != nullptr;};
    void deletePkgName() { this->pkgName_ = nullptr;};
    inline string pkgName() const { DARABONBA_PTR_GET_DEFAULT(pkgName_, "") };
    inline VideoAppReportRequestPayload& setPkgName(string pkgName) { DARABONBA_PTR_SET_VALUE(pkgName_, pkgName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline VideoAppReportRequestPayload& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isLogin_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isVip_ = nullptr;
    std::shared_ptr<string> loginNick_ = nullptr;
    std::shared_ptr<string> originUuid_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pkgName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
