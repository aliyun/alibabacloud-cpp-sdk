// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGPLATFORMQUERYPROJECTSANDSCHEMAFROMMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGPLATFORMQUERYPROJECTSANDSCHEMAFROMMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgPlatformQueryProjectsAndSchemaFromMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgPlatformQueryProjectsAndSchemaFromMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EngineName, engineName_);
    };
    friend void from_json(const Darabonba::Json& j, DsgPlatformQueryProjectsAndSchemaFromMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
    };
    DsgPlatformQueryProjectsAndSchemaFromMetaRequest() = default ;
    DsgPlatformQueryProjectsAndSchemaFromMetaRequest(const DsgPlatformQueryProjectsAndSchemaFromMetaRequest &) = default ;
    DsgPlatformQueryProjectsAndSchemaFromMetaRequest(DsgPlatformQueryProjectsAndSchemaFromMetaRequest &&) = default ;
    DsgPlatformQueryProjectsAndSchemaFromMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgPlatformQueryProjectsAndSchemaFromMetaRequest() = default ;
    DsgPlatformQueryProjectsAndSchemaFromMetaRequest& operator=(const DsgPlatformQueryProjectsAndSchemaFromMetaRequest &) = default ;
    DsgPlatformQueryProjectsAndSchemaFromMetaRequest& operator=(DsgPlatformQueryProjectsAndSchemaFromMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engineName_ != nullptr; };
    // engineName Field Functions 
    bool hasEngineName() const { return this->engineName_ != nullptr;};
    void deleteEngineName() { this->engineName_ = nullptr;};
    inline string engineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
    inline DsgPlatformQueryProjectsAndSchemaFromMetaRequest& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


  protected:
    // The type of the compute engine. Valid values:
    // 
    // *   ODPS.ODPS
    // *   EMR
    // *   HOLO.POSTGRES
    // 
    // This parameter is required.
    std::shared_ptr<string> engineName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
