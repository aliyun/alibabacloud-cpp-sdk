// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDEPLOYHTTPAPIROUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDEPLOYHTTPAPIROUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class BatchDeployHttpApiRoutesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeployHttpApiRoutesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(async, async_);
      DARABONBA_PTR_TO_JSON(deployAll, deployAll_);
      DARABONBA_PTR_TO_JSON(routeIds, routeIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeployHttpApiRoutesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(async, async_);
      DARABONBA_PTR_FROM_JSON(deployAll, deployAll_);
      DARABONBA_PTR_FROM_JSON(routeIds, routeIds_);
    };
    BatchDeployHttpApiRoutesRequest() = default ;
    BatchDeployHttpApiRoutesRequest(const BatchDeployHttpApiRoutesRequest &) = default ;
    BatchDeployHttpApiRoutesRequest(BatchDeployHttpApiRoutesRequest &&) = default ;
    BatchDeployHttpApiRoutesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeployHttpApiRoutesRequest() = default ;
    BatchDeployHttpApiRoutesRequest& operator=(const BatchDeployHttpApiRoutesRequest &) = default ;
    BatchDeployHttpApiRoutesRequest& operator=(BatchDeployHttpApiRoutesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->async_ == nullptr
        && this->deployAll_ == nullptr && this->routeIds_ == nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool getAsync() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline BatchDeployHttpApiRoutesRequest& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // deployAll Field Functions 
    bool hasDeployAll() const { return this->deployAll_ != nullptr;};
    void deleteDeployAll() { this->deployAll_ = nullptr;};
    inline bool getDeployAll() const { DARABONBA_PTR_GET_DEFAULT(deployAll_, false) };
    inline BatchDeployHttpApiRoutesRequest& setDeployAll(bool deployAll) { DARABONBA_PTR_SET_VALUE(deployAll_, deployAll) };


    // routeIds Field Functions 
    bool hasRouteIds() const { return this->routeIds_ != nullptr;};
    void deleteRouteIds() { this->routeIds_ = nullptr;};
    inline const vector<string> & getRouteIds() const { DARABONBA_PTR_GET_CONST(routeIds_, vector<string>) };
    inline vector<string> getRouteIds() { DARABONBA_PTR_GET(routeIds_, vector<string>) };
    inline BatchDeployHttpApiRoutesRequest& setRouteIds(const vector<string> & routeIds) { DARABONBA_PTR_SET_VALUE(routeIds_, routeIds) };
    inline BatchDeployHttpApiRoutesRequest& setRouteIds(vector<string> && routeIds) { DARABONBA_PTR_SET_RVALUE(routeIds_, routeIds) };


  protected:
    // Specifies whether to publish routes asynchronously. Default value: true. An asynchronous publish returns the acceptance result of each route. If you set this parameter to false, the system waits for the batch processing to complete and returns the final result and statistics for each route.
    shared_ptr<bool> async_ {};
    // Specifies whether to publish all routes visible to the current user under the API. Default value: false. If you set this parameter to true, all visible routes are targeted and routeIds is ignored.
    shared_ptr<bool> deployAll_ {};
    // The list of route IDs to publish. If deployAll is omitted or set to false, you must provide at least one route ID. If any route does not exist or belongs to another API, the entire batch request is rejected.
    shared_ptr<vector<string>> routeIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
