// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetDedicatedIpWarmUpInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDedicatedIpWarmUpInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedIp, dedicatedIp_);
    };
    friend void from_json(const Darabonba::Json& j, GetDedicatedIpWarmUpInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedIp, dedicatedIp_);
    };
    GetDedicatedIpWarmUpInfoRequest() = default ;
    GetDedicatedIpWarmUpInfoRequest(const GetDedicatedIpWarmUpInfoRequest &) = default ;
    GetDedicatedIpWarmUpInfoRequest(GetDedicatedIpWarmUpInfoRequest &&) = default ;
    GetDedicatedIpWarmUpInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDedicatedIpWarmUpInfoRequest() = default ;
    GetDedicatedIpWarmUpInfoRequest& operator=(const GetDedicatedIpWarmUpInfoRequest &) = default ;
    GetDedicatedIpWarmUpInfoRequest& operator=(GetDedicatedIpWarmUpInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dedicatedIp_ != nullptr; };
    // dedicatedIp Field Functions 
    bool hasDedicatedIp() const { return this->dedicatedIp_ != nullptr;};
    void deleteDedicatedIp() { this->dedicatedIp_ = nullptr;};
    inline string dedicatedIp() const { DARABONBA_PTR_GET_DEFAULT(dedicatedIp_, "") };
    inline GetDedicatedIpWarmUpInfoRequest& setDedicatedIp(string dedicatedIp) { DARABONBA_PTR_SET_VALUE(dedicatedIp_, dedicatedIp) };


  protected:
    std::shared_ptr<string> dedicatedIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
