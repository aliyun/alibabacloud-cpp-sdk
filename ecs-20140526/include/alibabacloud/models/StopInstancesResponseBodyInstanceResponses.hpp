// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPINSTANCESRESPONSEBODYINSTANCERESPONSES_HPP_
#define ALIBABACLOUD_MODELS_STOPINSTANCESRESPONSEBODYINSTANCERESPONSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StopInstancesResponseBodyInstanceResponsesInstanceResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class StopInstancesResponseBodyInstanceResponses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopInstancesResponseBodyInstanceResponses& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceResponse, instanceResponse_);
    };
    friend void from_json(const Darabonba::Json& j, StopInstancesResponseBodyInstanceResponses& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceResponse, instanceResponse_);
    };
    StopInstancesResponseBodyInstanceResponses() = default ;
    StopInstancesResponseBodyInstanceResponses(const StopInstancesResponseBodyInstanceResponses &) = default ;
    StopInstancesResponseBodyInstanceResponses(StopInstancesResponseBodyInstanceResponses &&) = default ;
    StopInstancesResponseBodyInstanceResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopInstancesResponseBodyInstanceResponses() = default ;
    StopInstancesResponseBodyInstanceResponses& operator=(const StopInstancesResponseBodyInstanceResponses &) = default ;
    StopInstancesResponseBodyInstanceResponses& operator=(StopInstancesResponseBodyInstanceResponses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceResponse_ != nullptr; };
    // instanceResponse Field Functions 
    bool hasInstanceResponse() const { return this->instanceResponse_ != nullptr;};
    void deleteInstanceResponse() { this->instanceResponse_ = nullptr;};
    inline const vector<Models::StopInstancesResponseBodyInstanceResponsesInstanceResponse> & instanceResponse() const { DARABONBA_PTR_GET_CONST(instanceResponse_, vector<Models::StopInstancesResponseBodyInstanceResponsesInstanceResponse>) };
    inline vector<Models::StopInstancesResponseBodyInstanceResponsesInstanceResponse> instanceResponse() { DARABONBA_PTR_GET(instanceResponse_, vector<Models::StopInstancesResponseBodyInstanceResponsesInstanceResponse>) };
    inline StopInstancesResponseBodyInstanceResponses& setInstanceResponse(const vector<Models::StopInstancesResponseBodyInstanceResponsesInstanceResponse> & instanceResponse) { DARABONBA_PTR_SET_VALUE(instanceResponse_, instanceResponse) };
    inline StopInstancesResponseBodyInstanceResponses& setInstanceResponse(vector<Models::StopInstancesResponseBodyInstanceResponsesInstanceResponse> && instanceResponse) { DARABONBA_PTR_SET_RVALUE(instanceResponse_, instanceResponse) };


  protected:
    std::shared_ptr<vector<Models::StopInstancesResponseBodyInstanceResponsesInstanceResponse>> instanceResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
