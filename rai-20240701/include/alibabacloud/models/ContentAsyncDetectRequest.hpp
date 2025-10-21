// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTENTASYNCDETECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTENTASYNCDETECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ContentAsyncDetectRequestServiceParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ContentAsyncDetectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContentAsyncDetectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(serviceParameter, serviceParameter_);
    };
    friend void from_json(const Darabonba::Json& j, ContentAsyncDetectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(serviceParameter, serviceParameter_);
    };
    ContentAsyncDetectRequest() = default ;
    ContentAsyncDetectRequest(const ContentAsyncDetectRequest &) = default ;
    ContentAsyncDetectRequest(ContentAsyncDetectRequest &&) = default ;
    ContentAsyncDetectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContentAsyncDetectRequest() = default ;
    ContentAsyncDetectRequest& operator=(const ContentAsyncDetectRequest &) = default ;
    ContentAsyncDetectRequest& operator=(ContentAsyncDetectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->sceneName_ == nullptr && return this->serviceName_ == nullptr && return this->serviceParameter_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ContentAsyncDetectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline ContentAsyncDetectRequest& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ContentAsyncDetectRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceParameter Field Functions 
    bool hasServiceParameter() const { return this->serviceParameter_ != nullptr;};
    void deleteServiceParameter() { this->serviceParameter_ = nullptr;};
    inline const ContentAsyncDetectRequestServiceParameter & serviceParameter() const { DARABONBA_PTR_GET_CONST(serviceParameter_, ContentAsyncDetectRequestServiceParameter) };
    inline ContentAsyncDetectRequestServiceParameter serviceParameter() { DARABONBA_PTR_GET(serviceParameter_, ContentAsyncDetectRequestServiceParameter) };
    inline ContentAsyncDetectRequest& setServiceParameter(const ContentAsyncDetectRequestServiceParameter & serviceParameter) { DARABONBA_PTR_SET_VALUE(serviceParameter_, serviceParameter) };
    inline ContentAsyncDetectRequest& setServiceParameter(ContentAsyncDetectRequestServiceParameter && serviceParameter) { DARABONBA_PTR_SET_RVALUE(serviceParameter_, serviceParameter) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> sceneName_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<ContentAsyncDetectRequestServiceParameter> serviceParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
