// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
    };
    CreateEciScalingConfigurationResponseBody() = default ;
    CreateEciScalingConfigurationResponseBody(const CreateEciScalingConfigurationResponseBody &) = default ;
    CreateEciScalingConfigurationResponseBody(CreateEciScalingConfigurationResponseBody &&) = default ;
    CreateEciScalingConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationResponseBody() = default ;
    CreateEciScalingConfigurationResponseBody& operator=(const CreateEciScalingConfigurationResponseBody &) = default ;
    CreateEciScalingConfigurationResponseBody& operator=(CreateEciScalingConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->scalingConfigurationId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEciScalingConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string scalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline CreateEciScalingConfigurationResponseBody& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the elastic container instance (container group).
    std::shared_ptr<string> scalingConfigurationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
