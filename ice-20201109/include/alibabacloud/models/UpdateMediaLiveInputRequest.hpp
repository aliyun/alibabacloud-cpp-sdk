// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVEINPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVEINPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMediaLiveInputRequestInputSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveInputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveInputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputId, inputId_);
      DARABONBA_PTR_TO_JSON(InputSettings, inputSettings_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveInputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputId, inputId_);
      DARABONBA_PTR_FROM_JSON(InputSettings, inputSettings_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
    };
    UpdateMediaLiveInputRequest() = default ;
    UpdateMediaLiveInputRequest(const UpdateMediaLiveInputRequest &) = default ;
    UpdateMediaLiveInputRequest(UpdateMediaLiveInputRequest &&) = default ;
    UpdateMediaLiveInputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveInputRequest() = default ;
    UpdateMediaLiveInputRequest& operator=(const UpdateMediaLiveInputRequest &) = default ;
    UpdateMediaLiveInputRequest& operator=(UpdateMediaLiveInputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputId_ == nullptr
        && return this->inputSettings_ == nullptr && return this->name_ == nullptr && return this->securityGroupIds_ == nullptr; };
    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string inputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline UpdateMediaLiveInputRequest& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


    // inputSettings Field Functions 
    bool hasInputSettings() const { return this->inputSettings_ != nullptr;};
    void deleteInputSettings() { this->inputSettings_ = nullptr;};
    inline const vector<UpdateMediaLiveInputRequestInputSettings> & inputSettings() const { DARABONBA_PTR_GET_CONST(inputSettings_, vector<UpdateMediaLiveInputRequestInputSettings>) };
    inline vector<UpdateMediaLiveInputRequestInputSettings> inputSettings() { DARABONBA_PTR_GET(inputSettings_, vector<UpdateMediaLiveInputRequestInputSettings>) };
    inline UpdateMediaLiveInputRequest& setInputSettings(const vector<UpdateMediaLiveInputRequestInputSettings> & inputSettings) { DARABONBA_PTR_SET_VALUE(inputSettings_, inputSettings) };
    inline UpdateMediaLiveInputRequest& setInputSettings(vector<UpdateMediaLiveInputRequestInputSettings> && inputSettings) { DARABONBA_PTR_SET_RVALUE(inputSettings_, inputSettings) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMediaLiveInputRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline UpdateMediaLiveInputRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline UpdateMediaLiveInputRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


  protected:
    // The ID of the input.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputId_ = nullptr;
    // The input settings. An input can have up to two sources: primary and backup sources.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateMediaLiveInputRequestInputSettings>> inputSettings_ = nullptr;
    // The name of the input. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The IDs of the security groups to be associated with the input. This parameter is required for PUSH inputs.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
