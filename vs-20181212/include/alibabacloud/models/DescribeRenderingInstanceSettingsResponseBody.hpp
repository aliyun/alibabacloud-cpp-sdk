// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCESETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCESETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenderingInstanceSettingsResponseBodySettings.hpp>
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
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->settings_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRenderingInstanceSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const vector<DescribeRenderingInstanceSettingsResponseBodySettings> & settings() const { DARABONBA_PTR_GET_CONST(settings_, vector<DescribeRenderingInstanceSettingsResponseBodySettings>) };
    inline vector<DescribeRenderingInstanceSettingsResponseBodySettings> settings() { DARABONBA_PTR_GET(settings_, vector<DescribeRenderingInstanceSettingsResponseBodySettings>) };
    inline DescribeRenderingInstanceSettingsResponseBody& setSettings(const vector<DescribeRenderingInstanceSettingsResponseBodySettings> & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline DescribeRenderingInstanceSettingsResponseBody& setSettings(vector<DescribeRenderingInstanceSettingsResponseBodySettings> && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeRenderingInstanceSettingsResponseBodySettings>> settings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
