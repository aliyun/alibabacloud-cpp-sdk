// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SaleControlAvailableResource, saleControlAvailableResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SaleControlAvailableResource, saleControlAvailableResource_);
    };
    DescribeEnsSaleControlAvailableResourceResponseBody() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBody(const DescribeEnsSaleControlAvailableResourceResponseBody &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBody(DescribeEnsSaleControlAvailableResourceResponseBody &&) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlAvailableResourceResponseBody() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBody& operator=(const DescribeEnsSaleControlAvailableResourceResponseBody &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBody& operator=(DescribeEnsSaleControlAvailableResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->saleControlAvailableResource_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saleControlAvailableResource Field Functions 
    bool hasSaleControlAvailableResource() const { return this->saleControlAvailableResource_ != nullptr;};
    void deleteSaleControlAvailableResource() { this->saleControlAvailableResource_ = nullptr;};
    inline const vector<DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource> & saleControlAvailableResource() const { DARABONBA_PTR_GET_CONST(saleControlAvailableResource_, vector<DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource>) };
    inline vector<DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource> saleControlAvailableResource() { DARABONBA_PTR_GET(saleControlAvailableResource_, vector<DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource>) };
    inline DescribeEnsSaleControlAvailableResourceResponseBody& setSaleControlAvailableResource(const vector<DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource> & saleControlAvailableResource) { DARABONBA_PTR_SET_VALUE(saleControlAvailableResource_, saleControlAvailableResource) };
    inline DescribeEnsSaleControlAvailableResourceResponseBody& setSaleControlAvailableResource(vector<DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource> && saleControlAvailableResource) { DARABONBA_PTR_SET_RVALUE(saleControlAvailableResource_, saleControlAvailableResource) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource>> saleControlAvailableResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
