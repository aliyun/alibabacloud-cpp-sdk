// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREFUNDPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREFUNDPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRefundPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRefundPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(RefundType, refundType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRefundPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(RefundType, refundType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    DescribeRefundPriceRequest() = default ;
    DescribeRefundPriceRequest(const DescribeRefundPriceRequest &) = default ;
    DescribeRefundPriceRequest(DescribeRefundPriceRequest &&) = default ;
    DescribeRefundPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRefundPriceRequest() = default ;
    DescribeRefundPriceRequest& operator=(const DescribeRefundPriceRequest &) = default ;
    DescribeRefundPriceRequest& operator=(DescribeRefundPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->refundType_ == nullptr && return this->regionId_ == nullptr && return this->resellerOwnerUid_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & desktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> desktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline DescribeRefundPriceRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline DescribeRefundPriceRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // refundType Field Functions 
    bool hasRefundType() const { return this->refundType_ != nullptr;};
    void deleteRefundType() { this->refundType_ = nullptr;};
    inline string refundType() const { DARABONBA_PTR_GET_DEFAULT(refundType_, "") };
    inline DescribeRefundPriceRequest& setRefundType(string refundType) { DARABONBA_PTR_SET_VALUE(refundType_, refundType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRefundPriceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t resellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline DescribeRefundPriceRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


  protected:
    // ID of cloud computer N. Valid values of N: 1 to 20.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> desktopId_ = nullptr;
    // The unsubscription type.
    // 
    // Valid values:
    // 
    // *   RemainRefund: refunds the remaining balance and releases resources.
    // *   RenewRefund: refunds only the renewal fee and adjusts the expiration date accordingly.
    std::shared_ptr<string> refundType_ = nullptr;
    // The ID of the region. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resellerOwnerUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
