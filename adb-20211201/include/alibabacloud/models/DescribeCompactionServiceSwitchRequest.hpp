// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPACTIONSERVICESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPACTIONSERVICESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeCompactionServiceSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCompactionServiceSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCompactionServiceSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCompactionServiceSwitchRequest() = default ;
    DescribeCompactionServiceSwitchRequest(const DescribeCompactionServiceSwitchRequest &) = default ;
    DescribeCompactionServiceSwitchRequest(DescribeCompactionServiceSwitchRequest &&) = default ;
    DescribeCompactionServiceSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCompactionServiceSwitchRequest() = default ;
    DescribeCompactionServiceSwitchRequest& operator=(const DescribeCompactionServiceSwitchRequest &) = default ;
    DescribeCompactionServiceSwitchRequest& operator=(DescribeCompactionServiceSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->regionId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeCompactionServiceSwitchRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCompactionServiceSwitchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The ID of the region where the instance resides. The value must be the same as the region of the instance specified by DBClusterId.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
