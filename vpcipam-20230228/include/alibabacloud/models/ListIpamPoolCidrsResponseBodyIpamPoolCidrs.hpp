// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMPOOLCIDRSRESPONSEBODYIPAMPOOLCIDRS_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMPOOLCIDRSRESPONSEBODYIPAMPOOLCIDRS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamPoolCidrsResponseBodyIpamPoolCidrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamPoolCidrsResponseBodyIpamPoolCidrs& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamPoolCidrsResponseBodyIpamPoolCidrs& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListIpamPoolCidrsResponseBodyIpamPoolCidrs() = default ;
    ListIpamPoolCidrsResponseBodyIpamPoolCidrs(const ListIpamPoolCidrsResponseBodyIpamPoolCidrs &) = default ;
    ListIpamPoolCidrsResponseBodyIpamPoolCidrs(ListIpamPoolCidrsResponseBodyIpamPoolCidrs &&) = default ;
    ListIpamPoolCidrsResponseBodyIpamPoolCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamPoolCidrsResponseBodyIpamPoolCidrs() = default ;
    ListIpamPoolCidrsResponseBodyIpamPoolCidrs& operator=(const ListIpamPoolCidrsResponseBodyIpamPoolCidrs &) = default ;
    ListIpamPoolCidrsResponseBodyIpamPoolCidrs& operator=(ListIpamPoolCidrsResponseBodyIpamPoolCidrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->ipamPoolId_ == nullptr && return this->status_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline ListIpamPoolCidrsResponseBodyIpamPoolCidrs& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string ipamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline ListIpamPoolCidrsResponseBodyIpamPoolCidrs& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIpamPoolCidrsResponseBodyIpamPoolCidrs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The provisioned CIDR block.
    std::shared_ptr<string> cidr_ = nullptr;
    // The ID of the IPAM pool.
    std::shared_ptr<string> ipamPoolId_ = nullptr;
    // The status of the CIDR block provisioned to the IPAM pool. Valid values:
    // 
    // *   **Created**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
