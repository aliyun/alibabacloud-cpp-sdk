// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTATECONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESTATECONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateStateConfigurationResponseBodyStateConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateStateConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStateConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StateConfiguration, stateConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStateConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StateConfiguration, stateConfiguration_);
    };
    CreateStateConfigurationResponseBody() = default ;
    CreateStateConfigurationResponseBody(const CreateStateConfigurationResponseBody &) = default ;
    CreateStateConfigurationResponseBody(CreateStateConfigurationResponseBody &&) = default ;
    CreateStateConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStateConfigurationResponseBody() = default ;
    CreateStateConfigurationResponseBody& operator=(const CreateStateConfigurationResponseBody &) = default ;
    CreateStateConfigurationResponseBody& operator=(CreateStateConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->stateConfiguration_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateStateConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stateConfiguration Field Functions 
    bool hasStateConfiguration() const { return this->stateConfiguration_ != nullptr;};
    void deleteStateConfiguration() { this->stateConfiguration_ = nullptr;};
    inline const CreateStateConfigurationResponseBodyStateConfiguration & stateConfiguration() const { DARABONBA_PTR_GET_CONST(stateConfiguration_, CreateStateConfigurationResponseBodyStateConfiguration) };
    inline CreateStateConfigurationResponseBodyStateConfiguration stateConfiguration() { DARABONBA_PTR_GET(stateConfiguration_, CreateStateConfigurationResponseBodyStateConfiguration) };
    inline CreateStateConfigurationResponseBody& setStateConfiguration(const CreateStateConfigurationResponseBodyStateConfiguration & stateConfiguration) { DARABONBA_PTR_SET_VALUE(stateConfiguration_, stateConfiguration) };
    inline CreateStateConfigurationResponseBody& setStateConfiguration(CreateStateConfigurationResponseBodyStateConfiguration && stateConfiguration) { DARABONBA_PTR_SET_RVALUE(stateConfiguration_, stateConfiguration) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the desired-state configuration.
    std::shared_ptr<CreateStateConfigurationResponseBodyStateConfiguration> stateConfiguration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
