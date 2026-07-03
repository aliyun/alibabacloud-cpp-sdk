// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeAuthRequest() = default ;
    DescribeAuthRequest(const DescribeAuthRequest &) = default ;
    DescribeAuthRequest(DescribeAuthRequest &&) = default ;
    DescribeAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthRequest() = default ;
    DescribeAuthRequest& operator=(const DescribeAuthRequest &) = default ;
    DescribeAuthRequest& operator=(DescribeAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAuthRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region of the threat analysis center. Select a region based on where your assets are located. Valid values:
    // 
    // - cn-hangzhou: Select this value if your assets are deployed in the Chinese mainland or the China (Hong Kong) region.
    // 
    // - ap-southeast-1: Select this value if your assets are deployed in regions outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
