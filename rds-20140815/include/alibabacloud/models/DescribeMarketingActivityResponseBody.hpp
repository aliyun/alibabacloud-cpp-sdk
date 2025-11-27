// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMARKETINGACTIVITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMARKETINGACTIVITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMarketingActivityResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeMarketingActivityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMarketingActivityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMarketingActivityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMarketingActivityResponseBody() = default ;
    DescribeMarketingActivityResponseBody(const DescribeMarketingActivityResponseBody &) = default ;
    DescribeMarketingActivityResponseBody(DescribeMarketingActivityResponseBody &&) = default ;
    DescribeMarketingActivityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMarketingActivityResponseBody() = default ;
    DescribeMarketingActivityResponseBody& operator=(const DescribeMarketingActivityResponseBody &) = default ;
    DescribeMarketingActivityResponseBody& operator=(DescribeMarketingActivityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->bid_ == nullptr && return this->items_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeMarketingActivityResponseBody& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline DescribeMarketingActivityResponseBody& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeMarketingActivityResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeMarketingActivityResponseBodyItems>) };
    inline vector<DescribeMarketingActivityResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeMarketingActivityResponseBodyItems>) };
    inline DescribeMarketingActivityResponseBody& setItems(const vector<DescribeMarketingActivityResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeMarketingActivityResponseBody& setItems(vector<DescribeMarketingActivityResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMarketingActivityResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMarketingActivityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // *   China site: 26842
    // *   International site: 26888
    std::shared_ptr<string> bid_ = nullptr;
    // The activity parameters
    std::shared_ptr<vector<DescribeMarketingActivityResponseBodyItems>> items_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
