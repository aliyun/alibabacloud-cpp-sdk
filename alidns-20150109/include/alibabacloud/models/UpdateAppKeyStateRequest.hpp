// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPKEYSTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPKEYSTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateAppKeyStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppKeyStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKeyId, appKeyId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppKeyStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKeyId, appKeyId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    UpdateAppKeyStateRequest() = default ;
    UpdateAppKeyStateRequest(const UpdateAppKeyStateRequest &) = default ;
    UpdateAppKeyStateRequest(UpdateAppKeyStateRequest &&) = default ;
    UpdateAppKeyStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppKeyStateRequest() = default ;
    UpdateAppKeyStateRequest& operator=(const UpdateAppKeyStateRequest &) = default ;
    UpdateAppKeyStateRequest& operator=(UpdateAppKeyStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKeyId_ == nullptr
        && return this->lang_ == nullptr && return this->state_ == nullptr; };
    // appKeyId Field Functions 
    bool hasAppKeyId() const { return this->appKeyId_ != nullptr;};
    void deleteAppKeyId() { this->appKeyId_ = nullptr;};
    inline string appKeyId() const { DARABONBA_PTR_GET_DEFAULT(appKeyId_, "") };
    inline UpdateAppKeyStateRequest& setAppKeyId(string appKeyId) { DARABONBA_PTR_SET_VALUE(appKeyId_, appKeyId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateAppKeyStateRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline UpdateAppKeyStateRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> appKeyId_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
