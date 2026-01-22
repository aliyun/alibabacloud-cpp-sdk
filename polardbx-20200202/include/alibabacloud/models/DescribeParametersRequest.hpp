// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ParamLevel, paramLevel_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ParamLevel, paramLevel_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeParametersRequest() = default ;
    DescribeParametersRequest(const DescribeParametersRequest &) = default ;
    DescribeParametersRequest(DescribeParametersRequest &&) = default ;
    DescribeParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParametersRequest() = default ;
    DescribeParametersRequest& operator=(const DescribeParametersRequest &) = default ;
    DescribeParametersRequest& operator=(DescribeParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->paramLevel_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeParametersRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // paramLevel Field Functions 
    bool hasParamLevel() const { return this->paramLevel_ != nullptr;};
    void deleteParamLevel() { this->paramLevel_ = nullptr;};
    inline string getParamLevel() const { DARABONBA_PTR_GET_DEFAULT(paramLevel_, "") };
    inline DescribeParametersRequest& setParamLevel(string paramLevel) { DARABONBA_PTR_SET_VALUE(paramLevel_, paramLevel) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeParametersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> paramLevel_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
