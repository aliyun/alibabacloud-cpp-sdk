// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEORENDERJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEORENDERJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitVideoRenderJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoRenderJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoRenderJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitVideoRenderJobRequest() = default ;
    SubmitVideoRenderJobRequest(const SubmitVideoRenderJobRequest &) = default ;
    SubmitVideoRenderJobRequest(SubmitVideoRenderJobRequest &&) = default ;
    SubmitVideoRenderJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoRenderJobRequest() = default ;
    SubmitVideoRenderJobRequest& operator=(const SubmitVideoRenderJobRequest &) = default ;
    SubmitVideoRenderJobRequest& operator=(SubmitVideoRenderJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->script_ == nullptr
        && this->settings_ == nullptr && this->userData_ == nullptr; };
    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline SubmitVideoRenderJobRequest& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline string getSettings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
    inline SubmitVideoRenderJobRequest& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitVideoRenderJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<string> script_ {};
    shared_ptr<string> settings_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
