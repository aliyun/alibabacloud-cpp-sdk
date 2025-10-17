// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCESRESPONSEBODYINSTANCERESPONSES_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCESRESPONSEBODYINSTANCERESPONSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartInstancesResponseBodyInstanceResponsesInstanceResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class StartInstancesResponseBodyInstanceResponses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstancesResponseBodyInstanceResponses& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceResponse, instanceResponse_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstancesResponseBodyInstanceResponses& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceResponse, instanceResponse_);
    };
    StartInstancesResponseBodyInstanceResponses() = default ;
    StartInstancesResponseBodyInstanceResponses(const StartInstancesResponseBodyInstanceResponses &) = default ;
    StartInstancesResponseBodyInstanceResponses(StartInstancesResponseBodyInstanceResponses &&) = default ;
    StartInstancesResponseBodyInstanceResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstancesResponseBodyInstanceResponses() = default ;
    StartInstancesResponseBodyInstanceResponses& operator=(const StartInstancesResponseBodyInstanceResponses &) = default ;
    StartInstancesResponseBodyInstanceResponses& operator=(StartInstancesResponseBodyInstanceResponses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceResponse_ == nullptr; };
    // instanceResponse Field Functions 
    bool hasInstanceResponse() const { return this->instanceResponse_ != nullptr;};
    void deleteInstanceResponse() { this->instanceResponse_ = nullptr;};
    inline const vector<Models::StartInstancesResponseBodyInstanceResponsesInstanceResponse> & instanceResponse() const { DARABONBA_PTR_GET_CONST(instanceResponse_, vector<Models::StartInstancesResponseBodyInstanceResponsesInstanceResponse>) };
    inline vector<Models::StartInstancesResponseBodyInstanceResponsesInstanceResponse> instanceResponse() { DARABONBA_PTR_GET(instanceResponse_, vector<Models::StartInstancesResponseBodyInstanceResponsesInstanceResponse>) };
    inline StartInstancesResponseBodyInstanceResponses& setInstanceResponse(const vector<Models::StartInstancesResponseBodyInstanceResponsesInstanceResponse> & instanceResponse) { DARABONBA_PTR_SET_VALUE(instanceResponse_, instanceResponse) };
    inline StartInstancesResponseBodyInstanceResponses& setInstanceResponse(vector<Models::StartInstancesResponseBodyInstanceResponsesInstanceResponse> && instanceResponse) { DARABONBA_PTR_SET_RVALUE(instanceResponse_, instanceResponse) };


  protected:
    std::shared_ptr<vector<Models::StartInstancesResponseBodyInstanceResponsesInstanceResponse>> instanceResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
