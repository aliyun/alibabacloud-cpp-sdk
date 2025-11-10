// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTNETWORKINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTNETWORKINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateInstanceRequestNetworkInfoInternetInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UpdateInstanceRequestNetworkInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequestNetworkInfo& obj) { 
      DARABONBA_PTR_TO_JSON(internetInfo, internetInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequestNetworkInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(internetInfo, internetInfo_);
    };
    UpdateInstanceRequestNetworkInfo() = default ;
    UpdateInstanceRequestNetworkInfo(const UpdateInstanceRequestNetworkInfo &) = default ;
    UpdateInstanceRequestNetworkInfo(UpdateInstanceRequestNetworkInfo &&) = default ;
    UpdateInstanceRequestNetworkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequestNetworkInfo() = default ;
    UpdateInstanceRequestNetworkInfo& operator=(const UpdateInstanceRequestNetworkInfo &) = default ;
    UpdateInstanceRequestNetworkInfo& operator=(UpdateInstanceRequestNetworkInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->internetInfo_ == nullptr; };
    // internetInfo Field Functions 
    bool hasInternetInfo() const { return this->internetInfo_ != nullptr;};
    void deleteInternetInfo() { this->internetInfo_ = nullptr;};
    inline const Models::UpdateInstanceRequestNetworkInfoInternetInfo & internetInfo() const { DARABONBA_PTR_GET_CONST(internetInfo_, Models::UpdateInstanceRequestNetworkInfoInternetInfo) };
    inline Models::UpdateInstanceRequestNetworkInfoInternetInfo internetInfo() { DARABONBA_PTR_GET(internetInfo_, Models::UpdateInstanceRequestNetworkInfoInternetInfo) };
    inline UpdateInstanceRequestNetworkInfo& setInternetInfo(const Models::UpdateInstanceRequestNetworkInfoInternetInfo & internetInfo) { DARABONBA_PTR_SET_VALUE(internetInfo_, internetInfo) };
    inline UpdateInstanceRequestNetworkInfo& setInternetInfo(Models::UpdateInstanceRequestNetworkInfoInternetInfo && internetInfo) { DARABONBA_PTR_SET_RVALUE(internetInfo_, internetInfo) };


  protected:
    // The information about the Internet over which the instance is accessed. This parameter takes effect only if the Internet access feature is enabled for the instance.
    std::shared_ptr<Models::UpdateInstanceRequestNetworkInfoInternetInfo> internetInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
