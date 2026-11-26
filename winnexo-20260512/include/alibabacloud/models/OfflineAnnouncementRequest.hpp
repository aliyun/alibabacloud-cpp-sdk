// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEANNOUNCEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEANNOUNCEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class OfflineAnnouncementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflineAnnouncementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(announcementId, announcementId_);
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineAnnouncementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(announcementId, announcementId_);
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    OfflineAnnouncementRequest() = default ;
    OfflineAnnouncementRequest(const OfflineAnnouncementRequest &) = default ;
    OfflineAnnouncementRequest(OfflineAnnouncementRequest &&) = default ;
    OfflineAnnouncementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflineAnnouncementRequest() = default ;
    OfflineAnnouncementRequest& operator=(const OfflineAnnouncementRequest &) = default ;
    OfflineAnnouncementRequest& operator=(OfflineAnnouncementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->announcementId_ == nullptr
        && this->appToken_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->tenantId_ == nullptr; };
    // announcementId Field Functions 
    bool hasAnnouncementId() const { return this->announcementId_ != nullptr;};
    void deleteAnnouncementId() { this->announcementId_ = nullptr;};
    inline int64_t getAnnouncementId() const { DARABONBA_PTR_GET_DEFAULT(announcementId_, 0L) };
    inline OfflineAnnouncementRequest& setAnnouncementId(int64_t announcementId) { DARABONBA_PTR_SET_VALUE(announcementId_, announcementId) };


    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline OfflineAnnouncementRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline OfflineAnnouncementRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline OfflineAnnouncementRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline OfflineAnnouncementRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The business ID of the announcement.
    // 
    // This parameter is required.
    shared_ptr<int64_t> announcementId_ {};
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The tenant ID. This is a common parameter. Pass it explicitly in winnexo-cli by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
