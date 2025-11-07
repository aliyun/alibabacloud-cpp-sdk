// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSERVICESETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETSERVICESETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetServiceSettingsResponseBodyServiceSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class SetServiceSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetServiceSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceSettings, serviceSettings_);
    };
    friend void from_json(const Darabonba::Json& j, SetServiceSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceSettings, serviceSettings_);
    };
    SetServiceSettingsResponseBody() = default ;
    SetServiceSettingsResponseBody(const SetServiceSettingsResponseBody &) = default ;
    SetServiceSettingsResponseBody(SetServiceSettingsResponseBody &&) = default ;
    SetServiceSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetServiceSettingsResponseBody() = default ;
    SetServiceSettingsResponseBody& operator=(const SetServiceSettingsResponseBody &) = default ;
    SetServiceSettingsResponseBody& operator=(SetServiceSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->serviceSettings_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetServiceSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceSettings Field Functions 
    bool hasServiceSettings() const { return this->serviceSettings_ != nullptr;};
    void deleteServiceSettings() { this->serviceSettings_ = nullptr;};
    inline const vector<SetServiceSettingsResponseBodyServiceSettings> & serviceSettings() const { DARABONBA_PTR_GET_CONST(serviceSettings_, vector<SetServiceSettingsResponseBodyServiceSettings>) };
    inline vector<SetServiceSettingsResponseBodyServiceSettings> serviceSettings() { DARABONBA_PTR_GET(serviceSettings_, vector<SetServiceSettingsResponseBodyServiceSettings>) };
    inline SetServiceSettingsResponseBody& setServiceSettings(const vector<SetServiceSettingsResponseBodyServiceSettings> & serviceSettings) { DARABONBA_PTR_SET_VALUE(serviceSettings_, serviceSettings) };
    inline SetServiceSettingsResponseBody& setServiceSettings(vector<SetServiceSettingsResponseBodyServiceSettings> && serviceSettings) { DARABONBA_PTR_SET_RVALUE(serviceSettings_, serviceSettings) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of service settings.
    std::shared_ptr<vector<SetServiceSettingsResponseBodyServiceSettings>> serviceSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
