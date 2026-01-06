// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDRECORDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDRECORDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class StartCloudRecordShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudRecordShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(SmallWindowPosition, smallWindowPosition_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudRecordShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(SmallWindowPosition, smallWindowPosition_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
    };
    StartCloudRecordShrinkRequest() = default ;
    StartCloudRecordShrinkRequest(const StartCloudRecordShrinkRequest &) = default ;
    StartCloudRecordShrinkRequest(StartCloudRecordShrinkRequest &&) = default ;
    StartCloudRecordShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudRecordShrinkRequest() = default ;
    StartCloudRecordShrinkRequest& operator=(const StartCloudRecordShrinkRequest &) = default ;
    StartCloudRecordShrinkRequest& operator=(StartCloudRecordShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && this->smallWindowPosition_ == nullptr && this->tenantContextShrink_ == nullptr && this->conferenceId_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline StartCloudRecordShrinkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // smallWindowPosition Field Functions 
    bool hasSmallWindowPosition() const { return this->smallWindowPosition_ != nullptr;};
    void deleteSmallWindowPosition() { this->smallWindowPosition_ = nullptr;};
    inline string getSmallWindowPosition() const { DARABONBA_PTR_GET_DEFAULT(smallWindowPosition_, "") };
    inline StartCloudRecordShrinkRequest& setSmallWindowPosition(string smallWindowPosition) { DARABONBA_PTR_SET_VALUE(smallWindowPosition_, smallWindowPosition) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline StartCloudRecordShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline StartCloudRecordShrinkRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


  protected:
    shared_ptr<string> mode_ {};
    shared_ptr<string> smallWindowPosition_ {};
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
