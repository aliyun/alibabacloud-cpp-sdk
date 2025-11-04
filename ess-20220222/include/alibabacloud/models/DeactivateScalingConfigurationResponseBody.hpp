// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEACTIVATESCALINGCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEACTIVATESCALINGCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DeactivateScalingConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeactivateScalingConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeactivateScalingConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeactivateScalingConfigurationResponseBody() = default ;
    DeactivateScalingConfigurationResponseBody(const DeactivateScalingConfigurationResponseBody &) = default ;
    DeactivateScalingConfigurationResponseBody(DeactivateScalingConfigurationResponseBody &&) = default ;
    DeactivateScalingConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeactivateScalingConfigurationResponseBody() = default ;
    DeactivateScalingConfigurationResponseBody& operator=(const DeactivateScalingConfigurationResponseBody &) = default ;
    DeactivateScalingConfigurationResponseBody& operator=(DeactivateScalingConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeactivateScalingConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
