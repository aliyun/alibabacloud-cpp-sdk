// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEIPWHITELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEIPWHITELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceIpWhitelistResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceIpWhitelistResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ipWhitelists, ipWhitelists_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceIpWhitelistResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ipWhitelists, ipWhitelists_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GetInstanceIpWhitelistResponseBodyData() = default ;
    GetInstanceIpWhitelistResponseBodyData(const GetInstanceIpWhitelistResponseBodyData &) = default ;
    GetInstanceIpWhitelistResponseBodyData(GetInstanceIpWhitelistResponseBodyData &&) = default ;
    GetInstanceIpWhitelistResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceIpWhitelistResponseBodyData() = default ;
    GetInstanceIpWhitelistResponseBodyData& operator=(const GetInstanceIpWhitelistResponseBodyData &) = default ;
    GetInstanceIpWhitelistResponseBodyData& operator=(GetInstanceIpWhitelistResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->ipWhitelists_ != nullptr && this->regionId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceIpWhitelistResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipWhitelists Field Functions 
    bool hasIpWhitelists() const { return this->ipWhitelists_ != nullptr;};
    void deleteIpWhitelists() { this->ipWhitelists_ = nullptr;};
    inline const vector<string> & ipWhitelists() const { DARABONBA_PTR_GET_CONST(ipWhitelists_, vector<string>) };
    inline vector<string> ipWhitelists() { DARABONBA_PTR_GET(ipWhitelists_, vector<string>) };
    inline GetInstanceIpWhitelistResponseBodyData& setIpWhitelists(const vector<string> & ipWhitelists) { DARABONBA_PTR_SET_VALUE(ipWhitelists_, ipWhitelists) };
    inline GetInstanceIpWhitelistResponseBodyData& setIpWhitelists(vector<string> && ipWhitelists) { DARABONBA_PTR_SET_RVALUE(ipWhitelists_, ipWhitelists) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceIpWhitelistResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address whitelists.
    std::shared_ptr<vector<string>> ipWhitelists_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
