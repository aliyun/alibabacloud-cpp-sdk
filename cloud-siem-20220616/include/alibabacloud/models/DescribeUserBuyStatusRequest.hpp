// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERBUYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERBUYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeUserBuyStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserBuyStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserBuyStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
    };
    DescribeUserBuyStatusRequest() = default ;
    DescribeUserBuyStatusRequest(const DescribeUserBuyStatusRequest &) = default ;
    DescribeUserBuyStatusRequest(DescribeUserBuyStatusRequest &&) = default ;
    DescribeUserBuyStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserBuyStatusRequest() = default ;
    DescribeUserBuyStatusRequest& operator=(const DescribeUserBuyStatusRequest &) = default ;
    DescribeUserBuyStatusRequest& operator=(DescribeUserBuyStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->subUserId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUserBuyStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline DescribeUserBuyStatusRequest& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


  protected:
    // The region of the Data Management center for threat analysis. Select a region for the management center based on where your assets are located. Valid values:
    // 
    // - cn-hangzhou: Your assets are in the Chinese mainland or China (Hong Kong).
    // 
    // - ap-southeast-1: Your assets are in a region outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud account.
    shared_ptr<int64_t> subUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
