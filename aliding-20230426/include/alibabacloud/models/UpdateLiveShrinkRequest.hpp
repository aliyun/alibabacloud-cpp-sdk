// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateLiveShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(Introduction, introduction_);
      DARABONBA_PTR_TO_JSON(LiveId, liveId_);
      DARABONBA_PTR_TO_JSON(PreEndTime, preEndTime_);
      DARABONBA_PTR_TO_JSON(PreStartTime, preStartTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
      DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
      DARABONBA_PTR_FROM_JSON(PreEndTime, preEndTime_);
      DARABONBA_PTR_FROM_JSON(PreStartTime, preStartTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateLiveShrinkRequest() = default ;
    UpdateLiveShrinkRequest(const UpdateLiveShrinkRequest &) = default ;
    UpdateLiveShrinkRequest(UpdateLiveShrinkRequest &&) = default ;
    UpdateLiveShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveShrinkRequest() = default ;
    UpdateLiveShrinkRequest& operator=(const UpdateLiveShrinkRequest &) = default ;
    UpdateLiveShrinkRequest& operator=(UpdateLiveShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coverUrl_ != nullptr
        && this->introduction_ != nullptr && this->liveId_ != nullptr && this->preEndTime_ != nullptr && this->preStartTime_ != nullptr && this->tenantContextShrink_ != nullptr
        && this->title_ != nullptr; };
    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline UpdateLiveShrinkRequest& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // introduction Field Functions 
    bool hasIntroduction() const { return this->introduction_ != nullptr;};
    void deleteIntroduction() { this->introduction_ = nullptr;};
    inline string introduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
    inline UpdateLiveShrinkRequest& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string liveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline UpdateLiveShrinkRequest& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // preEndTime Field Functions 
    bool hasPreEndTime() const { return this->preEndTime_ != nullptr;};
    void deletePreEndTime() { this->preEndTime_ = nullptr;};
    inline int64_t preEndTime() const { DARABONBA_PTR_GET_DEFAULT(preEndTime_, 0L) };
    inline UpdateLiveShrinkRequest& setPreEndTime(int64_t preEndTime) { DARABONBA_PTR_SET_VALUE(preEndTime_, preEndTime) };


    // preStartTime Field Functions 
    bool hasPreStartTime() const { return this->preStartTime_ != nullptr;};
    void deletePreStartTime() { this->preStartTime_ = nullptr;};
    inline int64_t preStartTime() const { DARABONBA_PTR_GET_DEFAULT(preStartTime_, 0L) };
    inline UpdateLiveShrinkRequest& setPreStartTime(int64_t preStartTime) { DARABONBA_PTR_SET_VALUE(preStartTime_, preStartTime) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline UpdateLiveShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateLiveShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> coverUrl_ = nullptr;
    std::shared_ptr<string> introduction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> liveId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> preEndTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> preStartTime_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
