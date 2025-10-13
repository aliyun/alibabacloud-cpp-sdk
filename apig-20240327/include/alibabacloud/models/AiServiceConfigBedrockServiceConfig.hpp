// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISERVICECONFIGBEDROCKSERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AISERVICECONFIGBEDROCKSERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiServiceConfigBedrockServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiServiceConfigBedrockServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(awsAccessKey, awsAccessKey_);
      DARABONBA_PTR_TO_JSON(awsRegion, awsRegion_);
      DARABONBA_PTR_TO_JSON(awsSecretKey, awsSecretKey_);
    };
    friend void from_json(const Darabonba::Json& j, AiServiceConfigBedrockServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(awsAccessKey, awsAccessKey_);
      DARABONBA_PTR_FROM_JSON(awsRegion, awsRegion_);
      DARABONBA_PTR_FROM_JSON(awsSecretKey, awsSecretKey_);
    };
    AiServiceConfigBedrockServiceConfig() = default ;
    AiServiceConfigBedrockServiceConfig(const AiServiceConfigBedrockServiceConfig &) = default ;
    AiServiceConfigBedrockServiceConfig(AiServiceConfigBedrockServiceConfig &&) = default ;
    AiServiceConfigBedrockServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiServiceConfigBedrockServiceConfig() = default ;
    AiServiceConfigBedrockServiceConfig& operator=(const AiServiceConfigBedrockServiceConfig &) = default ;
    AiServiceConfigBedrockServiceConfig& operator=(AiServiceConfigBedrockServiceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->awsAccessKey_ != nullptr
        && this->awsRegion_ != nullptr && this->awsSecretKey_ != nullptr; };
    // awsAccessKey Field Functions 
    bool hasAwsAccessKey() const { return this->awsAccessKey_ != nullptr;};
    void deleteAwsAccessKey() { this->awsAccessKey_ = nullptr;};
    inline string awsAccessKey() const { DARABONBA_PTR_GET_DEFAULT(awsAccessKey_, "") };
    inline AiServiceConfigBedrockServiceConfig& setAwsAccessKey(string awsAccessKey) { DARABONBA_PTR_SET_VALUE(awsAccessKey_, awsAccessKey) };


    // awsRegion Field Functions 
    bool hasAwsRegion() const { return this->awsRegion_ != nullptr;};
    void deleteAwsRegion() { this->awsRegion_ = nullptr;};
    inline string awsRegion() const { DARABONBA_PTR_GET_DEFAULT(awsRegion_, "") };
    inline AiServiceConfigBedrockServiceConfig& setAwsRegion(string awsRegion) { DARABONBA_PTR_SET_VALUE(awsRegion_, awsRegion) };


    // awsSecretKey Field Functions 
    bool hasAwsSecretKey() const { return this->awsSecretKey_ != nullptr;};
    void deleteAwsSecretKey() { this->awsSecretKey_ = nullptr;};
    inline string awsSecretKey() const { DARABONBA_PTR_GET_DEFAULT(awsSecretKey_, "") };
    inline AiServiceConfigBedrockServiceConfig& setAwsSecretKey(string awsSecretKey) { DARABONBA_PTR_SET_VALUE(awsSecretKey_, awsSecretKey) };


  protected:
    std::shared_ptr<string> awsAccessKey_ = nullptr;
    std::shared_ptr<string> awsRegion_ = nullptr;
    std::shared_ptr<string> awsSecretKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
