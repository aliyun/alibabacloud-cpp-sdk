// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelInputContentSyncDetectRequestBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelInputContentSyncDetectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelInputContentSyncDetectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BodyData, bodyData_);
      DARABONBA_PTR_TO_JSON(PolicyIdentifier, policyIdentifier_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, ModelInputContentSyncDetectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyData, bodyData_);
      DARABONBA_PTR_FROM_JSON(PolicyIdentifier, policyIdentifier_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    ModelInputContentSyncDetectRequest() = default ;
    ModelInputContentSyncDetectRequest(const ModelInputContentSyncDetectRequest &) = default ;
    ModelInputContentSyncDetectRequest(ModelInputContentSyncDetectRequest &&) = default ;
    ModelInputContentSyncDetectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelInputContentSyncDetectRequest() = default ;
    ModelInputContentSyncDetectRequest& operator=(const ModelInputContentSyncDetectRequest &) = default ;
    ModelInputContentSyncDetectRequest& operator=(ModelInputContentSyncDetectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyData_ == nullptr
        && return this->policyIdentifier_ == nullptr && return this->regionId_ == nullptr && return this->sceneName_ == nullptr && return this->serviceName_ == nullptr; };
    // bodyData Field Functions 
    bool hasBodyData() const { return this->bodyData_ != nullptr;};
    void deleteBodyData() { this->bodyData_ = nullptr;};
    inline const ModelInputContentSyncDetectRequestBodyData & bodyData() const { DARABONBA_PTR_GET_CONST(bodyData_, ModelInputContentSyncDetectRequestBodyData) };
    inline ModelInputContentSyncDetectRequestBodyData bodyData() { DARABONBA_PTR_GET(bodyData_, ModelInputContentSyncDetectRequestBodyData) };
    inline ModelInputContentSyncDetectRequest& setBodyData(const ModelInputContentSyncDetectRequestBodyData & bodyData) { DARABONBA_PTR_SET_VALUE(bodyData_, bodyData) };
    inline ModelInputContentSyncDetectRequest& setBodyData(ModelInputContentSyncDetectRequestBodyData && bodyData) { DARABONBA_PTR_SET_RVALUE(bodyData_, bodyData) };


    // policyIdentifier Field Functions 
    bool hasPolicyIdentifier() const { return this->policyIdentifier_ != nullptr;};
    void deletePolicyIdentifier() { this->policyIdentifier_ = nullptr;};
    inline string policyIdentifier() const { DARABONBA_PTR_GET_DEFAULT(policyIdentifier_, "") };
    inline ModelInputContentSyncDetectRequest& setPolicyIdentifier(string policyIdentifier) { DARABONBA_PTR_SET_VALUE(policyIdentifier_, policyIdentifier) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModelInputContentSyncDetectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline ModelInputContentSyncDetectRequest& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ModelInputContentSyncDetectRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // Request object
    std::shared_ptr<ModelInputContentSyncDetectRequestBodyData> bodyData_ = nullptr;
    // Policy Identifier
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
