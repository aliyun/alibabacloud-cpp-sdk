// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPRAYCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPRAYCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class StopRayClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopRayClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, StopRayClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
    };
    StopRayClusterRequest() = default ;
    StopRayClusterRequest(const StopRayClusterRequest &) = default ;
    StopRayClusterRequest(StopRayClusterRequest &&) = default ;
    StopRayClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopRayClusterRequest() = default ;
    StopRayClusterRequest& operator=(const StopRayClusterRequest &) = default ;
    StopRayClusterRequest& operator=(StopRayClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StopRayClusterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
