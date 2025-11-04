// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVEINPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVEINPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMediaLiveInputRequestInputSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveInputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveInputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputSettings, inputSettings_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveInputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputSettings, inputSettings_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateMediaLiveInputRequest() = default ;
    CreateMediaLiveInputRequest(const CreateMediaLiveInputRequest &) = default ;
    CreateMediaLiveInputRequest(CreateMediaLiveInputRequest &&) = default ;
    CreateMediaLiveInputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveInputRequest() = default ;
    CreateMediaLiveInputRequest& operator=(const CreateMediaLiveInputRequest &) = default ;
    CreateMediaLiveInputRequest& operator=(CreateMediaLiveInputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputSettings_ == nullptr
        && return this->name_ == nullptr && return this->securityGroupIds_ == nullptr && return this->type_ == nullptr; };
    // inputSettings Field Functions 
    bool hasInputSettings() const { return this->inputSettings_ != nullptr;};
    void deleteInputSettings() { this->inputSettings_ = nullptr;};
    inline const vector<CreateMediaLiveInputRequestInputSettings> & inputSettings() const { DARABONBA_PTR_GET_CONST(inputSettings_, vector<CreateMediaLiveInputRequestInputSettings>) };
    inline vector<CreateMediaLiveInputRequestInputSettings> inputSettings() { DARABONBA_PTR_GET(inputSettings_, vector<CreateMediaLiveInputRequestInputSettings>) };
    inline CreateMediaLiveInputRequest& setInputSettings(const vector<CreateMediaLiveInputRequestInputSettings> & inputSettings) { DARABONBA_PTR_SET_VALUE(inputSettings_, inputSettings) };
    inline CreateMediaLiveInputRequest& setInputSettings(vector<CreateMediaLiveInputRequestInputSettings> && inputSettings) { DARABONBA_PTR_SET_RVALUE(inputSettings_, inputSettings) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMediaLiveInputRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CreateMediaLiveInputRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateMediaLiveInputRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMediaLiveInputRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The input settings. An input can have up to two sources: primary and backup sources.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateMediaLiveInputRequestInputSettings>> inputSettings_ = nullptr;
    // The name of the input. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The IDs of the security groups to be associated with the input. This parameter is required for PUSH inputs.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // The input type. Valid values: RTMP_PUSH, RTMP_PULL, SRT_PUSH, SRT_PULL, and MEDIA_CONNECT.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
