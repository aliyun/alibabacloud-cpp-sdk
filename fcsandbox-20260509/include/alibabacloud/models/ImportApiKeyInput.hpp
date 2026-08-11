// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTAPIKEYINPUT_HPP_
#define ALIBABACLOUD_MODELS_IMPORTAPIKEYINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class ImportApiKeyInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportApiKeyInput& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_TO_JSON(apiKeyValue, apiKeyValue_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
    };
    friend void from_json(const Darabonba::Json& j, ImportApiKeyInput& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_FROM_JSON(apiKeyValue, apiKeyValue_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
    };
    ImportApiKeyInput() = default ;
    ImportApiKeyInput(const ImportApiKeyInput &) = default ;
    ImportApiKeyInput(ImportApiKeyInput &&) = default ;
    ImportApiKeyInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportApiKeyInput() = default ;
    ImportApiKeyInput& operator=(const ImportApiKeyInput &) = default ;
    ImportApiKeyInput& operator=(ImportApiKeyInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyName_ == nullptr
        && this->apiKeyValue_ == nullptr && this->expireTime_ == nullptr && this->teamID_ == nullptr; };
    // apiKeyName Field Functions 
    bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
    void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
    inline string getApiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
    inline ImportApiKeyInput& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


    // apiKeyValue Field Functions 
    bool hasApiKeyValue() const { return this->apiKeyValue_ != nullptr;};
    void deleteApiKeyValue() { this->apiKeyValue_ = nullptr;};
    inline string getApiKeyValue() const { DARABONBA_PTR_GET_DEFAULT(apiKeyValue_, "") };
    inline ImportApiKeyInput& setApiKeyValue(string apiKeyValue) { DARABONBA_PTR_SET_VALUE(apiKeyValue_, apiKeyValue) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ImportApiKeyInput& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline ImportApiKeyInput& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


  protected:
    shared_ptr<string> apiKeyName_ {};
    shared_ptr<string> apiKeyValue_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<string> teamID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
