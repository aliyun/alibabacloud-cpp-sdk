// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVEINPUTSECURITYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVEINPUTSECURITYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveInputSecurityGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveInputSecurityGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(WhitelistRules, whitelistRules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveInputSecurityGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(WhitelistRules, whitelistRules_);
    };
    UpdateMediaLiveInputSecurityGroupRequest() = default ;
    UpdateMediaLiveInputSecurityGroupRequest(const UpdateMediaLiveInputSecurityGroupRequest &) = default ;
    UpdateMediaLiveInputSecurityGroupRequest(UpdateMediaLiveInputSecurityGroupRequest &&) = default ;
    UpdateMediaLiveInputSecurityGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveInputSecurityGroupRequest() = default ;
    UpdateMediaLiveInputSecurityGroupRequest& operator=(const UpdateMediaLiveInputSecurityGroupRequest &) = default ;
    UpdateMediaLiveInputSecurityGroupRequest& operator=(UpdateMediaLiveInputSecurityGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->securityGroupId_ == nullptr && this->whitelistRules_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMediaLiveInputSecurityGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline UpdateMediaLiveInputSecurityGroupRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // whitelistRules Field Functions 
    bool hasWhitelistRules() const { return this->whitelistRules_ != nullptr;};
    void deleteWhitelistRules() { this->whitelistRules_ = nullptr;};
    inline const vector<string> & getWhitelistRules() const { DARABONBA_PTR_GET_CONST(whitelistRules_, vector<string>) };
    inline vector<string> getWhitelistRules() { DARABONBA_PTR_GET(whitelistRules_, vector<string>) };
    inline UpdateMediaLiveInputSecurityGroupRequest& setWhitelistRules(const vector<string> & whitelistRules) { DARABONBA_PTR_SET_VALUE(whitelistRules_, whitelistRules) };
    inline UpdateMediaLiveInputSecurityGroupRequest& setWhitelistRules(vector<string> && whitelistRules) { DARABONBA_PTR_SET_RVALUE(whitelistRules_, whitelistRules) };


  protected:
    // The name of the security group. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The ID of the security group.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    // The security group rules.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> whitelistRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
