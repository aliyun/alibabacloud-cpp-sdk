// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUNDEPLOYHTTPAPIROUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUNDEPLOYHTTPAPIROUTESREQUEST_HPP_
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
  class BatchUndeployHttpApiRoutesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUndeployHttpApiRoutesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(async, async_);
      DARABONBA_PTR_TO_JSON(routeIds, routeIds_);
      DARABONBA_PTR_TO_JSON(undeployAll, undeployAll_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUndeployHttpApiRoutesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(async, async_);
      DARABONBA_PTR_FROM_JSON(routeIds, routeIds_);
      DARABONBA_PTR_FROM_JSON(undeployAll, undeployAll_);
    };
    BatchUndeployHttpApiRoutesRequest() = default ;
    BatchUndeployHttpApiRoutesRequest(const BatchUndeployHttpApiRoutesRequest &) = default ;
    BatchUndeployHttpApiRoutesRequest(BatchUndeployHttpApiRoutesRequest &&) = default ;
    BatchUndeployHttpApiRoutesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUndeployHttpApiRoutesRequest() = default ;
    BatchUndeployHttpApiRoutesRequest& operator=(const BatchUndeployHttpApiRoutesRequest &) = default ;
    BatchUndeployHttpApiRoutesRequest& operator=(BatchUndeployHttpApiRoutesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->async_ == nullptr
        && this->routeIds_ == nullptr && this->undeployAll_ == nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool getAsync() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline BatchUndeployHttpApiRoutesRequest& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // routeIds Field Functions 
    bool hasRouteIds() const { return this->routeIds_ != nullptr;};
    void deleteRouteIds() { this->routeIds_ = nullptr;};
    inline const vector<string> & getRouteIds() const { DARABONBA_PTR_GET_CONST(routeIds_, vector<string>) };
    inline vector<string> getRouteIds() { DARABONBA_PTR_GET(routeIds_, vector<string>) };
    inline BatchUndeployHttpApiRoutesRequest& setRouteIds(const vector<string> & routeIds) { DARABONBA_PTR_SET_VALUE(routeIds_, routeIds) };
    inline BatchUndeployHttpApiRoutesRequest& setRouteIds(vector<string> && routeIds) { DARABONBA_PTR_SET_RVALUE(routeIds_, routeIds) };


    // undeployAll Field Functions 
    bool hasUndeployAll() const { return this->undeployAll_ != nullptr;};
    void deleteUndeployAll() { this->undeployAll_ = nullptr;};
    inline bool getUndeployAll() const { DARABONBA_PTR_GET_DEFAULT(undeployAll_, false) };
    inline BatchUndeployHttpApiRoutesRequest& setUndeployAll(bool undeployAll) { DARABONBA_PTR_SET_VALUE(undeployAll_, undeployAll) };


  protected:
    shared_ptr<bool> async_ {};
    shared_ptr<vector<string>> routeIds_ {};
    shared_ptr<bool> undeployAll_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
