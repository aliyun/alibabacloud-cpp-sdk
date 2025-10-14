// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLSTOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLSTOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsSaleControlStockResponseBodySaleControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlStockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlStockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SaleControl, saleControl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlStockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SaleControl, saleControl_);
    };
    DescribeEnsSaleControlStockResponseBody() = default ;
    DescribeEnsSaleControlStockResponseBody(const DescribeEnsSaleControlStockResponseBody &) = default ;
    DescribeEnsSaleControlStockResponseBody(DescribeEnsSaleControlStockResponseBody &&) = default ;
    DescribeEnsSaleControlStockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlStockResponseBody() = default ;
    DescribeEnsSaleControlStockResponseBody& operator=(const DescribeEnsSaleControlStockResponseBody &) = default ;
    DescribeEnsSaleControlStockResponseBody& operator=(DescribeEnsSaleControlStockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->saleControl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsSaleControlStockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saleControl Field Functions 
    bool hasSaleControl() const { return this->saleControl_ != nullptr;};
    void deleteSaleControl() { this->saleControl_ = nullptr;};
    inline const vector<DescribeEnsSaleControlStockResponseBodySaleControl> & saleControl() const { DARABONBA_PTR_GET_CONST(saleControl_, vector<DescribeEnsSaleControlStockResponseBodySaleControl>) };
    inline vector<DescribeEnsSaleControlStockResponseBodySaleControl> saleControl() { DARABONBA_PTR_GET(saleControl_, vector<DescribeEnsSaleControlStockResponseBodySaleControl>) };
    inline DescribeEnsSaleControlStockResponseBody& setSaleControl(const vector<DescribeEnsSaleControlStockResponseBodySaleControl> & saleControl) { DARABONBA_PTR_SET_VALUE(saleControl_, saleControl) };
    inline DescribeEnsSaleControlStockResponseBody& setSaleControl(vector<DescribeEnsSaleControlStockResponseBodySaleControl> && saleControl) { DARABONBA_PTR_SET_RVALUE(saleControl_, saleControl) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeEnsSaleControlStockResponseBodySaleControl>> saleControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
