// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSFORMSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSFORMSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeTransformStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransformStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(QueryReport, queryReport_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransformStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(QueryReport, queryReport_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeTransformStatusRequest() = default ;
    DescribeTransformStatusRequest(const DescribeTransformStatusRequest &) = default ;
    DescribeTransformStatusRequest(DescribeTransformStatusRequest &&) = default ;
    DescribeTransformStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransformStatusRequest() = default ;
    DescribeTransformStatusRequest& operator=(const DescribeTransformStatusRequest &) = default ;
    DescribeTransformStatusRequest& operator=(DescribeTransformStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->queryReport_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeTransformStatusRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // queryReport Field Functions 
    bool hasQueryReport() const { return this->queryReport_ != nullptr;};
    void deleteQueryReport() { this->queryReport_ = nullptr;};
    inline bool getQueryReport() const { DARABONBA_PTR_GET_DEFAULT(queryReport_, false) };
    inline DescribeTransformStatusRequest& setQueryReport(bool queryReport) { DARABONBA_PTR_SET_VALUE(queryReport_, queryReport) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTransformStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<bool> queryReport_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
