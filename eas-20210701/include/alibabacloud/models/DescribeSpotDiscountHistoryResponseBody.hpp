// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTDISCOUNTHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTDISCOUNTHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSpotDiscountHistoryResponseBodySpotDiscounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeSpotDiscountHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotDiscountHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpotDiscounts, spotDiscounts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotDiscountHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpotDiscounts, spotDiscounts_);
    };
    DescribeSpotDiscountHistoryResponseBody() = default ;
    DescribeSpotDiscountHistoryResponseBody(const DescribeSpotDiscountHistoryResponseBody &) = default ;
    DescribeSpotDiscountHistoryResponseBody(DescribeSpotDiscountHistoryResponseBody &&) = default ;
    DescribeSpotDiscountHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotDiscountHistoryResponseBody() = default ;
    DescribeSpotDiscountHistoryResponseBody& operator=(const DescribeSpotDiscountHistoryResponseBody &) = default ;
    DescribeSpotDiscountHistoryResponseBody& operator=(DescribeSpotDiscountHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->spotDiscounts_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSpotDiscountHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spotDiscounts Field Functions 
    bool hasSpotDiscounts() const { return this->spotDiscounts_ != nullptr;};
    void deleteSpotDiscounts() { this->spotDiscounts_ = nullptr;};
    inline const vector<DescribeSpotDiscountHistoryResponseBodySpotDiscounts> & spotDiscounts() const { DARABONBA_PTR_GET_CONST(spotDiscounts_, vector<DescribeSpotDiscountHistoryResponseBodySpotDiscounts>) };
    inline vector<DescribeSpotDiscountHistoryResponseBodySpotDiscounts> spotDiscounts() { DARABONBA_PTR_GET(spotDiscounts_, vector<DescribeSpotDiscountHistoryResponseBodySpotDiscounts>) };
    inline DescribeSpotDiscountHistoryResponseBody& setSpotDiscounts(const vector<DescribeSpotDiscountHistoryResponseBodySpotDiscounts> & spotDiscounts) { DARABONBA_PTR_SET_VALUE(spotDiscounts_, spotDiscounts) };
    inline DescribeSpotDiscountHistoryResponseBody& setSpotDiscounts(vector<DescribeSpotDiscountHistoryResponseBodySpotDiscounts> && spotDiscounts) { DARABONBA_PTR_SET_RVALUE(spotDiscounts_, spotDiscounts) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The discount for the preemptible instance.
    std::shared_ptr<vector<DescribeSpotDiscountHistoryResponseBodySpotDiscounts>> spotDiscounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
