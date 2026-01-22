// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCESETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCESETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateRenderingInstanceSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRenderingInstanceSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRenderingInstanceSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
    };
    UpdateRenderingInstanceSettingsRequest() = default ;
    UpdateRenderingInstanceSettingsRequest(const UpdateRenderingInstanceSettingsRequest &) = default ;
    UpdateRenderingInstanceSettingsRequest(UpdateRenderingInstanceSettingsRequest &&) = default ;
    UpdateRenderingInstanceSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRenderingInstanceSettingsRequest() = default ;
    UpdateRenderingInstanceSettingsRequest& operator=(const UpdateRenderingInstanceSettingsRequest &) = default ;
    UpdateRenderingInstanceSettingsRequest& operator=(UpdateRenderingInstanceSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Settings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Settings& obj) { 
        DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
        DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
      };
      friend void from_json(const Darabonba::Json& j, Settings& obj) { 
        DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
        DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
      };
      Settings() = default ;
      Settings(const Settings &) = default ;
      Settings(Settings &&) = default ;
      Settings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Settings() = default ;
      Settings& operator=(const Settings &) = default ;
      Settings& operator=(Settings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attributeName_ == nullptr
        && this->attributeValue_ == nullptr; };
      // attributeName Field Functions 
      bool hasAttributeName() const { return this->attributeName_ != nullptr;};
      void deleteAttributeName() { this->attributeName_ = nullptr;};
      inline string getAttributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
      inline Settings& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


      // attributeValue Field Functions 
      bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
      void deleteAttributeValue() { this->attributeValue_ = nullptr;};
      inline string getAttributeValue() const { DARABONBA_PTR_GET_DEFAULT(attributeValue_, "") };
      inline Settings& setAttributeValue(string attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };


    protected:
      shared_ptr<string> attributeName_ {};
      shared_ptr<string> attributeValue_ {};
    };

    virtual bool empty() const override { return this->renderingInstanceId_ == nullptr
        && this->settings_ == nullptr; };
    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline UpdateRenderingInstanceSettingsRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const vector<UpdateRenderingInstanceSettingsRequest::Settings> & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, vector<UpdateRenderingInstanceSettingsRequest::Settings>) };
    inline vector<UpdateRenderingInstanceSettingsRequest::Settings> getSettings() { DARABONBA_PTR_GET(settings_, vector<UpdateRenderingInstanceSettingsRequest::Settings>) };
    inline UpdateRenderingInstanceSettingsRequest& setSettings(const vector<UpdateRenderingInstanceSettingsRequest::Settings> & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline UpdateRenderingInstanceSettingsRequest& setSettings(vector<UpdateRenderingInstanceSettingsRequest::Settings> && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


  protected:
    shared_ptr<string> renderingInstanceId_ {};
    shared_ptr<vector<UpdateRenderingInstanceSettingsRequest::Settings>> settings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
