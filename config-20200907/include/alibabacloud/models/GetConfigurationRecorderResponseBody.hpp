// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGURATIONRECORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGURATIONRECORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConfigurationRecorderResponseBodyConfigurationRecorder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigurationRecorderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigurationRecorderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationRecorder, configurationRecorder_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigurationRecorderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationRecorder, configurationRecorder_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConfigurationRecorderResponseBody() = default ;
    GetConfigurationRecorderResponseBody(const GetConfigurationRecorderResponseBody &) = default ;
    GetConfigurationRecorderResponseBody(GetConfigurationRecorderResponseBody &&) = default ;
    GetConfigurationRecorderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigurationRecorderResponseBody() = default ;
    GetConfigurationRecorderResponseBody& operator=(const GetConfigurationRecorderResponseBody &) = default ;
    GetConfigurationRecorderResponseBody& operator=(GetConfigurationRecorderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationRecorder_ == nullptr
        && return this->requestId_ == nullptr; };
    // configurationRecorder Field Functions 
    bool hasConfigurationRecorder() const { return this->configurationRecorder_ != nullptr;};
    void deleteConfigurationRecorder() { this->configurationRecorder_ = nullptr;};
    inline const GetConfigurationRecorderResponseBodyConfigurationRecorder & configurationRecorder() const { DARABONBA_PTR_GET_CONST(configurationRecorder_, GetConfigurationRecorderResponseBodyConfigurationRecorder) };
    inline GetConfigurationRecorderResponseBodyConfigurationRecorder configurationRecorder() { DARABONBA_PTR_GET(configurationRecorder_, GetConfigurationRecorderResponseBodyConfigurationRecorder) };
    inline GetConfigurationRecorderResponseBody& setConfigurationRecorder(const GetConfigurationRecorderResponseBodyConfigurationRecorder & configurationRecorder) { DARABONBA_PTR_SET_VALUE(configurationRecorder_, configurationRecorder) };
    inline GetConfigurationRecorderResponseBody& setConfigurationRecorder(GetConfigurationRecorderResponseBodyConfigurationRecorder && configurationRecorder) { DARABONBA_PTR_SET_RVALUE(configurationRecorder_, configurationRecorder) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConfigurationRecorderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the configuration recorder that monitors resources.
    std::shared_ptr<GetConfigurationRecorderResponseBodyConfigurationRecorder> configurationRecorder_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
