// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIKEYINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIKEYINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateApiKeyInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiKeyInput& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiKeyInput& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
    };
    CreateApiKeyInput() = default ;
    CreateApiKeyInput(const CreateApiKeyInput &) = default ;
    CreateApiKeyInput(CreateApiKeyInput &&) = default ;
    CreateApiKeyInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiKeyInput() = default ;
    CreateApiKeyInput& operator=(const CreateApiKeyInput &) = default ;
    CreateApiKeyInput& operator=(CreateApiKeyInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyName_ == nullptr
        && this->expireTime_ == nullptr && this->teamID_ == nullptr; };
    // apiKeyName Field Functions 
    bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
    void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
    inline string getApiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
    inline CreateApiKeyInput& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CreateApiKeyInput& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline CreateApiKeyInput& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


  protected:
    shared_ptr<string> apiKeyName_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<string> teamID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
