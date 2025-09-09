// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLRESPONSEBODYADDRESSESADDRESSREQUESTSOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLRESPONSEBODYADDRESSESADDRESSREQUESTSOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource& obj) { 
      DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
    };
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource() = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource(const DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource &) = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource(DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource &&) = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource() = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource& operator=(const DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource &) = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource& operator=(DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestSource_ != nullptr; };
    // requestSource Field Functions 
    bool hasRequestSource() const { return this->requestSource_ != nullptr;};
    void deleteRequestSource() { this->requestSource_ = nullptr;};
    inline const vector<string> & requestSource() const { DARABONBA_PTR_GET_CONST(requestSource_, vector<string>) };
    inline vector<string> requestSource() { DARABONBA_PTR_GET(requestSource_, vector<string>) };
    inline DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource& setRequestSource(const vector<string> & requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };
    inline DescribeCloudGtmAddressPoolResponseBodyAddressesAddressRequestSource& setRequestSource(vector<string> && requestSource) { DARABONBA_PTR_SET_RVALUE(requestSource_, requestSource) };


  protected:
    std::shared_ptr<vector<string>> requestSource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
