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
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineAnnouncementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(announcementId, announcementId_);
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
        && this->tenantId_ == nullptr; };
    // announcementId Field Functions 
    bool hasAnnouncementId() const { return this->announcementId_ != nullptr;};
    void deleteAnnouncementId() { this->announcementId_ = nullptr;};
    inline int64_t getAnnouncementId() const { DARABONBA_PTR_GET_DEFAULT(announcementId_, 0L) };
    inline OfflineAnnouncementRequest& setAnnouncementId(int64_t announcementId) { DARABONBA_PTR_SET_VALUE(announcementId_, announcementId) };


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
    // The tenant ID. This is a common parameter. In winnexo-cli, pass this explicitly with --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
