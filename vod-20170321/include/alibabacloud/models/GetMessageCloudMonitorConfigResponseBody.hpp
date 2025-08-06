// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECLOUDMONITORCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECLOUDMONITORCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMessageCloudMonitorConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageCloudMonitorConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageCloudMonitorConfig, messageCloudMonitorConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageCloudMonitorConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageCloudMonitorConfig, messageCloudMonitorConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMessageCloudMonitorConfigResponseBody() = default ;
    GetMessageCloudMonitorConfigResponseBody(const GetMessageCloudMonitorConfigResponseBody &) = default ;
    GetMessageCloudMonitorConfigResponseBody(GetMessageCloudMonitorConfigResponseBody &&) = default ;
    GetMessageCloudMonitorConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageCloudMonitorConfigResponseBody() = default ;
    GetMessageCloudMonitorConfigResponseBody& operator=(const GetMessageCloudMonitorConfigResponseBody &) = default ;
    GetMessageCloudMonitorConfigResponseBody& operator=(GetMessageCloudMonitorConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->messageCloudMonitorConfig_ != nullptr
        && this->requestId_ != nullptr; };
    // messageCloudMonitorConfig Field Functions 
    bool hasMessageCloudMonitorConfig() const { return this->messageCloudMonitorConfig_ != nullptr;};
    void deleteMessageCloudMonitorConfig() { this->messageCloudMonitorConfig_ = nullptr;};
    inline const GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig & messageCloudMonitorConfig() const { DARABONBA_PTR_GET_CONST(messageCloudMonitorConfig_, GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig) };
    inline GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig messageCloudMonitorConfig() { DARABONBA_PTR_GET(messageCloudMonitorConfig_, GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig) };
    inline GetMessageCloudMonitorConfigResponseBody& setMessageCloudMonitorConfig(const GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig & messageCloudMonitorConfig) { DARABONBA_PTR_SET_VALUE(messageCloudMonitorConfig_, messageCloudMonitorConfig) };
    inline GetMessageCloudMonitorConfigResponseBody& setMessageCloudMonitorConfig(GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig && messageCloudMonitorConfig) { DARABONBA_PTR_SET_RVALUE(messageCloudMonitorConfig_, messageCloudMonitorConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageCloudMonitorConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig> messageCloudMonitorConfig_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
