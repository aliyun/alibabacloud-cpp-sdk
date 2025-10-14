// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEOPLAYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEOPLAYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCloudRecordVideoPlayInfoRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryCloudRecordVideoPlayInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordVideoPlayInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordVideoPlayInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    QueryCloudRecordVideoPlayInfoRequest() = default ;
    QueryCloudRecordVideoPlayInfoRequest(const QueryCloudRecordVideoPlayInfoRequest &) = default ;
    QueryCloudRecordVideoPlayInfoRequest(QueryCloudRecordVideoPlayInfoRequest &&) = default ;
    QueryCloudRecordVideoPlayInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordVideoPlayInfoRequest() = default ;
    QueryCloudRecordVideoPlayInfoRequest& operator=(const QueryCloudRecordVideoPlayInfoRequest &) = default ;
    QueryCloudRecordVideoPlayInfoRequest& operator=(QueryCloudRecordVideoPlayInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conferenceId_ == nullptr
        && return this->mediaId_ == nullptr && return this->regionId_ == nullptr && return this->tenantContext_ == nullptr; };
    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryCloudRecordVideoPlayInfoRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline QueryCloudRecordVideoPlayInfoRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryCloudRecordVideoPlayInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryCloudRecordVideoPlayInfoRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryCloudRecordVideoPlayInfoRequestTenantContext) };
    inline QueryCloudRecordVideoPlayInfoRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryCloudRecordVideoPlayInfoRequestTenantContext) };
    inline QueryCloudRecordVideoPlayInfoRequest& setTenantContext(const QueryCloudRecordVideoPlayInfoRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryCloudRecordVideoPlayInfoRequest& setTenantContext(QueryCloudRecordVideoPlayInfoRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mediaId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<QueryCloudRecordVideoPlayInfoRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
