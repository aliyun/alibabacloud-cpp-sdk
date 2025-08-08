// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMultiPriceRequestOrderItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeMultiPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderItems, orderItems_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PackageCode, packageCode_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderItems, orderItems_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PackageCode, packageCode_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    DescribeMultiPriceRequest() = default ;
    DescribeMultiPriceRequest(const DescribeMultiPriceRequest &) = default ;
    DescribeMultiPriceRequest(DescribeMultiPriceRequest &&) = default ;
    DescribeMultiPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiPriceRequest() = default ;
    DescribeMultiPriceRequest& operator=(const DescribeMultiPriceRequest &) = default ;
    DescribeMultiPriceRequest& operator=(DescribeMultiPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderItems_ != nullptr
        && this->orderType_ != nullptr && this->packageCode_ != nullptr && this->resellerOwnerUid_ != nullptr; };
    // orderItems Field Functions 
    bool hasOrderItems() const { return this->orderItems_ != nullptr;};
    void deleteOrderItems() { this->orderItems_ = nullptr;};
    inline const vector<DescribeMultiPriceRequestOrderItems> & orderItems() const { DARABONBA_PTR_GET_CONST(orderItems_, vector<DescribeMultiPriceRequestOrderItems>) };
    inline vector<DescribeMultiPriceRequestOrderItems> orderItems() { DARABONBA_PTR_GET(orderItems_, vector<DescribeMultiPriceRequestOrderItems>) };
    inline DescribeMultiPriceRequest& setOrderItems(const vector<DescribeMultiPriceRequestOrderItems> & orderItems) { DARABONBA_PTR_SET_VALUE(orderItems_, orderItems) };
    inline DescribeMultiPriceRequest& setOrderItems(vector<DescribeMultiPriceRequestOrderItems> && orderItems) { DARABONBA_PTR_SET_RVALUE(orderItems_, orderItems) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeMultiPriceRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // packageCode Field Functions 
    bool hasPackageCode() const { return this->packageCode_ != nullptr;};
    void deletePackageCode() { this->packageCode_ = nullptr;};
    inline string packageCode() const { DARABONBA_PTR_GET_DEFAULT(packageCode_, "") };
    inline DescribeMultiPriceRequest& setPackageCode(string packageCode) { DARABONBA_PTR_SET_VALUE(packageCode_, packageCode) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t resellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline DescribeMultiPriceRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


  protected:
    std::shared_ptr<vector<DescribeMultiPriceRequestOrderItems>> orderItems_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> packageCode_ = nullptr;
    std::shared_ptr<int64_t> resellerOwnerUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
