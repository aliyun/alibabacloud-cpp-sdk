// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REINITINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REINITINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstanceOperateResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ReinitInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReinitInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceResponses, instanceResponses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ReinitInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceResponses, instanceResponses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ReinitInstancesResponseBody() = default ;
    ReinitInstancesResponseBody(const ReinitInstancesResponseBody &) = default ;
    ReinitInstancesResponseBody(ReinitInstancesResponseBody &&) = default ;
    ReinitInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReinitInstancesResponseBody() = default ;
    ReinitInstancesResponseBody& operator=(const ReinitInstancesResponseBody &) = default ;
    ReinitInstancesResponseBody& operator=(ReinitInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceResponses_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceResponses Field Functions 
    bool hasInstanceResponses() const { return this->instanceResponses_ != nullptr;};
    void deleteInstanceResponses() { this->instanceResponses_ = nullptr;};
    inline const vector<InstanceOperateResponse> & getInstanceResponses() const { DARABONBA_PTR_GET_CONST(instanceResponses_, vector<InstanceOperateResponse>) };
    inline vector<InstanceOperateResponse> getInstanceResponses() { DARABONBA_PTR_GET(instanceResponses_, vector<InstanceOperateResponse>) };
    inline ReinitInstancesResponseBody& setInstanceResponses(const vector<InstanceOperateResponse> & instanceResponses) { DARABONBA_PTR_SET_VALUE(instanceResponses_, instanceResponses) };
    inline ReinitInstancesResponseBody& setInstanceResponses(vector<InstanceOperateResponse> && instanceResponses) { DARABONBA_PTR_SET_RVALUE(instanceResponses_, instanceResponses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReinitInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<InstanceOperateResponse>> instanceResponses_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
