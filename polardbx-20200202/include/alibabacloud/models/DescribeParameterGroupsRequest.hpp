// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeParameterGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeParameterGroupsRequest() = default ;
    DescribeParameterGroupsRequest(const DescribeParameterGroupsRequest &) = default ;
    DescribeParameterGroupsRequest(DescribeParameterGroupsRequest &&) = default ;
    DescribeParameterGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupsRequest() = default ;
    DescribeParameterGroupsRequest& operator=(const DescribeParameterGroupsRequest &) = default ;
    DescribeParameterGroupsRequest& operator=(DescribeParameterGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeParameterGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
