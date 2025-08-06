// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyInstanceDefaultEndpoint.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyInstanceDomainConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceResponseBodyInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultEndpoint, defaultEndpoint_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainConfig, domainConfig_);
      DARABONBA_PTR_TO_JSON(EgressAddresses, egressAddresses_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultEndpoint, defaultEndpoint_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainConfig, domainConfig_);
      DARABONBA_PTR_FROM_JSON(EgressAddresses, egressAddresses_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetInstanceResponseBodyInstance() = default ;
    GetInstanceResponseBodyInstance(const GetInstanceResponseBodyInstance &) = default ;
    GetInstanceResponseBodyInstance(GetInstanceResponseBodyInstance &&) = default ;
    GetInstanceResponseBodyInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyInstance() = default ;
    GetInstanceResponseBodyInstance& operator=(const GetInstanceResponseBodyInstance &) = default ;
    GetInstanceResponseBodyInstance& operator=(GetInstanceResponseBodyInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->defaultEndpoint_ != nullptr && this->description_ != nullptr && this->domainConfig_ != nullptr && this->egressAddresses_ != nullptr && this->instanceId_ != nullptr
        && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetInstanceResponseBodyInstance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultEndpoint Field Functions 
    bool hasDefaultEndpoint() const { return this->defaultEndpoint_ != nullptr;};
    void deleteDefaultEndpoint() { this->defaultEndpoint_ = nullptr;};
    inline const Models::GetInstanceResponseBodyInstanceDefaultEndpoint & defaultEndpoint() const { DARABONBA_PTR_GET_CONST(defaultEndpoint_, Models::GetInstanceResponseBodyInstanceDefaultEndpoint) };
    inline Models::GetInstanceResponseBodyInstanceDefaultEndpoint defaultEndpoint() { DARABONBA_PTR_GET(defaultEndpoint_, Models::GetInstanceResponseBodyInstanceDefaultEndpoint) };
    inline GetInstanceResponseBodyInstance& setDefaultEndpoint(const Models::GetInstanceResponseBodyInstanceDefaultEndpoint & defaultEndpoint) { DARABONBA_PTR_SET_VALUE(defaultEndpoint_, defaultEndpoint) };
    inline GetInstanceResponseBodyInstance& setDefaultEndpoint(Models::GetInstanceResponseBodyInstanceDefaultEndpoint && defaultEndpoint) { DARABONBA_PTR_SET_RVALUE(defaultEndpoint_, defaultEndpoint) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetInstanceResponseBodyInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainConfig Field Functions 
    bool hasDomainConfig() const { return this->domainConfig_ != nullptr;};
    void deleteDomainConfig() { this->domainConfig_ = nullptr;};
    inline const Models::GetInstanceResponseBodyInstanceDomainConfig & domainConfig() const { DARABONBA_PTR_GET_CONST(domainConfig_, Models::GetInstanceResponseBodyInstanceDomainConfig) };
    inline Models::GetInstanceResponseBodyInstanceDomainConfig domainConfig() { DARABONBA_PTR_GET(domainConfig_, Models::GetInstanceResponseBodyInstanceDomainConfig) };
    inline GetInstanceResponseBodyInstance& setDomainConfig(const Models::GetInstanceResponseBodyInstanceDomainConfig & domainConfig) { DARABONBA_PTR_SET_VALUE(domainConfig_, domainConfig) };
    inline GetInstanceResponseBodyInstance& setDomainConfig(Models::GetInstanceResponseBodyInstanceDomainConfig && domainConfig) { DARABONBA_PTR_SET_RVALUE(domainConfig_, domainConfig) };


    // egressAddresses Field Functions 
    bool hasEgressAddresses() const { return this->egressAddresses_ != nullptr;};
    void deleteEgressAddresses() { this->egressAddresses_ = nullptr;};
    inline const vector<string> & egressAddresses() const { DARABONBA_PTR_GET_CONST(egressAddresses_, vector<string>) };
    inline vector<string> egressAddresses() { DARABONBA_PTR_GET(egressAddresses_, vector<string>) };
    inline GetInstanceResponseBodyInstance& setEgressAddresses(const vector<string> & egressAddresses) { DARABONBA_PTR_SET_VALUE(egressAddresses_, egressAddresses) };
    inline GetInstanceResponseBodyInstance& setEgressAddresses(vector<string> && egressAddresses) { DARABONBA_PTR_SET_RVALUE(egressAddresses_, egressAddresses) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceResponseBodyInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceResponseBodyInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the instance was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The default endpoint of the instance.
    std::shared_ptr<Models::GetInstanceResponseBodyInstanceDefaultEndpoint> defaultEndpoint_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The default domain of the instance.
    std::shared_ptr<Models::GetInstanceResponseBodyInstanceDomainConfig> domainConfig_ = nullptr;
    // The outbound public CIDR blocks of the instance. For example, when you synchronize Active Directory (AD) accounts, the IDaaS EIAM instance accesses your AD service by using the outbound public CIDR blocks.
    std::shared_ptr<vector<string>> egressAddresses_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   creating
    // *   running
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
