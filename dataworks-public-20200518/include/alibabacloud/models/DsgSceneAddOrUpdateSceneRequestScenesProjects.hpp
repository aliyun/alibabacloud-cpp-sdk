// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGSCENEADDORUPDATESCENEREQUESTSCENESPROJECTS_HPP_
#define ALIBABACLOUD_MODELS_DSGSCENEADDORUPDATESCENEREQUESTSCENESPROJECTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgSceneAddOrUpdateSceneRequestScenesProjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgSceneAddOrUpdateSceneRequestScenesProjects& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(dbType, dbType_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, DsgSceneAddOrUpdateSceneRequestScenesProjects& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(dbType, dbType_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
    };
    DsgSceneAddOrUpdateSceneRequestScenesProjects() = default ;
    DsgSceneAddOrUpdateSceneRequestScenesProjects(const DsgSceneAddOrUpdateSceneRequestScenesProjects &) = default ;
    DsgSceneAddOrUpdateSceneRequestScenesProjects(DsgSceneAddOrUpdateSceneRequestScenesProjects &&) = default ;
    DsgSceneAddOrUpdateSceneRequestScenesProjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgSceneAddOrUpdateSceneRequestScenesProjects() = default ;
    DsgSceneAddOrUpdateSceneRequestScenesProjects& operator=(const DsgSceneAddOrUpdateSceneRequestScenesProjects &) = default ;
    DsgSceneAddOrUpdateSceneRequestScenesProjects& operator=(DsgSceneAddOrUpdateSceneRequestScenesProjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->dbType_ != nullptr && this->projectName_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DsgSceneAddOrUpdateSceneRequestScenesProjects& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DsgSceneAddOrUpdateSceneRequestScenesProjects& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DsgSceneAddOrUpdateSceneRequestScenesProjects& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // If the data masking scenario takes effect for an E-MapReduce (EMR) compute engine, enter the ID of an EMR cluster. This parameter is required only when you use an EMR compute engine.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The type of the compute engine for which the data masking scenario takes effect. Valid values:
    // 
    // *   ODPS: ODPS.ODPS
    // *   HOLO: HOLO.POSTGRES
    // *   EMR: EMR
    std::shared_ptr<string> dbType_ = nullptr;
    // The name of the compute engine instance for which the data masking scenario takes effect.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
