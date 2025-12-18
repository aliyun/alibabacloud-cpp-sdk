// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCONFIGURATIONRECORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTCONFIGURATIONRECORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartConfigurationRecorderResponseBodyConfigurationRecorder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class StartConfigurationRecorderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartConfigurationRecorderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationRecorder, configurationRecorder_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartConfigurationRecorderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationRecorder, configurationRecorder_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartConfigurationRecorderResponseBody() = default ;
    StartConfigurationRecorderResponseBody(const StartConfigurationRecorderResponseBody &) = default ;
    StartConfigurationRecorderResponseBody(StartConfigurationRecorderResponseBody &&) = default ;
    StartConfigurationRecorderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartConfigurationRecorderResponseBody() = default ;
    StartConfigurationRecorderResponseBody& operator=(const StartConfigurationRecorderResponseBody &) = default ;
    StartConfigurationRecorderResponseBody& operator=(StartConfigurationRecorderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationRecorder_ == nullptr
        && return this->requestId_ == nullptr; };
    // configurationRecorder Field Functions 
    bool hasConfigurationRecorder() const { return this->configurationRecorder_ != nullptr;};
    void deleteConfigurationRecorder() { this->configurationRecorder_ = nullptr;};
    inline const StartConfigurationRecorderResponseBodyConfigurationRecorder & configurationRecorder() const { DARABONBA_PTR_GET_CONST(configurationRecorder_, StartConfigurationRecorderResponseBodyConfigurationRecorder) };
    inline StartConfigurationRecorderResponseBodyConfigurationRecorder configurationRecorder() { DARABONBA_PTR_GET(configurationRecorder_, StartConfigurationRecorderResponseBodyConfigurationRecorder) };
    inline StartConfigurationRecorderResponseBody& setConfigurationRecorder(const StartConfigurationRecorderResponseBodyConfigurationRecorder & configurationRecorder) { DARABONBA_PTR_SET_VALUE(configurationRecorder_, configurationRecorder) };
    inline StartConfigurationRecorderResponseBody& setConfigurationRecorder(StartConfigurationRecorderResponseBodyConfigurationRecorder && configurationRecorder) { DARABONBA_PTR_SET_RVALUE(configurationRecorder_, configurationRecorder) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartConfigurationRecorderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the configuration recorder.
    std::shared_ptr<StartConfigurationRecorderResponseBodyConfigurationRecorder> configurationRecorder_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
