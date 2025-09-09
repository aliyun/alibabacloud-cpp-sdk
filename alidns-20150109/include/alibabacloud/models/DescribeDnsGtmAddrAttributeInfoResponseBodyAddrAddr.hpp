// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRATTRIBUTEINFORESPONSEBODYADDRADDR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRATTRIBUTEINFORESPONSEBODYADDRADDR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddrAttributeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
    };
    DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr() = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr(const DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr &) = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr(DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr &&) = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr() = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr& operator=(const DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr &) = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr& operator=(DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addr_ != nullptr
        && this->attributeInfo_ != nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline string addr() const { DARABONBA_PTR_GET_DEFAULT(addr_, "") };
    inline DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr& setAddr(string addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };


    // attributeInfo Field Functions 
    bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
    void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
    inline const Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddrAttributeInfo & attributeInfo() const { DARABONBA_PTR_GET_CONST(attributeInfo_, Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddrAttributeInfo) };
    inline Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddrAttributeInfo attributeInfo() { DARABONBA_PTR_GET(attributeInfo_, Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddrAttributeInfo) };
    inline DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr& setAttributeInfo(const Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddrAttributeInfo & attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };
    inline DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddr& setAttributeInfo(Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddrAttributeInfo && attributeInfo) { DARABONBA_PTR_SET_RVALUE(attributeInfo_, attributeInfo) };


  protected:
    // The address in the address pool.
    std::shared_ptr<string> addr_ = nullptr;
    // The information about the source region of the address.
    std::shared_ptr<Models::DescribeDnsGtmAddrAttributeInfoResponseBodyAddrAddrAttributeInfo> attributeInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
