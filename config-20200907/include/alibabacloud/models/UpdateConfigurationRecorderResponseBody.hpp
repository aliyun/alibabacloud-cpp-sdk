// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGURATIONRECORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGURATIONRECORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateConfigurationRecorderResponseBodyConfigurationRecorder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateConfigurationRecorderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigurationRecorderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationRecorder, configurationRecorder_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigurationRecorderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationRecorder, configurationRecorder_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateConfigurationRecorderResponseBody() = default ;
    UpdateConfigurationRecorderResponseBody(const UpdateConfigurationRecorderResponseBody &) = default ;
    UpdateConfigurationRecorderResponseBody(UpdateConfigurationRecorderResponseBody &&) = default ;
    UpdateConfigurationRecorderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigurationRecorderResponseBody() = default ;
    UpdateConfigurationRecorderResponseBody& operator=(const UpdateConfigurationRecorderResponseBody &) = default ;
    UpdateConfigurationRecorderResponseBody& operator=(UpdateConfigurationRecorderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationRecorder_ == nullptr
        && return this->requestId_ == nullptr; };
    // configurationRecorder Field Functions 
    bool hasConfigurationRecorder() const { return this->configurationRecorder_ != nullptr;};
    void deleteConfigurationRecorder() { this->configurationRecorder_ = nullptr;};
    inline const UpdateConfigurationRecorderResponseBodyConfigurationRecorder & configurationRecorder() const { DARABONBA_PTR_GET_CONST(configurationRecorder_, UpdateConfigurationRecorderResponseBodyConfigurationRecorder) };
    inline UpdateConfigurationRecorderResponseBodyConfigurationRecorder configurationRecorder() { DARABONBA_PTR_GET(configurationRecorder_, UpdateConfigurationRecorderResponseBodyConfigurationRecorder) };
    inline UpdateConfigurationRecorderResponseBody& setConfigurationRecorder(const UpdateConfigurationRecorderResponseBodyConfigurationRecorder & configurationRecorder) { DARABONBA_PTR_SET_VALUE(configurationRecorder_, configurationRecorder) };
    inline UpdateConfigurationRecorderResponseBody& setConfigurationRecorder(UpdateConfigurationRecorderResponseBodyConfigurationRecorder && configurationRecorder) { DARABONBA_PTR_SET_RVALUE(configurationRecorder_, configurationRecorder) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateConfigurationRecorderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the configuration recorder.
    std::shared_ptr<UpdateConfigurationRecorderResponseBodyConfigurationRecorder> configurationRecorder_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
