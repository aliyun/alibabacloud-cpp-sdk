// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHOTEXPANDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHOTEXPANDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitHotExpandTaskRequestExtendedMapping.hpp>
#include <alibabacloud/models/SubmitHotExpandTaskRequestInstanceDbMapping.hpp>
#include <alibabacloud/models/SubmitHotExpandTaskRequestMapping.hpp>
#include <alibabacloud/models/SubmitHotExpandTaskRequestSupperAccountMapping.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SubmitHotExpandTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHotExpandTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(ExtendedMapping, extendedMapping_);
      DARABONBA_PTR_TO_JSON(InstanceDbMapping, instanceDbMapping_);
      DARABONBA_PTR_TO_JSON(Mapping, mapping_);
      DARABONBA_PTR_TO_JSON(SupperAccountMapping, supperAccountMapping_);
      DARABONBA_PTR_TO_JSON(TaskDesc, taskDesc_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHotExpandTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(ExtendedMapping, extendedMapping_);
      DARABONBA_PTR_FROM_JSON(InstanceDbMapping, instanceDbMapping_);
      DARABONBA_PTR_FROM_JSON(Mapping, mapping_);
      DARABONBA_PTR_FROM_JSON(SupperAccountMapping, supperAccountMapping_);
      DARABONBA_PTR_FROM_JSON(TaskDesc, taskDesc_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    SubmitHotExpandTaskRequest() = default ;
    SubmitHotExpandTaskRequest(const SubmitHotExpandTaskRequest &) = default ;
    SubmitHotExpandTaskRequest(SubmitHotExpandTaskRequest &&) = default ;
    SubmitHotExpandTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHotExpandTaskRequest() = default ;
    SubmitHotExpandTaskRequest& operator=(const SubmitHotExpandTaskRequest &) = default ;
    SubmitHotExpandTaskRequest& operator=(SubmitHotExpandTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->extendedMapping_ != nullptr && this->instanceDbMapping_ != nullptr && this->mapping_ != nullptr && this->supperAccountMapping_ != nullptr
        && this->taskDesc_ != nullptr && this->taskName_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SubmitHotExpandTaskRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline SubmitHotExpandTaskRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // extendedMapping Field Functions 
    bool hasExtendedMapping() const { return this->extendedMapping_ != nullptr;};
    void deleteExtendedMapping() { this->extendedMapping_ = nullptr;};
    inline const vector<SubmitHotExpandTaskRequestExtendedMapping> & extendedMapping() const { DARABONBA_PTR_GET_CONST(extendedMapping_, vector<SubmitHotExpandTaskRequestExtendedMapping>) };
    inline vector<SubmitHotExpandTaskRequestExtendedMapping> extendedMapping() { DARABONBA_PTR_GET(extendedMapping_, vector<SubmitHotExpandTaskRequestExtendedMapping>) };
    inline SubmitHotExpandTaskRequest& setExtendedMapping(const vector<SubmitHotExpandTaskRequestExtendedMapping> & extendedMapping) { DARABONBA_PTR_SET_VALUE(extendedMapping_, extendedMapping) };
    inline SubmitHotExpandTaskRequest& setExtendedMapping(vector<SubmitHotExpandTaskRequestExtendedMapping> && extendedMapping) { DARABONBA_PTR_SET_RVALUE(extendedMapping_, extendedMapping) };


    // instanceDbMapping Field Functions 
    bool hasInstanceDbMapping() const { return this->instanceDbMapping_ != nullptr;};
    void deleteInstanceDbMapping() { this->instanceDbMapping_ = nullptr;};
    inline const vector<SubmitHotExpandTaskRequestInstanceDbMapping> & instanceDbMapping() const { DARABONBA_PTR_GET_CONST(instanceDbMapping_, vector<SubmitHotExpandTaskRequestInstanceDbMapping>) };
    inline vector<SubmitHotExpandTaskRequestInstanceDbMapping> instanceDbMapping() { DARABONBA_PTR_GET(instanceDbMapping_, vector<SubmitHotExpandTaskRequestInstanceDbMapping>) };
    inline SubmitHotExpandTaskRequest& setInstanceDbMapping(const vector<SubmitHotExpandTaskRequestInstanceDbMapping> & instanceDbMapping) { DARABONBA_PTR_SET_VALUE(instanceDbMapping_, instanceDbMapping) };
    inline SubmitHotExpandTaskRequest& setInstanceDbMapping(vector<SubmitHotExpandTaskRequestInstanceDbMapping> && instanceDbMapping) { DARABONBA_PTR_SET_RVALUE(instanceDbMapping_, instanceDbMapping) };


    // mapping Field Functions 
    bool hasMapping() const { return this->mapping_ != nullptr;};
    void deleteMapping() { this->mapping_ = nullptr;};
    inline const vector<SubmitHotExpandTaskRequestMapping> & mapping() const { DARABONBA_PTR_GET_CONST(mapping_, vector<SubmitHotExpandTaskRequestMapping>) };
    inline vector<SubmitHotExpandTaskRequestMapping> mapping() { DARABONBA_PTR_GET(mapping_, vector<SubmitHotExpandTaskRequestMapping>) };
    inline SubmitHotExpandTaskRequest& setMapping(const vector<SubmitHotExpandTaskRequestMapping> & mapping) { DARABONBA_PTR_SET_VALUE(mapping_, mapping) };
    inline SubmitHotExpandTaskRequest& setMapping(vector<SubmitHotExpandTaskRequestMapping> && mapping) { DARABONBA_PTR_SET_RVALUE(mapping_, mapping) };


    // supperAccountMapping Field Functions 
    bool hasSupperAccountMapping() const { return this->supperAccountMapping_ != nullptr;};
    void deleteSupperAccountMapping() { this->supperAccountMapping_ = nullptr;};
    inline const vector<SubmitHotExpandTaskRequestSupperAccountMapping> & supperAccountMapping() const { DARABONBA_PTR_GET_CONST(supperAccountMapping_, vector<SubmitHotExpandTaskRequestSupperAccountMapping>) };
    inline vector<SubmitHotExpandTaskRequestSupperAccountMapping> supperAccountMapping() { DARABONBA_PTR_GET(supperAccountMapping_, vector<SubmitHotExpandTaskRequestSupperAccountMapping>) };
    inline SubmitHotExpandTaskRequest& setSupperAccountMapping(const vector<SubmitHotExpandTaskRequestSupperAccountMapping> & supperAccountMapping) { DARABONBA_PTR_SET_VALUE(supperAccountMapping_, supperAccountMapping) };
    inline SubmitHotExpandTaskRequest& setSupperAccountMapping(vector<SubmitHotExpandTaskRequestSupperAccountMapping> && supperAccountMapping) { DARABONBA_PTR_SET_RVALUE(supperAccountMapping_, supperAccountMapping) };


    // taskDesc Field Functions 
    bool hasTaskDesc() const { return this->taskDesc_ != nullptr;};
    void deleteTaskDesc() { this->taskDesc_ = nullptr;};
    inline string taskDesc() const { DARABONBA_PTR_GET_DEFAULT(taskDesc_, "") };
    inline SubmitHotExpandTaskRequest& setTaskDesc(string taskDesc) { DARABONBA_PTR_SET_VALUE(taskDesc_, taskDesc) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline SubmitHotExpandTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The information about the database on which you want to perform hot-spot scale-out.
    // 
    // This parameter is required.
    std::shared_ptr<vector<SubmitHotExpandTaskRequestExtendedMapping>> extendedMapping_ = nullptr;
    // The information about the instance to which the hot-spot database belongs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<SubmitHotExpandTaskRequestInstanceDbMapping>> instanceDbMapping_ = nullptr;
    // The information about the hot-spot database.
    // 
    // This parameter is required.
    std::shared_ptr<vector<SubmitHotExpandTaskRequestMapping>> mapping_ = nullptr;
    // The information about the privileged account.
    std::shared_ptr<vector<SubmitHotExpandTaskRequestSupperAccountMapping>> supperAccountMapping_ = nullptr;
    // The description of the task.
    std::shared_ptr<string> taskDesc_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
