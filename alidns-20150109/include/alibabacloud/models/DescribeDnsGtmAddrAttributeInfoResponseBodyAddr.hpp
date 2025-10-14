// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRATTRIBUTEINFORESPONSEBODYADDR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRATTRIBUTEINFORESPONSEBODYADDR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAddrAttributeInfoResponseBodyAddr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAddrAttributeInfoResponseBodyAddr& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAddrAttributeInfoResponseBodyAddr& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
    };
    DescribeDnsGtmAddrAttributeInfoResponseBodyAddr() = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBodyAddr(const DescribeDnsGtmAddrAttributeInfoResponseBodyAddr &) = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBodyAddr(DescribeDnsGtmAddrAttributeInfoResponseBodyAddr &&) = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBodyAddr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAddrAttributeInfoResponseBodyAddr() = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBodyAddr& operator=(const DescribeDnsGtmAddrAttributeInfoResponseBodyAddr &) = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBodyAddr& operator=(DescribeDnsGtmAddrAttributeInfoResponseBodyAddr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addr_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr> & addr() const { DARABONBA_PTR_GET_CONST(addr_, vector<Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr>) };
    inline vector<Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr> addr() { DARABONBA_PTR_GET(addr_, vector<Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr>) };
    inline DescribeDnsGtmAddrAttributeInfoResponseBodyAddr& setAddr(const vector<Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline DescribeDnsGtmAddrAttributeInfoResponseBodyAddr& setAddr(vector<Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr>> addr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
