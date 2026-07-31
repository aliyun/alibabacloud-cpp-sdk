// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFORMATIONINSTSBYTASKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFORMATIONINSTSBYTASKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class QueryFormationInstsByTaskIDRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFormationInstsByTaskIDRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFormationInstsByTaskIDRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryFormationInstsByTaskIDRequest() = default ;
    QueryFormationInstsByTaskIDRequest(const QueryFormationInstsByTaskIDRequest &) = default ;
    QueryFormationInstsByTaskIDRequest(QueryFormationInstsByTaskIDRequest &&) = default ;
    QueryFormationInstsByTaskIDRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFormationInstsByTaskIDRequest() = default ;
    QueryFormationInstsByTaskIDRequest& operator=(const QueryFormationInstsByTaskIDRequest &) = default ;
    QueryFormationInstsByTaskIDRequest& operator=(QueryFormationInstsByTaskIDRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->regionId_ == nullptr && this->taskId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline QueryFormationInstsByTaskIDRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryFormationInstsByTaskIDRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryFormationInstsByTaskIDRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) to query available region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
