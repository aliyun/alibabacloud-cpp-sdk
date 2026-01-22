// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCESETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCESETTINGSRESPONSEBODY_HPP_
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
  class DescribeRenderingInstanceSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
    };
    DescribeRenderingInstanceSettingsResponseBody() = default ;
    DescribeRenderingInstanceSettingsResponseBody(const DescribeRenderingInstanceSettingsResponseBody &) = default ;
    DescribeRenderingInstanceSettingsResponseBody(DescribeRenderingInstanceSettingsResponseBody &&) = default ;
    DescribeRenderingInstanceSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceSettingsResponseBody() = default ;
    DescribeRenderingInstanceSettingsResponseBody& operator=(const DescribeRenderingInstanceSettingsResponseBody &) = default ;
    DescribeRenderingInstanceSettingsResponseBody& operator=(DescribeRenderingInstanceSettingsResponseBody &&) = default ;
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

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->settings_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRenderingInstanceSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const vector<DescribeRenderingInstanceSettingsResponseBody::Settings> & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, vector<DescribeRenderingInstanceSettingsResponseBody::Settings>) };
    inline vector<DescribeRenderingInstanceSettingsResponseBody::Settings> getSettings() { DARABONBA_PTR_GET(settings_, vector<DescribeRenderingInstanceSettingsResponseBody::Settings>) };
    inline DescribeRenderingInstanceSettingsResponseBody& setSettings(const vector<DescribeRenderingInstanceSettingsResponseBody::Settings> & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline DescribeRenderingInstanceSettingsResponseBody& setSettings(vector<DescribeRenderingInstanceSettingsResponseBody::Settings> && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeRenderingInstanceSettingsResponseBody::Settings>> settings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
