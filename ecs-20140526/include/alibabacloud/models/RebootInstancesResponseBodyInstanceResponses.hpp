// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTINSTANCESRESPONSEBODYINSTANCERESPONSES_HPP_
#define ALIBABACLOUD_MODELS_REBOOTINSTANCESRESPONSEBODYINSTANCERESPONSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RebootInstancesResponseBodyInstanceResponsesInstanceResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RebootInstancesResponseBodyInstanceResponses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootInstancesResponseBodyInstanceResponses& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceResponse, instanceResponse_);
    };
    friend void from_json(const Darabonba::Json& j, RebootInstancesResponseBodyInstanceResponses& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceResponse, instanceResponse_);
    };
    RebootInstancesResponseBodyInstanceResponses() = default ;
    RebootInstancesResponseBodyInstanceResponses(const RebootInstancesResponseBodyInstanceResponses &) = default ;
    RebootInstancesResponseBodyInstanceResponses(RebootInstancesResponseBodyInstanceResponses &&) = default ;
    RebootInstancesResponseBodyInstanceResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootInstancesResponseBodyInstanceResponses() = default ;
    RebootInstancesResponseBodyInstanceResponses& operator=(const RebootInstancesResponseBodyInstanceResponses &) = default ;
    RebootInstancesResponseBodyInstanceResponses& operator=(RebootInstancesResponseBodyInstanceResponses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceResponse_ != nullptr; };
    // instanceResponse Field Functions 
    bool hasInstanceResponse() const { return this->instanceResponse_ != nullptr;};
    void deleteInstanceResponse() { this->instanceResponse_ = nullptr;};
    inline const vector<Models::RebootInstancesResponseBodyInstanceResponsesInstanceResponse> & instanceResponse() const { DARABONBA_PTR_GET_CONST(instanceResponse_, vector<Models::RebootInstancesResponseBodyInstanceResponsesInstanceResponse>) };
    inline vector<Models::RebootInstancesResponseBodyInstanceResponsesInstanceResponse> instanceResponse() { DARABONBA_PTR_GET(instanceResponse_, vector<Models::RebootInstancesResponseBodyInstanceResponsesInstanceResponse>) };
    inline RebootInstancesResponseBodyInstanceResponses& setInstanceResponse(const vector<Models::RebootInstancesResponseBodyInstanceResponsesInstanceResponse> & instanceResponse) { DARABONBA_PTR_SET_VALUE(instanceResponse_, instanceResponse) };
    inline RebootInstancesResponseBodyInstanceResponses& setInstanceResponse(vector<Models::RebootInstancesResponseBodyInstanceResponsesInstanceResponse> && instanceResponse) { DARABONBA_PTR_SET_RVALUE(instanceResponse_, instanceResponse) };


  protected:
    std::shared_ptr<vector<Models::RebootInstancesResponseBodyInstanceResponsesInstanceResponse>> instanceResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
