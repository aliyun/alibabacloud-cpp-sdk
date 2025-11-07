// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTATECONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTATECONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateStateConfigurationResponseBodyStateConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateStateConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStateConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StateConfiguration, stateConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStateConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StateConfiguration, stateConfiguration_);
    };
    UpdateStateConfigurationResponseBody() = default ;
    UpdateStateConfigurationResponseBody(const UpdateStateConfigurationResponseBody &) = default ;
    UpdateStateConfigurationResponseBody(UpdateStateConfigurationResponseBody &&) = default ;
    UpdateStateConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStateConfigurationResponseBody() = default ;
    UpdateStateConfigurationResponseBody& operator=(const UpdateStateConfigurationResponseBody &) = default ;
    UpdateStateConfigurationResponseBody& operator=(UpdateStateConfigurationResponseBody &&) = default ;
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
    inline UpdateStateConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stateConfiguration Field Functions 
    bool hasStateConfiguration() const { return this->stateConfiguration_ != nullptr;};
    void deleteStateConfiguration() { this->stateConfiguration_ = nullptr;};
    inline const vector<UpdateStateConfigurationResponseBodyStateConfiguration> & stateConfiguration() const { DARABONBA_PTR_GET_CONST(stateConfiguration_, vector<UpdateStateConfigurationResponseBodyStateConfiguration>) };
    inline vector<UpdateStateConfigurationResponseBodyStateConfiguration> stateConfiguration() { DARABONBA_PTR_GET(stateConfiguration_, vector<UpdateStateConfigurationResponseBodyStateConfiguration>) };
    inline UpdateStateConfigurationResponseBody& setStateConfiguration(const vector<UpdateStateConfigurationResponseBodyStateConfiguration> & stateConfiguration) { DARABONBA_PTR_SET_VALUE(stateConfiguration_, stateConfiguration) };
    inline UpdateStateConfigurationResponseBody& setStateConfiguration(vector<UpdateStateConfigurationResponseBodyStateConfiguration> && stateConfiguration) { DARABONBA_PTR_SET_RVALUE(stateConfiguration_, stateConfiguration) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the configuration.
    std::shared_ptr<vector<UpdateStateConfigurationResponseBodyStateConfiguration>> stateConfiguration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
