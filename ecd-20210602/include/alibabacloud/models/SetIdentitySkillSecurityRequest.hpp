// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETIDENTITYSKILLSECURITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETIDENTITYSKILLSECURITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class SetIdentitySkillSecurityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetIdentitySkillSecurityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(IdentityIds, identityIds_);
      DARABONBA_PTR_TO_JSON(SkillChannel, skillChannel_);
    };
    friend void from_json(const Darabonba::Json& j, SetIdentitySkillSecurityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(IdentityIds, identityIds_);
      DARABONBA_PTR_FROM_JSON(SkillChannel, skillChannel_);
    };
    SetIdentitySkillSecurityRequest() = default ;
    SetIdentitySkillSecurityRequest(const SetIdentitySkillSecurityRequest &) = default ;
    SetIdentitySkillSecurityRequest(SetIdentitySkillSecurityRequest &&) = default ;
    SetIdentitySkillSecurityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetIdentitySkillSecurityRequest() = default ;
    SetIdentitySkillSecurityRequest& operator=(const SetIdentitySkillSecurityRequest &) = default ;
    SetIdentitySkillSecurityRequest& operator=(SetIdentitySkillSecurityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IdentityIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdentityIds& obj) { 
        DARABONBA_PTR_TO_JSON(IdentityId, identityId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, IdentityIds& obj) { 
        DARABONBA_PTR_FROM_JSON(IdentityId, identityId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      IdentityIds() = default ;
      IdentityIds(const IdentityIds &) = default ;
      IdentityIds(IdentityIds &&) = default ;
      IdentityIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdentityIds() = default ;
      IdentityIds& operator=(const IdentityIds &) = default ;
      IdentityIds& operator=(IdentityIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->identityId_ == nullptr
        && this->regionId_ == nullptr; };
      // identityId Field Functions 
      bool hasIdentityId() const { return this->identityId_ != nullptr;};
      void deleteIdentityId() { this->identityId_ = nullptr;};
      inline string getIdentityId() const { DARABONBA_PTR_GET_DEFAULT(identityId_, "") };
      inline IdentityIds& setIdentityId(string identityId) { DARABONBA_PTR_SET_VALUE(identityId_, identityId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline IdentityIds& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The resource information ID.
      // 
      // This parameter is required.
      shared_ptr<string> identityId_ {};
      // The region ID.
      // 
      // This parameter is required.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->enabled_ == nullptr
        && this->identityIds_ == nullptr && this->skillChannel_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline SetIdentitySkillSecurityRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // identityIds Field Functions 
    bool hasIdentityIds() const { return this->identityIds_ != nullptr;};
    void deleteIdentityIds() { this->identityIds_ = nullptr;};
    inline const vector<SetIdentitySkillSecurityRequest::IdentityIds> & getIdentityIds() const { DARABONBA_PTR_GET_CONST(identityIds_, vector<SetIdentitySkillSecurityRequest::IdentityIds>) };
    inline vector<SetIdentitySkillSecurityRequest::IdentityIds> getIdentityIds() { DARABONBA_PTR_GET(identityIds_, vector<SetIdentitySkillSecurityRequest::IdentityIds>) };
    inline SetIdentitySkillSecurityRequest& setIdentityIds(const vector<SetIdentitySkillSecurityRequest::IdentityIds> & identityIds) { DARABONBA_PTR_SET_VALUE(identityIds_, identityIds) };
    inline SetIdentitySkillSecurityRequest& setIdentityIds(vector<SetIdentitySkillSecurityRequest::IdentityIds> && identityIds) { DARABONBA_PTR_SET_RVALUE(identityIds_, identityIds) };


    // skillChannel Field Functions 
    bool hasSkillChannel() const { return this->skillChannel_ != nullptr;};
    void deleteSkillChannel() { this->skillChannel_ = nullptr;};
    inline string getSkillChannel() const { DARABONBA_PTR_GET_DEFAULT(skillChannel_, "") };
    inline SetIdentitySkillSecurityRequest& setSkillChannel(string skillChannel) { DARABONBA_PTR_SET_VALUE(skillChannel_, skillChannel) };


  protected:
    // Specifies whether to enable the skill installation permission. Valid values:
    // 
    // - true: enabled.
    // - false: disabled.
    // 
    // This parameter is required.
    shared_ptr<bool> enabled_ {};
    // The list of resource information.
    // 
    // This parameter is required.
    shared_ptr<vector<SetIdentitySkillSecurityRequest::IdentityIds>> identityIds_ {};
    // The skill channel. Valid values:
    // 
    // - ENTERPRISE: enterprise edition.
    // - BUSINESS: business edition.
    // 
    // This parameter is required.
    shared_ptr<string> skillChannel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
