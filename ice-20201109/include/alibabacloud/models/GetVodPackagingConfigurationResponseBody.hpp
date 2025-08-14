// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVODPACKAGINGCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVODPACKAGINGCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VodPackagingConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetVodPackagingConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVodPackagingConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PackagingConfiguration, packagingConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVodPackagingConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PackagingConfiguration, packagingConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVodPackagingConfigurationResponseBody() = default ;
    GetVodPackagingConfigurationResponseBody(const GetVodPackagingConfigurationResponseBody &) = default ;
    GetVodPackagingConfigurationResponseBody(GetVodPackagingConfigurationResponseBody &&) = default ;
    GetVodPackagingConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVodPackagingConfigurationResponseBody() = default ;
    GetVodPackagingConfigurationResponseBody& operator=(const GetVodPackagingConfigurationResponseBody &) = default ;
    GetVodPackagingConfigurationResponseBody& operator=(GetVodPackagingConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->packagingConfiguration_ != nullptr
        && this->requestId_ != nullptr; };
    // packagingConfiguration Field Functions 
    bool hasPackagingConfiguration() const { return this->packagingConfiguration_ != nullptr;};
    void deletePackagingConfiguration() { this->packagingConfiguration_ = nullptr;};
    inline const VodPackagingConfiguration & packagingConfiguration() const { DARABONBA_PTR_GET_CONST(packagingConfiguration_, VodPackagingConfiguration) };
    inline VodPackagingConfiguration packagingConfiguration() { DARABONBA_PTR_GET(packagingConfiguration_, VodPackagingConfiguration) };
    inline GetVodPackagingConfigurationResponseBody& setPackagingConfiguration(const VodPackagingConfiguration & packagingConfiguration) { DARABONBA_PTR_SET_VALUE(packagingConfiguration_, packagingConfiguration) };
    inline GetVodPackagingConfigurationResponseBody& setPackagingConfiguration(VodPackagingConfiguration && packagingConfiguration) { DARABONBA_PTR_SET_RVALUE(packagingConfiguration_, packagingConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVodPackagingConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the packaging configuration.
    std::shared_ptr<VodPackagingConfiguration> packagingConfiguration_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
