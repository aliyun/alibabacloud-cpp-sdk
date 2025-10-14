// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLiveRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateLiveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(Introduction, introduction_);
      DARABONBA_PTR_TO_JSON(PreEndTime, preEndTime_);
      DARABONBA_PTR_TO_JSON(PreStartTime, preStartTime_);
      DARABONBA_PTR_TO_JSON(PublicType, publicType_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
      DARABONBA_PTR_FROM_JSON(PreEndTime, preEndTime_);
      DARABONBA_PTR_FROM_JSON(PreStartTime, preStartTime_);
      DARABONBA_PTR_FROM_JSON(PublicType, publicType_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateLiveRequest() = default ;
    CreateLiveRequest(const CreateLiveRequest &) = default ;
    CreateLiveRequest(CreateLiveRequest &&) = default ;
    CreateLiveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveRequest() = default ;
    CreateLiveRequest& operator=(const CreateLiveRequest &) = default ;
    CreateLiveRequest& operator=(CreateLiveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverUrl_ == nullptr
        && return this->introduction_ == nullptr && return this->preEndTime_ == nullptr && return this->preStartTime_ == nullptr && return this->publicType_ == nullptr && return this->tenantContext_ == nullptr
        && return this->title_ == nullptr; };
    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline CreateLiveRequest& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // introduction Field Functions 
    bool hasIntroduction() const { return this->introduction_ != nullptr;};
    void deleteIntroduction() { this->introduction_ = nullptr;};
    inline string introduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
    inline CreateLiveRequest& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


    // preEndTime Field Functions 
    bool hasPreEndTime() const { return this->preEndTime_ != nullptr;};
    void deletePreEndTime() { this->preEndTime_ = nullptr;};
    inline int64_t preEndTime() const { DARABONBA_PTR_GET_DEFAULT(preEndTime_, 0L) };
    inline CreateLiveRequest& setPreEndTime(int64_t preEndTime) { DARABONBA_PTR_SET_VALUE(preEndTime_, preEndTime) };


    // preStartTime Field Functions 
    bool hasPreStartTime() const { return this->preStartTime_ != nullptr;};
    void deletePreStartTime() { this->preStartTime_ = nullptr;};
    inline int64_t preStartTime() const { DARABONBA_PTR_GET_DEFAULT(preStartTime_, 0L) };
    inline CreateLiveRequest& setPreStartTime(int64_t preStartTime) { DARABONBA_PTR_SET_VALUE(preStartTime_, preStartTime) };


    // publicType Field Functions 
    bool hasPublicType() const { return this->publicType_ != nullptr;};
    void deletePublicType() { this->publicType_ = nullptr;};
    inline int64_t publicType() const { DARABONBA_PTR_GET_DEFAULT(publicType_, 0L) };
    inline CreateLiveRequest& setPublicType(int64_t publicType) { DARABONBA_PTR_SET_VALUE(publicType_, publicType) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateLiveRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateLiveRequestTenantContext) };
    inline CreateLiveRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateLiveRequestTenantContext) };
    inline CreateLiveRequest& setTenantContext(const CreateLiveRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateLiveRequest& setTenantContext(CreateLiveRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateLiveRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> coverUrl_ = nullptr;
    std::shared_ptr<string> introduction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> preEndTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> preStartTime_ = nullptr;
    std::shared_ptr<int64_t> publicType_ = nullptr;
    std::shared_ptr<CreateLiveRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
