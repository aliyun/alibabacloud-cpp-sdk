// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryCloudRecordVideoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordVideoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordVideoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
    };
    QueryCloudRecordVideoShrinkRequest() = default ;
    QueryCloudRecordVideoShrinkRequest(const QueryCloudRecordVideoShrinkRequest &) = default ;
    QueryCloudRecordVideoShrinkRequest(QueryCloudRecordVideoShrinkRequest &&) = default ;
    QueryCloudRecordVideoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordVideoShrinkRequest() = default ;
    QueryCloudRecordVideoShrinkRequest& operator=(const QueryCloudRecordVideoShrinkRequest &) = default ;
    QueryCloudRecordVideoShrinkRequest& operator=(QueryCloudRecordVideoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->conferenceId_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline QueryCloudRecordVideoShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryCloudRecordVideoShrinkRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
