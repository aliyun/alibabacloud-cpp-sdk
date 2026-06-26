// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYRESOURCEACCESSPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYRESOURCEACCESSPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ApplyResourceAccessPermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyResourceAccessPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyContents, applyContentsShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyResourceAccessPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyContents, applyContentsShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    ApplyResourceAccessPermissionShrinkRequest() = default ;
    ApplyResourceAccessPermissionShrinkRequest(const ApplyResourceAccessPermissionShrinkRequest &) = default ;
    ApplyResourceAccessPermissionShrinkRequest(ApplyResourceAccessPermissionShrinkRequest &&) = default ;
    ApplyResourceAccessPermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyResourceAccessPermissionShrinkRequest() = default ;
    ApplyResourceAccessPermissionShrinkRequest& operator=(const ApplyResourceAccessPermissionShrinkRequest &) = default ;
    ApplyResourceAccessPermissionShrinkRequest& operator=(ApplyResourceAccessPermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyContentsShrink_ == nullptr
        && this->clientToken_ == nullptr && this->reason_ == nullptr; };
    // applyContentsShrink Field Functions 
    bool hasApplyContentsShrink() const { return this->applyContentsShrink_ != nullptr;};
    void deleteApplyContentsShrink() { this->applyContentsShrink_ = nullptr;};
    inline string getApplyContentsShrink() const { DARABONBA_PTR_GET_DEFAULT(applyContentsShrink_, "") };
    inline ApplyResourceAccessPermissionShrinkRequest& setApplyContentsShrink(string applyContentsShrink) { DARABONBA_PTR_SET_VALUE(applyContentsShrink_, applyContentsShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ApplyResourceAccessPermissionShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ApplyResourceAccessPermissionShrinkRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The list of resource permission application contents.
    // 
    // This parameter is required.
    shared_ptr<string> applyContentsShrink_ {};
    // The idempotency parameter. Used to prevent duplicate operations caused by multiple calls.
    shared_ptr<string> clientToken_ {};
    // The reason for the application.
    // 
    // This parameter is required.
    shared_ptr<string> reason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
