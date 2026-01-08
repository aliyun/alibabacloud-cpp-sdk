// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEREGIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEREGIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAccessInstanceRegionListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessInstanceRegionListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceStatus, accessInstanceStatus_);
      DARABONBA_PTR_TO_JSON(AccessInstanceType, accessInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessInstanceRegionListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceStatus, accessInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(AccessInstanceType, accessInstanceType_);
    };
    DescribeAccessInstanceRegionListRequest() = default ;
    DescribeAccessInstanceRegionListRequest(const DescribeAccessInstanceRegionListRequest &) = default ;
    DescribeAccessInstanceRegionListRequest(DescribeAccessInstanceRegionListRequest &&) = default ;
    DescribeAccessInstanceRegionListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessInstanceRegionListRequest() = default ;
    DescribeAccessInstanceRegionListRequest& operator=(const DescribeAccessInstanceRegionListRequest &) = default ;
    DescribeAccessInstanceRegionListRequest& operator=(DescribeAccessInstanceRegionListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessInstanceStatus_ == nullptr
        && this->accessInstanceType_ == nullptr; };
    // accessInstanceStatus Field Functions 
    bool hasAccessInstanceStatus() const { return this->accessInstanceStatus_ != nullptr;};
    void deleteAccessInstanceStatus() { this->accessInstanceStatus_ = nullptr;};
    inline string getAccessInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceStatus_, "") };
    inline DescribeAccessInstanceRegionListRequest& setAccessInstanceStatus(string accessInstanceStatus) { DARABONBA_PTR_SET_VALUE(accessInstanceStatus_, accessInstanceStatus) };


    // accessInstanceType Field Functions 
    bool hasAccessInstanceType() const { return this->accessInstanceType_ != nullptr;};
    void deleteAccessInstanceType() { this->accessInstanceType_ = nullptr;};
    inline string getAccessInstanceType() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceType_, "") };
    inline DescribeAccessInstanceRegionListRequest& setAccessInstanceType(string accessInstanceType) { DARABONBA_PTR_SET_VALUE(accessInstanceType_, accessInstanceType) };


  protected:
    shared_ptr<string> accessInstanceStatus_ {};
    shared_ptr<string> accessInstanceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
