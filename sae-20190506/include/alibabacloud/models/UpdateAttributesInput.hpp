// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEATTRIBUTESINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEATTRIBUTESINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HTTPTriggerConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateAttributesInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAttributesInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(httpTriggerConfig, httpTriggerConfig_);
      DARABONBA_PTR_TO_JSON(versionID, versionID_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAttributesInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(httpTriggerConfig, httpTriggerConfig_);
      DARABONBA_PTR_FROM_JSON(versionID, versionID_);
    };
    UpdateAttributesInput() = default ;
    UpdateAttributesInput(const UpdateAttributesInput &) = default ;
    UpdateAttributesInput(UpdateAttributesInput &&) = default ;
    UpdateAttributesInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAttributesInput() = default ;
    UpdateAttributesInput& operator=(const UpdateAttributesInput &) = default ;
    UpdateAttributesInput& operator=(UpdateAttributesInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->httpTriggerConfig_ == nullptr && this->versionID_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAttributesInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpTriggerConfig Field Functions 
    bool hasHttpTriggerConfig() const { return this->httpTriggerConfig_ != nullptr;};
    void deleteHttpTriggerConfig() { this->httpTriggerConfig_ = nullptr;};
    inline const HTTPTriggerConfig & getHttpTriggerConfig() const { DARABONBA_PTR_GET_CONST(httpTriggerConfig_, HTTPTriggerConfig) };
    inline HTTPTriggerConfig getHttpTriggerConfig() { DARABONBA_PTR_GET(httpTriggerConfig_, HTTPTriggerConfig) };
    inline UpdateAttributesInput& setHttpTriggerConfig(const HTTPTriggerConfig & httpTriggerConfig) { DARABONBA_PTR_SET_VALUE(httpTriggerConfig_, httpTriggerConfig) };
    inline UpdateAttributesInput& setHttpTriggerConfig(HTTPTriggerConfig && httpTriggerConfig) { DARABONBA_PTR_SET_RVALUE(httpTriggerConfig_, httpTriggerConfig) };


    // versionID Field Functions 
    bool hasVersionID() const { return this->versionID_ != nullptr;};
    void deleteVersionID() { this->versionID_ = nullptr;};
    inline string getVersionID() const { DARABONBA_PTR_GET_DEFAULT(versionID_, "") };
    inline UpdateAttributesInput& setVersionID(string versionID) { DARABONBA_PTR_SET_VALUE(versionID_, versionID) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<HTTPTriggerConfig> httpTriggerConfig_ {};
    shared_ptr<string> versionID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
