// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
    };
    CreateScalingConfigurationResponseBody() = default ;
    CreateScalingConfigurationResponseBody(const CreateScalingConfigurationResponseBody &) = default ;
    CreateScalingConfigurationResponseBody(CreateScalingConfigurationResponseBody &&) = default ;
    CreateScalingConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingConfigurationResponseBody() = default ;
    CreateScalingConfigurationResponseBody& operator=(const CreateScalingConfigurationResponseBody &) = default ;
    CreateScalingConfigurationResponseBody& operator=(CreateScalingConfigurationResponseBody &&) = default ;
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
    inline CreateScalingConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string scalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline CreateScalingConfigurationResponseBody& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the scaling configuration.
    std::shared_ptr<string> scalingConfigurationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
