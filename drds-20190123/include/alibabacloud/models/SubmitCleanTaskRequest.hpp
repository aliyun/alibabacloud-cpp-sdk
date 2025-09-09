// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCLEANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCLEANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SubmitCleanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCleanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(ExpandType, expandType_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ParentJobId, parentJobId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCleanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(ExpandType, expandType_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ParentJobId, parentJobId_);
    };
    SubmitCleanTaskRequest() = default ;
    SubmitCleanTaskRequest(const SubmitCleanTaskRequest &) = default ;
    SubmitCleanTaskRequest(SubmitCleanTaskRequest &&) = default ;
    SubmitCleanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCleanTaskRequest() = default ;
    SubmitCleanTaskRequest& operator=(const SubmitCleanTaskRequest &) = default ;
    SubmitCleanTaskRequest& operator=(SubmitCleanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->expandType_ != nullptr && this->jobId_ != nullptr && this->parentJobId_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SubmitCleanTaskRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline SubmitCleanTaskRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // expandType Field Functions 
    bool hasExpandType() const { return this->expandType_ != nullptr;};
    void deleteExpandType() { this->expandType_ = nullptr;};
    inline string expandType() const { DARABONBA_PTR_GET_DEFAULT(expandType_, "") };
    inline SubmitCleanTaskRequest& setExpandType(string expandType) { DARABONBA_PTR_SET_VALUE(expandType_, expandType) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitCleanTaskRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // parentJobId Field Functions 
    bool hasParentJobId() const { return this->parentJobId_ != nullptr;};
    void deleteParentJobId() { this->parentJobId_ = nullptr;};
    inline string parentJobId() const { DARABONBA_PTR_GET_DEFAULT(parentJobId_, "") };
    inline SubmitCleanTaskRequest& setParentJobId(string parentJobId) { DARABONBA_PTR_SET_VALUE(parentJobId_, parentJobId) };


  protected:
    // The name of the database that is scaled out.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The scale-out type. Valid values:
    // 
    // *   smooth_expand: smooth scale-out
    // *   hot_expand: hot-spot scale-out
    // 
    // This parameter is required.
    std::shared_ptr<string> expandType_ = nullptr;
    // The job ID of the scale-out task. The value of this parameter is the same as that of the ParentJobId parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    // The ID of the scale-out task. This parameter is returned if you send a request for the smooth scale-out task.
    // 
    // This parameter is required.
    std::shared_ptr<string> parentJobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
