// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRESSPOOLAVAILABLECONFIGRESPONSEBODYATTRIBUTEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRESSPOOLAVAILABLECONFIGRESPONSEBODYATTRIBUTEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfosAttributeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
    };
    DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos() = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos(const DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos &) = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos(DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos &&) = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos() = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos& operator=(const DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos &) = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos& operator=(DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeInfo_ == nullptr; };
    // attributeInfo Field Functions 
    bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
    void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfosAttributeInfo> & attributeInfo() const { DARABONBA_PTR_GET_CONST(attributeInfo_, vector<Models::DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfosAttributeInfo>) };
    inline vector<Models::DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfosAttributeInfo> attributeInfo() { DARABONBA_PTR_GET(attributeInfo_, vector<Models::DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfosAttributeInfo>) };
    inline DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos& setAttributeInfo(const vector<Models::DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfosAttributeInfo> & attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };
    inline DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos& setAttributeInfo(vector<Models::DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfosAttributeInfo> && attributeInfo) { DARABONBA_PTR_SET_RVALUE(attributeInfo_, attributeInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfosAttributeInfo>> attributeInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
