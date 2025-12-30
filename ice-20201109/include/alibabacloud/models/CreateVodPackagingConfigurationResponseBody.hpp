// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVODPACKAGINGCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVODPACKAGINGCONFIGURATIONRESPONSEBODY_HPP_
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
  class CreateVodPackagingConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVodPackagingConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PackagingConfiguration, packagingConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVodPackagingConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PackagingConfiguration, packagingConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateVodPackagingConfigurationResponseBody() = default ;
    CreateVodPackagingConfigurationResponseBody(const CreateVodPackagingConfigurationResponseBody &) = default ;
    CreateVodPackagingConfigurationResponseBody(CreateVodPackagingConfigurationResponseBody &&) = default ;
    CreateVodPackagingConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVodPackagingConfigurationResponseBody() = default ;
    CreateVodPackagingConfigurationResponseBody& operator=(const CreateVodPackagingConfigurationResponseBody &) = default ;
    CreateVodPackagingConfigurationResponseBody& operator=(CreateVodPackagingConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->packagingConfiguration_ == nullptr
        && this->requestId_ == nullptr; };
    // packagingConfiguration Field Functions 
    bool hasPackagingConfiguration() const { return this->packagingConfiguration_ != nullptr;};
    void deletePackagingConfiguration() { this->packagingConfiguration_ = nullptr;};
    inline const VodPackagingConfiguration & getPackagingConfiguration() const { DARABONBA_PTR_GET_CONST(packagingConfiguration_, VodPackagingConfiguration) };
    inline VodPackagingConfiguration getPackagingConfiguration() { DARABONBA_PTR_GET(packagingConfiguration_, VodPackagingConfiguration) };
    inline CreateVodPackagingConfigurationResponseBody& setPackagingConfiguration(const VodPackagingConfiguration & packagingConfiguration) { DARABONBA_PTR_SET_VALUE(packagingConfiguration_, packagingConfiguration) };
    inline CreateVodPackagingConfigurationResponseBody& setPackagingConfiguration(VodPackagingConfiguration && packagingConfiguration) { DARABONBA_PTR_SET_RVALUE(packagingConfiguration_, packagingConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVodPackagingConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The packaging configuration.
    shared_ptr<VodPackagingConfiguration> packagingConfiguration_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
