// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETIDENTITYSKILLAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETIDENTITYSKILLAUTHREQUEST_HPP_
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
  class SetIdentitySkillAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetIdentitySkillAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_TO_JSON(Identities, identities_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(SkillChannel, skillChannel_);
      DARABONBA_PTR_TO_JSON(SkillIds, skillIds_);
    };
    friend void from_json(const Darabonba::Json& j, SetIdentitySkillAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_FROM_JSON(Identities, identities_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(SkillChannel, skillChannel_);
      DARABONBA_PTR_FROM_JSON(SkillIds, skillIds_);
    };
    SetIdentitySkillAuthRequest() = default ;
    SetIdentitySkillAuthRequest(const SetIdentitySkillAuthRequest &) = default ;
    SetIdentitySkillAuthRequest(SetIdentitySkillAuthRequest &&) = default ;
    SetIdentitySkillAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetIdentitySkillAuthRequest() = default ;
    SetIdentitySkillAuthRequest& operator=(const SetIdentitySkillAuthRequest &) = default ;
    SetIdentitySkillAuthRequest& operator=(SetIdentitySkillAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Identities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Identities& obj) { 
        DARABONBA_PTR_TO_JSON(IdentityId, identityId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Identities& obj) { 
        DARABONBA_PTR_FROM_JSON(IdentityId, identityId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      Identities() = default ;
      Identities(const Identities &) = default ;
      Identities(Identities &&) = default ;
      Identities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Identities() = default ;
      Identities& operator=(const Identities &) = default ;
      Identities& operator=(Identities &&) = default ;
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
      inline Identities& setIdentityId(string identityId) { DARABONBA_PTR_SET_VALUE(identityId_, identityId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Identities& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The ID of the authorized object.
      // 
      // This parameter is required.
      shared_ptr<string> identityId_ {};
      // The region ID.
      // 
      // This parameter is required.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->autoInstall_ == nullptr
        && this->identities_ == nullptr && this->operationType_ == nullptr && this->skillChannel_ == nullptr && this->skillIds_ == nullptr; };
    // autoInstall Field Functions 
    bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
    void deleteAutoInstall() { this->autoInstall_ = nullptr;};
    inline bool getAutoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, false) };
    inline SetIdentitySkillAuthRequest& setAutoInstall(bool autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


    // identities Field Functions 
    bool hasIdentities() const { return this->identities_ != nullptr;};
    void deleteIdentities() { this->identities_ = nullptr;};
    inline const vector<SetIdentitySkillAuthRequest::Identities> & getIdentities() const { DARABONBA_PTR_GET_CONST(identities_, vector<SetIdentitySkillAuthRequest::Identities>) };
    inline vector<SetIdentitySkillAuthRequest::Identities> getIdentities() { DARABONBA_PTR_GET(identities_, vector<SetIdentitySkillAuthRequest::Identities>) };
    inline SetIdentitySkillAuthRequest& setIdentities(const vector<SetIdentitySkillAuthRequest::Identities> & identities) { DARABONBA_PTR_SET_VALUE(identities_, identities) };
    inline SetIdentitySkillAuthRequest& setIdentities(vector<SetIdentitySkillAuthRequest::Identities> && identities) { DARABONBA_PTR_SET_RVALUE(identities_, identities) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline SetIdentitySkillAuthRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // skillChannel Field Functions 
    bool hasSkillChannel() const { return this->skillChannel_ != nullptr;};
    void deleteSkillChannel() { this->skillChannel_ = nullptr;};
    inline string getSkillChannel() const { DARABONBA_PTR_GET_DEFAULT(skillChannel_, "") };
    inline SetIdentitySkillAuthRequest& setSkillChannel(string skillChannel) { DARABONBA_PTR_SET_VALUE(skillChannel_, skillChannel) };


    // skillIds Field Functions 
    bool hasSkillIds() const { return this->skillIds_ != nullptr;};
    void deleteSkillIds() { this->skillIds_ = nullptr;};
    inline const vector<string> & getSkillIds() const { DARABONBA_PTR_GET_CONST(skillIds_, vector<string>) };
    inline vector<string> getSkillIds() { DARABONBA_PTR_GET(skillIds_, vector<string>) };
    inline SetIdentitySkillAuthRequest& setSkillIds(const vector<string> & skillIds) { DARABONBA_PTR_SET_VALUE(skillIds_, skillIds) };
    inline SetIdentitySkillAuthRequest& setSkillIds(vector<string> && skillIds) { DARABONBA_PTR_SET_RVALUE(skillIds_, skillIds) };


  protected:
    // Specifies whether to automatically install. Valid values:
    // 
    // - true: yes
    // - false: no
    // 
    // This parameter is required.
    shared_ptr<bool> autoInstall_ {};
    // The list of authorized objects.
    // 
    // This parameter is required.
    shared_ptr<vector<SetIdentitySkillAuthRequest::Identities>> identities_ {};
    // The operation type.
    // 
    // This parameter is required.
    shared_ptr<string> operationType_ {};
    // The skill channel. Valid values:
    // 
    // - ENTERPRISE: enterprise edition
    // - BUSINESS: business edition
    // 
    // This parameter is required.
    shared_ptr<string> skillChannel_ {};
    // The list of skill IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> skillIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
