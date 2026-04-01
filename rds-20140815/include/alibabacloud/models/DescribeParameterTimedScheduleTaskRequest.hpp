// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTIMEDSCHEDULETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTIMEDSCHEDULETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParameterTimedScheduleTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterTimedScheduleTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterTimedScheduleTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
    };
    DescribeParameterTimedScheduleTaskRequest() = default ;
    DescribeParameterTimedScheduleTaskRequest(const DescribeParameterTimedScheduleTaskRequest &) = default ;
    DescribeParameterTimedScheduleTaskRequest(DescribeParameterTimedScheduleTaskRequest &&) = default ;
    DescribeParameterTimedScheduleTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterTimedScheduleTaskRequest() = default ;
    DescribeParameterTimedScheduleTaskRequest& operator=(const DescribeParameterTimedScheduleTaskRequest &) = default ;
    DescribeParameterTimedScheduleTaskRequest& operator=(DescribeParameterTimedScheduleTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbInstanceName_ == nullptr; };
    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string getDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline DescribeParameterTimedScheduleTaskRequest& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbInstanceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
