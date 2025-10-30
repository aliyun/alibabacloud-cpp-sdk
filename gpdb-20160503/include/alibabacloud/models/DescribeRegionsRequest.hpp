// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeRegionsRequest() = default ;
    DescribeRegionsRequest(const DescribeRegionsRequest &) = default ;
    DescribeRegionsRequest(DescribeRegionsRequest &&) = default ;
    DescribeRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsRequest() = default ;
    DescribeRegionsRequest& operator=(const DescribeRegionsRequest &) = default ;
    DescribeRegionsRequest& operator=(DescribeRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->region_ == nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeRegionsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The ID of the region.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
