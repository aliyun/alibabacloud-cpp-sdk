// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLRESPONSEBODYADDRS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLRESPONSEBODYADDRS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
    };
    DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs() = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs(const DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs &) = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs(DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs &&) = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs() = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs& operator=(const DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs &) = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs& operator=(DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addr_ != nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr> & addr() const { DARABONBA_PTR_GET_CONST(addr_, vector<Models::DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr>) };
    inline vector<Models::DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr> addr() { DARABONBA_PTR_GET(addr_, vector<Models::DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr>) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs& setAddr(const vector<Models::DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs& setAddr(vector<Models::DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr>> addr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
