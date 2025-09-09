// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCEADDRESSPOOLRESPONSEBODYADDRS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCEADDRESSPOOLRESPONSEBODYADDRS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmInstanceAddressPoolResponseBodyAddrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmInstanceAddressPoolResponseBodyAddrs& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmInstanceAddressPoolResponseBodyAddrs& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
    };
    DescribeGtmInstanceAddressPoolResponseBodyAddrs() = default ;
    DescribeGtmInstanceAddressPoolResponseBodyAddrs(const DescribeGtmInstanceAddressPoolResponseBodyAddrs &) = default ;
    DescribeGtmInstanceAddressPoolResponseBodyAddrs(DescribeGtmInstanceAddressPoolResponseBodyAddrs &&) = default ;
    DescribeGtmInstanceAddressPoolResponseBodyAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmInstanceAddressPoolResponseBodyAddrs() = default ;
    DescribeGtmInstanceAddressPoolResponseBodyAddrs& operator=(const DescribeGtmInstanceAddressPoolResponseBodyAddrs &) = default ;
    DescribeGtmInstanceAddressPoolResponseBodyAddrs& operator=(DescribeGtmInstanceAddressPoolResponseBodyAddrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addr_ != nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const vector<Models::DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr> & addr() const { DARABONBA_PTR_GET_CONST(addr_, vector<Models::DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr>) };
    inline vector<Models::DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr> addr() { DARABONBA_PTR_GET(addr_, vector<Models::DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr>) };
    inline DescribeGtmInstanceAddressPoolResponseBodyAddrs& setAddr(const vector<Models::DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline DescribeGtmInstanceAddressPoolResponseBodyAddrs& setAddr(vector<Models::DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


  protected:
    std::shared_ptr<vector<Models::DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr>> addr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
