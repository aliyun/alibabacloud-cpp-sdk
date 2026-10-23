// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCESERVICESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCESERVICESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GetGovernanceServiceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceServiceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceServiceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetGovernanceServiceStatusRequest() = default ;
    GetGovernanceServiceStatusRequest(const GetGovernanceServiceStatusRequest &) = default ;
    GetGovernanceServiceStatusRequest(GetGovernanceServiceStatusRequest &&) = default ;
    GetGovernanceServiceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceServiceStatusRequest() = default ;
    GetGovernanceServiceStatusRequest& operator=(const GetGovernanceServiceStatusRequest &) = default ;
    GetGovernanceServiceStatusRequest& operator=(GetGovernanceServiceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetGovernanceServiceStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // 必填。待操作或查询的地域 ID，必须为服务支持的合法地域，且与本次调用 endpoint 对应的地域一致；不提供隐式默认地域。
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
