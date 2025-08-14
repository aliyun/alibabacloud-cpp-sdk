// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVEINPUTSECURITYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVEINPUTSECURITYGROUPREQUEST_HPP_
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
  class CreateMediaLiveInputSecurityGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveInputSecurityGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WhitelistRules, whitelistRules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveInputSecurityGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WhitelistRules, whitelistRules_);
    };
    CreateMediaLiveInputSecurityGroupRequest() = default ;
    CreateMediaLiveInputSecurityGroupRequest(const CreateMediaLiveInputSecurityGroupRequest &) = default ;
    CreateMediaLiveInputSecurityGroupRequest(CreateMediaLiveInputSecurityGroupRequest &&) = default ;
    CreateMediaLiveInputSecurityGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveInputSecurityGroupRequest() = default ;
    CreateMediaLiveInputSecurityGroupRequest& operator=(const CreateMediaLiveInputSecurityGroupRequest &) = default ;
    CreateMediaLiveInputSecurityGroupRequest& operator=(CreateMediaLiveInputSecurityGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->whitelistRules_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMediaLiveInputSecurityGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // whitelistRules Field Functions 
    bool hasWhitelistRules() const { return this->whitelistRules_ != nullptr;};
    void deleteWhitelistRules() { this->whitelistRules_ = nullptr;};
    inline const vector<string> & whitelistRules() const { DARABONBA_PTR_GET_CONST(whitelistRules_, vector<string>) };
    inline vector<string> whitelistRules() { DARABONBA_PTR_GET(whitelistRules_, vector<string>) };
    inline CreateMediaLiveInputSecurityGroupRequest& setWhitelistRules(const vector<string> & whitelistRules) { DARABONBA_PTR_SET_VALUE(whitelistRules_, whitelistRules) };
    inline CreateMediaLiveInputSecurityGroupRequest& setWhitelistRules(vector<string> && whitelistRules) { DARABONBA_PTR_SET_RVALUE(whitelistRules_, whitelistRules) };


  protected:
    // The name of the security group. Letters, digits, hyphens (-), and underscores (_) are supported. The maximum length is 64 characters.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The security group rules.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> whitelistRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
