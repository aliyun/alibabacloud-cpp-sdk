// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveInstancesResponseBodyIgnoredInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class RemoveInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoredInstances, ignoredInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoredInstances, ignoredInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
    };
    RemoveInstancesResponseBody() = default ;
    RemoveInstancesResponseBody(const RemoveInstancesResponseBody &) = default ;
    RemoveInstancesResponseBody(RemoveInstancesResponseBody &&) = default ;
    RemoveInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveInstancesResponseBody() = default ;
    RemoveInstancesResponseBody& operator=(const RemoveInstancesResponseBody &) = default ;
    RemoveInstancesResponseBody& operator=(RemoveInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoredInstances_ == nullptr
        && return this->requestId_ == nullptr && return this->scalingActivityId_ == nullptr; };
    // ignoredInstances Field Functions 
    bool hasIgnoredInstances() const { return this->ignoredInstances_ != nullptr;};
    void deleteIgnoredInstances() { this->ignoredInstances_ = nullptr;};
    inline const vector<RemoveInstancesResponseBodyIgnoredInstances> & ignoredInstances() const { DARABONBA_PTR_GET_CONST(ignoredInstances_, vector<RemoveInstancesResponseBodyIgnoredInstances>) };
    inline vector<RemoveInstancesResponseBodyIgnoredInstances> ignoredInstances() { DARABONBA_PTR_GET(ignoredInstances_, vector<RemoveInstancesResponseBodyIgnoredInstances>) };
    inline RemoveInstancesResponseBody& setIgnoredInstances(const vector<RemoveInstancesResponseBodyIgnoredInstances> & ignoredInstances) { DARABONBA_PTR_SET_VALUE(ignoredInstances_, ignoredInstances) };
    inline RemoveInstancesResponseBody& setIgnoredInstances(vector<RemoveInstancesResponseBodyIgnoredInstances> && ignoredInstances) { DARABONBA_PTR_SET_RVALUE(ignoredInstances_, ignoredInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string scalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline RemoveInstancesResponseBody& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


  protected:
    std::shared_ptr<vector<RemoveInstancesResponseBodyIgnoredInstances>> ignoredInstances_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the scaling activity.
    std::shared_ptr<string> scalingActivityId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
