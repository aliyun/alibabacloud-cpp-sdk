// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCONTENTASYNCDETECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCONTENTASYNCDETECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchContentAsyncDetectRequestServiceParameterList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class BatchContentAsyncDetectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchContentAsyncDetectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(serviceParameterList, serviceParameterList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchContentAsyncDetectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(serviceParameterList, serviceParameterList_);
    };
    BatchContentAsyncDetectRequest() = default ;
    BatchContentAsyncDetectRequest(const BatchContentAsyncDetectRequest &) = default ;
    BatchContentAsyncDetectRequest(BatchContentAsyncDetectRequest &&) = default ;
    BatchContentAsyncDetectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchContentAsyncDetectRequest() = default ;
    BatchContentAsyncDetectRequest& operator=(const BatchContentAsyncDetectRequest &) = default ;
    BatchContentAsyncDetectRequest& operator=(BatchContentAsyncDetectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->sceneName_ == nullptr && return this->serviceName_ == nullptr && return this->serviceParameterList_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BatchContentAsyncDetectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline BatchContentAsyncDetectRequest& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline BatchContentAsyncDetectRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceParameterList Field Functions 
    bool hasServiceParameterList() const { return this->serviceParameterList_ != nullptr;};
    void deleteServiceParameterList() { this->serviceParameterList_ = nullptr;};
    inline const vector<BatchContentAsyncDetectRequestServiceParameterList> & serviceParameterList() const { DARABONBA_PTR_GET_CONST(serviceParameterList_, vector<BatchContentAsyncDetectRequestServiceParameterList>) };
    inline vector<BatchContentAsyncDetectRequestServiceParameterList> serviceParameterList() { DARABONBA_PTR_GET(serviceParameterList_, vector<BatchContentAsyncDetectRequestServiceParameterList>) };
    inline BatchContentAsyncDetectRequest& setServiceParameterList(const vector<BatchContentAsyncDetectRequestServiceParameterList> & serviceParameterList) { DARABONBA_PTR_SET_VALUE(serviceParameterList_, serviceParameterList) };
    inline BatchContentAsyncDetectRequest& setServiceParameterList(vector<BatchContentAsyncDetectRequestServiceParameterList> && serviceParameterList) { DARABONBA_PTR_SET_RVALUE(serviceParameterList_, serviceParameterList) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> sceneName_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<vector<BatchContentAsyncDetectRequestServiceParameterList>> serviceParameterList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
