// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLiveRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateLiveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(Introduction, introduction_);
      DARABONBA_PTR_TO_JSON(LiveId, liveId_);
      DARABONBA_PTR_TO_JSON(PreEndTime, preEndTime_);
      DARABONBA_PTR_TO_JSON(PreStartTime, preStartTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
      DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
      DARABONBA_PTR_FROM_JSON(PreEndTime, preEndTime_);
      DARABONBA_PTR_FROM_JSON(PreStartTime, preStartTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateLiveRequest() = default ;
    UpdateLiveRequest(const UpdateLiveRequest &) = default ;
    UpdateLiveRequest(UpdateLiveRequest &&) = default ;
    UpdateLiveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveRequest() = default ;
    UpdateLiveRequest& operator=(const UpdateLiveRequest &) = default ;
    UpdateLiveRequest& operator=(UpdateLiveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverUrl_ == nullptr
        && return this->introduction_ == nullptr && return this->liveId_ == nullptr && return this->preEndTime_ == nullptr && return this->preStartTime_ == nullptr && return this->tenantContext_ == nullptr
        && return this->title_ == nullptr; };
    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline UpdateLiveRequest& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // introduction Field Functions 
    bool hasIntroduction() const { return this->introduction_ != nullptr;};
    void deleteIntroduction() { this->introduction_ = nullptr;};
    inline string introduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
    inline UpdateLiveRequest& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string liveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline UpdateLiveRequest& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // preEndTime Field Functions 
    bool hasPreEndTime() const { return this->preEndTime_ != nullptr;};
    void deletePreEndTime() { this->preEndTime_ = nullptr;};
    inline int64_t preEndTime() const { DARABONBA_PTR_GET_DEFAULT(preEndTime_, 0L) };
    inline UpdateLiveRequest& setPreEndTime(int64_t preEndTime) { DARABONBA_PTR_SET_VALUE(preEndTime_, preEndTime) };


    // preStartTime Field Functions 
    bool hasPreStartTime() const { return this->preStartTime_ != nullptr;};
    void deletePreStartTime() { this->preStartTime_ = nullptr;};
    inline int64_t preStartTime() const { DARABONBA_PTR_GET_DEFAULT(preStartTime_, 0L) };
    inline UpdateLiveRequest& setPreStartTime(int64_t preStartTime) { DARABONBA_PTR_SET_VALUE(preStartTime_, preStartTime) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateLiveRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateLiveRequestTenantContext) };
    inline UpdateLiveRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateLiveRequestTenantContext) };
    inline UpdateLiveRequest& setTenantContext(const UpdateLiveRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateLiveRequest& setTenantContext(UpdateLiveRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateLiveRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> coverUrl_ = nullptr;
    std::shared_ptr<string> introduction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> liveId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> preEndTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> preStartTime_ = nullptr;
    std::shared_ptr<UpdateLiveRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
