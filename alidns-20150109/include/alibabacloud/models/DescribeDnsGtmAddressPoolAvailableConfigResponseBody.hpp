// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRESSPOOLAVAILABLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRESSPOOLAVAILABLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAddressPoolAvailableConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAddressPoolAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeInfos, attributeInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAddressPoolAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeInfos, attributeInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDnsGtmAddressPoolAvailableConfigResponseBody() = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBody(const DescribeDnsGtmAddressPoolAvailableConfigResponseBody &) = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBody(DescribeDnsGtmAddressPoolAvailableConfigResponseBody &&) = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAddressPoolAvailableConfigResponseBody() = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBody& operator=(const DescribeDnsGtmAddressPoolAvailableConfigResponseBody &) = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBody& operator=(DescribeDnsGtmAddressPoolAvailableConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributeInfos_ != nullptr
        && this->requestId_ != nullptr; };
    // attributeInfos Field Functions 
    bool hasAttributeInfos() const { return this->attributeInfos_ != nullptr;};
    void deleteAttributeInfos() { this->attributeInfos_ = nullptr;};
    inline const DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos & attributeInfos() const { DARABONBA_PTR_GET_CONST(attributeInfos_, DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos) };
    inline DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos attributeInfos() { DARABONBA_PTR_GET(attributeInfos_, DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos) };
    inline DescribeDnsGtmAddressPoolAvailableConfigResponseBody& setAttributeInfos(const DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos & attributeInfos) { DARABONBA_PTR_SET_VALUE(attributeInfos_, attributeInfos) };
    inline DescribeDnsGtmAddressPoolAvailableConfigResponseBody& setAttributeInfos(DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos && attributeInfos) { DARABONBA_PTR_SET_RVALUE(attributeInfos_, attributeInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmAddressPoolAvailableConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The supported source regions.
    std::shared_ptr<DescribeDnsGtmAddressPoolAvailableConfigResponseBodyAttributeInfos> attributeInfos_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
