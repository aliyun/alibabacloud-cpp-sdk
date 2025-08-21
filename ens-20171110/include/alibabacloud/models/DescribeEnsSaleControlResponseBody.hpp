// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsSaleControlResponseBodySaleControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SaleControl, saleControl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SaleControl, saleControl_);
    };
    DescribeEnsSaleControlResponseBody() = default ;
    DescribeEnsSaleControlResponseBody(const DescribeEnsSaleControlResponseBody &) = default ;
    DescribeEnsSaleControlResponseBody(DescribeEnsSaleControlResponseBody &&) = default ;
    DescribeEnsSaleControlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlResponseBody() = default ;
    DescribeEnsSaleControlResponseBody& operator=(const DescribeEnsSaleControlResponseBody &) = default ;
    DescribeEnsSaleControlResponseBody& operator=(DescribeEnsSaleControlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->saleControl_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsSaleControlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saleControl Field Functions 
    bool hasSaleControl() const { return this->saleControl_ != nullptr;};
    void deleteSaleControl() { this->saleControl_ = nullptr;};
    inline const vector<DescribeEnsSaleControlResponseBodySaleControl> & saleControl() const { DARABONBA_PTR_GET_CONST(saleControl_, vector<DescribeEnsSaleControlResponseBodySaleControl>) };
    inline vector<DescribeEnsSaleControlResponseBodySaleControl> saleControl() { DARABONBA_PTR_GET(saleControl_, vector<DescribeEnsSaleControlResponseBodySaleControl>) };
    inline DescribeEnsSaleControlResponseBody& setSaleControl(const vector<DescribeEnsSaleControlResponseBodySaleControl> & saleControl) { DARABONBA_PTR_SET_VALUE(saleControl_, saleControl) };
    inline DescribeEnsSaleControlResponseBody& setSaleControl(vector<DescribeEnsSaleControlResponseBodySaleControl> && saleControl) { DARABONBA_PTR_SET_RVALUE(saleControl_, saleControl) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeEnsSaleControlResponseBodySaleControl>> saleControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
