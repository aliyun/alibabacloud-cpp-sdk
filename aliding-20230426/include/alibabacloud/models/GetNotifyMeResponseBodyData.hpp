// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNOTIFYMERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETNOTIFYMERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNotifyMeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNotifyMeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(CreateTimeGMT, createTimeGMT_);
      DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
      DARABONBA_PTR_TO_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_TO_JSON(InstStatus, instStatus_);
      DARABONBA_PTR_TO_JSON(MobileUrl, mobileUrl_);
      DARABONBA_PTR_TO_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
    };
    friend void from_json(const Darabonba::Json& j, GetNotifyMeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(CreateTimeGMT, createTimeGMT_);
      DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
      DARABONBA_PTR_FROM_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstStatus, instStatus_);
      DARABONBA_PTR_FROM_JSON(MobileUrl, mobileUrl_);
      DARABONBA_PTR_FROM_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
    };
    GetNotifyMeResponseBodyData() = default ;
    GetNotifyMeResponseBodyData(const GetNotifyMeResponseBodyData &) = default ;
    GetNotifyMeResponseBodyData(GetNotifyMeResponseBodyData &&) = default ;
    GetNotifyMeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNotifyMeResponseBodyData() = default ;
    GetNotifyMeResponseBodyData& operator=(const GetNotifyMeResponseBodyData &) = default ;
    GetNotifyMeResponseBodyData& operator=(GetNotifyMeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityId_ == nullptr
        && return this->appType_ == nullptr && return this->corpId_ == nullptr && return this->createTimeGMT_ == nullptr && return this->creatorUserId_ == nullptr && return this->formInstanceId_ == nullptr
        && return this->instStatus_ == nullptr && return this->mobileUrl_ == nullptr && return this->modifiedTimeGMT_ == nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline GetNotifyMeResponseBodyData& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetNotifyMeResponseBodyData& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline GetNotifyMeResponseBodyData& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // createTimeGMT Field Functions 
    bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
    void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
    inline string createTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
    inline GetNotifyMeResponseBodyData& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


    // creatorUserId Field Functions 
    bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
    void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
    inline string creatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, "") };
    inline GetNotifyMeResponseBodyData& setCreatorUserId(string creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


    // formInstanceId Field Functions 
    bool hasFormInstanceId() const { return this->formInstanceId_ != nullptr;};
    void deleteFormInstanceId() { this->formInstanceId_ = nullptr;};
    inline string formInstanceId() const { DARABONBA_PTR_GET_DEFAULT(formInstanceId_, "") };
    inline GetNotifyMeResponseBodyData& setFormInstanceId(string formInstanceId) { DARABONBA_PTR_SET_VALUE(formInstanceId_, formInstanceId) };


    // instStatus Field Functions 
    bool hasInstStatus() const { return this->instStatus_ != nullptr;};
    void deleteInstStatus() { this->instStatus_ = nullptr;};
    inline string instStatus() const { DARABONBA_PTR_GET_DEFAULT(instStatus_, "") };
    inline GetNotifyMeResponseBodyData& setInstStatus(string instStatus) { DARABONBA_PTR_SET_VALUE(instStatus_, instStatus) };


    // mobileUrl Field Functions 
    bool hasMobileUrl() const { return this->mobileUrl_ != nullptr;};
    void deleteMobileUrl() { this->mobileUrl_ = nullptr;};
    inline string mobileUrl() const { DARABONBA_PTR_GET_DEFAULT(mobileUrl_, "") };
    inline GetNotifyMeResponseBodyData& setMobileUrl(string mobileUrl) { DARABONBA_PTR_SET_VALUE(mobileUrl_, mobileUrl) };


    // modifiedTimeGMT Field Functions 
    bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
    void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
    inline string modifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
    inline GetNotifyMeResponseBodyData& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


  protected:
    std::shared_ptr<string> activityId_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> createTimeGMT_ = nullptr;
    std::shared_ptr<string> creatorUserId_ = nullptr;
    std::shared_ptr<string> formInstanceId_ = nullptr;
    std::shared_ptr<string> instStatus_ = nullptr;
    std::shared_ptr<string> mobileUrl_ = nullptr;
    std::shared_ptr<string> modifiedTimeGMT_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
