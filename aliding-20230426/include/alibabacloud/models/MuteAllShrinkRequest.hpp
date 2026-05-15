// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MUTEALLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MUTEALLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class MuteAllShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MuteAllShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceMute, forceMute_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(muteAction, muteAction_);
    };
    friend void from_json(const Darabonba::Json& j, MuteAllShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceMute, forceMute_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(muteAction, muteAction_);
    };
    MuteAllShrinkRequest() = default ;
    MuteAllShrinkRequest(const MuteAllShrinkRequest &) = default ;
    MuteAllShrinkRequest(MuteAllShrinkRequest &&) = default ;
    MuteAllShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MuteAllShrinkRequest() = default ;
    MuteAllShrinkRequest& operator=(const MuteAllShrinkRequest &) = default ;
    MuteAllShrinkRequest& operator=(MuteAllShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forceMute_ == nullptr
        && this->tenantContextShrink_ == nullptr && this->conferenceId_ == nullptr && this->muteAction_ == nullptr; };
    // forceMute Field Functions 
    bool hasForceMute() const { return this->forceMute_ != nullptr;};
    void deleteForceMute() { this->forceMute_ = nullptr;};
    inline bool getForceMute() const { DARABONBA_PTR_GET_DEFAULT(forceMute_, false) };
    inline MuteAllShrinkRequest& setForceMute(bool forceMute) { DARABONBA_PTR_SET_VALUE(forceMute_, forceMute) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline MuteAllShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline MuteAllShrinkRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // muteAction Field Functions 
    bool hasMuteAction() const { return this->muteAction_ != nullptr;};
    void deleteMuteAction() { this->muteAction_ = nullptr;};
    inline string getMuteAction() const { DARABONBA_PTR_GET_DEFAULT(muteAction_, "") };
    inline MuteAllShrinkRequest& setMuteAction(string muteAction) { DARABONBA_PTR_SET_VALUE(muteAction_, muteAction) };


  protected:
    shared_ptr<bool> forceMute_ {};
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
    // This parameter is required.
    shared_ptr<string> muteAction_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
