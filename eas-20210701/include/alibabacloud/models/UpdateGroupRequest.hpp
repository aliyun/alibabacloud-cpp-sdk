// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TrafficMode, trafficMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TrafficMode, trafficMode_);
    };
    UpdateGroupRequest() = default ;
    UpdateGroupRequest(const UpdateGroupRequest &) = default ;
    UpdateGroupRequest(UpdateGroupRequest &&) = default ;
    UpdateGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGroupRequest() = default ;
    UpdateGroupRequest& operator=(const UpdateGroupRequest &) = default ;
    UpdateGroupRequest& operator=(UpdateGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trafficMode_ == nullptr; };
    // trafficMode Field Functions 
    bool hasTrafficMode() const { return this->trafficMode_ != nullptr;};
    void deleteTrafficMode() { this->trafficMode_ = nullptr;};
    inline string getTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(trafficMode_, "") };
    inline UpdateGroupRequest& setTrafficMode(string trafficMode) { DARABONBA_PTR_SET_VALUE(trafficMode_, trafficMode) };


  protected:
    // The traffic mode. Valid values: auto and customized. auto: The traffic is automatically allocated based on the proportion of the number of instances to the total number of instances. customized: The traffic is allocated based on a custom weight.
    shared_ptr<string> trafficMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
