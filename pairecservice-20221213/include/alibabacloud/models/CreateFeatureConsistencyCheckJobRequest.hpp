// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFEATURECONSISTENCYCHECKJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFEATURECONSISTENCYCHECKJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateFeatureConsistencyCheckJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFeatureConsistencyCheckJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckJobConfigId, featureConsistencyCheckJobConfigId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SamplingDuration, samplingDuration_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFeatureConsistencyCheckJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckJobConfigId, featureConsistencyCheckJobConfigId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SamplingDuration, samplingDuration_);
    };
    CreateFeatureConsistencyCheckJobRequest() = default ;
    CreateFeatureConsistencyCheckJobRequest(const CreateFeatureConsistencyCheckJobRequest &) = default ;
    CreateFeatureConsistencyCheckJobRequest(CreateFeatureConsistencyCheckJobRequest &&) = default ;
    CreateFeatureConsistencyCheckJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFeatureConsistencyCheckJobRequest() = default ;
    CreateFeatureConsistencyCheckJobRequest& operator=(const CreateFeatureConsistencyCheckJobRequest &) = default ;
    CreateFeatureConsistencyCheckJobRequest& operator=(CreateFeatureConsistencyCheckJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environment_ == nullptr
        && this->featureConsistencyCheckJobConfigId_ == nullptr && this->instanceId_ == nullptr && this->samplingDuration_ == nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline CreateFeatureConsistencyCheckJobRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // featureConsistencyCheckJobConfigId Field Functions 
    bool hasFeatureConsistencyCheckJobConfigId() const { return this->featureConsistencyCheckJobConfigId_ != nullptr;};
    void deleteFeatureConsistencyCheckJobConfigId() { this->featureConsistencyCheckJobConfigId_ = nullptr;};
    inline string getFeatureConsistencyCheckJobConfigId() const { DARABONBA_PTR_GET_DEFAULT(featureConsistencyCheckJobConfigId_, "") };
    inline CreateFeatureConsistencyCheckJobRequest& setFeatureConsistencyCheckJobConfigId(string featureConsistencyCheckJobConfigId) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckJobConfigId_, featureConsistencyCheckJobConfigId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateFeatureConsistencyCheckJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // samplingDuration Field Functions 
    bool hasSamplingDuration() const { return this->samplingDuration_ != nullptr;};
    void deleteSamplingDuration() { this->samplingDuration_ = nullptr;};
    inline int32_t getSamplingDuration() const { DARABONBA_PTR_GET_DEFAULT(samplingDuration_, 0) };
    inline CreateFeatureConsistencyCheckJobRequest& setSamplingDuration(int32_t samplingDuration) { DARABONBA_PTR_SET_VALUE(samplingDuration_, samplingDuration) };


  protected:
    // This parameter is required.
    shared_ptr<string> environment_ {};
    // This parameter is required.
    shared_ptr<string> featureConsistencyCheckJobConfigId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<int32_t> samplingDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
