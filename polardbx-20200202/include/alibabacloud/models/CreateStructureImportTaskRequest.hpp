// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTRUCTUREIMPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTRUCTUREIMPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateStructureImportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStructureImportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStructureImportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
    };
    CreateStructureImportTaskRequest() = default ;
    CreateStructureImportTaskRequest(const CreateStructureImportTaskRequest &) = default ;
    CreateStructureImportTaskRequest(CreateStructureImportTaskRequest &&) = default ;
    CreateStructureImportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStructureImportTaskRequest() = default ;
    CreateStructureImportTaskRequest& operator=(const CreateStructureImportTaskRequest &) = default ;
    CreateStructureImportTaskRequest& operator=(CreateStructureImportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->DBInstanceName_ == nullptr && this->regionId_ == nullptr && this->slinkTaskId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateStructureImportTaskRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateStructureImportTaskRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStructureImportTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string getSlinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline CreateStructureImportTaskRequest& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


  protected:
    shared_ptr<string> config_ {};
    shared_ptr<string> DBInstanceName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> slinkTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
