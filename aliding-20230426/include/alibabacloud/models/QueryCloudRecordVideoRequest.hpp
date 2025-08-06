// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCloudRecordVideoRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryCloudRecordVideoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordVideoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordVideoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
    };
    QueryCloudRecordVideoRequest() = default ;
    QueryCloudRecordVideoRequest(const QueryCloudRecordVideoRequest &) = default ;
    QueryCloudRecordVideoRequest(QueryCloudRecordVideoRequest &&) = default ;
    QueryCloudRecordVideoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordVideoRequest() = default ;
    QueryCloudRecordVideoRequest& operator=(const QueryCloudRecordVideoRequest &) = default ;
    QueryCloudRecordVideoRequest& operator=(QueryCloudRecordVideoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContext_ != nullptr
        && this->conferenceId_ != nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryCloudRecordVideoRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryCloudRecordVideoRequestTenantContext) };
    inline QueryCloudRecordVideoRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryCloudRecordVideoRequestTenantContext) };
    inline QueryCloudRecordVideoRequest& setTenantContext(const QueryCloudRecordVideoRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryCloudRecordVideoRequest& setTenantContext(QueryCloudRecordVideoRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryCloudRecordVideoRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


  protected:
    std::shared_ptr<QueryCloudRecordVideoRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
