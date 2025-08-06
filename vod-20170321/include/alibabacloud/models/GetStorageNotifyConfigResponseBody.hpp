// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGENOTIFYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGENOTIFYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStorageNotifyConfigResponseBodyOssNotifyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetStorageNotifyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(OssNotifyConfig, ossNotifyConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(OssNotifyConfig, ossNotifyConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetStorageNotifyConfigResponseBody() = default ;
    GetStorageNotifyConfigResponseBody(const GetStorageNotifyConfigResponseBody &) = default ;
    GetStorageNotifyConfigResponseBody(GetStorageNotifyConfigResponseBody &&) = default ;
    GetStorageNotifyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageNotifyConfigResponseBody() = default ;
    GetStorageNotifyConfigResponseBody& operator=(const GetStorageNotifyConfigResponseBody &) = default ;
    GetStorageNotifyConfigResponseBody& operator=(GetStorageNotifyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configType_ != nullptr
        && this->ossNotifyConfig_ != nullptr && this->requestId_ != nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetStorageNotifyConfigResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // ossNotifyConfig Field Functions 
    bool hasOssNotifyConfig() const { return this->ossNotifyConfig_ != nullptr;};
    void deleteOssNotifyConfig() { this->ossNotifyConfig_ = nullptr;};
    inline const GetStorageNotifyConfigResponseBodyOssNotifyConfig & ossNotifyConfig() const { DARABONBA_PTR_GET_CONST(ossNotifyConfig_, GetStorageNotifyConfigResponseBodyOssNotifyConfig) };
    inline GetStorageNotifyConfigResponseBodyOssNotifyConfig ossNotifyConfig() { DARABONBA_PTR_GET(ossNotifyConfig_, GetStorageNotifyConfigResponseBodyOssNotifyConfig) };
    inline GetStorageNotifyConfigResponseBody& setOssNotifyConfig(const GetStorageNotifyConfigResponseBodyOssNotifyConfig & ossNotifyConfig) { DARABONBA_PTR_SET_VALUE(ossNotifyConfig_, ossNotifyConfig) };
    inline GetStorageNotifyConfigResponseBody& setOssNotifyConfig(GetStorageNotifyConfigResponseBodyOssNotifyConfig && ossNotifyConfig) { DARABONBA_PTR_SET_RVALUE(ossNotifyConfig_, ossNotifyConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStorageNotifyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> configType_ = nullptr;
    std::shared_ptr<GetStorageNotifyConfigResponseBodyOssNotifyConfig> ossNotifyConfig_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
