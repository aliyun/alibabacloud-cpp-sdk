// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMENDPOINTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMENDPOINTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeCustomEndpointListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEndpointListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckDeleteCN, checkDeleteCN_);
      DARABONBA_PTR_TO_JSON(CustomEndpointIds, customEndpointIds_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEndpointListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckDeleteCN, checkDeleteCN_);
      DARABONBA_PTR_FROM_JSON(CustomEndpointIds, customEndpointIds_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCustomEndpointListRequest() = default ;
    DescribeCustomEndpointListRequest(const DescribeCustomEndpointListRequest &) = default ;
    DescribeCustomEndpointListRequest(DescribeCustomEndpointListRequest &&) = default ;
    DescribeCustomEndpointListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEndpointListRequest() = default ;
    DescribeCustomEndpointListRequest& operator=(const DescribeCustomEndpointListRequest &) = default ;
    DescribeCustomEndpointListRequest& operator=(DescribeCustomEndpointListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkDeleteCN_ == nullptr
        && this->customEndpointIds_ == nullptr && this->DBInstanceName_ == nullptr && this->regionId_ == nullptr; };
    // checkDeleteCN Field Functions 
    bool hasCheckDeleteCN() const { return this->checkDeleteCN_ != nullptr;};
    void deleteCheckDeleteCN() { this->checkDeleteCN_ = nullptr;};
    inline bool getCheckDeleteCN() const { DARABONBA_PTR_GET_DEFAULT(checkDeleteCN_, false) };
    inline DescribeCustomEndpointListRequest& setCheckDeleteCN(bool checkDeleteCN) { DARABONBA_PTR_SET_VALUE(checkDeleteCN_, checkDeleteCN) };


    // customEndpointIds Field Functions 
    bool hasCustomEndpointIds() const { return this->customEndpointIds_ != nullptr;};
    void deleteCustomEndpointIds() { this->customEndpointIds_ = nullptr;};
    inline string getCustomEndpointIds() const { DARABONBA_PTR_GET_DEFAULT(customEndpointIds_, "") };
    inline DescribeCustomEndpointListRequest& setCustomEndpointIds(string customEndpointIds) { DARABONBA_PTR_SET_VALUE(customEndpointIds_, customEndpointIds) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeCustomEndpointListRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCustomEndpointListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<bool> checkDeleteCN_ {};
    shared_ptr<string> customEndpointIds_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
