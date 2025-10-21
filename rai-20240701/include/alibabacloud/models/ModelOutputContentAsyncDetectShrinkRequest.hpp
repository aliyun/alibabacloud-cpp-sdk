// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTASYNCDETECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTASYNCDETECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelOutputContentAsyncDetectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelOutputContentAsyncDetectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BodyData, bodyDataShrink_);
      DARABONBA_PTR_TO_JSON(PolicyIdentifier, policyIdentifier_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, ModelOutputContentAsyncDetectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyData, bodyDataShrink_);
      DARABONBA_PTR_FROM_JSON(PolicyIdentifier, policyIdentifier_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    ModelOutputContentAsyncDetectShrinkRequest() = default ;
    ModelOutputContentAsyncDetectShrinkRequest(const ModelOutputContentAsyncDetectShrinkRequest &) = default ;
    ModelOutputContentAsyncDetectShrinkRequest(ModelOutputContentAsyncDetectShrinkRequest &&) = default ;
    ModelOutputContentAsyncDetectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelOutputContentAsyncDetectShrinkRequest() = default ;
    ModelOutputContentAsyncDetectShrinkRequest& operator=(const ModelOutputContentAsyncDetectShrinkRequest &) = default ;
    ModelOutputContentAsyncDetectShrinkRequest& operator=(ModelOutputContentAsyncDetectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyDataShrink_ == nullptr
        && return this->policyIdentifier_ == nullptr && return this->regionId_ == nullptr && return this->sceneName_ == nullptr && return this->serviceName_ == nullptr; };
    // bodyDataShrink Field Functions 
    bool hasBodyDataShrink() const { return this->bodyDataShrink_ != nullptr;};
    void deleteBodyDataShrink() { this->bodyDataShrink_ = nullptr;};
    inline string bodyDataShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyDataShrink_, "") };
    inline ModelOutputContentAsyncDetectShrinkRequest& setBodyDataShrink(string bodyDataShrink) { DARABONBA_PTR_SET_VALUE(bodyDataShrink_, bodyDataShrink) };


    // policyIdentifier Field Functions 
    bool hasPolicyIdentifier() const { return this->policyIdentifier_ != nullptr;};
    void deletePolicyIdentifier() { this->policyIdentifier_ = nullptr;};
    inline string policyIdentifier() const { DARABONBA_PTR_GET_DEFAULT(policyIdentifier_, "") };
    inline ModelOutputContentAsyncDetectShrinkRequest& setPolicyIdentifier(string policyIdentifier) { DARABONBA_PTR_SET_VALUE(policyIdentifier_, policyIdentifier) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModelOutputContentAsyncDetectShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline ModelOutputContentAsyncDetectShrinkRequest& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ModelOutputContentAsyncDetectShrinkRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // Request object
    std::shared_ptr<string> bodyDataShrink_ = nullptr;
    // Policy ID
    std::shared_ptr<string> policyIdentifier_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Scene name.
    std::shared_ptr<string> sceneName_ = nullptr;
    // Service name
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
