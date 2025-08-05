// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPPOOLLISTRESPONSEBODYIPPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPPOOLLISTRESPONSEBODYIPPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DedicatedIpPoolListResponseBodyIpPoolsIps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpPoolListResponseBodyIpPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpPoolListResponseBodyIpPools& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpPoolListResponseBodyIpPools& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DedicatedIpPoolListResponseBodyIpPools() = default ;
    DedicatedIpPoolListResponseBodyIpPools(const DedicatedIpPoolListResponseBodyIpPools &) = default ;
    DedicatedIpPoolListResponseBodyIpPools(DedicatedIpPoolListResponseBodyIpPools &&) = default ;
    DedicatedIpPoolListResponseBodyIpPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpPoolListResponseBodyIpPools() = default ;
    DedicatedIpPoolListResponseBodyIpPools& operator=(const DedicatedIpPoolListResponseBodyIpPools &) = default ;
    DedicatedIpPoolListResponseBodyIpPools& operator=(DedicatedIpPoolListResponseBodyIpPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->id_ != nullptr && this->ipCount_ != nullptr && this->ips_ != nullptr && this->name_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DedicatedIpPoolListResponseBodyIpPools& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DedicatedIpPoolListResponseBodyIpPools& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ipCount Field Functions 
    bool hasIpCount() const { return this->ipCount_ != nullptr;};
    void deleteIpCount() { this->ipCount_ = nullptr;};
    inline int32_t ipCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, 0) };
    inline DedicatedIpPoolListResponseBodyIpPools& setIpCount(int32_t ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<Models::DedicatedIpPoolListResponseBodyIpPoolsIps> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<Models::DedicatedIpPoolListResponseBodyIpPoolsIps>) };
    inline vector<Models::DedicatedIpPoolListResponseBodyIpPoolsIps> ips() { DARABONBA_PTR_GET(ips_, vector<Models::DedicatedIpPoolListResponseBodyIpPoolsIps>) };
    inline DedicatedIpPoolListResponseBodyIpPools& setIps(const vector<Models::DedicatedIpPoolListResponseBodyIpPoolsIps> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline DedicatedIpPoolListResponseBodyIpPools& setIps(vector<Models::DedicatedIpPoolListResponseBodyIpPoolsIps> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DedicatedIpPoolListResponseBodyIpPools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Creation time
    std::shared_ptr<string> createTime_ = nullptr;
    // IP pool ID
    std::shared_ptr<string> id_ = nullptr;
    // Number of source IP addresses
    std::shared_ptr<int32_t> ipCount_ = nullptr;
    // List of IPs
    std::shared_ptr<vector<Models::DedicatedIpPoolListResponseBodyIpPoolsIps>> ips_ = nullptr;
    // IP pool name
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
