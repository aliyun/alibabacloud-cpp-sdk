// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPINSTANCESRESPONSEBODY_HPP_
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
  class StopInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceResponses, instanceResponses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StopInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceResponses, instanceResponses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StopInstancesResponseBody() = default ;
    StopInstancesResponseBody(const StopInstancesResponseBody &) = default ;
    StopInstancesResponseBody(StopInstancesResponseBody &&) = default ;
    StopInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopInstancesResponseBody() = default ;
    StopInstancesResponseBody& operator=(const StopInstancesResponseBody &) = default ;
    StopInstancesResponseBody& operator=(StopInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceResponses_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceResponses Field Functions 
    bool hasInstanceResponses() const { return this->instanceResponses_ != nullptr;};
    void deleteInstanceResponses() { this->instanceResponses_ = nullptr;};
    inline const vector<InstanceOperateResponse> & instanceResponses() const { DARABONBA_PTR_GET_CONST(instanceResponses_, vector<InstanceOperateResponse>) };
    inline vector<InstanceOperateResponse> instanceResponses() { DARABONBA_PTR_GET(instanceResponses_, vector<InstanceOperateResponse>) };
    inline StopInstancesResponseBody& setInstanceResponses(const vector<InstanceOperateResponse> & instanceResponses) { DARABONBA_PTR_SET_VALUE(instanceResponses_, instanceResponses) };
    inline StopInstancesResponseBody& setInstanceResponses(vector<InstanceOperateResponse> && instanceResponses) { DARABONBA_PTR_SET_RVALUE(instanceResponses_, instanceResponses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<InstanceOperateResponse>> instanceResponses_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
