// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGPLATFORMQUERYPROJECTSANDSCHEMAFROMMETARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DSGPLATFORMQUERYPROJECTSANDSCHEMAFROMMETARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Project, project_);
    };
    friend void from_json(const Darabonba::Json& j, DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
    };
    DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData() = default ;
    DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData(const DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData &) = default ;
    DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData(DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData &&) = default ;
    DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData() = default ;
    DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData& operator=(const DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData &) = default ;
    DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData& operator=(DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->project_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DsgPlatformQueryProjectsAndSchemaFromMetaResponseBodyData& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


  protected:
    // The ID of the EMR cluster. This parameter is generated only when the request parameter EngineName is set to EMR.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the compute engine.
    std::shared_ptr<string> project_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
